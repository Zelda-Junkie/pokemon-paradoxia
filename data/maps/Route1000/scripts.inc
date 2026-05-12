# 1 "data/maps/Route1000/scripts.pory"

# 2 "data/maps/Route1000/scripts.pory"
Route1000_MapScripts::
# 3 "data/maps/Route1000/scripts.pory"
    .byte 0
# 4 "data/maps/Route1000/scripts.pory"

# 5 "data/maps/Route1000/scripts.pory"
Route1000_EventScript_BeaTrigger::
# 6 "data/maps/Route1000/scripts.pory"
    lockall
# 7 "data/maps/Route1000/scripts.pory"
    goto_if_set FLAG_DEFEATED_BEA_1000, Route1000_EventScript_BeaTrigger_End
# 8 "data/maps/Route1000/scripts.pory"
    applymovement bea, Route1000_Movement_Exclamation
# 9 "data/maps/Route1000/scripts.pory"
    waitmovement 0
# 10 "data/maps/Route1000/scripts.pory"
    applymovement bea, Route1000_Movement_BeaTrigger
# 11 "data/maps/Route1000/scripts.pory"
    waitmovement 0
# 12 "data/maps/Route1000/scripts.pory"
    msgbox Route1000_Text_Bea_Approach, MSGBOX_DEFAULT
# 13 "data/maps/Route1000/scripts.pory"
    msgbox Route1000_Text_Bea_PreBattle, MSGBOX_DEFAULT
# 14 "data/maps/Route1000/scripts.pory"
    compare VAR_STARTER_MON, 0
# 15 "data/maps/Route1000/scripts.pory"
    goto_if_eq Route1000_EventScript_BeaBattle_Fuecoco
# 16 "data/maps/Route1000/scripts.pory"
    compare VAR_STARTER_MON, 1
# 17 "data/maps/Route1000/scripts.pory"
    goto_if_eq Route1000_EventScript_BeaBattle_Quaxly
# 18 "data/maps/Route1000/scripts.pory"
    goto Route1000_EventScript_BeaBattle_Sprigatito
# 19 "data/maps/Route1000/scripts.pory"

# 20 "data/maps/Route1000/scripts.pory"
Route1000_EventScript_BeaTrigger1::
# 21 "data/maps/Route1000/scripts.pory"
    lockall
# 22 "data/maps/Route1000/scripts.pory"
    goto_if_set FLAG_DEFEATED_BEA_1000, Route1000_EventScript_BeaTrigger_End
# 23 "data/maps/Route1000/scripts.pory"
    applymovement bea, Route1000_Movement_Exclamation
# 24 "data/maps/Route1000/scripts.pory"
    waitmovement 0
# 25 "data/maps/Route1000/scripts.pory"
    applymovement bea, Route1000_Movement_BeaTrigger1
# 26 "data/maps/Route1000/scripts.pory"
    waitmovement 0
# 27 "data/maps/Route1000/scripts.pory"
    msgbox Route1000_Text_Bea_Approach, MSGBOX_DEFAULT
# 28 "data/maps/Route1000/scripts.pory"
    msgbox Route1000_Text_Bea_PreBattle, MSGBOX_DEFAULT
# 29 "data/maps/Route1000/scripts.pory"
    compare VAR_STARTER_MON, 0
# 30 "data/maps/Route1000/scripts.pory"
    goto_if_eq Route1000_EventScript_BeaBattle_Fuecoco
# 31 "data/maps/Route1000/scripts.pory"
    compare VAR_STARTER_MON, 1
# 32 "data/maps/Route1000/scripts.pory"
    goto_if_eq Route1000_EventScript_BeaBattle_Quaxly
# 33 "data/maps/Route1000/scripts.pory"
    goto Route1000_EventScript_BeaBattle_Sprigatito
# 34 "data/maps/Route1000/scripts.pory"

# 35 "data/maps/Route1000/scripts.pory"
Route1000_EventScript_BeaTrigger2::
# 36 "data/maps/Route1000/scripts.pory"
    lockall
# 37 "data/maps/Route1000/scripts.pory"
    goto_if_set FLAG_DEFEATED_BEA_1000, Route1000_EventScript_BeaTrigger_End
# 38 "data/maps/Route1000/scripts.pory"
    applymovement bea, Route1000_Movement_Exclamation
