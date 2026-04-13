#include "global.h"
#include "bg.h"
#include "gpu_regs.h"
#include "main.h"
#include "menu.h"
#include "palette.h"
#include "scanline_effect.h"
#include "sprite.h"
#include "task.h"
#include "text.h"
#include "text_window.h"
#include "window.h"
#include "overworld.h"
#include "save.h"
#include "sound.h"
#include "string_util.h"
#include "malloc.h"
#include "constants/rgb.h"
#include "constants/songs.h"

enum
{
    WIN_PROMPT,
    WIN_GENDER,
    WIN_COUNT
};

#define tMenuCursor data[0]

enum
{
    PARADOXIA_GENDER_BOY,
    PARADOXIA_GENDER_GIRL
};

static const struct WindowTemplate sGenderSelectWindowTemplates[] =
{
    [WIN_PROMPT] =
    {
        .bg = 0,
        .tilemapLeft = 0,
        .tilemapTop = 7,
        .width = 30,
        .height = 4,
        .paletteNum = 15,
        .baseBlock = 1,
    },
    [WIN_GENDER] =
    {
        .bg = 0,
        .tilemapLeft = 0,
        .tilemapTop = 12,
        .width = 30,
        .height = 4,
        .paletteNum = 15,
        .baseBlock = 121,
    },
    DUMMY_WIN_TEMPLATE
};

static const struct BgTemplate sGenderSelectBgTemplates[] =
{
    {
        .bg = 0,
        .charBaseIndex = 0,
        .mapBaseIndex = 31,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 0,
        .baseTile = 0
    }
};

static const u16 sGenderSelectPalette[] =
{
    RGB_BLACK,
    RGB_WHITE,
    RGB_BLACK, RGB_BLACK, RGB_BLACK, RGB_BLACK,
    RGB_BLACK, RGB_BLACK, RGB_BLACK, RGB_BLACK,
    RGB_BLACK, RGB_BLACK, RGB_BLACK, RGB_BLACK,
    RGB_BLACK, RGB_BLACK,
};

static void Task_GenderSelectFadeIn(u8 taskId);
static void Task_GenderSelectProcessInput(u8 taskId);
static void Task_GenderSelectFadeOut(u8 taskId);
static void Task_GenderSelectWaitFadeOut(u8 taskId);
static void GenderSelect_DrawPrompt(void);
static void GenderSelect_DrawMenu(u8 selection);
static void GenderSelect_InitBg(void);

void Task_ParadoxiaGenderSelect_Init(u8 taskId)
{
    SetGpuReg(REG_OFFSET_DISPCNT, 0);
    ScanlineEffect_Stop();
    ResetSpriteData();
    FreeAllSpritePalettes();

    GenderSelect_InitBg();
    InitWindows(sGenderSelectWindowTemplates);
    DeactivateAllTextPrinters();

    FillBgTilemapBufferRect_Palette0(0, 0, 0, 0, 30, 20);

    LoadPalette(sGenderSelectPalette, BG_PLTT_ID(0), sizeof(sGenderSelectPalette));
    LoadPalette(sGenderSelectPalette, BG_PLTT_ID(15), sizeof(sGenderSelectPalette));

    FillWindowPixelBuffer(WIN_PROMPT, PIXEL_FILL(0));
    FillWindowPixelBuffer(WIN_GENDER, PIXEL_FILL(0));

    GenderSelect_DrawPrompt();
    GenderSelect_DrawMenu(PARADOXIA_GENDER_BOY);

    CopyBgTilemapBufferToVram(0);
    ShowBg(0);

    BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
    gTasks[taskId].tMenuCursor = PARADOXIA_GENDER_BOY;
    gTasks[taskId].func = Task_GenderSelectFadeIn;
}

