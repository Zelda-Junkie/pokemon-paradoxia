#define LOCALID_DOC_B 23
#define LOCALID_DOC_A 24
#define LOCALID_BEA 25
#define LOCALID_CAPTAIN_DOCK 26
# 1 "data/maps/Route109/scripts.pory"

# 2 "data/maps/Route109/scripts.pory"
Route109_MapScripts::
# 3 "data/maps/Route109/scripts.pory"
    map_script MAP_SCRIPT_ON_FRAME_TABLE, Route109_OnFrame
# 4 "data/maps/Route109/scripts.pory"
    .byte 0
# 5 "data/maps/Route109/scripts.pory"

# 6 "data/maps/Route109/scripts.pory"
Route109_OnFrame:
# 7 "data/maps/Route109/scripts.pory"
    map_script_2 VAR_ENNA_INTRO_STATE, 22, Route109_EventScript_DockScene
# 8 "data/maps/Route109/scripts.pory"
    .2byte 0
# 9 "data/maps/Route109/scripts.pory"

# 10 "data/maps/Route109/scripts.pory"
Route109_EventScript_DockScene::
# 11 "data/maps/Route109/scripts.pory"
    lockall
# 12 "data/maps/Route109/scripts.pory"
    setvar VAR_ENNA_INTRO_STATE, 23
# 13 "data/maps/Route109/scripts.pory"
    clearflag FLAG_HIDE_DOCK_DOC_B
# 14 "data/maps/Route109/scripts.pory"
    clearflag FLAG_HIDE_DOCK_DOC_A
# 15 "data/maps/Route109/scripts.pory"
    clearflag FLAG_HIDE_DOCK_BEA
# 16 "data/maps/Route109/scripts.pory"
    applymovement LOCALID_DOC_B, Route109_Movement_FaceLeft
# 17 "data/maps/Route109/scripts.pory"
    applymovement LOCALID_DOC_A, Route109_Movement_FaceLeft
# 18 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_BEA, Route109_Movement_FaceRight
# 19 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_FaceRight
# 20 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_CAPTAIN_DOCK, Route109_Movement_FaceRight
# 21 "data/maps/Route109/scripts.pory"
    waitmovement 0
# 22 "data/maps/Route109/scripts.pory"
    msgbox Route109_Text_DocBTheretheyare, MSGBOX_NPC
# 23 "data/maps/Route109/scripts.pory"
    msgbox Route109_Text_DocATheboat, MSGBOX_NPC
# 24 "data/maps/Route109/scripts.pory"
    msgbox Route109_Text_DocBAndyet, MSGBOX_NPC
# 25 "data/maps/Route109/scripts.pory"
    msgbox Route109_Text_DocAWrongname, MSGBOX_NPC
# 26 "data/maps/Route109/scripts.pory"
    msgbox Route109_Text_DocBConfident, MSGBOX_NPC
# 27 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_CAPTAIN_DOCK, Route109_Movement_FaceDown
# 28 "data/maps/Route109/scripts.pory"
    msgbox Route109_Text_CaptainWhere, MSGBOX_NPC
# 29 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_CAPTAIN_DOCK, Route109_Movement_FaceRight
# 30 "data/maps/Route109/scripts.pory"
    msgbox Route109_Text_DocBParadoxia, MSGBOX_NPC
# 31 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_CAPTAIN_DOCK, Route109_Movement_FaceDown
# 32 "data/maps/Route109/scripts.pory"
    msgbox Route109_Text_CaptainCharts, MSGBOX_NPC
# 33 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_CAPTAIN_DOCK, Route109_Movement_FaceRight
# 34 "data/maps/Route109/scripts.pory"
    msgbox Route109_Text_DocBNo, MSGBOX_NPC
# 35 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_CAPTAIN_DOCK, Route109_Movement_FaceDown
# 36 "data/maps/Route109/scripts.pory"
    msgbox Route109_Text_CaptainAnycharts, MSGBOX_NPC
# 37 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_CAPTAIN_DOCK, Route109_Movement_FaceRight
# 38 "data/maps/Route109/scripts.pory"
    msgbox Route109_Text_DocBProbablynot, MSGBOX_NPC
# 39 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_CAPTAIN_DOCK, Route109_Movement_FaceDown
# 40 "data/maps/Route109/scripts.pory"
    msgbox Route109_Text_CaptainMinute, MSGBOX_NPC
# 41 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_DocALab, MSGBOX_NPC
# 42 "data/maps/Route109/scripts.pory"
	fadescreen FADE_TO_BLACK
# 43 "data/maps/Route109/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 8
# 44 "data/maps/Route109/scripts.pory"
	waitstate
# 45 "data/maps/Route109/scripts.pory"
    releaseall
# 46 "data/maps/Route109/scripts.pory"
    end
# 47 "data/maps/Route109/scripts.pory"

# 48 "data/maps/Route109/scripts.pory"
Route109_Movement_FaceLeft:
# 49 "data/maps/Route109/scripts.pory"
    face_left
