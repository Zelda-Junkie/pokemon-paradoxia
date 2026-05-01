# 1 "data/maps/SSEnnaDeck/scripts.pory"

# 2 "data/maps/SSEnnaDeck/scripts.pory"
SSEnnaDeck_MapScripts::
# 3 "data/maps/SSEnnaDeck/scripts.pory"
    map_script MAP_SCRIPT_ON_FRAME_TABLE, SSEnnaDeck_OnFrame
# 4 "data/maps/SSEnnaDeck/scripts.pory"
    .byte 0
# 5 "data/maps/SSEnnaDeck/scripts.pory"

# 6 "data/maps/SSEnnaDeck/scripts.pory"
SSEnnaDeck_OnFrame:
# 7 "data/maps/SSEnnaDeck/scripts.pory"
    map_script_2 VAR_ENNA_INTRO_STATE, 21, SSEnnaDeck_EventScript_Intro
# 8 "data/maps/SSEnnaDeck/scripts.pory"
    .2byte 0
# 9 "data/maps/SSEnnaDeck/scripts.pory"

# 10 "data/maps/SSEnnaDeck/scripts.pory"
SSEnnaDeck_EventScript_Intro::
# 11 "data/maps/SSEnnaDeck/scripts.pory"
    lockall
# 12 "data/maps/SSEnnaDeck/scripts.pory"
    setvar VAR_ENNA_INTRO_STATE, 22
# 13 "data/maps/SSEnnaDeck/scripts.pory"
    applymovement LOCALID_ENNA_BEA, SSEnnaDeck_Movement_BeaFacePlayer
# 14 "data/maps/SSEnnaDeck/scripts.pory"
    applymovement LOCALID_ENNA_CAPTAIN, SSEnnaDeck_Movement_LookAround
# 15 "data/maps/SSEnnaDeck/scripts.pory"
    applymovement OBJ_EVENT_ID_PLAYER, SSEnnaDeck_Movement_FaceLeft
# 16 "data/maps/SSEnnaDeck/scripts.pory"
    waitmovement 0
# 17 "data/maps/SSEnnaDeck/scripts.pory"
    setspeaker SP_NAME_BEA
# 18 "data/maps/SSEnnaDeck/scripts.pory"
    msgbox SSEnnaDeck_Text_BeaName, MSGBOX_NPC
# 19 "data/maps/SSEnnaDeck/scripts.pory"
    special Special_ParadoxiaDoNamingScreen
# 20 "data/maps/SSEnnaDeck/scripts.pory"
    waitstate
# 21 "data/maps/SSEnnaDeck/scripts.pory"
    setspeaker SP_NAME_BEA
# 22 "data/maps/SSEnnaDeck/scripts.pory"
    msgbox SSEnnaDeck_Text_BeaAlola, MSGBOX_NPC
# 23 "data/maps/SSEnnaDeck/scripts.pory"
    setspeaker SP_NAME_BEA
# 24 "data/maps/SSEnnaDeck/scripts.pory"
    msgbox SSEnnaDeck_Text_BeaAlola2, MSGBOX_NPC
# 25 "data/maps/SSEnnaDeck/scripts.pory"
    applymovement LOCALID_ENNA_CAPTAIN, SSEnnaDeck_Movement_CaptainApproach
# 26 "data/maps/SSEnnaDeck/scripts.pory"
    waitmovement 0
# 27 "data/maps/SSEnnaDeck/scripts.pory"
    applymovement LOCALID_ENNA_BEA, SSEnnaDeck_Movement_FaceUp
# 28 "data/maps/SSEnnaDeck/scripts.pory"
    applymovement LOCALID_ENNA_CAPTAIN, SSEnnaDeck_Movement_FaceDown
# 29 "data/maps/SSEnnaDeck/scripts.pory"
    waitmovement 0
# 30 "data/maps/SSEnnaDeck/scripts.pory"
    setspeaker SP_NAME_CAPTAIN
# 31 "data/maps/SSEnnaDeck/scripts.pory"
    msgbox SSEnnaDeck_Text_CaptainHm, MSGBOX_NPC
# 32 "data/maps/SSEnnaDeck/scripts.pory"
    setspeaker SP_NAME_BEA
# 33 "data/maps/SSEnnaDeck/scripts.pory"
    msgbox SSEnnaDeck_Text_BeaGoodHm, MSGBOX_NPC
# 34 "data/maps/SSEnnaDeck/scripts.pory"
    setspeaker SP_NAME_CAPTAIN