static void GenderSelect_InitBg(void)
{
    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sGenderSelectBgTemplates, ARRAY_COUNT(sGenderSelectBgTemplates));
    SetBgTilemapBuffer(0, Alloc(BG_SCREEN_SIZE));
    ScheduleBgCopyTilemapToVram(0);
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_MODE_0 | DISPCNT_OBJ_1D_MAP | DISPCNT_BG0_ON);
    SetGpuReg(REG_OFFSET_BLDCNT, 0);
    SetGpuReg(REG_OFFSET_BLDALPHA, 0);
    SetGpuReg(REG_OFFSET_BLDY, 0);
}

static void GenderSelect_DrawPrompt(void)
{
    static const u8 promptText[] = _("Are you a boy? Or are you a girl?");
    AddTextPrinterParameterized(WIN_PROMPT, FONT_NORMAL, promptText, 18, 8, TEXT_SKIP_DRAW, NULL);
    PutWindowTilemap(WIN_PROMPT);
    CopyWindowToVram(WIN_PROMPT, COPYWIN_FULL);
}

static void GenderSelect_DrawMenu(u8 selection)
{
    static const u8 boyText[]         = _("BOY");
    static const u8 girlText[]        = _("GIRL");
    static const u8 boySelectedText[]  = _("> BOY");
    static const u8 girlSelectedText[] = _("> GIRL");

    FillWindowPixelBuffer(WIN_GENDER, PIXEL_FILL(0));

    if (selection == PARADOXIA_GENDER_BOY)
    {
        AddTextPrinterParameterized(WIN_GENDER, FONT_NORMAL, boySelectedText, 48,  8, TEXT_SKIP_DRAW, NULL);
        AddTextPrinterParameterized(WIN_GENDER, FONT_NORMAL, girlText,        150, 8, TEXT_SKIP_DRAW, NULL);
    }
    else
    {
        AddTextPrinterParameterized(WIN_GENDER, FONT_NORMAL, boyText,          60,  8, TEXT_SKIP_DRAW, NULL);
        AddTextPrinterParameterized(WIN_GENDER, FONT_NORMAL, girlSelectedText, 138, 8, TEXT_SKIP_DRAW, NULL);
    }

    PutWindowTilemap(WIN_GENDER);
    CopyWindowToVram(WIN_GENDER, COPYWIN_FULL);
}

static void Task_GenderSelectFadeIn(u8 taskId)
{
    if (!gPaletteFade.active)
        gTasks[taskId].func = Task_GenderSelectProcessInput;
}

static void Task_GenderSelectProcessInput(u8 taskId)
{
    u8 selection = gTasks[taskId].tMenuCursor;

    if (JOY_NEW(DPAD_LEFT) && selection == PARADOXIA_GENDER_GIRL)
    {
        PlaySE(SE_SELECT);
        gTasks[taskId].tMenuCursor = PARADOXIA_GENDER_BOY;
        GenderSelect_DrawMenu(PARADOXIA_GENDER_BOY);
    }
    else if (JOY_NEW(DPAD_RIGHT) && selection == PARADOXIA_GENDER_BOY)
    {
        PlaySE(SE_SELECT);
        gTasks[taskId].tMenuCursor = PARADOXIA_GENDER_GIRL;
        GenderSelect_DrawMenu(PARADOXIA_GENDER_GIRL);
    }
    else if (JOY_NEW(A_BUTTON))
    {
        PlaySE(SE_SELECT);
        if (gTasks[taskId].tMenuCursor == PARADOXIA_GENDER_BOY)
            gSaveBlock2Ptr->playerGender = MALE;
        else
            gSaveBlock2Ptr->playerGender = FEMALE;

        gTasks[taskId].func = Task_GenderSelectFadeOut;
    }
}

static void Task_GenderSelectFadeOut(u8 taskId)
{
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
    gTasks[taskId].func = Task_GenderSelectWaitFadeOut;
}

static void Task_GenderSelectWaitFadeOut(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        FreeAllWindowBuffers();
        DestroyTask(taskId);
        SetMainCallback2(CB2_NewGame);
    }
}