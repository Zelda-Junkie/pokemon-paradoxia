# 1 "data/maps/BramblewoodTown/scripts.pory"

# 2 "data/maps/BramblewoodTown/scripts.pory"
#define LOCALID_WILLOW 1
# 3 "data/maps/BramblewoodTown/scripts.pory"

# 4 "data/maps/BramblewoodTown/scripts.pory"
BramblewoodTown_MapScripts::
# 5 "data/maps/BramblewoodTown/scripts.pory"
    .byte 0
# 6 "data/maps/BramblewoodTown/scripts.pory"
// Willow Dock Block
# 7 "data/maps/BramblewoodTown/scripts.pory"
	Willow_Pre_Gym_Script_1::
# 8 "data/maps/BramblewoodTown/scripts.pory"
	    lockall
# 9 "data/maps/BramblewoodTown/scripts.pory"
	    checkflag FLAG_DEFEATED_RUSTBORO_GYM
# 10 "data/maps/BramblewoodTown/scripts.pory"
	    goto_if 1, Willow_Gym_AlreadyBeaten
# 11 "data/maps/BramblewoodTown/scripts.pory"
	    applymovement LOCALID_WILLOW, Willow_Movement_1
# 12 "data/maps/BramblewoodTown/scripts.pory"
	    waitmovement 0
# 13 "data/maps/BramblewoodTown/scripts.pory"
	    setspeaker SP_NAME_WILLOW
# 14 "data/maps/BramblewoodTown/scripts.pory"
	    msgbox Willow_Text_NotBeaten, MSGBOX_DEFAULT
# 15 "data/maps/BramblewoodTown/scripts.pory"
	    applymovement OBJ_EVENT_ID_PLAYER, Player_Up
# 16 "data/maps/BramblewoodTown/scripts.pory"
	    waitmovement 0
# 17 "data/maps/BramblewoodTown/scripts.pory"
	    releaseall
# 18 "data/maps/BramblewoodTown/scripts.pory"
	    end
# 19 "data/maps/BramblewoodTown/scripts.pory"
	
# 20 "data/maps/BramblewoodTown/scripts.pory"
	Willow_Pre_Gym_Script_2::
# 21 "data/maps/BramblewoodTown/scripts.pory"
	    lockall
# 22 "data/maps/BramblewoodTown/scripts.pory"
	    checkflag FLAG_DEFEATED_RUSTBORO_GYM
# 23 "data/maps/BramblewoodTown/scripts.pory"
	    goto_if 1, Willow_Gym_AlreadyBeaten
# 24 "data/maps/BramblewoodTown/scripts.pory"
	    applymovement LOCALID_WILLOW, Willow_Movement_2
# 25 "data/maps/BramblewoodTown/scripts.pory"
	    waitmovement 0
# 26 "data/maps/BramblewoodTown/scripts.pory"
	    setspeaker SP_NAME_WILLOW
# 27 "data/maps/BramblewoodTown/scripts.pory"
	    msgbox Willow_Text_NotBeaten, MSGBOX_DEFAULT
# 28 "data/maps/BramblewoodTown/scripts.pory"
	    applymovement OBJ_EVENT_ID_PLAYER, Player_Up
# 29 "data/maps/BramblewoodTown/scripts.pory"
	    waitmovement 0
# 30 "data/maps/BramblewoodTown/scripts.pory"
	    applymovement LOCALID_WILLOW, Willow_Return_2
# 31 "data/maps/BramblewoodTown/scripts.pory"
	    waitmovement 0
# 32 "data/maps/BramblewoodTown/scripts.pory"
	    releaseall
# 33 "data/maps/BramblewoodTown/scripts.pory"
	    end
# 34 "data/maps/BramblewoodTown/scripts.pory"
	
# 35 "data/maps/BramblewoodTown/scripts.pory"
	Willow_Pre_Gym_Script_3::
# 36 "data/maps/BramblewoodTown/scripts.pory"
	    lockall
# 37 "data/maps/BramblewoodTown/scripts.pory"
	    checkflag FLAG_DEFEATED_RUSTBORO_GYM
# 38 "data/maps/BramblewoodTown/scripts.pory"
	    goto_if 1, Willow_Gym_AlreadyBeaten