# 35 "data/maps/SSEnnaDeck/scripts.pory"
    msgbox SSEnnaDeck_Text_CaptainIsland, MSGBOX_NPC
# 36 "data/maps/SSEnnaDeck/scripts.pory"
    applymovement LOCALID_ENNA_BEA, SSEnnaDeck_Movement_LookAround
# 37 "data/maps/SSEnnaDeck/scripts.pory"
    setspeaker SP_NAME_BEA
# 38 "data/maps/SSEnnaDeck/scripts.pory"
    msgbox SSEnnaDeck_Text_BeaOurIsland, MSGBOX_NPC
# 39 "data/maps/SSEnnaDeck/scripts.pory"
    setspeaker SP_NAME_CAPTAIN
# 40 "data/maps/SSEnnaDeck/scripts.pory"
    msgbox SSEnnaDeck_Text_CaptainNo, MSGBOX_NPC
# 41 "data/maps/SSEnnaDeck/scripts.pory"
    setspeaker SP_NAME_BEA
# 42 "data/maps/SSEnnaDeck/scripts.pory"
    msgbox SSEnnaDeck_Text_BeaWhyCare, MSGBOX_NPC
# 43 "data/maps/SSEnnaDeck/scripts.pory"
    setspeaker SP_NAME_CAPTAIN
# 44 "data/maps/SSEnnaDeck/scripts.pory"
    msgbox SSEnnaDeck_Text_CaptainNotSupposed, MSGBOX_NPC
# 45 "data/maps/SSEnnaDeck/scripts.pory"
    fadescreen FADE_TO_BLACK
# 46 "data/maps/SSEnnaDeck/scripts.pory"
    warp MAP_ROUTE109, 17, 38
# 47 "data/maps/SSEnnaDeck/scripts.pory"
    waitstate
# 48 "data/maps/SSEnnaDeck/scripts.pory"
    releaseall
# 49 "data/maps/SSEnnaDeck/scripts.pory"
    end
# 50 "data/maps/SSEnnaDeck/scripts.pory"

# 51 "data/maps/SSEnnaDeck/scripts.pory"
SSEnnaDeck_Movement_FaceLeft:
# 52 "data/maps/SSEnnaDeck/scripts.pory"
    face_left
# 53 "data/maps/SSEnnaDeck/scripts.pory"
    step_end
# 54 "data/maps/SSEnnaDeck/scripts.pory"

# 55 "data/maps/SSEnnaDeck/scripts.pory"
SSEnnaDeck_Movement_FaceRight:
# 56 "data/maps/SSEnnaDeck/scripts.pory"
    face_right
# 57 "data/maps/SSEnnaDeck/scripts.pory"
    step_end
# 58 "data/maps/SSEnnaDeck/scripts.pory"

# 59 "data/maps/SSEnnaDeck/scripts.pory"
SSEnnaDeck_Movement_FaceDown:
# 60 "data/maps/SSEnnaDeck/scripts.pory"
    face_down
# 61 "data/maps/SSEnnaDeck/scripts.pory"
    step_end
# 62 "data/maps/SSEnnaDeck/scripts.pory"

# 63 "data/maps/SSEnnaDeck/scripts.pory"
SSEnnaDeck_Movement_FaceUp:
# 64 "data/maps/SSEnnaDeck/scripts.pory"
    face_up
# 65 "data/maps/SSEnnaDeck/scripts.pory"
    step_end
# 66 "data/maps/SSEnnaDeck/scripts.pory"

# 67 "data/maps/SSEnnaDeck/scripts.pory"
SSEnnaDeck_Movement_BeaFacePlayer:
# 68 "data/maps/SSEnnaDeck/scripts.pory"
    face_player
# 69 "data/maps/SSEnnaDeck/scripts.pory"
    step_end
# 70 "data/maps/SSEnnaDeck/scripts.pory"

# 71 "data/maps/SSEnnaDeck/scripts.pory"
SSEnnaDeck_Movement_LookAround:
# 72 "data/maps/SSEnnaDeck/scripts.pory"
    face_up
# 73 "data/maps/SSEnnaDeck/scripts.pory"
    delay_16
# 74 "data/maps/SSEnnaDeck/scripts.pory"
    face_right
# 75 "data/maps/SSEnnaDeck/scripts.pory"
    delay_8
# 76 "data/maps/SSEnnaDeck/scripts.pory"
    face_up
# 77 "data/maps/SSEnnaDeck/scripts.pory"
    delay_16
# 78 "data/maps/SSEnnaDeck/scripts.pory"
    step_end
