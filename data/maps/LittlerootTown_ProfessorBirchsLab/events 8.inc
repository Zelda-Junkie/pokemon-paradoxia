@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/LittlerootTown_ProfessorBirchsLab/map.json
@

	.align 2

LittlerootTown_ProfessorBirchsLab_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_SCIENTIST_1, 3, 8, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, LittlerootTown_ProfessorBirchsLab_EventScript_Aide, 0
	object_event 2, OBJ_EVENT_GFX_MAN_1, 6, 4, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, NULL, 0
	object_event 3, OBJ_EVENT_GFX_MAN_3, 8, 4, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, NULL, 0
	object_event 4, OBJ_EVENT_GFX_WOMAN_1, 8, 8, 0, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NONE, 0, NULL, 0
	object_event 5, OBJ_EVENT_GFX_ITEM_BALL, 7, 5, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, LittlerootTown_ProfessorBirchsLab_EventScript_PokeballFuecoco, FLAG_STARTER_2
	object_event 6, OBJ_EVENT_GFX_ITEM_BALL, 6, 5, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, LittlerootTown_ProfessorBirchsLab_EventScript_PokeballSprigatito, FLAG_STARTER_1
	object_event 7, OBJ_EVENT_GFX_ITEM_BALL, 8, 5, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, LittlerootTown_ProfessorBirchsLab_EventScript_PokeballQuaxly, FLAG_STARTER_3

LittlerootTown_ProfessorBirchsLab_MapWarps:
	warp_def 6, 12, 0, 0, MAP_BRAMBLEWOOD_TOWN
	warp_def 7, 12, 0, 0, MAP_BRAMBLEWOOD_TOWN
	warp_def 8, 12, 0, 0, MAP_BRAMBLEWOOD_TOWN

LittlerootTown_ProfessorBirchsLab_MapCoordEvents:
	coord_event 5, 5, 0, VAR_TEMP_0, 0, LittlerootTown_ProfessorBirchsLab_EventScript_Table_Right
	coord_event 9, 5, 0, VAR_TEMP_0, 0, LittlerootTown_ProfessorBirchsLab_EventScript_Table_Left

LittlerootTown_ProfessorBirchsLab_MapBGEvents:
	bg_sign_event 11, 7, 0, BG_EVENT_PLAYER_FACING_NORTH, LittlerootTown_ProfessorBirchsLab_EventScript_Machine
	bg_sign_event 12, 7, 0, BG_EVENT_PLAYER_FACING_NORTH, LittlerootTown_ProfessorBirchsLab_EventScript_Machine
	bg_sign_event 7, 1, 0, BG_EVENT_PLAYER_FACING_ANY, LittlerootTown_ProfessorBirchsLab_EventScript_Book
	bg_sign_event 8, 1, 0, BG_EVENT_PLAYER_FACING_ANY, LittlerootTown_ProfessorBirchsLab_EventScript_Book
	bg_sign_event 1, 1, 0, BG_EVENT_PLAYER_FACING_ANY, LittlerootTown_ProfessorBirchsLab_EventScript_Bookshelf
	bg_sign_event 0, 7, 0, BG_EVENT_PLAYER_FACING_ANY, LittlerootTown_ProfessorBirchsLab_EventScript_Bookshelf
	bg_sign_event 1, 7, 0, BG_EVENT_PLAYER_FACING_ANY, LittlerootTown_ProfessorBirchsLab_EventScript_Bookshelf
	bg_sign_event 2, 7, 0, BG_EVENT_PLAYER_FACING_ANY, LittlerootTown_ProfessorBirchsLab_EventScript_Bookshelf
	bg_sign_event 3, 7, 0, BG_EVENT_PLAYER_FACING_ANY, LittlerootTown_ProfessorBirchsLab_EventScript_Bookshelf
	bg_sign_event 4, 1, 0, BG_EVENT_PLAYER_FACING_ANY, LittlerootTown_ProfessorBirchsLab_EventScript_PC
	bg_sign_event 3, 1, 0, BG_EVENT_PLAYER_FACING_ANY, LittlerootTown_ProfessorBirchsLab_EventScript_PC
	bg_sign_event 1, 10, 0, BG_EVENT_PLAYER_FACING_ANY, LittlerootTown_ProfessorBirchsLab_EventScript_PC
	bg_sign_event 1, 9, 0, BG_EVENT_PLAYER_FACING_ANY, LittlerootTown_ProfessorBirchsLab_EventScript_PC
	bg_sign_event 11, 10, 0, BG_EVENT_PLAYER_FACING_ANY, LittlerootTown_ProfessorBirchsLab_EventScript_PC
	bg_sign_event 11, 9, 0, BG_EVENT_PLAYER_FACING_ANY, LittlerootTown_ProfessorBirchsLab_EventScript_PC

LittlerootTown_ProfessorBirchsLab_MapEvents::
	map_events LittlerootTown_ProfessorBirchsLab_ObjectEvents, LittlerootTown_ProfessorBirchsLab_MapWarps, LittlerootTown_ProfessorBirchsLab_MapCoordEvents, LittlerootTown_ProfessorBirchsLab_MapBGEvents

