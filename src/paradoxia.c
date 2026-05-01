#include "global.h"
#include "paradoxia.h"
#include "overworld.h"
#include "naming_screen.h"
#include "script_menu.h"
#include "constants/species.h"

void Special_ParadoxiaDoNamingScreen(void)
{
    DoNamingScreen(NAMING_SCREEN_PLAYER, gSaveBlock2Ptr->playerName, gSaveBlock2Ptr->playerGender, 0, 0, CB2_ReturnToFieldContinueScriptPlayMapMusic);
}

void ShowPickSprigatito(void)
{
    ScriptMenu_ShowPokemonPic(SPECIES_TATSUGIRI, 5, 2);
}

void ShowPickFuecoco(void)
{
    ScriptMenu_ShowPokemonPic(SPECIES_DONDOZO, 5, 2);
}

void ShowPickQuaxly(void)
{
    ScriptMenu_ShowPokemonPic(SPECIES_TATSUGIRI, 5, 2);
}

void HidePickPokemon(void)
{
    ScriptMenu_HidePokemonPic();
}

void ShowWobbufet(void)
{
    ScriptMenu_ShowPokemonPic(SPECIES_WOBBUFFET, 5, 2);
}