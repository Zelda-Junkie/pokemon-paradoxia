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
    msgbox SSEnnaDeck_Text_CaptainFuel, MSGBOX_NPC
# 35 "data/maps/SSEnnaDeck/scripts.pory"
    fadescreen FADE_TO_BLACK
# 36 "data/maps/SSEnnaDeck/scripts.pory"
    warp MAP_ROUTE109, 17, 36
# 37 "data/maps/SSEnnaDeck/scripts.pory"
    waitstate
# 38 "data/maps/SSEnnaDeck/scripts.pory"
    releaseall
# 39 "data/maps/SSEnnaDeck/scripts.pory"
    end
# 40 "data/maps/SSEnnaDeck/scripts.pory"

# 41 "data/maps/SSEnnaDeck/scripts.pory"
SSEnnaDeck_Movement_FaceLeft:
# 42 "data/maps/SSEnnaDeck/scripts.pory"
    face_left
# 43 "data/maps/SSEnnaDeck/scripts.pory"
    step_end
# 44 "data/maps/SSEnnaDeck/scripts.pory"

# 45 "data/maps/SSEnnaDeck/scripts.pory"
SSEnnaDeck_Movement_FaceRight:
# 46 "data/maps/SSEnnaDeck/scripts.pory"
    face_right
# 47 "data/maps/SSEnnaDeck/scripts.pory"
    step_end
# 48 "data/maps/SSEnnaDeck/scripts.pory"

# 49 "data/maps/SSEnnaDeck/scripts.pory"
SSEnnaDeck_Movement_FaceDown:
# 50 "data/maps/SSEnnaDeck/scripts.pory"
    face_down
# 51 "data/maps/SSEnnaDeck/scripts.pory"
    step_end
# 52 "data/maps/SSEnnaDeck/scripts.pory"

# 53 "data/maps/SSEnnaDeck/scripts.pory"
SSEnnaDeck_Movement_FaceUp:
# 54 "data/maps/SSEnnaDeck/scripts.pory"
    face_up
# 55 "data/maps/SSEnnaDeck/scripts.pory"
    step_end
# 56 "data/maps/SSEnnaDeck/scripts.pory"

# 57 "data/maps/SSEnnaDeck/scripts.pory"
SSEnnaDeck_Movement_BeaFacePlayer:
# 58 "data/maps/SSEnnaDeck/scripts.pory"
    face_player
# 59 "data/maps/SSEnnaDeck/scripts.pory"
    step_end
# 60 "data/maps/SSEnnaDeck/scripts.pory"

# 61 "data/maps/SSEnnaDeck/scripts.pory"
SSEnnaDeck_Movement_LookAround:
# 62 "data/maps/SSEnnaDeck/scripts.pory"
    face_up
# 63 "data/maps/SSEnnaDeck/scripts.pory"
    delay_16
# 64 "data/maps/SSEnnaDeck/scripts.pory"
    face_right
# 65 "data/maps/SSEnnaDeck/scripts.pory"
    delay_8
# 66 "data/maps/SSEnnaDeck/scripts.pory"
    face_up
# 67 "data/maps/SSEnnaDeck/scripts.pory"
    delay_16
# 68 "data/maps/SSEnnaDeck/scripts.pory"
    step_end
# 69 "data/maps/SSEnnaDeck/scripts.pory"

# 70 "data/maps/SSEnnaDeck/scripts.pory"
SSEnnaDeck_Movement_CaptainApproach:
# 71 "data/maps/SSEnnaDeck/scripts.pory"
    walk_down
# 72 "data/maps/SSEnnaDeck/scripts.pory"
    walk_down
# 73 "data/maps/SSEnnaDeck/scripts.pory"
    face_left
# 74 "data/maps/SSEnnaDeck/scripts.pory"
    step_end
# 75 "data/maps/SSEnnaDeck/scripts.pory"

