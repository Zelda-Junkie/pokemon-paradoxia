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
	applymovement LOCALID_BEA_DOCK, Route109_Movement_FaceRight
# 19 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_FaceRight
# 20 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_CAPTAIN_DOCK, Route109_Movement_FaceRight
# 21 "data/maps/Route109/scripts.pory"
    waitmovement 0
# 22 "data/maps/Route109/scripts.pory"
    setspeaker SP_NAME_DOC_B
# 23 "data/maps/Route109/scripts.pory"
    msgbox Route109_Text_DocBTheretheyare, MSGBOX_NPC
# 24 "data/maps/Route109/scripts.pory"
    setspeaker SP_NAME_DOC_A
# 25 "data/maps/Route109/scripts.pory"
    msgbox Route109_Text_DocATheboat, MSGBOX_NPC
# 26 "data/maps/Route109/scripts.pory"
    setspeaker SP_NAME_DOC_B
# 27 "data/maps/Route109/scripts.pory"
    msgbox Route109_Text_DocBAndyet, MSGBOX_NPC
# 28 "data/maps/Route109/scripts.pory"
    setspeaker SP_NAME_DOC_A
# 29 "data/maps/Route109/scripts.pory"
    msgbox Route109_Text_DocAWrongname, MSGBOX_NPC
# 30 "data/maps/Route109/scripts.pory"
    setspeaker SP_NAME_DOC_B
# 31 "data/maps/Route109/scripts.pory"
    msgbox Route109_Text_DocBConfident, MSGBOX_NPC
# 32 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_CAPTAIN_DOCK, Route109_Movement_FaceDown
# 33 "data/maps/Route109/scripts.pory"
    setspeaker SP_NAME_CAPTAIN
# 34 "data/maps/Route109/scripts.pory"
    msgbox Route109_Text_CaptainWhere, MSGBOX_NPC
# 35 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_CAPTAIN_DOCK, Route109_Movement_FaceRight
# 36 "data/maps/Route109/scripts.pory"
    setspeaker SP_NAME_DOC_B
# 37 "data/maps/Route109/scripts.pory"
    msgbox Route109_Text_DocBParadoxia, MSGBOX_NPC
# 38 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_CAPTAIN_DOCK, Route109_Movement_FaceDown
# 39 "data/maps/Route109/scripts.pory"
    setspeaker SP_NAME_CAPTAIN
# 40 "data/maps/Route109/scripts.pory"
    msgbox Route109_Text_CaptainCharts, MSGBOX_NPC
# 41 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_CAPTAIN_DOCK, Route109_Movement_FaceRight
# 42 "data/maps/Route109/scripts.pory"
    setspeaker SP_NAME_DOC_B
# 43 "data/maps/Route109/scripts.pory"
    msgbox Route109_Text_DocBNo, MSGBOX_NPC
# 44 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_CAPTAIN_DOCK, Route109_Movement_FaceDown
# 45 "data/maps/Route109/scripts.pory"
    setspeaker SP_NAME_CAPTAIN
# 46 "data/maps/Route109/scripts.pory"
    msgbox Route109_Text_CaptainAnycharts, MSGBOX_NPC
# 47 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_CAPTAIN_DOCK, Route109_Movement_FaceRight
# 48 "data/maps/Route109/scripts.pory"
    setspeaker SP_NAME_DOC_B
# 49 "data/maps/Route109/scripts.pory"
    msgbox Route109_Text_DocBProbablynot, MSGBOX_NPC
# 50 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_CAPTAIN_DOCK, Route109_Movement_FaceDown
# 51 "data/maps/Route109/scripts.pory"
    setspeaker SP_NAME_CAPTAIN
# 52 "data/maps/Route109/scripts.pory"
    msgbox Route109_Text_CaptainMinute, MSGBOX_NPC
# 53 "data/maps/Route109/scripts.pory"
    setspeaker SP_NAME_DOC_A
# 54 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_DocALab, MSGBOX_NPC
# 55 "data/maps/Route109/scripts.pory"
	fadescreen FADE_TO_BLACK
# 56 "data/maps/Route109/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 8
# 57 "data/maps/Route109/scripts.pory"
	waitstate
# 58 "data/maps/Route109/scripts.pory"
    releaseall
# 59 "data/maps/Route109/scripts.pory"
    end
# 60 "data/maps/Route109/scripts.pory"

# 61 "data/maps/Route109/scripts.pory"
Route109_Movement_FaceLeft:
# 62 "data/maps/Route109/scripts.pory"
    face_left
# 63 "data/maps/Route109/scripts.pory"
    step_end
# 64 "data/maps/Route109/scripts.pory"

# 65 "data/maps/Route109/scripts.pory"
Route109_Movement_FaceRight:
# 66 "data/maps/Route109/scripts.pory"
    face_right
