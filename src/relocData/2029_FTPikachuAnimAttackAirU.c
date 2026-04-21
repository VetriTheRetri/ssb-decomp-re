/* AnimJoint data for relocData file 2029 (FTPikachuAnimAttackAirU) */
/* 2336 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimAttackAirU_joint1[62];
extern u16 dFTPikachuAnimAttackAirU_joint2[10];
extern u16 dFTPikachuAnimAttackAirU_joint3[56];
extern u16 dFTPikachuAnimAttackAirU_joint4[62];
extern u16 dFTPikachuAnimAttackAirU_joint6[38];
extern u16 dFTPikachuAnimAttackAirU_joint7[112];
extern u16 dFTPikachuAnimAttackAirU_joint8[40];
extern u16 dFTPikachuAnimAttackAirU_joint9[54];
extern u16 dFTPikachuAnimAttackAirU_joint10[10];
extern u16 dFTPikachuAnimAttackAirU_joint11[54];
extern u16 dFTPikachuAnimAttackAirU_joint12[54];
extern u16 dFTPikachuAnimAttackAirU_joint14[38];
extern u16 dFTPikachuAnimAttackAirU_joint15[72];
extern u16 dFTPikachuAnimAttackAirU_joint17[24];
extern u16 dFTPikachuAnimAttackAirU_joint18[68];
extern u16 dFTPikachuAnimAttackAirU_joint20[32];
extern u16 dFTPikachuAnimAttackAirU_joint22[62];
extern u16 dFTPikachuAnimAttackAirU_joint23[56];
extern u16 dFTPikachuAnimAttackAirU_joint25[28];
extern u16 dFTPikachuAnimAttackAirU_joint26[60];
extern u16 dFTPikachuAnimAttackAirU_joint27[122];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTPikachuAnimAttackAirU_joints[] = {
	(u32)dFTPikachuAnimAttackAirU_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimAttackAirU_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimAttackAirU_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimAttackAirU_joint4, /* [3] joint 4 */
	(u32)dFTPikachuAnimAttackAirU_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTPikachuAnimAttackAirU_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimAttackAirU_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimAttackAirU_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimAttackAirU_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimAttackAirU_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimAttackAirU_joint12, /* [11] joint 12 */
	(u32)dFTPikachuAnimAttackAirU_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTPikachuAnimAttackAirU_joint15, /* [14] joint 15 */
	(u32)dFTPikachuAnimAttackAirU_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTPikachuAnimAttackAirU_joint18, /* [17] joint 18 */
	(u32)dFTPikachuAnimAttackAirU_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTPikachuAnimAttackAirU_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTPikachuAnimAttackAirU_joint23, /* [22] joint 23 */
	(u32)dFTPikachuAnimAttackAirU_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTPikachuAnimAttackAirU_joint26, /* [25] joint 26 */
	(u32)dFTPikachuAnimAttackAirU_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTPikachuAnimAttackAirU_joint1[62] = {
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 814, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValT(FT_ANIM_ROTX, 4), 150,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 833, 51, -261, -698,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 833, 197, -261, 576,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 907, 201, -45, 698,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 625, 195, 908, -121, 0, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 1519, 92, 801, -65, 116, -105,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 23), 3216,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 793, 4, -185, -40,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), 814, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPikachuAnimAttackAirU_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -26, 33, -28, 0, 300, -108,
	ftAnimBlock(0, 34),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimAttackAirU_joint3[56] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 999, -124, 300,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 120, -292, 41, 55, 36, -87,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 120, 41, 36,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 254, -28, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 883, 250, -42, -29, 240, 72,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 871, -48, 254,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 3, -3, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 922, 4, -76, -2, 279, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 999, -124, 300,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTPikachuAnimAttackAirU_joint4[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -173, 58, -73,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 267, 146, 48, -3, 28, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 267, -13, 48, 52, 28, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 227, -13, 205, 50, 307, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 227, -2, 200, -6, 320, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 196, -6, 134, -14, 247, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 143, -19, 0, -4, 0, -16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -173, 58, -73,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimAttackAirU_joint6[38] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 199, -70, 479,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 326, 339, 19, 241, 344, -360,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 326, 4, 19, -51, 344, -18,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 17), 335, -32, -102, -23, 300, 34,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), 199, -70, 479,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimAttackAirU_joint7[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1596, 290, -1551, -57, 797, -210,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1556, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1306, 159, 587, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1276, 0, 585, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -793, 53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), 1123, -36,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1552, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1508, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -746, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -684, -46,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1506, 37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1288, -53,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -750, -121, 1088, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1442, -160,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1165, -69,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1374, -76,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1548, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1541, -68,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1596, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1081, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 812, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1596, 0, -1551, -3, 797, -14,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPikachuAnimAttackAirU_joint8[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -758, 748,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 374,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 0, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -594, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -716, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -771, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -758, 12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTPikachuAnimAttackAirU_joint9[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -478, -335, -28,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -280, 65, 34, 123, -81, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -280, 201, 34, 35, -81, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 324, 200, 140, 25, 212, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 320, -4, 109, -8, 213, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 256, -28, 0, -15, 0, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -478, -335, -28,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimAttackAirU_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1598, -1559, 4035, 39, 48, 495,
	ftAnimBlock(0, 34),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimAttackAirU_joint11[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -132, 170, 229,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 698, 277, 172, 0, 234, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 698, -61, 172, 31, 234, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 82, -46, 483, 14, 491, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -92, 25, 423, -13, 199, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 490, -2, 272, -18, 194, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -132, 170, 229,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTPikachuAnimAttackAirU_joint12[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -3, -171, -270,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 503, 168,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -171, -270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 503, -90, -171, 16, -270, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -401, -36, -4, -5, -97, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -113, 53, -271, -14, -145, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 453, 7, -234, 7, -221, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -3, -171, -270,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimAttackAirU_joint14[38] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -469, 245, 91,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -489, -50, 13, -618, 196, 280,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -489, 20, 13, -62, 196, 29,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 17), -440, 4, -135, 59, 265, -27,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), -469, 245, 91,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTPikachuAnimAttackAirU_joint15[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, 268, 122, 67, -890, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 67, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), -858, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -536, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -519, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), -972, 17,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 38, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -41, 34,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -954, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -807, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -10, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 121, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -866, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -890, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -804, 3, 127, 5, -890, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPikachuAnimAttackAirU_joint17[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTPikachuAnimAttackAirU_joint18[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1610, -321, -1367, -62, 629, 497,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1429, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1931, -178, 1126, 286,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1967, 0, 1202, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1105, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -1737, 13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1418, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), -1367, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1085, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 28), 630, -1,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1724, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), -1610, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1610, 0, -1367, 0, 629, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTPikachuAnimAttackAirU_joint20[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 932, -634,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 298, -392,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 146, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 298, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 335, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 931, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 932, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTPikachuAnimAttackAirU_joint22[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 230, -18, 39, 25, 585, -148,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 45, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 250, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 379, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 437, 36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 558, 3,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 44, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 39, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 561, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 585, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 249, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), 230, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 230, 0, 39, 0, 585, 0,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTPikachuAnimAttackAirU_joint23[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 203, -119, 533, -165, -780, 52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 121, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -753, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 347, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 368, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 30), 533, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 129, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), 203, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -756, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), -780, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 203, 0, 533, 0, -780, 0,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTPikachuAnimAttackAirU_joint25[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 595, -241,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 321, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 594, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 595, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 595, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTPikachuAnimAttackAirU_joint26[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -257, -141, -74, 4, 278, 256,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -454, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 33), -74, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 604,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -399, 34, 534, -45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -295, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 351, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 343, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 278, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -291, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), -257, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -257, 0, -74, 0, 278, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 27 */
u16 dFTPikachuAnimAttackAirU_joint27[122] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, -180, -354,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -543, -164, -504,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4505, 5324, 4505,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -524, 6, -51, 37, -493, 3,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -524, -51, -493,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -236, -440, -1160,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), -422, -277, -857, 4915, 6144, 4915,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4505, 5324, 4505,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -534, -79, -686,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 9, 2, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -383, 162, -266, -34, -937, -59,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 277, 158, -254, -23, -984, -81,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 23), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 566, 9, -406, 2, -1424, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 363, -35, -235, 16, -1043, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 212, -70, -238, 27, -865, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -340, -83, 39, 8, -302, 40,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -543, -164, -504,
	ftAnimEnd(),
	0x0000,
};