# 50 "data/maps/Route109/scripts.pory"
    step_end
# 51 "data/maps/Route109/scripts.pory"

# 52 "data/maps/Route109/scripts.pory"
Route109_Movement_FaceRight:
# 53 "data/maps/Route109/scripts.pory"
    face_right
# 54 "data/maps/Route109/scripts.pory"
    step_end
# 55 "data/maps/Route109/scripts.pory"

# 56 "data/maps/Route109/scripts.pory"
Route109_Movement_FaceDown:
# 57 "data/maps/Route109/scripts.pory"
    face_down
# 58 "data/maps/Route109/scripts.pory"
    step_end
# 59 "data/maps/Route109/scripts.pory"

# 60 "data/maps/Route109/scripts.pory"
Route109_Text_DocBTheretheyare:
# 61 "data/maps/Route109/scripts.pory"
    .string "Doc B: There they are! Right on time!$"
# 62 "data/maps/Route109/scripts.pory"

# 63 "data/maps/Route109/scripts.pory"
Route109_Text_DocATheboat:
# 64 "data/maps/Route109/scripts.pory"
    .string "Doc A: The boat was going to Alola.$"
# 65 "data/maps/Route109/scripts.pory"

# 66 "data/maps/Route109/scripts.pory"
Route109_Text_DocBAndyet:
# 67 "data/maps/Route109/scripts.pory"
    .string "Doc B: And yet!$"
# 68 "data/maps/Route109/scripts.pory"

# 69 "data/maps/Route109/scripts.pory"
Route109_Text_DocASorry:
# 70 "data/maps/Route109/scripts.pory"
    .string "Doc A: I'm so sorry about... this.\nAnd the sign.$"
# 71 "data/maps/Route109/scripts.pory"

# 72 "data/maps/Route109/scripts.pory"
Route109_Text_DocBSigncorrect:
# 73 "data/maps/Route109/scripts.pory"
    .string "Doc B: The sign is correct.$"
# 74 "data/maps/Route109/scripts.pory"

# 75 "data/maps/Route109/scripts.pory"
Route109_Text_DocAWrongname:
# 76 "data/maps/Route109/scripts.pory"
    .string "Doc A: You said your name was {PLAYER}?$"
# 77 "data/maps/Route109/scripts.pory"

# 78 "data/maps/Route109/scripts.pory"
Route109_Text_DocBConfident:
# 79 "data/maps/Route109/scripts.pory"
    .string "Doc B: I'm confident they said Alex.$"
# 80 "data/maps/Route109/scripts.pory"

# 81 "data/maps/Route109/scripts.pory"
Route109_Text_CaptainWhere:
# 82 "data/maps/Route109/scripts.pory"
    .string "Captain: Excuse me, I hate to interrupt.\nWhere is this?$"
# 83 "data/maps/Route109/scripts.pory"

# 84 "data/maps/Route109/scripts.pory"
Route109_Text_DocBParadoxia:
# 85 "data/maps/Route109/scripts.pory"
    .string "Doc B: Paradoxia!$"
# 86 "data/maps/Route109/scripts.pory"

# 87 "data/maps/Route109/scripts.pory"
Route109_Text_CaptainCharts:
# 88 "data/maps/Route109/scripts.pory"
    .string "Captain: That's not on my charts.$"
# 89 "data/maps/Route109/scripts.pory"

# 90 "data/maps/Route109/scripts.pory"
Route109_Text_DocBNo:
# 91 "data/maps/Route109/scripts.pory"
    .string "Doc B: No.$"
# 92 "data/maps/Route109/scripts.pory"

# 93 "data/maps/Route109/scripts.pory"
Route109_Text_CaptainAnycharts:
# 94 "data/maps/Route109/scripts.pory"
    .string "Captain: ...Is it on any charts?$"
# 95 "data/maps/Route109/scripts.pory"

# 96 "data/maps/Route109/scripts.pory"
Route109_Text_DocBProbablynot:
# 97 "data/maps/Route109/scripts.pory"
    .string "Doc B: Probably not!$"
# 98 "data/maps/Route109/scripts.pory"

# 99 "data/maps/Route109/scripts.pory"
Route109_Text_CaptainMinute:
# 100 "data/maps/Route109/scripts.pory"
    .string "Captain: I'm going to need a minute.$"
# 101 "data/maps/Route109/scripts.pory"

# 102 "data/maps/Route109/scripts.pory"
Route109_Text_DocALab:
# 103 "data/maps/Route109/scripts.pory"
    .string "Doc A: Everybody! Come to the lab so I\ncan show you something interesting!$"
# 104 "data/maps/Route109/scripts.pory"

# 105 "data/maps/Route109/scripts.pory"
Route109_EventScript_TrainerTipsSign::
# 106 "data/maps/Route109/scripts.pory"
    end
# 107 "data/maps/Route109/scripts.pory"

# 108 "data/maps/Route109/scripts.pory"
Route109_EventScript_MrBriney::
# 109 "data/maps/Route109/scripts.pory"
    end
