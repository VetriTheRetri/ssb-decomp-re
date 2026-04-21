/* AnimJoint data for relocData file 1831 (FTYoshiAnimCrouchIdle) */
/* 2432 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimCrouchIdle_joint2[36];
extern u16 dFTYoshiAnimCrouchIdle_joint3[58];
extern u16 dFTYoshiAnimCrouchIdle_joint6[56];
extern u16 dFTYoshiAnimCrouchIdle_joint7[74];
extern u16 dFTYoshiAnimCrouchIdle_joint8[48];
extern u16 dFTYoshiAnimCrouchIdle_joint10[8];
extern u16 dFTYoshiAnimCrouchIdle_joint11[108];
extern u16 dFTYoshiAnimCrouchIdle_joint12[48];
extern u16 dFTYoshiAnimCrouchIdle_joint13[8];
extern u16 dFTYoshiAnimCrouchIdle_joint14[12];
extern u16 dFTYoshiAnimCrouchIdle_joint15[36];
extern u16 dFTYoshiAnimCrouchIdle_joint17[36];
extern u16 dFTYoshiAnimCrouchIdle_joint18[128];
extern u16 dFTYoshiAnimCrouchIdle_joint20[40];
extern u16 dFTYoshiAnimCrouchIdle_joint22[176];
extern u16 dFTYoshiAnimCrouchIdle_joint23[128];
extern u16 dFTYoshiAnimCrouchIdle_joint25[40];
extern u16 dFTYoshiAnimCrouchIdle_joint26[124];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTYoshiAnimCrouchIdle_joints[] = {
	0x00000000, /* [0] NULL */
	(u32)dFTYoshiAnimCrouchIdle_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimCrouchIdle_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimCrouchIdle_joint6, /* [3] joint 6 */
	0x00000000, /* [4] NULL */
	0x00000000, /* [5] NULL */
	(u32)dFTYoshiAnimCrouchIdle_joint7, /* [6] joint 7 */
	(u32)dFTYoshiAnimCrouchIdle_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimCrouchIdle_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTYoshiAnimCrouchIdle_joint11, /* [10] joint 11 */
	(u32)dFTYoshiAnimCrouchIdle_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimCrouchIdle_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimCrouchIdle_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimCrouchIdle_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimCrouchIdle_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTYoshiAnimCrouchIdle_joint18, /* [17] joint 18 */
	(u32)dFTYoshiAnimCrouchIdle_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTYoshiAnimCrouchIdle_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTYoshiAnimCrouchIdle_joint23, /* [22] joint 23 */
	(u32)dFTYoshiAnimCrouchIdle_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTYoshiAnimCrouchIdle_joint26, /* [25] joint 26 */
};

/* Joint 2 */
u16 dFTYoshiAnimCrouchIdle_joint2[36] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 4, -3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -311, -146,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 50), -178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 50), 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 50), -178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 50), 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 50), -178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 50), 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 50), -178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 50), 4,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTYoshiAnimCrouchIdle_joint3[58] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 670, 2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -30, -1, -26,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 150), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 50), 777,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 50), 670, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 50), 804,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 50), 670, 0, 0, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 49), 777, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 51), 670, 0, 0, -4,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 48), 804,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 29), -178, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 19), -152, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 52), 670, 0, 0, 1,
	ftAnimLoop(0x6800, -114),
};

/* Joint 6 */
u16 dFTYoshiAnimCrouchIdle_joint6[56] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -565, 1,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 150), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 50), -489,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 50), -565,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 50), -489,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 50), -565, -1, 0, 1, 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 54), -641, 159, -383,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 46), -565, 0, 0, -4, 0, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 37), -693, -251, 466,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 63), -565, 1, 0, 2, 0, -4,
	ftAnimLoop(0x6800, -108),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimCrouchIdle_joint7[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1685, 0, -1707, 0, 552, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 210), -1681, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 399), -1707, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 81), 585, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 582, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 98), 588, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 585, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 99), 588, -2,
	ftAnimBlock(0, 29),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1681, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 188), -1685, 0,
	ftAnimBlock(0, 69),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 585, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 99), 588, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 585, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 552, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1685, 0, -1707, 0, 552, 0,
	ftAnimLoop(0x6800, -144),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimCrouchIdle_joint8[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -513, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 84), -537, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -535, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 97), -542, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -540, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 100), -540, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -537, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 98), -542, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -540, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -513, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -513, 0,
	ftAnimLoop(0x6800, -94),
};

/* Joint 10 */
u16 dFTYoshiAnimCrouchIdle_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -634,
	ftAnimBlock(0, 400),
	ftAnimLoop(0x6800, -14),
};

/* Joint 11 */
u16 dFTYoshiAnimCrouchIdle_joint11[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1388, 0, 1865, 0, -2713, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 86), -1404, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 399), 1865, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 78), -2664, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2667, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 100), -2667, -3,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1402, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 96), -1410, 2,
	ftAnimBlock(0, 92),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2671, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 99), -2667, -3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1408, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 100), -1408, 2,
	ftAnimBlock(0, 95),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2671, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 99), -2667, -3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1406, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 99), -1408, 2,
	ftAnimBlock(0, 94),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2671, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -2713, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1406, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), -1388, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1388, 0, 1865, 0, -2713, 0,
	ftAnimLoop(0x6800, -212),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimCrouchIdle_joint12[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -435, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 83), -465, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -462, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 97), -470, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -468, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 100), -468, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -465, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 98), -470, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -468, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -436, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -435, 0,
	ftAnimLoop(0x6800, -94),
};

