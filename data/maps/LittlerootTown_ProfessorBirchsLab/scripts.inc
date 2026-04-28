# 1 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 2 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_MapScripts::
# 3 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    map_script MAP_SCRIPT_ON_FRAME_TABLE, BirchsLab_OnFrame
# 4 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .byte 0
# 5 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 6 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
BirchsLab_OnFrame:
# 7 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    map_script_2 VAR_ENNA_INTRO_STATE, 23, LittlerootTown_ProfessorBirchsLab_EventScript_LabScene
# 8 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .2byte 0
# 9 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 10 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_LabScene::
# 11 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    lockall
# 12 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    setvar VAR_ENNA_INTRO_STATE, 26
# 13 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    setvar VAR_STARTER_MON, 0xFF
# 14 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    applymovement LOCALID_DOC_B_LAB, LittlerootTown_ProfessorBirchsLab_Movement_DocBFacePlayer
# 15 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    applymovement LOCALID_DOC_A_LAB, LittlerootTown_ProfessorBirchsLab_Movement_DocAFacePlayer
# 16 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    applymovement LOCALID_BEA_LAB, LittlerootTown_ProfessorBirchsLab_Movement_BeaFaceUp
# 17 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    waitmovement 0
# 18 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    msgbox LittlerootTown_ProfessorBirchsLab_Text_DocBWelcome, MSGBOX_NPC
# 19 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    msgbox LittlerootTown_ProfessorBirchsLab_Text_DocBChoose, MSGBOX_NPC
# 20 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    msgbox LittlerootTown_ProfessorBirchsLab_Text_BeaLikesIt, MSGBOX_NPC
# 21 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    msgbox LittlerootTown_ProfessorBirchsLab_Text_DocAGoodLuck, MSGBOX_NPC
# 22 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    msgbox LittlerootTown_ProfessorBirchsLab_Text_BeaChallenge, MSGBOX_NPC
# 23 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    releaseall
# 24 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 25 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 26 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveSprigatito::
# 27 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    givemon SPECIES_SPRIGATITO, 5, ITEM_NONE
# 28 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    return
# 29 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 30 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveFuecoco::
# 31 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    givemon SPECIES_FUECOCO, 5, ITEM_NONE
# 32 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    return
# 33 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 34 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveQuaxly::
# 35 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    givemon SPECIES_QUAXLY, 5, ITEM_NONE
# 36 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    return
# 37 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 38 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BeaGetsFuecoco::
# 39 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    msgbox LittlerootTown_ProfessorBirchsLab_Text_DocBGivesBea, MSGBOX_NPC
# 40 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    return
# 41 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 42 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BeaGetsQuaxly::
# 43 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    msgbox LittlerootTown_ProfessorBirchsLab_Text_DocBGivesBea, MSGBOX_NPC
# 44 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    return
# 45 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 46 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BeaGetsSprigatito::
# 47 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    msgbox LittlerootTown_ProfessorBirchsLab_Text_DocBGivesBea, MSGBOX_NPC
# 48 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    return
# 49 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 50 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_DocBFacePlayer:
# 51 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    face_down
# 52 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    step_end
# 53 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 54 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_DocAFacePlayer:
# 55 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    face_down
# 56 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    step_end
# 57 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 58 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_BeaFaceUp:
# 59 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    face_up
# 60 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    step_end
# 61 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 62 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_DocBWelcome:
# 63 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .string "Doc B: Welcome!$"
# 64 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 65 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_DocBChoose:
# 66 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .string "Doc B: Now then! Choose your\npartner!$"
# 67 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 68 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_DocBGivesBea:
# 69 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .string "Doc B: And for you- Bea!\nPerfect.$"
# 70 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 71 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BeaLikesIt:
# 72 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .string "Bea: Oh. I really like its face.$"
# 73 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 74 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_DocAGoodLuck:
# 75 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .string "Doc A: Good luck.$"
# 76 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 77 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BeaChallenge:
# 78 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .string "Bea: Yours did really well in\nthere!\pMine seemed very confident\nabout something.\lI'm not sure what.\pI heard there's a good sandwich\nplace up ahead. See you there!$"
# 79 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 80 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_FoundPokemon:
# 81 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .string "You found a Pokémon!$"
# 82 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 83 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_PokeballEmpty:
# 84 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .string "The Poké Ball is empty.$"
# 85 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 86 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_AlreadyHasPokemon:
# 87 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .string "You already have a Pokémon.$"
# 88 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 89 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Aide::
# 90 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .string "Aide: The doctors can be\n contradicting sometimes\l That's why the're a pair of docs$"
# 91 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 92 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Birch::
# 93 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 94 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 95 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Rival::
# 96 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 97 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 98 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Cyndaquil::
# 99 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 100 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 101 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Totodile::
# 102 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 103 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 104 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Chikorita::
# 105 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 106 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 107 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Machine::
# 108 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 109 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 110 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Book::
# 111 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 112 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 113 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Bookshelf::
# 114 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 115 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 116 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_PC::
# 117 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 118 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 119 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ScottAboardSSTidalCall::
# 120 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 121 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 122 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_PokeballSprigatito::
# 123 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 124 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_set FLAG_UNUSED_0x021, LittlerootTown_ProfessorBirchsLab_EventScript_PokeballAlreadyTaken
# 125 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_STARTER_MON, 0xFF
# 126 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ne LittlerootTown_ProfessorBirchsLab_EventScript_PokeballAlreadyChosen
# 127 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    special ShowPickSprigatito
# 128 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_WantSprigatito, MSGBOX_YESNO
# 129 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, NO
# 130 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_PokeballDeclined
# 131 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 132 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 133 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_SPRIGATITO, 5, ITEM_NONE
# 134 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    special HidePickPokemon
# 135 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 136 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 137 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 138 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_PokeballFuecoco::
# 139 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 140 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_set FLAG_UNUSED_0x020, LittlerootTown_ProfessorBirchsLab_EventScript_PokeballAlreadyTaken
# 141 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_STARTER_MON, 0xFF
# 142 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ne LittlerootTown_ProfessorBirchsLab_EventScript_PokeballAlreadyChosen
# 143 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    special ShowPickFuecoco
# 144 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_WantFuecoco, MSGBOX_YESNO
# 145 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, NO
# 146 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_PokeballDeclined
# 147 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 148 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 149 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_FUECOCO, 5, ITEM_NONE
# 150 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    special HidePickPokemon
# 151 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 152 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 153 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 154 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_PokeballQuaxly::
# 155 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 156 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_set FLAG_UNUSED_0x022, LittlerootTown_ProfessorBirchsLab_EventScript_PokeballAlreadyTaken
# 157 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_STARTER_MON, 0xFF
# 158 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ne LittlerootTown_ProfessorBirchsLab_EventScript_PokeballAlreadyChosen
# 159 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    special ShowPickQuaxly
# 160 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_WantQuaxly, MSGBOX_YESNO
# 161 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, NO
# 162 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_PokeballDeclined
# 163 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 164 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 165 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_QUAXLY, 5, ITEM_NONE
# 166 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    special HidePickPokemon
# 167 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 168 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 169 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 170 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_PokeballAlreadyTaken::
# 171 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_PokeballEmpty, MSGBOX_DEFAULT
# 172 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 173 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 174 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 175 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_PokeballAlreadyChosen::
# 176 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_AlreadyHasPokemon, MSGBOX_DEFAULT
# 177 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 178 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 179 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 180 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_PokeballDeclined::
# 181 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    special HidePickPokemon
# 182 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_PokeballDeclined, MSGBOX_DEFAULT
# 183 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 184 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 185 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 186 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_WantSprigatito::
# 187 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .string "Would you like Sprigatito?$"
# 188 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 189 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_WantFuecoco::
# 190 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .string "Would you like Fuecoco?$"
# 191 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 192 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_WantQuaxly::
# 193 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .string "Would you like Quaxly?$"
# 194 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 195 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_PokeballDeclined::
# 196 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .string "You left the Poke Ball in place.$"
# 197 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 198 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
EventScript_RegisterProfBirch::
# 199 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