# 110 "data/maps/Route109/scripts.pory"

# 111 "data/maps/Route109/scripts.pory"
Route109_EventScript_David::
# 112 "data/maps/Route109/scripts.pory"
    end
# 113 "data/maps/Route109/scripts.pory"

# 114 "data/maps/Route109/scripts.pory"
Route109_EventScript_Alice::
# 115 "data/maps/Route109/scripts.pory"
    end
# 116 "data/maps/Route109/scripts.pory"

# 117 "data/maps/Route109/scripts.pory"
Route109_EventScript_Huey::
# 118 "data/maps/Route109/scripts.pory"
    end
# 119 "data/maps/Route109/scripts.pory"

# 120 "data/maps/Route109/scripts.pory"
Route109_EventScript_Edmond::
# 121 "data/maps/Route109/scripts.pory"
    end
# 122 "data/maps/Route109/scripts.pory"

# 123 "data/maps/Route109/scripts.pory"
Route109_EventScript_Ricky::
# 124 "data/maps/Route109/scripts.pory"
    end
# 125 "data/maps/Route109/scripts.pory"

# 126 "data/maps/Route109/scripts.pory"
Route109_EventScript_Lola::
# 127 "data/maps/Route109/scripts.pory"
    end
# 128 "data/maps/Route109/scripts.pory"

# 129 "data/maps/Route109/scripts.pory"
Route109_EventScript_SeashoreHouseGirl::
# 130 "data/maps/Route109/scripts.pory"
    end
# 131 "data/maps/Route109/scripts.pory"

# 132 "data/maps/Route109/scripts.pory"
Route109_EventScript_Gwen::
# 133 "data/maps/Route109/scripts.pory"
    end
# 134 "data/maps/Route109/scripts.pory"

# 135 "data/maps/Route109/scripts.pory"
Route109_EventScript_Austina::
# 136 "data/maps/Route109/scripts.pory"
    end
# 137 "data/maps/Route109/scripts.pory"

# 138 "data/maps/Route109/scripts.pory"
Route109_EventScript_Carter::
# 139 "data/maps/Route109/scripts.pory"
    end
# 140 "data/maps/Route109/scripts.pory"

# 141 "data/maps/Route109/scripts.pory"
Route109_EventScript_SandCastleBoy::
# 142 "data/maps/Route109/scripts.pory"
    end
# 143 "data/maps/Route109/scripts.pory"

# 144 "data/maps/Route109/scripts.pory"
Route109_EventScript_SoftSandGirl::
# 145 "data/maps/Route109/scripts.pory"
    end
# 146 "data/maps/Route109/scripts.pory"

# 147 "data/maps/Route109/scripts.pory"
Route109_EventScript_Woman::
# 148 "data/maps/Route109/scripts.pory"
    end
# 149 "data/maps/Route109/scripts.pory"

# 150 "data/maps/Route109/scripts.pory"
Route109_EventScript_Mel::
# 151 "data/maps/Route109/scripts.pory"
    end
# 152 "data/maps/Route109/scripts.pory"

# 153 "data/maps/Route109/scripts.pory"
Route109_EventScript_Paul::
# 154 "data/maps/Route109/scripts.pory"
    end
# 155 "data/maps/Route109/scripts.pory"

# 156 "data/maps/Route109/scripts.pory"
Route109_EventScript_OldMan::
# 157 "data/maps/Route109/scripts.pory"
    end
# 158 "data/maps/Route109/scripts.pory"

# 159 "data/maps/Route109/scripts.pory"
Route109_EventScript_Zigzagoon::
# 160 "data/maps/Route109/scripts.pory"
    end
# 161 "data/maps/Route109/scripts.pory"

# 162 "data/maps/Route109/scripts.pory"
Route109_EventScript_Hailey::
# 163 "data/maps/Route109/scripts.pory"
    end
# 164 "data/maps/Route109/scripts.pory"

# 165 "data/maps/Route109/scripts.pory"
Route109_EventScript_Chandler::
# 166 "data/maps/Route109/scripts.pory"
    end
# 167 "data/maps/Route109/scripts.pory"

# 168 "data/maps/Route109/scripts.pory"
Route109_EventScript_Elijah::
# 169 "data/maps/Route109/scripts.pory"
    end
# 170 "data/maps/Route109/scripts.pory"

# 171 "data/maps/Route109/scripts.pory"
Route109_EventScript_SeashoreHouseSign::
# 172 "data/maps/Route109/scripts.pory"
    end
# 173 "data/maps/Route109/scripts.pory"

# 174 "data/maps/Route109/scripts.pory"
DewfordTown_Text_BrineyLandedInSlateportDeliverGoods:
# 175 "data/maps/Route109/scripts.pory"
    .string ".$"
# 176 "data/maps/Route109/scripts.pory"

# 177 "data/maps/Route109/scripts.pory"
DewfordTown_Text_BrineyLandedInSlateport:
# 178 "data/maps/Route109/scripts.pory"
    .string ".$"