# 79 "data/maps/SSEnnaDeck/scripts.pory"

# 80 "data/maps/SSEnnaDeck/scripts.pory"
SSEnnaDeck_Movement_CaptainApproach:
# 81 "data/maps/SSEnnaDeck/scripts.pory"
    walk_down
# 82 "data/maps/SSEnnaDeck/scripts.pory"
    walk_down
# 83 "data/maps/SSEnnaDeck/scripts.pory"
    face_left
# 84 "data/maps/SSEnnaDeck/scripts.pory"
    step_end
# 85 "data/maps/SSEnnaDeck/scripts.pory"

# 86 "data/maps/SSEnnaDeck/scripts.pory"
SSEnnaDeck_Text_BeaName:
# 87 "data/maps/SSEnnaDeck/scripts.pory"
    .string "I just love the sea breeze!\n It's so peaceful, and a nice change\l from the hustle and bustle of\p Lumiose City!\nThe best place to feel it is Alola!\nThat's why I'm on this boat headed\pthere. What's your name, anyways?$"
# 88 "data/maps/SSEnnaDeck/scripts.pory"

# 89 "data/maps/SSEnnaDeck/scripts.pory"
SSEnnaDeck_Text_BeaAlola:
# 90 "data/maps/SSEnnaDeck/scripts.pory"
    .string "Nice to meet you, {PLAYER}!\n My name is Bea.\lI'm convinced Alola is the best region.\pThe sandy beaches, gorgeous sunsets,\land the warm climate! I can't wait!$"
# 91 "data/maps/SSEnnaDeck/scripts.pory"

# 92 "data/maps/SSEnnaDeck/scripts.pory"
SSEnnaDeck_Text_BeaAlola2:
# 93 "data/maps/SSEnnaDeck/scripts.pory"
    .string "How long will it take to get there?$"
# 94 "data/maps/SSEnnaDeck/scripts.pory"

# 95 "data/maps/SSEnnaDeck/scripts.pory"
SSEnnaDeck_Text_CaptainHm:
# 96 "data/maps/SSEnnaDeck/scripts.pory"
    .string "We should get there in\nabout two days\l...Hm.$"
# 97 "data/maps/SSEnnaDeck/scripts.pory"

# 98 "data/maps/SSEnnaDeck/scripts.pory"
SSEnnaDeck_Text_BeaGoodHm:
# 99 "data/maps/SSEnnaDeck/scripts.pory"
    .string "Was that a good hm or a bad hm?$"
# 100 "data/maps/SSEnnaDeck/scripts.pory"

# 101 "data/maps/SSEnnaDeck/scripts.pory"
SSEnnaDeck_Text_CaptainIsland:
# 102 "data/maps/SSEnnaDeck/scripts.pory"
    .string "It's an 'there is an\nisland here' hm.$"
# 103 "data/maps/SSEnnaDeck/scripts.pory"

# 104 "data/maps/SSEnnaDeck/scripts.pory"
SSEnnaDeck_Text_BeaOurIsland:
# 105 "data/maps/SSEnnaDeck/scripts.pory"
    .string "Is it Melemele island?$"
# 106 "data/maps/SSEnnaDeck/scripts.pory"

# 107 "data/maps/SSEnnaDeck/scripts.pory"
SSEnnaDeck_Text_CaptainNo:
# 108 "data/maps/SSEnnaDeck/scripts.pory"
    .string "No.$"
# 109 "data/maps/SSEnnaDeck/scripts.pory"

# 110 "data/maps/SSEnnaDeck/scripts.pory"
SSEnnaDeck_Text_BeaWhyCare:
# 111 "data/maps/SSEnnaDeck/scripts.pory"
    .string "Then why do we care?\nWe passed plenty of islands on the way.$"
# 112 "data/maps/SSEnnaDeck/scripts.pory"

# 113 "data/maps/SSEnnaDeck/scripts.pory"
SSEnnaDeck_Text_CaptainNotSupposed:
# 114 "data/maps/SSEnnaDeck/scripts.pory"
    .string "There isn't supposed to be\nan island here. Either way, we need to\lcheck it out.\pWe're running low on fuel. We need to\nstock up on supplies.$"
# 115 "data/maps/SSEnnaDeck/scripts.pory"

# 116 "data/maps/SSEnnaDeck/scripts.pory"
SSEnnaDeck_Text_CaptainFuel:
# 117 "data/maps/SSEnnaDeck/scripts.pory"
    .string "Captain: We're running low on fuel.\nWe need to stock up on supplies.$"
