Allergy_Lady_House_MapScripts::
	.byte 0


MsD_Script::
# 5 "data/maps/Allergy_Lady_House/scripts.pory"
	lock
# 6 "data/maps/Allergy_Lady_House/scripts.pory"
	faceplayer
# 7 "data/maps/Allergy_Lady_House/scripts.pory"
	goto_if_unset FLAG_MET_MS_D, MsD_Script_2
MsD_Script_1:
# 16 "data/maps/Allergy_Lady_House/scripts.pory"
	showmoneybox 0, 0
# 17 "data/maps/Allergy_Lady_House/scripts.pory"
	setspeaker SP_NAME_MS_D
# 18 "data/maps/Allergy_Lady_House/scripts.pory"
	msgbox MsD_Script_Text_3, MSGBOX_YESNO
# 19 "data/maps/Allergy_Lady_House/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MsD_Script_5
# 26 "data/maps/Allergy_Lady_House/scripts.pory"
	checkmoney 200
# 27 "data/maps/Allergy_Lady_House/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MsD_Script_8
# 34 "data/maps/Allergy_Lady_House/scripts.pory"
	checkitemspace ITEM_FULL_HEAL, 1
# 35 "data/maps/Allergy_Lady_House/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MsD_Script_11
# 42 "data/maps/Allergy_Lady_House/scripts.pory"
	removemoney 200
# 43 "data/maps/Allergy_Lady_House/scripts.pory"
	giveitem ITEM_FULL_HEAL
# 44 "data/maps/Allergy_Lady_House/scripts.pory"
	hidemoneybox
# 45 "data/maps/Allergy_Lady_House/scripts.pory"
	setspeaker SP_NAME_MS_D
# 46 "data/maps/Allergy_Lady_House/scripts.pory"
	msgbox MsD_Script_Text_7
# 47 "data/maps/Allergy_Lady_House/scripts.pory"
	release
	end

MsD_Script_2:
# 8 "data/maps/Allergy_Lady_House/scripts.pory"
	setflag FLAG_MET_MS_D
# 9 "data/maps/Allergy_Lady_House/scripts.pory"
	setspeaker SP_NAME_MS_D
# 10 "data/maps/Allergy_Lady_House/scripts.pory"
	msgbox MsD_Script_Text_0
# 11 "data/maps/Allergy_Lady_House/scripts.pory"
	setspeaker SP_NAME_MS_D
# 12 "data/maps/Allergy_Lady_House/scripts.pory"
	msgbox MsD_Script_Text_1
# 13 "data/maps/Allergy_Lady_House/scripts.pory"
	setspeaker SP_NAME_MS_D
# 14 "data/maps/Allergy_Lady_House/scripts.pory"
	msgbox MsD_Script_Text_2
	goto MsD_Script_1

MsD_Script_5:
# 20 "data/maps/Allergy_Lady_House/scripts.pory"
	hidemoneybox
# 21 "data/maps/Allergy_Lady_House/scripts.pory"
	setspeaker SP_NAME_MS_D
# 22 "data/maps/Allergy_Lady_House/scripts.pory"
	msgbox MsD_Script_Text_4
# 23 "data/maps/Allergy_Lady_House/scripts.pory"
	release
	end

MsD_Script_8:
# 28 "data/maps/Allergy_Lady_House/scripts.pory"
	hidemoneybox
# 29 "data/maps/Allergy_Lady_House/scripts.pory"
	setspeaker SP_NAME_MS_D
# 30 "data/maps/Allergy_Lady_House/scripts.pory"
	msgbox MsD_Script_Text_5
# 31 "data/maps/Allergy_Lady_House/scripts.pory"
	release
	end

MsD_Script_11:
# 36 "data/maps/Allergy_Lady_House/scripts.pory"
	hidemoneybox
# 37 "data/maps/Allergy_Lady_House/scripts.pory"
	setspeaker SP_NAME_MS_D
# 38 "data/maps/Allergy_Lady_House/scripts.pory"
	msgbox MsD_Script_Text_6
# 39 "data/maps/Allergy_Lady_House/scripts.pory"
	release
	end


MsD_Script_Text_0:
# 10 "data/maps/Allergy_Lady_House/scripts.pory"
	.string "Oh, a new face! You must be\nnew to Pebble Creek.\pI'm Mrs. D. Moved here from\nHoenn, studied under Prof.\lBitch himself, you know.\pBrilliant man.$"

MsD_Script_Text_1:
# 12 "data/maps/Allergy_Lady_House/scripts.pory"
	.string "Anyway. You look like you've\ngot allergies. I can tell.$"

MsD_Script_Text_2:
# 14 "data/maps/Allergy_Lady_House/scripts.pory"
	.string "Lucky for you, I specialize\nin allergy medicine.\pHighly effective. Locally\nsourced. Very legitimate.$"

MsD_Script_Text_3:
# 18 "data/maps/Allergy_Lady_House/scripts.pory"
	.string "You look like you could use\nsome allergy medicine.\pJust 200P a pop.\nInterested?$"

MsD_Script_Text_4:
# 22 "data/maps/Allergy_Lady_House/scripts.pory"
	.string "The allergies won't treat\nthemselves, dear.$"

MsD_Script_Text_5:
# 30 "data/maps/Allergy_Lady_House/scripts.pory"
	.string "Honey, allergy medicine\ndoesn't grow on trees.$"

MsD_Script_Text_6:
# 38 "data/maps/Allergy_Lady_House/scripts.pory"
	.string "Your bag is full.\nHow do you even live like that?$"

MsD_Script_Text_7:
# 46 "data/maps/Allergy_Lady_House/scripts.pory"
	.string "Not a Full Heal. Allergy\nmedicine. There's a difference.$"
