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
    waitmovement 0
# 16 "data/maps/SSEnnaDeck/scripts.pory"
    msgbox SSEnnaDeck_Text_BeaName, MSGBOX_NPC
# 17 "data/maps/SSEnnaDeck/scripts.pory"
    special Special_ParadoxiaDoNamingScreen
# 18 "data/maps/SSEnnaDeck/scripts.pory"
    waitstate
# 19 "data/maps/SSEnnaDeck/scripts.pory"
    msgbox SSEnnaDeck_Text_BeaAlola, MSGBOX_NPC
# 20 "data/maps/SSEnnaDeck/scripts.pory"
    msgbox SSEnnaDeck_Text_BeaAlola2, MSGBOX_NPC
# 21 "data/maps/SSEnnaDeck/scripts.pory"
    applymovement LOCALID_ENNA_CAPTAIN, SSEnnaDeck_Movement_CaptainApproach
# 22 "data/maps/SSEnnaDeck/scripts.pory"
    waitmovement 0
# 23 "data/maps/SSEnnaDeck/scripts.pory"
    applymovement LOCALID_ENNA_BEA, SSEnnaDeck_Movement_FaceUp
# 24 "data/maps/SSEnnaDeck/scripts.pory"
    applymovement LOCALID_ENNA_CAPTAIN, SSEnnaDeck_Movement_FaceDown
# 25 "data/maps/SSEnnaDeck/scripts.pory"
    waitmovement 0
# 26 "data/maps/SSEnnaDeck/scripts.pory"
    msgbox SSEnnaDeck_Text_CaptainHm, MSGBOX_NPC
# 27 "data/maps/SSEnnaDeck/scripts.pory"
    msgbox SSEnnaDeck_Text_BeaGoodHm, MSGBOX_NPC
# 28 "data/maps/SSEnnaDeck/scripts.pory"
    msgbox SSEnnaDeck_Text_CaptainIsland, MSGBOX_NPC
# 29 "data/maps/SSEnnaDeck/scripts.pory"
    applymovement LOCALID_ENNA_BEA, SSEnnaDeck_Movement_LookAround
# 30 "data/maps/SSEnnaDeck/scripts.pory"
    msgbox SSEnnaDeck_Text_BeaOurIsland, MSGBOX_NPC
# 31 "data/maps/SSEnnaDeck/scripts.pory"
    msgbox SSEnnaDeck_Text_CaptainNo, MSGBOX_NPC
# 32 "data/maps/SSEnnaDeck/scripts.pory"
    msgbox SSEnnaDeck_Text_BeaWhyCare, MSGBOX_NPC
# 33 "data/maps/SSEnnaDeck/scripts.pory"
    msgbox SSEnnaDeck_Text_CaptainNotSupposed, MSGBOX_NPC
# 34 "data/maps/SSEnnaDeck/scripts.pory"
    fadescreen FADE_TO_BLACK
# 35 "data/maps/SSEnnaDeck/scripts.pory"
    warp MAP_ROUTE109, 17, 36
# 36 "data/maps/SSEnnaDeck/scripts.pory"
    waitstate
# 37 "data/maps/SSEnnaDeck/scripts.pory"
    releaseall
# 38 "data/maps/SSEnnaDeck/scripts.pory"
    end
# 39 "data/maps/SSEnnaDeck/scripts.pory"

# 40 "data/maps/SSEnnaDeck/scripts.pory"
SSEnnaDeck_Movement_FaceLeft:
# 41 "data/maps/SSEnnaDeck/scripts.pory"
    face_left
# 42 "data/maps/SSEnnaDeck/scripts.pory"
    step_end
# 43 "data/maps/SSEnnaDeck/scripts.pory"

# 44 "data/maps/SSEnnaDeck/scripts.pory"
SSEnnaDeck_Movement_FaceRight:
# 45 "data/maps/SSEnnaDeck/scripts.pory"
    face_right
# 46 "data/maps/SSEnnaDeck/scripts.pory"
    step_end
# 47 "data/maps/SSEnnaDeck/scripts.pory"

# 48 "data/maps/SSEnnaDeck/scripts.pory"
SSEnnaDeck_Movement_FaceDown:
# 49 "data/maps/SSEnnaDeck/scripts.pory"
    face_down
# 50 "data/maps/SSEnnaDeck/scripts.pory"
    step_end
# 51 "data/maps/SSEnnaDeck/scripts.pory"

# 52 "data/maps/SSEnnaDeck/scripts.pory"
SSEnnaDeck_Movement_FaceUp:
# 53 "data/maps/SSEnnaDeck/scripts.pory"
    face_up
# 54 "data/maps/SSEnnaDeck/scripts.pory"
    step_end
# 55 "data/maps/SSEnnaDeck/scripts.pory"

# 56 "data/maps/SSEnnaDeck/scripts.pory"
SSEnnaDeck_Movement_BeaFacePlayer:
# 57 "data/maps/SSEnnaDeck/scripts.pory"
    face_player
# 58 "data/maps/SSEnnaDeck/scripts.pory"
    step_end
# 59 "data/maps/SSEnnaDeck/scripts.pory"