# 67 "data/maps/Route109/scripts.pory"
    step_end
# 68 "data/maps/Route109/scripts.pory"

# 69 "data/maps/Route109/scripts.pory"
Route109_Movement_FaceDown:
# 70 "data/maps/Route109/scripts.pory"
    face_down
# 71 "data/maps/Route109/scripts.pory"
    step_end
# 72 "data/maps/Route109/scripts.pory"

# 73 "data/maps/Route109/scripts.pory"
Route109_Text_DocBTheretheyare:
# 74 "data/maps/Route109/scripts.pory"
    .string "There they are! Right on time!$"
# 75 "data/maps/Route109/scripts.pory"

# 76 "data/maps/Route109/scripts.pory"
Route109_Text_DocATheboat:
# 77 "data/maps/Route109/scripts.pory"
    .string "The boat was going to Alola.$"
# 78 "data/maps/Route109/scripts.pory"

# 79 "data/maps/Route109/scripts.pory"
Route109_Text_DocBAndyet:
# 80 "data/maps/Route109/scripts.pory"
    .string "And yet!$"
# 81 "data/maps/Route109/scripts.pory"

# 82 "data/maps/Route109/scripts.pory"
Route109_Text_DocASorry:
# 83 "data/maps/Route109/scripts.pory"
    .string "I'm so sorry about... this.\nAnd the sign.$"
# 84 "data/maps/Route109/scripts.pory"

# 85 "data/maps/Route109/scripts.pory"
Route109_Text_DocBSigncorrect:
# 86 "data/maps/Route109/scripts.pory"
    .string "The sign is correct.$"
# 87 "data/maps/Route109/scripts.pory"

# 88 "data/maps/Route109/scripts.pory"
Route109_Text_DocAWrongname:
# 89 "data/maps/Route109/scripts.pory"
    .string "You said your name was {PLAYER}?$"
# 90 "data/maps/Route109/scripts.pory"

# 91 "data/maps/Route109/scripts.pory"
Route109_Text_DocBConfident:
# 92 "data/maps/Route109/scripts.pory"
    .string "I'm confident they said Alex.$"
# 93 "data/maps/Route109/scripts.pory"

# 94 "data/maps/Route109/scripts.pory"
Route109_Text_CaptainWhere:
# 95 "data/maps/Route109/scripts.pory"
    .string "Excuse me, I hate to interrupt.\nWhere is this?$"
# 96 "data/maps/Route109/scripts.pory"

# 97 "data/maps/Route109/scripts.pory"
Route109_Text_DocBParadoxia:
# 98 "data/maps/Route109/scripts.pory"
    .string "Paradoxia!$"
# 99 "data/maps/Route109/scripts.pory"

# 100 "data/maps/Route109/scripts.pory"
Route109_Text_CaptainCharts:
# 101 "data/maps/Route109/scripts.pory"
    .string "That's not on my charts.$"
# 102 "data/maps/Route109/scripts.pory"

# 103 "data/maps/Route109/scripts.pory"
Route109_Text_DocBNo:
# 104 "data/maps/Route109/scripts.pory"
    .string "No.$"
# 105 "data/maps/Route109/scripts.pory"

# 106 "data/maps/Route109/scripts.pory"
Route109_Text_CaptainAnycharts:
# 107 "data/maps/Route109/scripts.pory"
    .string "...Is it on any charts?$"
# 108 "data/maps/Route109/scripts.pory"

# 109 "data/maps/Route109/scripts.pory"
Route109_Text_DocBProbablynot:
# 110 "data/maps/Route109/scripts.pory"
    .string "Probably not!$"
# 111 "data/maps/Route109/scripts.pory"

# 112 "data/maps/Route109/scripts.pory"
Route109_Text_CaptainMinute:
# 113 "data/maps/Route109/scripts.pory"
    .string "I'm going to need a minute.$"
# 114 "data/maps/Route109/scripts.pory"

# 115 "data/maps/Route109/scripts.pory"
Route109_Text_DocALab:
# 116 "data/maps/Route109/scripts.pory"
    .string "Everybody! Come to the lab so I\ncan show you something interesting!$"
# 117 "data/maps/Route109/scripts.pory"

# 118 "data/maps/Route109/scripts.pory"
Route109_EventScript_TrainerTipsSign::
# 119 "data/maps/Route109/scripts.pory"
    end
# 120 "data/maps/Route109/scripts.pory"

# 121 "data/maps/Route109/scripts.pory"
Route109_EventScript_MrBriney::
# 122 "data/maps/Route109/scripts.pory"
    end
# 123 "data/maps/Route109/scripts.pory"

# 124 "data/maps/Route109/scripts.pory"
Route109_EventScript_David::
# 125 "data/maps/Route109/scripts.pory"
    end
