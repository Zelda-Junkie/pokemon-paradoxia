@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Route1000/map.json
@

	.align 2

Route1000_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_LINK_MAY, 8, 28, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, NULL, FLAG_DEFEATED_BEA_1000

Route1000_MapCoordEvents:
	coord_event 15, 33, 0, VAR_TEMP_0, 0, Route1000_EventScript_BeaTrigger5
	coord_event 15, 32, 0, VAR_TEMP_0, 0, Route1000_EventScript_BeaTrigger4
	coord_event 15, 31, 0, VAR_TEMP_0, 0, Route1000_EventScript_BeaTrigger3
	coord_event 15, 30, 0, VAR_TEMP_0, 0, Route1000_EventScript_BeaTrigger2
	coord_event 15, 29, 0, VAR_TEMP_0, 0, Route1000_EventScript_BeaTrigger1
	coord_event 15, 28, 0, VAR_TEMP_0, 0, Route1000_EventScript_BeaTrigger

Route1000_MapEvents::
	map_events Route1000_ObjectEvents, NULL, Route1000_MapCoordEvents, NULL

