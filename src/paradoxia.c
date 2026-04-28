#include "global.h"
#include "paradoxia.h"
#include "overworld.h"
#include "naming_screen.h"
#include "script_menu.h"

void Special_ParadoxiaDoNamingScreen(void)
{
    DoNamingScreen(NAMING_SCREEN_PLAYER, gSaveBlock2Ptr->playerName, gSaveBlock2Ptr->playerGender, 0, 0, CB2_ReturnToFieldContinueScriptPlayMapMusic);
}

void ShowPickSprigatito(void)
{
    ScriptMenu_ShowPokemonPic(SPECIES_SPRIGATITO, 5, 2);
}

void ShowPickFuecoco(void)
{
    ScriptMenu_ShowPokemonPic(SPECIES_FUECOCO, 5, 2);
}

void ShowPickQuaxly(void)
{
    ScriptMenu_ShowPokemonPic(SPECIES_QUAXLY, 5, 2);
}

void HidePickPokemon(void)
{
    ScriptMenu_HidePokemonPic();
}