# 39 "data/maps/Route1000/scripts.pory"
    waitmovement 0
# 40 "data/maps/Route1000/scripts.pory"
    applymovement bea, Route1000_Movement_BeaTrigger2
# 41 "data/maps/Route1000/scripts.pory"
    waitmovement 0
# 42 "data/maps/Route1000/scripts.pory"
    msgbox Route1000_Text_Bea_Approach, MSGBOX_DEFAULT
# 43 "data/maps/Route1000/scripts.pory"
    msgbox Route1000_Text_Bea_PreBattle, MSGBOX_DEFAULT
# 44 "data/maps/Route1000/scripts.pory"
    compare VAR_STARTER_MON, 0
# 45 "data/maps/Route1000/scripts.pory"
    goto_if_eq Route1000_EventScript_BeaBattle_Fuecoco
# 46 "data/maps/Route1000/scripts.pory"
    compare VAR_STARTER_MON, 1
# 47 "data/maps/Route1000/scripts.pory"
    goto_if_eq Route1000_EventScript_BeaBattle_Quaxly
# 48 "data/maps/Route1000/scripts.pory"
    goto Route1000_EventScript_BeaBattle_Sprigatito
# 49 "data/maps/Route1000/scripts.pory"

# 50 "data/maps/Route1000/scripts.pory"
Route1000_EventScript_BeaTrigger3::
# 51 "data/maps/Route1000/scripts.pory"
    lockall
# 52 "data/maps/Route1000/scripts.pory"
    goto_if_set FLAG_DEFEATED_BEA_1000, Route1000_EventScript_BeaTrigger_End
# 53 "data/maps/Route1000/scripts.pory"
    applymovement bea, Route1000_Movement_Exclamation
# 54 "data/maps/Route1000/scripts.pory"
    waitmovement 0
# 55 "data/maps/Route1000/scripts.pory"
    applymovement bea, Route1000_Movement_BeaTrigger3
# 56 "data/maps/Route1000/scripts.pory"
    waitmovement 0
# 57 "data/maps/Route1000/scripts.pory"
    msgbox Route1000_Text_Bea_Approach, MSGBOX_DEFAULT
# 58 "data/maps/Route1000/scripts.pory"
    msgbox Route1000_Text_Bea_PreBattle, MSGBOX_DEFAULT
# 59 "data/maps/Route1000/scripts.pory"
    compare VAR_STARTER_MON, 0
# 60 "data/maps/Route1000/scripts.pory"
    goto_if_eq Route1000_EventScript_BeaBattle_Fuecoco
# 61 "data/maps/Route1000/scripts.pory"
    compare VAR_STARTER_MON, 1
# 62 "data/maps/Route1000/scripts.pory"
    goto_if_eq Route1000_EventScript_BeaBattle_Quaxly
# 63 "data/maps/Route1000/scripts.pory"
    goto Route1000_EventScript_BeaBattle_Sprigatito
# 64 "data/maps/Route1000/scripts.pory"

# 65 "data/maps/Route1000/scripts.pory"
Route1000_EventScript_BeaTrigger4::
# 66 "data/maps/Route1000/scripts.pory"
    lockall
# 67 "data/maps/Route1000/scripts.pory"
    goto_if_set FLAG_DEFEATED_BEA_1000, Route1000_EventScript_BeaTrigger_End
# 68 "data/maps/Route1000/scripts.pory"
    applymovement bea, Route1000_Movement_Exclamation
# 69 "data/maps/Route1000/scripts.pory"
    waitmovement 0
# 70 "data/maps/Route1000/scripts.pory"
    applymovement bea, Route1000_Movement_BeaTrigger4
# 71 "data/maps/Route1000/scripts.pory"
    waitmovement 0
# 72 "data/maps/Route1000/scripts.pory"
    msgbox Route1000_Text_Bea_Approach, MSGBOX_DEFAULT
# 73 "data/maps/Route1000/scripts.pory"
    msgbox Route1000_Text_Bea_PreBattle, MSGBOX_DEFAULT
# 74 "data/maps/Route1000/scripts.pory"
    compare VAR_STARTER_MON, 0
# 75 "data/maps/Route1000/scripts.pory"
    goto_if_eq Route1000_EventScript_BeaBattle_Fuecoco
# 76 "data/maps/Route1000/scripts.pory"
    compare VAR_STARTER_MON, 1
