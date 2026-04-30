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
    waitmovement 0
# 22 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    setspeaker SP_NAME_DOC_B
# 23 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    msgbox LittlerootTown_ProfessorBirchsLab_Text_DocBWelcome, MSGBOX_NPC
# 24 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    msgbox LittlerootTown_ProfessorBirchsLab_Text_DocBChoose, MSGBOX_NPC
# 25 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    setspeaker SP_NAME_BEA
# 26 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    msgbox LittlerootTown_ProfessorBirchsLab_Text_BeaLikesIt, MSGBOX_NPC
# 27 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    setspeaker SP_NAME_DOC_A
# 28 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    msgbox LittlerootTown_ProfessorBirchsLab_Text_DocAGoodLuck, MSGBOX_NPC
# 29 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    setspeaker SP_NAME_BEA
# 30 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    msgbox LittlerootTown_ProfessorBirchsLab_Text_BeaChallenge, MSGBOX_NPC
# 31 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    releaseall
# 32 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 33 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 34 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveSprigatito::
# 35 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    givemon SPECIES_SPRIGATITO, 5, ITEM_NONE
# 36 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    return
# 37 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 38 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveFuecoco::
# 39 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    givemon SPECIES_FUECOCO, 5, ITEM_NONE
# 40 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    return
# 41 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 42 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveQuaxly::
# 43 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    givemon SPECIES_QUAXLY, 5, ITEM_NONE
# 44 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    return
# 45 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 46 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BeaGetsFuecoco::
# 47 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    msgbox LittlerootTown_ProfessorBirchsLab_Text_DocBGivesBea, MSGBOX_NPC
# 48 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    return
# 49 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 50 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BeaGetsQuaxly::
# 51 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    msgbox LittlerootTown_ProfessorBirchsLab_Text_DocBGivesBea, MSGBOX_NPC
# 52 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    return
# 53 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 54 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BeaGetsSprigatito::
# 55 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    msgbox LittlerootTown_ProfessorBirchsLab_Text_DocBGivesBea, MSGBOX_NPC
# 56 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    return
# 57 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 58 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_DocBFacePlayer:
# 59 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    face_down
# 60 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    step_end
# 61 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 62 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_DocAFacePlayer:
# 63 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    face_down
# 64 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    step_end
# 65 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 66 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_BeaFaceUp:
# 67 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    face_up
# 68 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    step_end
# 69 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 70 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_DocBWelcome:
# 71 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .string "Welcome!$"
# 72 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 73 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_DocBChoose:
# 74 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .string "Now then! Choose your\npartner!$"
# 75 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 76 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_DocBGivesBea:
# 77 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .string "And for you- Bea!\nPerfect.$"
# 78 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 79 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BeaLikesIt:
# 80 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .string "Oh. I really like its face.$"
# 81 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 82 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_DocAGoodLuck:
# 83 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .string "Good luck.$"
# 84 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 85 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BeaChallenge:
# 86 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .string "Yours did really well in\nthere!\pMine seemed very confident\nabout something.\lI'm not sure what.\pI heard there's a good sandwich\nplace up ahead. See you there!$"
# 87 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 88 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_FoundPokemon:
# 89 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .string "You found a Pokémon!$"
# 90 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 91 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_PokeballEmpty:
# 92 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .string "The Poké Ball is empty.$"
# 93 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 94 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_AlreadyHasPokemon:
# 95 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .string "You already have a Pokémon.$"
# 96 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 97 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Aide::
# 98 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .string "The doctors can be\n contradicting sometimes\l That's why the're a pair of docs$"
# 99 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 100 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Birch::
# 101 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 102 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 103 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Rival::
# 104 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 105 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 106 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Cyndaquil::
# 107 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 108 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 109 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Totodile::
# 110 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 111 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 112 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Chikorita::
# 113 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 114 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 115 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Machine::
# 116 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 117 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 118 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Book::
# 119 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 120 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 121 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Bookshelf::
# 122 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 123 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 124 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_PokeballSprigatito::
# 125 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    lockall
# 126 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    goto_if_set FLAG_STARTER_1, LittlerootTown_ProfessorBirchsLab_EventScript_PokeballAlreadyTaken
# 127 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    compare VAR_STARTER_MON, 0xFF
# 128 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    goto_if_ne LittlerootTown_ProfessorBirchsLab_EventScript_PokeballAlreadyChosen
# 129 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    special ShowPickSprigatito
# 130 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    msgbox LittlerootTown_ProfessorBirchsLab_Text_WantSprigatito, MSGBOX_YESNO
# 131 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    compare VAR_RESULT, NO
# 132 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_PokeballDeclined
# 133 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    setflag FLAG_STARTER_1
# 134 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    setvar VAR_STARTER_MON, 0
# 135 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    givemon SPECIES_SPRIGATITO, 5, ITEM_NONE
# 136 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    special HidePickPokemon
# 137 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    releaseall
# 138 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 139 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 140 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_PokeballFuecoco::
# 141 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    lockall
# 142 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    goto_if_set FLAG_STARTER_2, LittlerootTown_ProfessorBirchsLab_EventScript_PokeballAlreadyTaken
# 143 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    compare VAR_STARTER_MON, 0xFF
# 144 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    goto_if_ne LittlerootTown_ProfessorBirchsLab_EventScript_PokeballAlreadyChosen
# 145 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    special ShowPickFuecoco
# 146 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    msgbox LittlerootTown_ProfessorBirchsLab_Text_WantFuecoco, MSGBOX_YESNO
# 147 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    compare VAR_RESULT, NO
# 148 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_PokeballDeclined
# 149 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    setflag FLAG_STARTER_2
# 150 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    setvar VAR_STARTER_MON, 1
# 151 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    givemon SPECIES_FUECOCO, 5, ITEM_NONE
# 152 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    special HidePickPokemon
# 153 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    releaseall
# 154 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 155 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 156 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_PokeballQuaxly::
# 157 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    lockall
# 158 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    goto_if_set FLAG_STARTER_3, LittlerootTown_ProfessorBirchsLab_EventScript_PokeballAlreadyTaken
# 159 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    compare VAR_STARTER_MON, 0xFF
# 160 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    goto_if_ne LittlerootTown_ProfessorBirchsLab_EventScript_PokeballAlreadyChosen
# 161 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    special ShowPickQuaxly
# 162 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    msgbox LittlerootTown_ProfessorBirchsLab_Text_WantQuaxly, MSGBOX_YESNO
# 163 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    compare VAR_RESULT, NO
# 164 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_PokeballDeclined
# 165 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    setflag FLAG_STARTER_3
# 166 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    setvar VAR_STARTER_MON, 2
# 167 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    givemon SPECIES_QUAXLY, 5, ITEM_NONE
# 168 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    special HidePickPokemon
# 169 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    releaseall
# 170 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 171 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 172 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_PokeballAlreadyTaken::
# 173 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    msgbox LittlerootTown_ProfessorBirchsLab_Text_PokeballEmpty, MSGBOX_DEFAULT
# 174 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    releaseall
# 175 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 176 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 177 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_PokeballAlreadyChosen::
# 178 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    msgbox LittlerootTown_ProfessorBirchsLab_Text_AlreadyHasPokemon, MSGBOX_DEFAULT
# 179 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    releaseall
# 180 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 181 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 182 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_PokeballDeclined::
# 183 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    special HidePickPokemon
# 184 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    msgbox LittlerootTown_ProfessorBirchsLab_Text_PokeballDeclined, MSGBOX_DEFAULT
# 185 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    releaseall
# 186 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 187 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 188 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_PC::
# 189 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    lockall
# 190 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    setspeaker SP_NAME_PC
# 191 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    goto_if_set FLAG_WOBBUFFET_LAB, LittlerootTown_ProfessorBirchsLab_EventScript_WOBBUFFETAlreadyTaken
# 192 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    msgbox LittlerootTown_ProfessorBirchsLab_Text_WOBBUFFETWant, MSGBOX_YESNO
# 193 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    compare VAR_RESULT, NO
# 194 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_WOBBUFFETDeclined
# 195 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    msgbox LittlerootTown_ProfessorBirchsLab_Text_WOBBUFFETSure, MSGBOX_YESNO
# 196 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    compare VAR_RESULT, NO
# 197 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_WOBBUFFETDeclined
# 198 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    msgbox LittlerootTown_ProfessorBirchsLab_Text_WOBBUFFETCrime, MSGBOX_YESNO
# 199 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    compare VAR_RESULT, NO
# 200 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_WOBBUFFETDeclined
# 201 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    msgbox LittlerootTown_ProfessorBirchsLab_Text_WOBBUFFETRocket, MSGBOX_DEFAULT
# 202 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    givemon SPECIES_WOBBUFFET, 5, ITEM_NONE
# 203 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    givemon SPECIES_WOBBUFFET, 5, ITEM_NONE
# 204 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    givemon SPECIES_WOBBUFFET, 5, ITEM_NONE
# 205 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    givemon SPECIES_WOBBUFFET, 5, ITEM_NONE
# 206 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    givemon SPECIES_WOBBUFFET, 5, ITEM_NONE
# 207 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    givemon SPECIES_WOBBUFFET, 5, ITEM_NONE
# 208 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    msgbox LittlerootTown_ProfessorBirchsLab_Text_WOBBUFFETFine, MSGBOX_DEFAULT
# 209 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    setflag FLAG_WOBBUFFET_LAB
# 210 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    releaseall
# 211 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 212 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 213 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_WOBBUFFETAlreadyTaken::
# 214 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    setspeaker SP_NAME_PC
# 215 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    msgbox LittlerootTown_ProfessorBirchsLab_Text_WOBBUFFETAlreadyTaken, MSGBOX_DEFAULT
# 216 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    releaseall
# 217 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 218 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 219 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_WOBBUFFETDeclined::
# 220 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    setspeaker SP_NAME_PC  
# 221 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    msgbox LittlerootTown_ProfessorBirchsLab_Text_WOBBUFFETDeclined, MSGBOX_DEFAULT
# 222 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    releaseall
# 223 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 224 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 225 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ScottAboardSSTidalCall::
# 226 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 227 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 228 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_WantSprigatito::
# 229 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .string "Would you like Sprigatito?$"
# 230 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 231 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_WantFuecoco::
# 232 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .string "Would you like Fuecoco?$"
# 233 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 234 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_WantQuaxly::
# 235 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .string "Would you like Quaxly?$"
# 236 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 237 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_PokeballDeclined::
# 238 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .string "You left the Poke Ball in place.$"
# 239 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 240 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_WOBBUFFETAlreadyTaken::
# 241 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .string "You already took the Wobbuffets,\n you filthy, dirty little brat.$"
# 242 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 243 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_WOBBUFFETWant::
# 244 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .string "There are 6 Wobbuffets in the\n professor's P.C. Will you take them?$"
# 245 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 246 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_WOBBUFFETSure::
# 247 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .string "Are you sure? These aren't yours.$"
# 248 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 249 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_WOBBUFFETCrime::
# 250 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .string "This is considered a federal crime.\n You do understand the consequences,\l right?$"
# 251 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 252 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_WOBBUFFETRocket::
# 253 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .string "Really? You're willing to stoop to that?\nTo commit a crime worthy of Team Rocket?$"
# 254 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 255 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_WOBBUFFETFine::
# 256 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .string "Fine.\pYou received 6 Wobbuffets,\n you evil being.$"
# 257 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 258 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_WOBBUFFETDeclined::
# 259 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .string "You left the Wobbuffets in place.\n You feel your spirits lift!$"
# 260 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 261 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
EventScript_RegisterProfBirch::
# 262 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