/* Joint 13 */
u16 dFTYoshiAnimCrouchIdle_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -634,
	ftAnimBlock(0, 400),
	ftAnimLoop(0x6800, -14),
};

/* Joint 14 */
u16 dFTYoshiAnimCrouchIdle_joint14[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 156, 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -536, -446, 0,
	ftAnimBlock(0, 400),
	ftAnimLoop(0x6800, -22),
};

/* Joint 15 */
u16 dFTYoshiAnimCrouchIdle_joint15[36] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 0, -4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 216, -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 44), -223,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 56), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 44), -223,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 56), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 44), -223,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 56), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 44), -223,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 56), 0,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTYoshiAnimCrouchIdle_joint17[36] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 196, -8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 13, -179,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 54), -285,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 46), 196,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 54), -285,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 46), 196,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 54), -285,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 46), 196,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 54), -285,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 46), 196,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTYoshiAnimCrouchIdle_joint18[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 507, 0, -280, -5, -1068, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 103), -1067, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 258), 519, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 78), -358, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -352, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 73), -459, 0,
	ftAnimBlock(0, 24),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1066, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 93), -1067, 0,
	ftAnimBlock(0, 48),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -458, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 69), -351, -5,
	ftAnimBlock(0, 44),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1067, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 93), -1060, -1,
	ftAnimBlock(0, 24),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -356, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 61), -321, 4,
	ftAnimBlock(0, 35),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 518, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 140), 508, 0,
	ftAnimBlock(0, 25),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -317, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 87), -397, 5,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1062, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 96), -1053, -1,
	ftAnimBlock(0, 80),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -391, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), -282, 1,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1055, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -1067, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 507, 0, -280, 1, -1068, 0,
	ftAnimLoop(0x6800, -252),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimCrouchIdle_joint20[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 966, -3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 140), 926, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 925, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 103), 922, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 921, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 98), 905, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 903, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 55), 964, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 966, 1,
	ftAnimLoop(0x6800, -78),
};

/* Joint 22 */
u16 dFTYoshiAnimCrouchIdle_joint22[176] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1001, -3, 443, 3, -439, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 69), 943, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 80), 504, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 68), -562, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -555, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 77), -610, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 948, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 81), 921, 0,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 499, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 92), 538, -5,
	ftAnimBlock(0, 65),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -613, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 61), -446, -1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 922, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 93), 927, -2,
	ftAnimBlock(0, 21),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 533, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 66), 598, 3,
	ftAnimBlock(0, 34),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -448, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 59), -539, 5,
	ftAnimBlock(0, 31),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 601, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 80), 508, 5,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 925, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 61), 1000, 0,
	ftAnimBlock(0, 22),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -534, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 75), -626, -4,
	ftAnimBlock(0, 38),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1000, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 63), 946, 3,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 513, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 64), 478, -4,
	ftAnimBlock(0, 22),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -630, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 54), -440, 1,
	ftAnimBlock(0, 26),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 950, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 27), 999, 1,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 474, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 12), 443, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1001, 1, 443, 0, -439, 1,
	ftAnimLoop(0x6800, -348),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimCrouchIdle_joint23[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1110, 0, -1861, -5, -2684, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 100), -2684, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 254), 1094, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 77), -1947, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1941, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 69), -2047, -1,
	ftAnimBlock(0, 22),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2684, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 90), -2676, -1,
	ftAnimBlock(0, 46),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2048, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 72), -1924, -5,
	ftAnimBlock(0, 43),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2678, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 93), -2664, -2,
	ftAnimBlock(0, 28),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1930, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 59), -1924, 5,
	ftAnimBlock(0, 33),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1094, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 144), 1110, 0,
	ftAnimBlock(0, 25),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1919, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 92), -1974, 5,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2666, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 100), -2664, -2,
	ftAnimBlock(0, 87),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1968, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), -1862, 1,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2667, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -2684, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1110, 0, -1861, 1, -2684, 0,
	ftAnimLoop(0x6800, -252),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimCrouchIdle_joint25[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1011, -3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 141), 968, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 967, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 101), 966, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 965, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 99), 951, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 950, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 55), 1009, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1011, 1,
	ftAnimLoop(0x6800, -78),
};

/* Joint 26 */
u16 dFTYoshiAnimCrouchIdle_joint26[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2002, 1, -290, -4, -165, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 103), 2002, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 229), -176, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 76), -375, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -370, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 71), -465, 0,
	ftAnimBlock(0, 26),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2001, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 98), 2002, 0,
	ftAnimBlock(0, 44),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -466, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 72), -352, -4,
	ftAnimBlock(0, 53),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2002, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 98), 2002, 0,
	ftAnimBlock(0, 18),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -357, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 59), -343, 4,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -176, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 169), -165, 0,
	ftAnimBlock(0, 51),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -338, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 91), -396, 5,
	ftAnimBlock(0, 19),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2002, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 96), 2003, 0,
	ftAnimBlock(0, 71),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -391, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), -291, 1,
	ftAnimBlock(0, 24),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2003, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2002, 0, -290, 1, -165, 0,
	ftAnimLoop(0x6800, -244),
	ftAnimEnd(),
};