# 60 "data/maps/SSEnnaDeck/scripts.pory"
SSEnnaDeck_Movement_LookAround:
# 61 "data/maps/SSEnnaDeck/scripts.pory"
    face_up
# 62 "data/maps/SSEnnaDeck/scripts.pory"
    delay_16
# 63 "data/maps/SSEnnaDeck/scripts.pory"
    face_right
# 64 "data/maps/SSEnnaDeck/scripts.pory"
    delay_8
# 65 "data/maps/SSEnnaDeck/scripts.pory"
    face_up
# 66 "data/maps/SSEnnaDeck/scripts.pory"
    delay_16
# 67 "data/maps/SSEnnaDeck/scripts.pory"
    step_end
# 68 "data/maps/SSEnnaDeck/scripts.pory"

# 69 "data/maps/SSEnnaDeck/scripts.pory"
SSEnnaDeck_Movement_CaptainApproach:
# 70 "data/maps/SSEnnaDeck/scripts.pory"
    walk_down
# 71 "data/maps/SSEnnaDeck/scripts.pory"
    walk_down
# 72 "data/maps/SSEnnaDeck/scripts.pory"
    face_left
# 73 "data/maps/SSEnnaDeck/scripts.pory"
    step_end
# 74 "data/maps/SSEnnaDeck/scripts.pory"

# 75 "data/maps/SSEnnaDeck/scripts.pory"
SSEnnaDeck_Text_BeaName:
# 76 "data/maps/SSEnnaDeck/scripts.pory"
    .string "Bea: I just love the sea breeze!\n It's so peaceful, and a nice change\l from the hustle and bustle of\p Lumiose City!\nThe best place to feel it is Alola!\nThat's why I'm on this boat headed\pthere. What's your name, anyways?$"
# 77 "data/maps/SSEnnaDeck/scripts.pory"

# 78 "data/maps/SSEnnaDeck/scripts.pory"
SSEnnaDeck_Text_BeaAlola:
# 79 "data/maps/SSEnnaDeck/scripts.pory"
    .string "Bea: Nice to meet you, {PLAYER}!\n My name is Bea.\lI'm convinced Alola is the best region.\pThe sandy beaches, gorgeous sunsets,\land the warm climate! I can't wait!$"
# 80 "data/maps/SSEnnaDeck/scripts.pory"

# 81 "data/maps/SSEnnaDeck/scripts.pory"
SSEnnaDeck_Text_BeaAlola2:
# 82 "data/maps/SSEnnaDeck/scripts.pory"
    .string "Bea: How long will it take to get there?$"
# 83 "data/maps/SSEnnaDeck/scripts.pory"

# 84 "data/maps/SSEnnaDeck/scripts.pory"
SSEnnaDeck_Text_CaptainHm:
# 85 "data/maps/SSEnnaDeck/scripts.pory"
    .string "Captain: We should get there in\nabout two days\l...Hm.$"
# 86 "data/maps/SSEnnaDeck/scripts.pory"

# 87 "data/maps/SSEnnaDeck/scripts.pory"
SSEnnaDeck_Text_BeaGoodHm:
# 88 "data/maps/SSEnnaDeck/scripts.pory"
    .string "Bea: Was that a good hm or a bad hm?$"
# 89 "data/maps/SSEnnaDeck/scripts.pory"

# 90 "data/maps/SSEnnaDeck/scripts.pory"
SSEnnaDeck_Text_CaptainIsland:
# 91 "data/maps/SSEnnaDeck/scripts.pory"
    .string "Captain: It's an 'there is an\nisland here' hm.$"
# 92 "data/maps/SSEnnaDeck/scripts.pory"

# 93 "data/maps/SSEnnaDeck/scripts.pory"
SSEnnaDeck_Text_BeaOurIsland:
# 94 "data/maps/SSEnnaDeck/scripts.pory"
    .string "Bea: Is it Melemele island?$"
# 95 "data/maps/SSEnnaDeck/scripts.pory"

# 96 "data/maps/SSEnnaDeck/scripts.pory"
SSEnnaDeck_Text_CaptainNo:
# 97 "data/maps/SSEnnaDeck/scripts.pory"
    .string "Captain: No.$"
# 98 "data/maps/SSEnnaDeck/scripts.pory"

# 99 "data/maps/SSEnnaDeck/scripts.pory"
SSEnnaDeck_Text_BeaWhyCare:
# 100 "data/maps/SSEnnaDeck/scripts.pory"
    .string "Bea: Then why do we care?\nWe passed plenty of islands on the way.$"
# 101 "data/maps/SSEnnaDeck/scripts.pory"

# 102 "data/maps/SSEnnaDeck/scripts.pory"
SSEnnaDeck_Text_CaptainNotSupposed:
# 103 "data/maps/SSEnnaDeck/scripts.pory"
    .string "Captain: There isn't supposed to be\nan island here. Either way, we need to\lcheck it out.\pWe're running low on fuel. We need to\nstock up on supplies.$"
# 104 "data/maps/SSEnnaDeck/scripts.pory"

# 105 "data/maps/SSEnnaDeck/scripts.pory"
SSEnnaDeck_Text_CaptainFuel:
# 106 "data/maps/SSEnnaDeck/scripts.pory"
    .string "Captain: We're running low on fuel.\nWe need to stock up on supplies.$"
