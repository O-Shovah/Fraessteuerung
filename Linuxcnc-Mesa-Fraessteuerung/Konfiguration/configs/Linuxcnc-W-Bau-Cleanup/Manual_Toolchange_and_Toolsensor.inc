[RS274NGC]
FEATURES = 30
SUBROUTINE_PATH = ngc_routines
REMAP=M6   modalgroup=6  ngc=manual_toolchange_with_averaged_toolsensor

[HAL]

HALFILE = Manual_Toolchange_and_Toolsensor.hal

[TOOLSENSOR]
# Absolute coordinates of the toolsensor pad 
X = 3
Y = 52
# Absolute Z Axis start search coordinates
Z = -25
# Maximum search distance and direction in Z Axis (with sign)
MAX_SEARCH_Z_TOOLSENSOR = -150
# Speed of movements while serching for first Contact with toolsensor
SEARCH_SPEED_Z_TOOLSENSOR = 600
# Diameter of toolsensor pad 
DIAMETER_TOOLSENSOR_PAD = 10
# The speed of the reverse rotation of the spindle when measuring the tool diameter
REVERSE_ROTATION_SPEED_TOOLSENSOR = 300

[TOOLCHANGE_POSITION]
# Absolute coordinates of the tool change position
X = 50
Y = 50
Z = -5