# 77 "data/maps/Route1000/scripts.pory"
    goto_if_eq Route1000_EventScript_BeaBattle_Quaxly
# 78 "data/maps/Route1000/scripts.pory"
    goto Route1000_EventScript_BeaBattle_Sprigatito
# 79 "data/maps/Route1000/scripts.pory"

# 80 "data/maps/Route1000/scripts.pory"
Route1000_EventScript_BeaTrigger5::
# 81 "data/maps/Route1000/scripts.pory"
    lockall
# 82 "data/maps/Route1000/scripts.pory"
    goto_if_set FLAG_DEFEATED_BEA_1000, Route1000_EventScript_BeaTrigger_End
# 83 "data/maps/Route1000/scripts.pory"
    goto_if_set FLAG_DEFEATED_BEA_1000, Route1000_EventScript_BeaTrigger_End
# 84 "data/maps/Route1000/scripts.pory"
    applymovement bea, Route1000_Movement_BeaTrigger5
# 85 "data/maps/Route1000/scripts.pory"
    waitmovement 0
# 86 "data/maps/Route1000/scripts.pory"
    msgbox Route1000_Text_Bea_Approach, MSGBOX_DEFAULT
# 87 "data/maps/Route1000/scripts.pory"
    msgbox Route1000_Text_Bea_PreBattle, MSGBOX_DEFAULT
# 88 "data/maps/Route1000/scripts.pory"
    compare VAR_STARTER_MON, 0
# 89 "data/maps/Route1000/scripts.pory"
    goto_if_eq Route1000_EventScript_BeaBattle_Fuecoco
# 90 "data/maps/Route1000/scripts.pory"
    compare VAR_STARTER_MON, 1
# 91 "data/maps/Route1000/scripts.pory"
    goto_if_eq Route1000_EventScript_BeaBattle_Quaxly
# 92 "data/maps/Route1000/scripts.pory"
    goto Route1000_EventScript_BeaBattle_Sprigatito
# 93 "data/maps/Route1000/scripts.pory"

# 94 "data/maps/Route1000/scripts.pory"
Route1000_EventScript_BeaBattle_Fuecoco::
# 95 "data/maps/Route1000/scripts.pory"
    trainerbattle_single TRAINER_BEA_FUECOCO, Route1000_Text_Bea_Intro, Route1000_Text_Bea_Defeat, Route1000_EventScript_BeaPostBattleCheck
# 96 "data/maps/Route1000/scripts.pory"
    end
# 97 "data/maps/Route1000/scripts.pory"

# 98 "data/maps/Route1000/scripts.pory"
Route1000_EventScript_BeaBattle_Quaxly::
# 99 "data/maps/Route1000/scripts.pory"
    trainerbattle_single TRAINER_BEA_QUAXLY, Route1000_Text_Bea_Intro, Route1000_Text_Bea_Defeat, Route1000_EventScript_BeaPostBattleCheck
# 100 "data/maps/Route1000/scripts.pory"
    end
# 101 "data/maps/Route1000/scripts.pory"

# 102 "data/maps/Route1000/scripts.pory"
Route1000_EventScript_BeaBattle_Sprigatito::
# 103 "data/maps/Route1000/scripts.pory"
    trainerbattle_single TRAINER_BEA_SPRIGATITO, Route1000_Text_Bea_Intro, Route1000_Text_Bea_Defeat, Route1000_EventScript_BeaPostBattleCheck
# 104 "data/maps/Route1000/scripts.pory"
    end
# 105 "data/maps/Route1000/scripts.pory"

# 106 "data/maps/Route1000/scripts.pory"
Route1000_EventScript_BeaPostBattleCheck::
# 107 "data/maps/Route1000/scripts.pory"
    goto_if_set FLAG_TRAINER_FLAG_BEA_FUECOCO, Route1000_EventScript_BeaWon
# 108 "data/maps/Route1000/scripts.pory"
    goto_if_set FLAG_TRAINER_FLAG_BEA_QUAXLY, Route1000_EventScript_BeaWon
# 109 "data/maps/Route1000/scripts.pory"
    goto_if_set FLAG_TRAINER_FLAG_BEA_SPRIGATITO, Route1000_EventScript_BeaWon
# 110 "data/maps/Route1000/scripts.pory"
    goto Route1000_EventScript_BeaLost