# 39 "data/maps/BramblewoodTown/scripts.pory"
	    applymovement LOCALID_WILLOW, Willow_Movement_3
# 40 "data/maps/BramblewoodTown/scripts.pory"
	    waitmovement 0
# 41 "data/maps/BramblewoodTown/scripts.pory"
	    setspeaker SP_NAME_WILLOW
# 42 "data/maps/BramblewoodTown/scripts.pory"
	    msgbox Willow_Text_NotBeaten, MSGBOX_DEFAULT
# 43 "data/maps/BramblewoodTown/scripts.pory"
	    applymovement OBJ_EVENT_ID_PLAYER, Player_Up
# 44 "data/maps/BramblewoodTown/scripts.pory"
	    waitmovement 0
# 45 "data/maps/BramblewoodTown/scripts.pory"
	    applymovement LOCALID_WILLOW, Willow_Return_3
# 46 "data/maps/BramblewoodTown/scripts.pory"
	    waitmovement 0
# 47 "data/maps/BramblewoodTown/scripts.pory"
	    releaseall
# 48 "data/maps/BramblewoodTown/scripts.pory"
	    end
# 49 "data/maps/BramblewoodTown/scripts.pory"
	
# 50 "data/maps/BramblewoodTown/scripts.pory"
	Willow_Pre_Gym_Script_4::
# 51 "data/maps/BramblewoodTown/scripts.pory"
	    lockall
# 52 "data/maps/BramblewoodTown/scripts.pory"
	    checkflag FLAG_DEFEATED_RUSTBORO_GYM
# 53 "data/maps/BramblewoodTown/scripts.pory"
	    goto_if 1, Willow_Gym_AlreadyBeaten
# 54 "data/maps/BramblewoodTown/scripts.pory"
	    applymovement LOCALID_WILLOW, Willow_Movement_4
# 55 "data/maps/BramblewoodTown/scripts.pory"
	    waitmovement 0
# 56 "data/maps/BramblewoodTown/scripts.pory"
	    setspeaker SP_NAME_WILLOW
# 57 "data/maps/BramblewoodTown/scripts.pory"
	    msgbox Willow_Text_NotBeaten, MSGBOX_DEFAULT
# 58 "data/maps/BramblewoodTown/scripts.pory"
	    applymovement OBJ_EVENT_ID_PLAYER, Player_Up
# 59 "data/maps/BramblewoodTown/scripts.pory"
	    waitmovement 0
# 60 "data/maps/BramblewoodTown/scripts.pory"
	    applymovement LOCALID_WILLOW, Willow_Return_4
# 61 "data/maps/BramblewoodTown/scripts.pory"
	    waitmovement 0
# 62 "data/maps/BramblewoodTown/scripts.pory"
	    releaseall
# 63 "data/maps/BramblewoodTown/scripts.pory"
	    end
# 64 "data/maps/BramblewoodTown/scripts.pory"
	
# 65 "data/maps/BramblewoodTown/scripts.pory"
	Willow_Pre_Gym_Script_5::
# 66 "data/maps/BramblewoodTown/scripts.pory"
	    lockall
# 67 "data/maps/BramblewoodTown/scripts.pory"
	    checkflag FLAG_DEFEATED_RUSTBORO_GYM
# 68 "data/maps/BramblewoodTown/scripts.pory"
	    goto_if 1, Willow_Gym_AlreadyBeaten
# 69 "data/maps/BramblewoodTown/scripts.pory"
	    applymovement LOCALID_WILLOW, Willow_Movement_5
# 70 "data/maps/BramblewoodTown/scripts.pory"
	    waitmovement 0
# 71 "data/maps/BramblewoodTown/scripts.pory"
	    setspeaker SP_NAME_WILLOW
# 72 "data/maps/BramblewoodTown/scripts.pory"
	    msgbox Willow_Text_NotBeaten, MSGBOX_DEFAULT
# 73 "data/maps/BramblewoodTown/scripts.pory"
	    applymovement OBJ_EVENT_ID_PLAYER, Player_Up
# 74 "data/maps/BramblewoodTown/scripts.pory"
	    waitmovement 0
# 75 "data/maps/BramblewoodTown/scripts.pory"
	    applymovement LOCALID_WILLOW, Willow_Return_5