# 126 "data/maps/Route109/scripts.pory"

# 127 "data/maps/Route109/scripts.pory"
Route109_EventScript_Alice::
# 128 "data/maps/Route109/scripts.pory"
    end
# 129 "data/maps/Route109/scripts.pory"

# 130 "data/maps/Route109/scripts.pory"
Route109_EventScript_Huey::
# 131 "data/maps/Route109/scripts.pory"
    end
# 132 "data/maps/Route109/scripts.pory"

# 133 "data/maps/Route109/scripts.pory"
Route109_EventScript_Edmond::
# 134 "data/maps/Route109/scripts.pory"
    end
# 135 "data/maps/Route109/scripts.pory"

# 136 "data/maps/Route109/scripts.pory"
Route109_EventScript_Ricky::
# 137 "data/maps/Route109/scripts.pory"
    end
# 138 "data/maps/Route109/scripts.pory"

# 139 "data/maps/Route109/scripts.pory"
Route109_EventScript_Lola::
# 140 "data/maps/Route109/scripts.pory"
    end
# 141 "data/maps/Route109/scripts.pory"

# 142 "data/maps/Route109/scripts.pory"
Route109_EventScript_SeashoreHouseGirl::
# 143 "data/maps/Route109/scripts.pory"
    end
# 144 "data/maps/Route109/scripts.pory"

# 145 "data/maps/Route109/scripts.pory"
Route109_EventScript_Gwen::
# 146 "data/maps/Route109/scripts.pory"
    end
# 147 "data/maps/Route109/scripts.pory"

# 148 "data/maps/Route109/scripts.pory"
Route109_EventScript_Austina::
# 149 "data/maps/Route109/scripts.pory"
    end
# 150 "data/maps/Route109/scripts.pory"

# 151 "data/maps/Route109/scripts.pory"
Route109_EventScript_Carter::
# 152 "data/maps/Route109/scripts.pory"
    end
# 153 "data/maps/Route109/scripts.pory"

# 154 "data/maps/Route109/scripts.pory"
Route109_EventScript_SandCastleBoy::
# 155 "data/maps/Route109/scripts.pory"
    end
# 156 "data/maps/Route109/scripts.pory"

# 157 "data/maps/Route109/scripts.pory"
Route109_EventScript_SoftSandGirl::
# 158 "data/maps/Route109/scripts.pory"
    end
# 159 "data/maps/Route109/scripts.pory"

# 160 "data/maps/Route109/scripts.pory"
Route109_EventScript_Woman::
# 161 "data/maps/Route109/scripts.pory"
    end
# 162 "data/maps/Route109/scripts.pory"

# 163 "data/maps/Route109/scripts.pory"
Route109_EventScript_Mel::
# 164 "data/maps/Route109/scripts.pory"
    end
# 165 "data/maps/Route109/scripts.pory"

# 166 "data/maps/Route109/scripts.pory"
Route109_EventScript_Paul::
# 167 "data/maps/Route109/scripts.pory"
    end
# 168 "data/maps/Route109/scripts.pory"

# 169 "data/maps/Route109/scripts.pory"
Route109_EventScript_OldMan::
# 170 "data/maps/Route109/scripts.pory"
    end
# 171 "data/maps/Route109/scripts.pory"

# 172 "data/maps/Route109/scripts.pory"
Route109_EventScript_Zigzagoon::
# 173 "data/maps/Route109/scripts.pory"
    end
# 174 "data/maps/Route109/scripts.pory"

# 175 "data/maps/Route109/scripts.pory"
Route109_EventScript_Hailey::
# 176 "data/maps/Route109/scripts.pory"
    end
# 177 "data/maps/Route109/scripts.pory"

# 178 "data/maps/Route109/scripts.pory"
Route109_EventScript_Chandler::
# 179 "data/maps/Route109/scripts.pory"
    end
# 180 "data/maps/Route109/scripts.pory"

# 181 "data/maps/Route109/scripts.pory"
Route109_EventScript_Elijah::
# 182 "data/maps/Route109/scripts.pory"
    end
# 183 "data/maps/Route109/scripts.pory"

# 184 "data/maps/Route109/scripts.pory"
Route109_EventScript_SeashoreHouseSign::
# 185 "data/maps/Route109/scripts.pory"
    end
# 186 "data/maps/Route109/scripts.pory"

# 187 "data/maps/Route109/scripts.pory"
DewfordTown_Text_BrineyLandedInSlateportDeliverGoods:
# 188 "data/maps/Route109/scripts.pory"
    .string ".$"
# 189 "data/maps/Route109/scripts.pory"

# 190 "data/maps/Route109/scripts.pory"
DewfordTown_Text_BrineyLandedInSlateport:
# 191 "data/maps/Route109/scripts.pory"
    .string ".$"