# 111 "data/maps/Route1000/scripts.pory"

# 112 "data/maps/Route1000/scripts.pory"
Route1000_EventScript_BeaWon::
# 113 "data/maps/Route1000/scripts.pory"
    msgbox Route1000_Text_Bea_PlayerWon, MSGBOX_DEFAULT
# 114 "data/maps/Route1000/scripts.pory"
    goto Route1000_EventScript_BeaGiveItems
# 115 "data/maps/Route1000/scripts.pory"

# 116 "data/maps/Route1000/scripts.pory"
Route1000_EventScript_BeaLost::
# 117 "data/maps/Route1000/scripts.pory"
    msgbox Route1000_Text_Bea_PlayerLost, MSGBOX_DEFAULT
# 118 "data/maps/Route1000/scripts.pory"
    goto Route1000_EventScript_BeaGiveItems
# 119 "data/maps/Route1000/scripts.pory"

# 120 "data/maps/Route1000/scripts.pory"
Route1000_EventScript_BeaGiveItems::
# 121 "data/maps/Route1000/scripts.pory"
    additem ITEM_POKE_BALL, 5
# 122 "data/maps/Route1000/scripts.pory"
    additem ITEM_FULL_HEAL, 1
# 123 "data/maps/Route1000/scripts.pory"
    msgbox Route1000_Text_Bea_PokeBalls, MSGBOX_DEFAULT
# 124 "data/maps/Route1000/scripts.pory"
    msgbox Route1000_Text_Bea_Pebble, MSGBOX_DEFAULT
# 125 "data/maps/Route1000/scripts.pory"
    msgbox Route1000_Text_Bea_Goodbye, MSGBOX_DEFAULT
# 126 "data/maps/Route1000/scripts.pory"
    setflag FLAG_DEFEATED_BEA_1000
# 127 "data/maps/Route1000/scripts.pory"
    applymovement bea, Route1000_Movement_BeaLeave
# 128 "data/maps/Route1000/scripts.pory"
    waitmovement 0
# 129 "data/maps/Route1000/scripts.pory"
    removeobject bea
# 130 "data/maps/Route1000/scripts.pory"
    releaseall
# 131 "data/maps/Route1000/scripts.pory"
    end
# 132 "data/maps/Route1000/scripts.pory"

# 133 "data/maps/Route1000/scripts.pory"
Route1000_EventScript_BeaTrigger_End::
# 134 "data/maps/Route1000/scripts.pory"
    releaseall
# 135 "data/maps/Route1000/scripts.pory"
    end
# 136 "data/maps/Route1000/scripts.pory"

# 137 "data/maps/Route1000/scripts.pory"
Route1000_Movement_BeaTrigger:
# 138 "data/maps/Route1000/scripts.pory"
    walk_fast_right
# 139 "data/maps/Route1000/scripts.pory"
    walk_fast_right
# 140 "data/maps/Route1000/scripts.pory"
    walk_fast_right
# 141 "data/maps/Route1000/scripts.pory"
    walk_fast_right
# 142 "data/maps/Route1000/scripts.pory"
    walk_fast_right
# 143 "data/maps/Route1000/scripts.pory"
    walk_fast_right
# 144 "data/maps/Route1000/scripts.pory"
    step_end
# 145 "data/maps/Route1000/scripts.pory"

# 146 "data/maps/Route1000/scripts.pory"
Route1000_Movement_BeaTrigger1:
# 147 "data/maps/Route1000/scripts.pory"
    walk_fast_right
# 148 "data/maps/Route1000/scripts.pory"
    walk_fast_right
# 149 "data/maps/Route1000/scripts.pory"
    walk_fast_right
# 150 "data/maps/Route1000/scripts.pory"
    walk_fast_right
# 151 "data/maps/Route1000/scripts.pory"
    walk_fast_right
# 152 "data/maps/Route1000/scripts.pory"
    walk_fast_right
# 153 "data/maps/Route1000/scripts.pory"
    walk_fast_down
# 154 "data/maps/Route1000/scripts.pory"
    face_right
# 155 "data/maps/Route1000/scripts.pory"
    step_end
# 156 "data/maps/Route1000/scripts.pory"

