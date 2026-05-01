# 1 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 2 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
#define SP_NAME_DOC_B 3
# 3 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
#define SP_NAME_DOC_A 4
# 4 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
#define SP_NAME_BEA   5
# 5 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 6 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_MapScripts::
# 7 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    map_script MAP_SCRIPT_ON_FRAME_TABLE, BirchsLab_OnFrame
# 8 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .byte 0
# 9 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 10 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
BirchsLab_OnFrame:
# 11 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    map_script_2 VAR_ENNA_INTRO_STATE, 23, LittlerootTown_ProfessorBirchsLab_EventScript_LabScene
# 12 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .2byte 0
# 13 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 14 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_LabScene::
# 15 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    lockall
# 16 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    setvar VAR_ENNA_INTRO_STATE, 26
# 17 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    setvar VAR_STARTER_MON, 0xFF
# 18 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    applymovement LOCALID_DOC_B_LAB, LittlerootTown_ProfessorBirchsLab_Movement_DocBFacePlayer
# 19 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    applymovement LOCALID_DOC_A_LAB, LittlerootTown_ProfessorBirchsLab_Movement_DocAFacePlayer
# 20 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    applymovement LOCALID_BEA_LAB, LittlerootTown_ProfessorBirchsLab_Movement_BeaFaceUp
# 21 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_ProfessorBirchsLab_Movement_FaceDown
# 22 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    waitmovement 0
# 23 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    setspeaker SP_NAME_DOC_B
# 24 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    msgbox LittlerootTown_ProfessorBirchsLab_Text_DocBWelcome, MSGBOX_NPC
# 25 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    setspeaker SP_NAME_DOC_B
# 26 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    msgbox LittlerootTown_ProfessorBirchsLab_Text_DocBChoose, MSGBOX_NPC
# 27 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    releaseall
# 28 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 29 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 30 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveSprigatito::
# 31 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    givemon SPECIES_TATSUGIRI, 5, ITEM_NONE
# 32 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    return
# 33 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 34 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveFuecoco::
# 35 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    givemon SPECIES_DONDOZO, 5, ITEM_NONE
# 36 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    return
# 37 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 38 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveQuaxly::
# 39 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    givemon SPECIES_TATSUGIRI, 5, ITEM_NONE
# 40 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    return
# 41 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 42 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BeaGetsFuecoco::
# 43 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    setspeaker SP_NAME_DOC_B
# 44 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    msgbox LittlerootTown_ProfessorBirchsLab_Text_DocBGivesBea, MSGBOX_NPC
# 45 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    return
# 46 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 47 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BeaGetsQuaxly::
# 48 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    setspeaker SP_NAME_DOC_B
# 49 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    msgbox LittlerootTown_ProfessorBirchsLab_Text_DocBGivesBea, MSGBOX_NPC
# 50 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    return
# 51 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 52 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BeaGetsSprigatito::
# 53 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    setspeaker SP_NAME_DOC_B
# 54 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    msgbox LittlerootTown_ProfessorBirchsLab_Text_DocBGivesBea, MSGBOX_NPC
# 55 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    return
# 56 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 57 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_DocBFacePlayer:
# 58 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    face_down
# 59 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    step_end
# 60 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 61 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_DocAFacePlayer:
# 62 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    face_down
# 63 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    step_end
# 64 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 65 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_BeaFaceUp:
# 66 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    face_up
# 67 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    step_end
# 68 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 69 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_DocBWelcome:
# 70 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .string "Welcome!$"
# 71 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 72 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_DocBChoose:
# 73 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .string "Now then! Choose your\npartner Thomas!$"
# 74 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 75 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_DocBGivesBea:
# 76 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .string "And for you- Bea!\nPerfect.$"
# 77 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 78 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BeaLikesIt:
# 79 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .string "Oh. I really like its face.$"
# 80 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 81 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_DocAGoodLuck:
# 82 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .string "Good luck.$"
# 83 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 84 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BeaChallenge:
# 85 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .string "Yours did really well in\nthere!\pMine seemed very confident\nabout something.\lI'm not sure what.\pI heard there's a good sandwich\nplace up ahead. See you there!$"
# 86 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 87 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_FoundPokemon:
# 88 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .string "You found a Pokémon!$"
# 89 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 90 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_PokeballEmpty:
# 91 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .string "The Poké Ball is empty.$"
# 92 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 93 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_AlreadyHasPokemon:
# 94 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .string "You already have a Pokémon.$"
# 95 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 96 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Aide::
# 97 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    lockall
# 98 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    setspeaker SP_NAME_AIDE_LAB
# 99 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    msgbox LittlerootTown_ProfessorBirchsLab_Text_Aide, MSGBOX_NPC
# 100 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    releaseall
# 101 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 102 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Birch::
# 103 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 104 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 105 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Rival::
# 106 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 107 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 108 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Cyndaquil::
# 109 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 110 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 111 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Totodile::
# 112 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 113 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 114 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Chikorita::
# 115 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 116 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 117 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Machine::
# 118 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 119 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 120 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Book::
# 121 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 122 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 123 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Bookshelf::
# 124 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 125 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 126 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_PokeballSprigatito::
# 127 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    lockall
# 128 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    goto_if_set FLAG_STARTER_1, LittlerootTown_ProfessorBirchsLab_EventScript_PokeballAlreadyTaken
# 129 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    compare VAR_STARTER_MON, 0xFF
# 130 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    goto_if_ne LittlerootTown_ProfessorBirchsLab_EventScript_PokeballAlreadyChosen
# 131 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    special ShowPickSprigatito
# 132 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    setspeaker SP_NAME_AIDE_LAB
# 133 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    msgbox LittlerootTown_ProfessorBirchsLab_Text_WantSprigatito, MSGBOX_YESNO
# 134 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    compare VAR_RESULT, NO
# 135 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_PokeballDeclined
# 136 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    setflag FLAG_STARTER_1
# 137 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    setvar VAR_STARTER_MON, 0
# 138 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    givemon SPECIES_TATSUGIRI, 5, ITEM_NONE
# 139 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    special HidePickPokemon
# 140 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    releaseall
# 141 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 142 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 143 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_PokeballFuecoco::
# 144 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    lockall
# 145 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    goto_if_set FLAG_STARTER_2, LittlerootTown_ProfessorBirchsLab_EventScript_PokeballAlreadyTaken
# 146 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    compare VAR_STARTER_MON, 0xFF
# 147 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    goto_if_ne LittlerootTown_ProfessorBirchsLab_EventScript_PokeballAlreadyChosen
# 148 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    special ShowPickFuecoco
# 149 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    setspeaker SP_NAME_AIDE_LAB
# 150 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    msgbox LittlerootTown_ProfessorBirchsLab_Text_WantFuecoco, MSGBOX_YESNO
# 151 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    compare VAR_RESULT, NO
# 152 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_PokeballDeclined
# 153 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    setflag FLAG_STARTER_2
# 154 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    setvar VAR_STARTER_MON, 1
# 155 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    givemon SPECIES_DONDOZO, 5, ITEM_NONE
# 156 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    special HidePickPokemon
# 157 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    releaseall
# 158 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 159 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 160 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_PokeballQuaxly::
# 161 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    lockall
# 162 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    goto_if_set FLAG_STARTER_3, LittlerootTown_ProfessorBirchsLab_EventScript_PokeballAlreadyTaken
# 163 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    compare VAR_STARTER_MON, 0xFF
# 164 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    goto_if_ne LittlerootTown_ProfessorBirchsLab_EventScript_PokeballAlreadyChosen
# 165 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    special ShowPickQuaxly
# 166 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    setspeaker SP_NAME_AIDE_LAB
# 167 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    msgbox LittlerootTown_ProfessorBirchsLab_Text_WantQuaxly, MSGBOX_YESNO
# 168 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    compare VAR_RESULT, NO
# 169 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_PokeballDeclined
# 170 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    setflag FLAG_STARTER_3
# 171 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    setvar VAR_STARTER_MON, 2
# 172 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    givemon SPECIES_TATSUGIRI, 5, ITEM_NONE
# 173 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    special HidePickPokemon
# 174 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    releaseall
# 175 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 176 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 177 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_PokeballAlreadyTaken::
# 178 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    msgbox LittlerootTown_ProfessorBirchsLab_Text_PokeballEmpty, MSGBOX_DEFAULT
# 179 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    releaseall
# 180 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 181 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 182 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_PokeballAlreadyChosen::
# 183 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    msgbox LittlerootTown_ProfessorBirchsLab_Text_AlreadyHasPokemon, MSGBOX_DEFAULT
# 184 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    releaseall
# 185 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 186 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 187 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_PokeballDeclined::
# 188 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    special HidePickPokemon
# 189 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    msgbox LittlerootTown_ProfessorBirchsLab_Text_PokeballDeclined, MSGBOX_DEFAULT
# 190 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    releaseall
# 191 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 192 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 193 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_PC::
# 194 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    lockall
# 195 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    setspeaker SP_NAME_PC
# 196 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    goto_if_set FLAG_WOBBUFFET_LAB, LittlerootTown_ProfessorBirchsLab_EventScript_WOBBUFFETAlreadyTaken
# 197 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    msgbox LittlerootTown_ProfessorBirchsLab_Text_WOBBUFFETWant, MSGBOX_YESNO
# 198 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    compare VAR_RESULT, NO
# 199 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_WOBBUFFETDeclined
# 200 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    setspeaker SP_NAME_PC
# 201 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    msgbox LittlerootTown_ProfessorBirchsLab_Text_WOBBUFFETSure, MSGBOX_YESNO
# 202 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    compare VAR_RESULT, NO
# 203 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_WOBBUFFETDeclined
# 204 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    setspeaker SP_NAME_PC
# 205 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    msgbox LittlerootTown_ProfessorBirchsLab_Text_WOBBUFFETCrime, MSGBOX_YESNO
# 206 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    compare VAR_RESULT, NO
# 207 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_WOBBUFFETDeclined
# 208 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    setspeaker SP_NAME_PC
# 209 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    msgbox LittlerootTown_ProfessorBirchsLab_Text_WOBBUFFETRocket, MSGBOX_DEFAULT
# 210 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    givemon SPECIES_WOBBUFFET, 5, ITEM_NONE
# 211 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    givemon SPECIES_WOBBUFFET, 5, ITEM_NONE
# 212 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    givemon SPECIES_WOBBUFFET, 5, ITEM_NONE
# 213 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    givemon SPECIES_WOBBUFFET, 5, ITEM_NONE
# 214 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    givemon SPECIES_WOBBUFFET, 5, ITEM_NONE
# 215 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    givemon SPECIES_WOBBUFFET, 5, ITEM_NONE
# 216 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    setspeaker SP_NAME_PC
# 217 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    msgbox LittlerootTown_ProfessorBirchsLab_Text_WOBBUFFETFine, MSGBOX_DEFAULT
# 218 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    setflag FLAG_WOBBUFFET_LAB
# 219 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    releaseall
# 220 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 221 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 222 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_WOBBUFFETAlreadyTaken::
# 223 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    setspeaker SP_NAME_PC
# 224 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    msgbox LittlerootTown_ProfessorBirchsLab_Text_WOBBUFFETAlreadyTaken, MSGBOX_DEFAULT
# 225 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    releaseall
# 226 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 227 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 228 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_WOBBUFFETDeclined::
# 229 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    setspeaker SP_NAME_PC  
# 230 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    msgbox LittlerootTown_ProfessorBirchsLab_Text_WOBBUFFETDeclined, MSGBOX_DEFAULT
# 231 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    releaseall
# 232 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 233 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 234 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Table_Left::
# 235 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    lockall
# 236 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    setspeaker SP_NAME_AIDE_LAB
# 237 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    msgbox LittlerootTown_ProfessorBirchsLab_Text_Table, MSGBOX_DEFAULT
# 238 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_ProfessorBirchsLab_Movement_Right
# 239 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    waitmovement OBJ_EVENT_ID_PLAYER
# 240 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    releaseall
# 241 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 242 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 243 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Table_Right::
# 244 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    lockall
# 245 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    setspeaker SP_NAME_AIDE_LAB
# 246 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    msgbox LittlerootTown_ProfessorBirchsLab_Text_Table, MSGBOX_DEFAULT
# 247 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_ProfessorBirchsLab_Movement_Left
# 248 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    waitmovement OBJ_EVENT_ID_PLAYER
# 249 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    releaseall
# 250 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 251 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 252 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ScottAboardSSTidalCall::
# 253 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 254 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 255 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_WantSprigatito::
# 256 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .string "Would you like Tatsugiri?$"
# 257 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 258 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_WantFuecoco::
# 259 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .string "Would you like Dondozo?$"
# 260 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 261 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_WantQuaxly::
# 262 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .string "Would you like Tatsugiri?$"
# 263 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 264 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_PokeballDeclined::
# 265 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .string "You left the Poke Ball in place.$"
# 266 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 267 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_WOBBUFFETAlreadyTaken::
# 268 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .string "You already took the Wobbuffets,\n you filthy, dirty little brat.$"
# 269 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 270 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_WOBBUFFETWant::
# 271 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .string "There are 6 Wobbuffets in the\n professor's P.C. Will you take them?$"
# 272 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 273 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_WOBBUFFETSure::
# 274 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .string "Are you sure? These aren't yours.$"
# 275 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 276 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_WOBBUFFETCrime::
# 277 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .string "This is considered a federal crime.\n You do understand the consequences,\l right?$"
# 278 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 279 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_WOBBUFFETRocket::
# 280 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .string "Really? You're willing to stoop to that?\nTo commit a crime worthy of Team Rocket?$"
# 281 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 282 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_WOBBUFFETFine::
# 283 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .string "Fine.\pYou received 6 Wobbuffets,\n you evil being.$"
# 284 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 285 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_WOBBUFFETDeclined::
# 286 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .string "You left the Wobbuffets in place.\n You feel your spirits lift!$"
# 287 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 288 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
EventScript_RegisterProfBirch::
# 289 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 290 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_Aide::
# 291 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .string "The doctors can be\n contradicting sometimes\lThat's why the're the pair of docs!$"
# 292 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 293 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
 LittlerootTown_ProfessorBirchsLab_Text_Table::
# 294 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .string "Hey, {PLAYER}! Get off the table!$"
# 295 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 296 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_Right:
# 297 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    walk_right
# 298 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    step_end
# 299 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 300 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_Left:
# 301 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    walk_left
# 302 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    step_end
# 303 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 304 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_FaceDown:
# 305 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    face_down
# 306 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    step_end
