[RS274NGC]
#FEATURES = 30
#SUBROUTINE_PATH = ngc_routines
#REMAP=M6   modalgroup=6  ngc=manual_toolchange_with_averaged_toolsensor
#REMAP=M6 modalgroup=6 prolog=change_prolog ngc=manual_toolchange_with_averaged_toolsensor epilog=change_epilog

[HAL]

HALFILE = Manual_Toolchange_and_Toolsensor.hal

[TOOLSENSOR]
# Absolute coordinates of the toolsensor pad 
X = 8.1
Y = 52.1
# Absolute Z Axis start search coordinates
Z = -25
# Maximum search distance and direction in Z Axis (with sign)
# Kontakt ER25 mit Sensortaster ~ -165,650
# Auslösepunkt ER25 auf Taster ~ -167,720
# Stoppunkt programiert bei -160
MAX_SEARCH_Z_TOOLSENSOR = -135
# Speed of movements while searching for first Contact with toolsensor
SEARCH_SPEED_Z_TOOLSENSOR = 500
#Speed of movements while searching for accurate trigger point of toolsensor
MEASUREMENT_SPEED_Z_TOOLSENSOR = 50
# Diameter of toolsensor pad 
DIAMETER_TOOLSENSOR_PAD = 10
# The speed of the reverse rotation of the spindle when measuring the tool diameter
REVERSE_ROTATION_SPEED_TOOLSENSOR = 300

[TOOLCHANGE_POSITION]
# Absolute coordinates of the tool change position
X = 50
Y = 50
Z = -5