# 76 "data/maps/BramblewoodTown/scripts.pory"
	    waitmovement 0
# 77 "data/maps/BramblewoodTown/scripts.pory"
	    releaseall
# 78 "data/maps/BramblewoodTown/scripts.pory"
	    end
# 79 "data/maps/BramblewoodTown/scripts.pory"
	
# 80 "data/maps/BramblewoodTown/scripts.pory"
	Willow_Pre_Gym_Script_6::
# 81 "data/maps/BramblewoodTown/scripts.pory"
	    lockall
# 82 "data/maps/BramblewoodTown/scripts.pory"
	    checkflag FLAG_DEFEATED_RUSTBORO_GYM
# 83 "data/maps/BramblewoodTown/scripts.pory"
	    goto_if 1, Willow_Gym_AlreadyBeaten
# 84 "data/maps/BramblewoodTown/scripts.pory"
	    applymovement LOCALID_WILLOW, Willow_Movement_6
# 85 "data/maps/BramblewoodTown/scripts.pory"
	    waitmovement 0
# 86 "data/maps/BramblewoodTown/scripts.pory"
	    setspeaker SP_NAME_WILLOW
# 87 "data/maps/BramblewoodTown/scripts.pory"
	    msgbox Willow_Text_NotBeaten, MSGBOX_DEFAULT
# 88 "data/maps/BramblewoodTown/scripts.pory"
	    applymovement OBJ_EVENT_ID_PLAYER, Player_Up
# 89 "data/maps/BramblewoodTown/scripts.pory"
	    waitmovement 0
# 90 "data/maps/BramblewoodTown/scripts.pory"
	    applymovement LOCALID_WILLOW, Willow_Return_6
# 91 "data/maps/BramblewoodTown/scripts.pory"
	    waitmovement 0
# 92 "data/maps/BramblewoodTown/scripts.pory"
	    releaseall
# 93 "data/maps/BramblewoodTown/scripts.pory"
	    end
# 94 "data/maps/BramblewoodTown/scripts.pory"
	
# 95 "data/maps/BramblewoodTown/scripts.pory"
	Willow_Pre_Gym_Script_7::
# 96 "data/maps/BramblewoodTown/scripts.pory"
	    lockall
# 97 "data/maps/BramblewoodTown/scripts.pory"
	    checkflag FLAG_DEFEATED_RUSTBORO_GYM
# 98 "data/maps/BramblewoodTown/scripts.pory"
	    goto_if 1, Willow_Gym_AlreadyBeaten
# 99 "data/maps/BramblewoodTown/scripts.pory"
	    applymovement LOCALID_WILLOW, Willow_Movement_7
# 100 "data/maps/BramblewoodTown/scripts.pory"
	    waitmovement 0
# 101 "data/maps/BramblewoodTown/scripts.pory"
	    setspeaker SP_NAME_WILLOW
# 102 "data/maps/BramblewoodTown/scripts.pory"
	    msgbox Willow_Text_NotBeaten, MSGBOX_DEFAULT
# 103 "data/maps/BramblewoodTown/scripts.pory"
	    applymovement OBJ_EVENT_ID_PLAYER, Player_Up
# 104 "data/maps/BramblewoodTown/scripts.pory"
	    waitmovement 0
# 105 "data/maps/BramblewoodTown/scripts.pory"
	    applymovement LOCALID_WILLOW, Willow_Return_7
# 106 "data/maps/BramblewoodTown/scripts.pory"
	    waitmovement 0
# 107 "data/maps/BramblewoodTown/scripts.pory"
	    releaseall
# 108 "data/maps/BramblewoodTown/scripts.pory"
	    end
# 109 "data/maps/BramblewoodTown/scripts.pory"
	
# 110 "data/maps/BramblewoodTown/scripts.pory"
	Willow_Gym_AlreadyBeaten::
# 111 "data/maps/BramblewoodTown/scripts.pory"
	    releaseall
# 112 "data/maps/BramblewoodTown/scripts.pory"
	    end
# 113 "data/maps/BramblewoodTown/scripts.pory"
	
# 114 "data/maps/BramblewoodTown/scripts.pory"
	Willow_Text_NotBeaten:
