#include "global.h"
#include "paradoxia.h"
#include "overworld.h"
#include "naming_screen.h"

void Special_ParadoxiaDoNamingScreen(void)
{
    DoNamingScreen(NAMING_SCREEN_PLAYER, gSaveBlock2Ptr->playerName, gSaveBlock2Ptr->playerGender, 0, 0, CB2_ReturnToFieldContinueScriptPlayMapMusic);
}