# 76 "data/maps/SSEnnaDeck/scripts.pory"
SSEnnaDeck_Text_BeaName:
# 77 "data/maps/SSEnnaDeck/scripts.pory"
    .string "Bea: I just love the sea breeze!\n It's so peaceful, and a nice change from the \lhustle and bustle of Lumiose City!\p Alolan Pokemon are the best! They're so cute!\p What's your name, anyways?$"
# 78 "data/maps/SSEnnaDeck/scripts.pory"

# 79 "data/maps/SSEnnaDeck/scripts.pory"
SSEnnaDeck_Text_BeaAlola:
# 80 "data/maps/SSEnnaDeck/scripts.pory"
    .string "Bea: Nice to meet you, {PLAYER}!\p My name is Bea.\nI'm so excited to visit Alola!\pThe sandy beaches, gorgeous sunsets,\land the warm climate! I can't wait!$"
# 81 "data/maps/SSEnnaDeck/scripts.pory"

# 82 "data/maps/SSEnnaDeck/scripts.pory"
SSEnnaDeck_Text_BeaAlola2:
# 83 "data/maps/SSEnnaDeck/scripts.pory"
    .string "Bea: How long will it take to get there?$"
# 84 "data/maps/SSEnnaDeck/scripts.pory"

# 85 "data/maps/SSEnnaDeck/scripts.pory"
SSEnnaDeck_Text_CaptainHm:
# 86 "data/maps/SSEnnaDeck/scripts.pory"
    .string "Captain: We should get there in\nabout tw-...Hm.$"
# 87 "data/maps/SSEnnaDeck/scripts.pory"

# 88 "data/maps/SSEnnaDeck/scripts.pory"
SSEnnaDeck_Text_BeaGoodHm:
# 89 "data/maps/SSEnnaDeck/scripts.pory"
    .string "Bea: Was that a good hm or a bad hm?$"
# 90 "data/maps/SSEnnaDeck/scripts.pory"

# 91 "data/maps/SSEnnaDeck/scripts.pory"
SSEnnaDeck_Text_CaptainIsland:
# 92 "data/maps/SSEnnaDeck/scripts.pory"
    .string "Captain: It's an 'there is an\nisland here' hm.$"
# 93 "data/maps/SSEnnaDeck/scripts.pory"

# 94 "data/maps/SSEnnaDeck/scripts.pory"
SSEnnaDeck_Text_BeaOurIsland:
# 95 "data/maps/SSEnnaDeck/scripts.pory"
    .string "Bea: Is that our island?$"
# 96 "data/maps/SSEnnaDeck/scripts.pory"

# 97 "data/maps/SSEnnaDeck/scripts.pory"
SSEnnaDeck_Text_CaptainNo:
# 98 "data/maps/SSEnnaDeck/scripts.pory"
    .string "Captain: No.$"
# 99 "data/maps/SSEnnaDeck/scripts.pory"

# 100 "data/maps/SSEnnaDeck/scripts.pory"
SSEnnaDeck_Text_BeaWhyCare:
# 101 "data/maps/SSEnnaDeck/scripts.pory"
    .string "Bea: Then why do we care?\nWe passed plenty of islands on the way.$"
# 102 "data/maps/SSEnnaDeck/scripts.pory"

# 103 "data/maps/SSEnnaDeck/scripts.pory"
SSEnnaDeck_Text_CaptainNotSupposed:
# 104 "data/maps/SSEnnaDeck/scripts.pory"
    .string "Captain: There isn't supposed to be\nan island here.\lEither way, we need to check it out.$"
# 105 "data/maps/SSEnnaDeck/scripts.pory"

# 106 "data/maps/SSEnnaDeck/scripts.pory"
SSEnnaDeck_Text_CaptainFuel:
# 107 "data/maps/SSEnnaDeck/scripts.pory"
    .string "Captain: We're running low on fuel.\nWe need to stock up on supplies.$"