# 115 "data/maps/BramblewoodTown/scripts.pory"
	    .string "Hey punk! Watch it!\nThis area is for ELITE trainers only!\lCome back with a badge next time!$"
# 116 "data/maps/BramblewoodTown/scripts.pory"
	
# 117 "data/maps/BramblewoodTown/scripts.pory"
	Willow_Movement_1:
# 118 "data/maps/BramblewoodTown/scripts.pory"
	    face_player
# 119 "data/maps/BramblewoodTown/scripts.pory"
	    step_end
# 120 "data/maps/BramblewoodTown/scripts.pory"
	    
# 121 "data/maps/BramblewoodTown/scripts.pory"
	Willow_Movement_2:
# 122 "data/maps/BramblewoodTown/scripts.pory"
	    walk_right
# 123 "data/maps/BramblewoodTown/scripts.pory"
	    face_player
# 124 "data/maps/BramblewoodTown/scripts.pory"
	    step_end
# 125 "data/maps/BramblewoodTown/scripts.pory"
	
# 126 "data/maps/BramblewoodTown/scripts.pory"
	Willow_Movement_3:
# 127 "data/maps/BramblewoodTown/scripts.pory"
	    walk_right
# 128 "data/maps/BramblewoodTown/scripts.pory"
	    walk_right
# 129 "data/maps/BramblewoodTown/scripts.pory"
	    face_player
# 130 "data/maps/BramblewoodTown/scripts.pory"
	    step_end
# 131 "data/maps/BramblewoodTown/scripts.pory"
	
# 132 "data/maps/BramblewoodTown/scripts.pory"
	Willow_Movement_4:
# 133 "data/maps/BramblewoodTown/scripts.pory"
	    walk_right
# 134 "data/maps/BramblewoodTown/scripts.pory"
	    walk_right
# 135 "data/maps/BramblewoodTown/scripts.pory"
	    walk_right
# 136 "data/maps/BramblewoodTown/scripts.pory"
	    face_player
# 137 "data/maps/BramblewoodTown/scripts.pory"
	    step_end
# 138 "data/maps/BramblewoodTown/scripts.pory"
	
# 139 "data/maps/BramblewoodTown/scripts.pory"
	Willow_Movement_5:
# 140 "data/maps/BramblewoodTown/scripts.pory"
	    walk_right
# 141 "data/maps/BramblewoodTown/scripts.pory"
	    walk_right
# 142 "data/maps/BramblewoodTown/scripts.pory"
	    walk_right
# 143 "data/maps/BramblewoodTown/scripts.pory"
	    walk_right
# 144 "data/maps/BramblewoodTown/scripts.pory"
	    face_player
# 145 "data/maps/BramblewoodTown/scripts.pory"
	    step_end
# 146 "data/maps/BramblewoodTown/scripts.pory"
	
# 147 "data/maps/BramblewoodTown/scripts.pory"
	Willow_Movement_6:
# 148 "data/maps/BramblewoodTown/scripts.pory"
	    walk_right
# 149 "data/maps/BramblewoodTown/scripts.pory"
	    walk_right
# 150 "data/maps/BramblewoodTown/scripts.pory"
	    walk_right
# 151 "data/maps/BramblewoodTown/scripts.pory"
	    walk_right
# 152 "data/maps/BramblewoodTown/scripts.pory"
	    walk_right
# 153 "data/maps/BramblewoodTown/scripts.pory"
	    face_player
# 154 "data/maps/BramblewoodTown/scripts.pory"
	    step_end
# 155 "data/maps/BramblewoodTown/scripts.pory"
	
# 156 "data/maps/BramblewoodTown/scripts.pory"
	Willow_Movement_7:
# 157 "data/maps/BramblewoodTown/scripts.pory"
	    walk_right
# 158 "data/maps/BramblewoodTown/scripts.pory"
	    walk_right
# 159 "data/maps/BramblewoodTown/scripts.pory"
	    walk_right
# 160 "data/maps/BramblewoodTown/scripts.pory"
	    walk_right
# 161 "data/maps/BramblewoodTown/scripts.pory"
	    walk_right
# 162 "data/maps/BramblewoodTown/scripts.pory"
	    walk_right
# 163 "data/maps/BramblewoodTown/scripts.pory"
	    face_player
