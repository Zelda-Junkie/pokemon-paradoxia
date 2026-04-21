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
    setvar VAR_ENNA_INTRO_STATE, 24
# 13 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    applymovement LOCALID_DOC_B_LAB, LittlerootTown_ProfessorBirchsLab_Movement_DocBFacePlayer
# 14 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    applymovement LOCALID_DOC_A_LAB, LittlerootTown_ProfessorBirchsLab_Movement_DocAFacePlayer
# 15 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    applymovement LOCALID_BEA_LAB, LittlerootTown_ProfessorBirchsLab_Movement_BeaFaceUp
# 16 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    waitmovement 0
# 17 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    msgbox LittlerootTown_ProfessorBirchsLab_Text_DocBWelcome, MSGBOX_NPC
# 18 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    msgbox LittlerootTown_ProfessorBirchsLab_Text_DocBChoose, MSGBOX_NPC
# 19 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    special ChooseStarter
# 20 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    waitstate
# 21 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    call_if_eq VAR_STARTER_MON, 0, LittlerootTown_ProfessorBirchsLab_EventScript_GiveSprigatito
# 22 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    call_if_eq VAR_STARTER_MON, 1, LittlerootTown_ProfessorBirchsLab_EventScript_GiveFuecoco
# 23 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    call_if_eq VAR_STARTER_MON, 2, LittlerootTown_ProfessorBirchsLab_EventScript_GiveQuaxly
# 24 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    call_if_eq VAR_STARTER_MON, 0, LittlerootTown_ProfessorBirchsLab_EventScript_BeaGetsFuecoco
# 25 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    call_if_eq VAR_STARTER_MON, 1, LittlerootTown_ProfessorBirchsLab_EventScript_BeaGetsQuaxly
# 26 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    call_if_eq VAR_STARTER_MON, 2, LittlerootTown_ProfessorBirchsLab_EventScript_BeaGetsSprigatito
# 27 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    msgbox LittlerootTown_ProfessorBirchsLab_Text_BeaLikesIt, MSGBOX_NPC
# 28 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    msgbox LittlerootTown_ProfessorBirchsLab_Text_DocAGoodLuck, MSGBOX_NPC
# 29 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    msgbox LittlerootTown_ProfessorBirchsLab_Text_BeaChallenge, MSGBOX_NPC
# 30 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    releaseall
# 31 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 32 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 33 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveSprigatito::
# 34 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    givemon SPECIES_SPRIGATITO, 5, ITEM_NONE
# 35 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    return
# 36 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 37 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveFuecoco::
# 38 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    givemon SPECIES_FUECOCO, 5, ITEM_NONE
# 39 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    return
# 40 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 41 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveQuaxly::
# 42 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    givemon SPECIES_QUAXLY, 5, ITEM_NONE
# 43 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    return
# 44 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 45 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BeaGetsFuecoco::
# 46 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    msgbox LittlerootTown_ProfessorBirchsLab_Text_DocBGivesBea, MSGBOX_NPC
# 47 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    return
# 48 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 49 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BeaGetsQuaxly::
# 50 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    msgbox LittlerootTown_ProfessorBirchsLab_Text_DocBGivesBea, MSGBOX_NPC
# 51 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    return
# 52 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 53 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BeaGetsSprigatito::
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
    .string "Doc B: Welcome!$"
# 71 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 72 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_DocBChoose:
# 73 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .string "Doc B: Now then! Choose your\npartner!$"
# 74 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 75 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_DocBGivesBea:
# 76 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .string "Doc B: And for you- Bea!\nPerfect.$"
# 77 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 78 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BeaLikesIt:
# 79 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .string "Bea: Oh. I really like its face.$"
# 80 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 81 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_DocAGoodLuck:
# 82 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .string "Doc A: Good luck.$"
# 83 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 84 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BeaChallenge:
# 85 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    .string "Bea: Yours did really well in\nthere!\pMine seemed very confident\nabout something.\lI'm not sure what.\pI heard there's a good sandwich\nplace up ahead. See you there!$"
# 86 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 87 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Aide::
# 88 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 89 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 90 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Birch::
# 91 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 92 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 93 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Rival::
# 94 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 95 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 96 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Cyndaquil::
# 97 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 98 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 99 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Totodile::
# 100 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 101 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 102 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Chikorita::
# 103 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 104 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 105 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Machine::
# 106 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 107 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 108 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Book::
# 109 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 110 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 111 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Bookshelf::
# 112 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 113 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 114 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_PC::
# 115 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 116 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 117 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ScottAboardSSTidalCall::
# 118 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
# 119 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 120 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
EventScript_RegisterProfBirch::
# 121 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    end