# 157 "data/maps/Route1000/scripts.pory"
Route1000_Movement_BeaTrigger2:
# 158 "data/maps/Route1000/scripts.pory"
    walk_fast_right
# 159 "data/maps/Route1000/scripts.pory"
    walk_fast_right
# 160 "data/maps/Route1000/scripts.pory"
    walk_fast_right
# 161 "data/maps/Route1000/scripts.pory"
    walk_fast_right
# 162 "data/maps/Route1000/scripts.pory"
    walk_fast_right
# 163 "data/maps/Route1000/scripts.pory"
    walk_fast_right
# 164 "data/maps/Route1000/scripts.pory"
    walk_fast_down
# 165 "data/maps/Route1000/scripts.pory"
    walk_fast_down
# 166 "data/maps/Route1000/scripts.pory"
    face_right
# 167 "data/maps/Route1000/scripts.pory"
    step_end
# 168 "data/maps/Route1000/scripts.pory"

# 169 "data/maps/Route1000/scripts.pory"
Route1000_Movement_BeaTrigger3:
# 170 "data/maps/Route1000/scripts.pory"
    walk_fast_right
# 171 "data/maps/Route1000/scripts.pory"
    walk_fast_right
# 172 "data/maps/Route1000/scripts.pory"
    walk_fast_right
# 173 "data/maps/Route1000/scripts.pory"
    walk_fast_right
# 174 "data/maps/Route1000/scripts.pory"
    walk_fast_right
# 175 "data/maps/Route1000/scripts.pory"
    walk_fast_right
# 176 "data/maps/Route1000/scripts.pory"
    walk_fast_down
# 177 "data/maps/Route1000/scripts.pory"
    walk_fast_down
# 178 "data/maps/Route1000/scripts.pory"
    walk_fast_down
# 179 "data/maps/Route1000/scripts.pory"
    face_right
# 180 "data/maps/Route1000/scripts.pory"
    step_end
# 181 "data/maps/Route1000/scripts.pory"

# 182 "data/maps/Route1000/scripts.pory"
Route1000_Movement_BeaTrigger4:
# 183 "data/maps/Route1000/scripts.pory"
    walk_fast_right
# 184 "data/maps/Route1000/scripts.pory"
    walk_fast_right
# 185 "data/maps/Route1000/scripts.pory"
    walk_fast_right
# 186 "data/maps/Route1000/scripts.pory"
    walk_fast_right
# 187 "data/maps/Route1000/scripts.pory"
    walk_fast_right
# 188 "data/maps/Route1000/scripts.pory"
    walk_fast_right
# 189 "data/maps/Route1000/scripts.pory"
    walk_fast_down
# 190 "data/maps/Route1000/scripts.pory"
    walk_fast_down
# 191 "data/maps/Route1000/scripts.pory"
    walk_fast_down
# 192 "data/maps/Route1000/scripts.pory"
    walk_fast_down
# 193 "data/maps/Route1000/scripts.pory"
    face_right
# 194 "data/maps/Route1000/scripts.pory"
    step_end
# 195 "data/maps/Route1000/scripts.pory"

# 196 "data/maps/Route1000/scripts.pory"
Route1000_Movement_BeaTrigger5:
# 197 "data/maps/Route1000/scripts.pory"
    walk_fast_right
# 198 "data/maps/Route1000/scripts.pory"
    walk_fast_right
# 199 "data/maps/Route1000/scripts.pory"
    walk_fast_right
# 200 "data/maps/Route1000/scripts.pory"
    walk_fast_right
# 201 "data/maps/Route1000/scripts.pory"
    walk_fast_right
# 202 "data/maps/Route1000/scripts.pory"
    walk_fast_right
# 203 "data/maps/Route1000/scripts.pory"
    walk_fast_down
# 204 "data/maps/Route1000/scripts.pory"
    walk_fast_down
# 205 "data/maps/Route1000/scripts.pory"
    walk_fast_down
# 206 "data/maps/Route1000/scripts.pory"
    walk_fast_down
# 207 "data/maps/Route1000/scripts.pory"
    walk_fast_down
# 208 "data/maps/Route1000/scripts.pory"
    face_right
# 209 "data/maps/Route1000/scripts.pory"
    step_end
# 210 "data/maps/Route1000/scripts.pory"

# 211 "data/maps/Route1000/scripts.pory"
Route1000_Movement_BeaLeave:
# 212 "data/maps/Route1000/scripts.pory"
    face_left