# 164 "data/maps/BramblewoodTown/scripts.pory"
	    step_end
# 165 "data/maps/BramblewoodTown/scripts.pory"
	
# 166 "data/maps/BramblewoodTown/scripts.pory"
	Willow_Return_2:
# 167 "data/maps/BramblewoodTown/scripts.pory"
	    walk_left
# 168 "data/maps/BramblewoodTown/scripts.pory"
	    face_player
# 169 "data/maps/BramblewoodTown/scripts.pory"
	    step_end
# 170 "data/maps/BramblewoodTown/scripts.pory"
	
# 171 "data/maps/BramblewoodTown/scripts.pory"
	Willow_Return_3:
# 172 "data/maps/BramblewoodTown/scripts.pory"
	    walk_left
# 173 "data/maps/BramblewoodTown/scripts.pory"
	    walk_left
# 174 "data/maps/BramblewoodTown/scripts.pory"
	    face_player
# 175 "data/maps/BramblewoodTown/scripts.pory"
	    step_end
# 176 "data/maps/BramblewoodTown/scripts.pory"
	
# 177 "data/maps/BramblewoodTown/scripts.pory"
	Willow_Return_4:
# 178 "data/maps/BramblewoodTown/scripts.pory"
	    walk_left
# 179 "data/maps/BramblewoodTown/scripts.pory"
	    walk_left
# 180 "data/maps/BramblewoodTown/scripts.pory"
	    walk_left
# 181 "data/maps/BramblewoodTown/scripts.pory"
	    face_player
# 182 "data/maps/BramblewoodTown/scripts.pory"
	    step_end
# 183 "data/maps/BramblewoodTown/scripts.pory"
	
# 184 "data/maps/BramblewoodTown/scripts.pory"
	Willow_Return_5:
# 185 "data/maps/BramblewoodTown/scripts.pory"
	    walk_left
# 186 "data/maps/BramblewoodTown/scripts.pory"
	    walk_left
# 187 "data/maps/BramblewoodTown/scripts.pory"
	    walk_left
# 188 "data/maps/BramblewoodTown/scripts.pory"
	    walk_left
# 189 "data/maps/BramblewoodTown/scripts.pory"
	    face_player
# 190 "data/maps/BramblewoodTown/scripts.pory"
	    step_end
# 191 "data/maps/BramblewoodTown/scripts.pory"
	
# 192 "data/maps/BramblewoodTown/scripts.pory"
	Willow_Return_6:
# 193 "data/maps/BramblewoodTown/scripts.pory"
	    walk_left
# 194 "data/maps/BramblewoodTown/scripts.pory"
	    walk_left
# 195 "data/maps/BramblewoodTown/scripts.pory"
	    walk_left
# 196 "data/maps/BramblewoodTown/scripts.pory"
	    walk_left
# 197 "data/maps/BramblewoodTown/scripts.pory"
	    walk_left
# 198 "data/maps/BramblewoodTown/scripts.pory"
	    face_player
# 199 "data/maps/BramblewoodTown/scripts.pory"
	    step_end
# 200 "data/maps/BramblewoodTown/scripts.pory"
	
# 201 "data/maps/BramblewoodTown/scripts.pory"
	Willow_Return_7:
# 202 "data/maps/BramblewoodTown/scripts.pory"
	    walk_left
# 203 "data/maps/BramblewoodTown/scripts.pory"
	    walk_left
# 204 "data/maps/BramblewoodTown/scripts.pory"
	    walk_left
# 205 "data/maps/BramblewoodTown/scripts.pory"
	    walk_left
# 206 "data/maps/BramblewoodTown/scripts.pory"
	    walk_left
# 207 "data/maps/BramblewoodTown/scripts.pory"
	    walk_left
# 208 "data/maps/BramblewoodTown/scripts.pory"
	    face_player
# 209 "data/maps/BramblewoodTown/scripts.pory"
	    step_end
# 210 "data/maps/BramblewoodTown/scripts.pory"
	
# 211 "data/maps/BramblewoodTown/scripts.pory"
	Player_Up:
# 212 "data/maps/BramblewoodTown/scripts.pory"
	    walk_up
# 213 "data/maps/BramblewoodTown/scripts.pory"
	    step_end
