PebblePerson_MapScripts::
	.byte 0


Pebble_Person_Script::
# 5 "data/maps/PebblePerson/scripts.pory"
	lock
# 6 "data/maps/PebblePerson/scripts.pory"
	faceplayer
# 7 "data/maps/PebblePerson/scripts.pory"
	goto_if_unset FLAG_MET_PEBBLE_PERSON, Pebble_Person_Script_2
# 15 "data/maps/PebblePerson/scripts.pory"
	setspeaker SP_NAME_PEBBLE_PRO
# 16 "data/maps/PebblePerson/scripts.pory"
	msgbox Pebble_Person_Script_Text_1
# 17 "data/maps/PebblePerson/scripts.pory"
	closemessage
# 18 "data/maps/PebblePerson/scripts.pory"
	release
	end

Pebble_Person_Script_2:
# 8 "data/maps/PebblePerson/scripts.pory"
	setflag FLAG_MET_PEBBLE_PERSON
# 9 "data/maps/PebblePerson/scripts.pory"
	setspeaker SP_NAME_PEBBLE_PRO
# 10 "data/maps/PebblePerson/scripts.pory"
	msgbox Pebble_Person_Script_Text_0
# 11 "data/maps/PebblePerson/scripts.pory"
	closemessage
# 12 "data/maps/PebblePerson/scripts.pory"
	release
	end


# 21 "data/maps/PebblePerson/scripts.pory"
Movement_Spinning:
# 22 "data/maps/PebblePerson/scripts.pory"
	face_right
# 23 "data/maps/PebblePerson/scripts.pory"
	walk_right
# 24 "data/maps/PebblePerson/scripts.pory"
	face_down
# 25 "data/maps/PebblePerson/scripts.pory"
	walk_down
# 26 "data/maps/PebblePerson/scripts.pory"
	face_left
# 27 "data/maps/PebblePerson/scripts.pory"
	walk_left
# 28 "data/maps/PebblePerson/scripts.pory"
	face_up
# 29 "data/maps/PebblePerson/scripts.pory"
	walk_up
# 30 "data/maps/PebblePerson/scripts.pory"
	step_end

Pebble_Person_Script_Text_0:
# 10 "data/maps/PebblePerson/scripts.pory"
	.string "Oh! A visitor! Welcome to my cave!\nI dug it myself, by the way.\lMy brother says I have too much\penergy. He's probably right.\nI just don't like going outside much.\lBut down here? Perfect.\pI'm on a mission, you see.\nThe PERFECT PEBBLE is out there.\lI've actually found it a few times!\pBut it always disappears after.\nEvery single time. Just... gone.\lI think someone's stealing them.\pDon't look at me like that.\nIt's a very serious problem.$"

Pebble_Person_Script_Text_1:
# 16 "data/maps/PebblePerson/scripts.pory"
	.string "Still no perfect pebble.\nStill disappearing.\lThe thief strikes again.\pEvery time. Every single time.$"
