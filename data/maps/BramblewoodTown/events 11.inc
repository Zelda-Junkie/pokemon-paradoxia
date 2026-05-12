@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/BramblewoodTown/map.json
@

	.align 2

BramblewoodTown_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_LUCY, 7, 21, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, NULL, 0

BramblewoodTown_MapWarps:
	warp_def 10, 4, 0, 1, MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB
	warp_def 15, 16, 0, 0, MAP_LITTLEROOT_TOWN_MAYS_HOUSE_1F
	warp_def 5, 16, 0, 0, MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F

BramblewoodTown_MapCoordEvents:
	coord_event 7, 20, 0, VAR_TEMP_0, 0, Willow_Pre_Gym_Script_1
	coord_event 8, 20, 0, VAR_TEMP_0, 0, Willow_Pre_Gym_Script_2
	coord_event 9, 20, 0, VAR_TEMP_0, 0, Willow_Pre_Gym_Script_3
	coord_event 10, 20, 0, VAR_TEMP_0, 0, Willow_Pre_Gym_Script_4
	coord_event 11, 20, 0, VAR_TEMP_0, 0, Willow_Pre_Gym_Script_5
	coord_event 12, 20, 0, VAR_TEMP_0, 0, Willow_Pre_Gym_Script_6
	coord_event 13, 20, 0, VAR_TEMP_0, 0, Willow_Pre_Gym_Script_7

BramblewoodTown_MapEvents::
	map_events BramblewoodTown_ObjectEvents, BramblewoodTown_MapWarps, BramblewoodTown_MapCoordEvents, NULL

