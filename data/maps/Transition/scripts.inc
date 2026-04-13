# 4 "data/maps/Transition/scripts.pory"

# 5 "data/maps/Transition/scripts.pory"

# 6 "data/maps/Transition/scripts.pory"
Transition_MapScripts::
# 7 "data/maps/Transition/scripts.pory"
    map_script MAP_SCRIPT_ON_LOAD, Transition_EventScript_WarpToBramblewood
# 8 "data/maps/Transition/scripts.pory"
    .byte 0
# 9 "data/maps/Transition/scripts.pory"

# 10 "data/maps/Transition/scripts.pory"
Transition_EventScript_WarpToBramblewood::
# 11 "data/maps/Transition/scripts.pory"
    fadescreen FADE_TO_BLACK
# 12 "data/maps/Transition/scripts.pory"
    warp MAP_LITTLEROOT_TOWN, 11, 19
# 13 "data/maps/Transition/scripts.pory"
    waitstate
# 14 "data/maps/Transition/scripts.pory"
    end