# 213 "data/maps/Route1000/scripts.pory"
    walk_fast_left
# 214 "data/maps/Route1000/scripts.pory"
    walk_fast_left
# 215 "data/maps/Route1000/scripts.pory"
    walk_fast_left
# 216 "data/maps/Route1000/scripts.pory"
    walk_fast_left
# 217 "data/maps/Route1000/scripts.pory"
    walk_fast_left
# 218 "data/maps/Route1000/scripts.pory"
    walk_fast_left
# 219 "data/maps/Route1000/scripts.pory"
    face_down
# 220 "data/maps/Route1000/scripts.pory"
    walk_fast_up
# 221 "data/maps/Route1000/scripts.pory"
    walk_fast_up
# 222 "data/maps/Route1000/scripts.pory"
    walk_fast_up
# 223 "data/maps/Route1000/scripts.pory"
    walk_fast_up
# 224 "data/maps/Route1000/scripts.pory"
    walk_fast_up
# 225 "data/maps/Route1000/scripts.pory"
    walk_fast_up
# 226 "data/maps/Route1000/scripts.pory"
    step_end
# 227 "data/maps/Route1000/scripts.pory"

# 228 "data/maps/Route1000/scripts.pory"
Route1000_Movement_Exclamation:
# 229 "data/maps/Route1000/scripts.pory"
    emote_exclamation_mark
# 230 "data/maps/Route1000/scripts.pory"
    step_end
# 231 "data/maps/Route1000/scripts.pory"

# 232 "data/maps/Route1000/scripts.pory"
Route1000_Text_Bea_Approach::
# 233 "data/maps/Route1000/scripts.pory"
    .string "Hey!\nHold on a second!\p I just wanted to catch you\nbefore the grass.$"
# 234 "data/maps/Route1000/scripts.pory"

# 235 "data/maps/Route1000/scripts.pory"
Route1000_Text_Bea_PreBattle::
# 236 "data/maps/Route1000/scripts.pory"
    .string "I think you should have\none battle first.\p Just to feel how it works.\nYou're ready.$"
# 237 "data/maps/Route1000/scripts.pory"

# 238 "data/maps/Route1000/scripts.pory"
Route1000_Text_Bea_Intro::
# 239 "data/maps/Route1000/scripts.pory"
    .string "You've got this.\nI'm excited to see.$"
# 240 "data/maps/Route1000/scripts.pory"

# 241 "data/maps/Route1000/scripts.pory"
Route1000_Text_Bea_Defeat::
# 242 "data/maps/Route1000/scripts.pory"
    .string "Hey. That was good.\nSeriously.\p Now you know what it\nfeels like. That matters.$"
# 243 "data/maps/Route1000/scripts.pory"

# 244 "data/maps/Route1000/scripts.pory"
Route1000_Text_Bea_PlayerWon::
# 245 "data/maps/Route1000/scripts.pory"
    .string "That was so clean.\nDid you feel that timing?\p You trusted your choice.\nThat's huge.$"
# 246 "data/maps/Route1000/scripts.pory"

# 247 "data/maps/Route1000/scripts.pory"
Route1000_Text_Bea_PlayerLost::
# 248 "data/maps/Route1000/scripts.pory"
    .string "Hey. That was good.\nSeriously.\p Now you know what it\nfeels like. That matters.$"
# 249 "data/maps/Route1000/scripts.pory"

# 250 "data/maps/Route1000/scripts.pory"
Route1000_Text_Bea_PokeBalls::
# 251 "data/maps/Route1000/scripts.pory"
    .string "Here.\nTake these.\p I brought them for you\njust in case.$"
# 252 "data/maps/Route1000/scripts.pory"

# 253 "data/maps/Route1000/scripts.pory"
Route1000_Text_Bea_Pebble::
# 254 "data/maps/Route1000/scripts.pory"
    .string "Oh,also.\nI found this.\p It looked like something\nyou'd keep.$"
# 255 "data/maps/Route1000/scripts.pory"

# 256 "data/maps/Route1000/scripts.pory"
Route1000_Text_Bea_Goodbye::
# 257 "data/maps/Route1000/scripts.pory"
    .string "I'm heading ahead a bit.\nTake your time.\p Come find me after the\nfirst gym. I'll be there.$"
