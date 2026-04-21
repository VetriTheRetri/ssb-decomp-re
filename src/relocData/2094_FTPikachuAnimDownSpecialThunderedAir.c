/* AnimJoint data for relocData file 2094 (FTPikachuAnimDownSpecialThunderedAir) */
/* 1408 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimDownSpecialThunderedAir_joint1[34];
extern u16 dFTPikachuAnimDownSpecialThunderedAir_joint2[24];
extern u16 dFTPikachuAnimDownSpecialThunderedAir_joint3[36];
extern u16 dFTPikachuAnimDownSpecialThunderedAir_joint5[24];
extern u16 dFTPikachuAnimDownSpecialThunderedAir_joint6[26];
extern u16 dFTPikachuAnimDownSpecialThunderedAir_joint7[16];
extern u16 dFTPikachuAnimDownSpecialThunderedAir_joint8[18];
extern u16 dFTPikachuAnimDownSpecialThunderedAir_joint9[14];
extern u16 dFTPikachuAnimDownSpecialThunderedAir_joint10[24];
extern u16 dFTPikachuAnimDownSpecialThunderedAir_joint11[24];
extern u16 dFTPikachuAnimDownSpecialThunderedAir_joint13[24];
extern u16 dFTPikachuAnimDownSpecialThunderedAir_joint14[26];
extern u16 dFTPikachuAnimDownSpecialThunderedAir_joint16[16];
extern u16 dFTPikachuAnimDownSpecialThunderedAir_joint17[60];
extern u16 dFTPikachuAnimDownSpecialThunderedAir_joint19[36];
extern u16 dFTPikachuAnimDownSpecialThunderedAir_joint21[54];
extern u16 dFTPikachuAnimDownSpecialThunderedAir_joint22[62];
extern u16 dFTPikachuAnimDownSpecialThunderedAir_joint24[36];
extern u16 dFTPikachuAnimDownSpecialThunderedAir_joint25[48];
extern u16 dFTPikachuAnimDownSpecialThunderedAir_joint26[50];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTPikachuAnimDownSpecialThunderedAir_joints[] = {
	(u32)dFTPikachuAnimDownSpecialThunderedAir_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimDownSpecialThunderedAir_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimDownSpecialThunderedAir_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimDownSpecialThunderedAir_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPikachuAnimDownSpecialThunderedAir_joint6, /* [5] joint 6 */
	(u32)dFTPikachuAnimDownSpecialThunderedAir_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimDownSpecialThunderedAir_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimDownSpecialThunderedAir_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimDownSpecialThunderedAir_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimDownSpecialThunderedAir_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimDownSpecialThunderedAir_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPikachuAnimDownSpecialThunderedAir_joint14, /* [13] joint 14 */
	(u32)dFTPikachuAnimDownSpecialThunderedAir_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPikachuAnimDownSpecialThunderedAir_joint17, /* [16] joint 17 */
	(u32)dFTPikachuAnimDownSpecialThunderedAir_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPikachuAnimDownSpecialThunderedAir_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPikachuAnimDownSpecialThunderedAir_joint22, /* [21] joint 22 */
	(u32)dFTPikachuAnimDownSpecialThunderedAir_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTPikachuAnimDownSpecialThunderedAir_joint25, /* [24] joint 25 */
	(u32)dFTPikachuAnimDownSpecialThunderedAir_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTPikachuAnimDownSpecialThunderedAir_joint1[34] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -26, 33, -28,
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1084, -200, 118, -5,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 958, 115,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 1084, 118,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 2), 115, -24,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 2), 958,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 1084, 36, 106, 12,
	ftAnimLoop(0x6800, -66),
};

/* Joint 2 */
u16 dFTPikachuAnimDownSpecialThunderedAir_joint2[24] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 6, 245, 43,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 6, 245, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 6, 17, 245, -5, 43, 0,
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimDownSpecialThunderedAir_joint3[36] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -122, 0, 0, -23, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -120, -116, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -122, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -120, -116, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -122, -39, 0, 11, 0, 0,
	ftAnimLoop(0x6800, -70),
};

/* Joint 5 */
u16 dFTPikachuAnimDownSpecialThunderedAir_joint5[24] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 518, 78, 175,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 518, 78, 175,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 518, -41, 78, -12, 175, 1,
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimDownSpecialThunderedAir_joint6[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2775, 0, -1290, 0, 511, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 2765, 4, -1295, 1, 522, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2775, 10, -1290, 4, 511, -10,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimDownSpecialThunderedAir_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -87, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -112, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -87, 25,
	ftAnimLoop(0x6800, -30),
};

/* Joint 8 */
u16 dFTPikachuAnimDownSpecialThunderedAir_joint8[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -35,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -35, -30,
	ftAnimLoop(0x6800, -34),
};

/* Joint 9 */
u16 dFTPikachuAnimDownSpecialThunderedAir_joint9[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1598, -1559, 4035, 39, 48, 495,
	_FT_ANIM_CMD(11, 0, 1), 24,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimDownSpecialThunderedAir_joint10[24] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 67, -177, 306,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 67, -177, 306,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 67, -26, -177, 31, 306, -8,
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimDownSpecialThunderedAir_joint11[24] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 59, 211, -316,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 59, 211, -316,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 59, -27, 211, -31, -316, 4,
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPikachuAnimDownSpecialThunderedAir_joint13[24] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -519, 43, 183,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -519, 43, 183,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -519, 25, 43, -12, 183, -9,
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimDownSpecialThunderedAir_joint14[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 646, -1, 1224, -3, 475, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 664, -8, 1219, 0, 483, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 646, -17, 1224, 5, 475, -8,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPikachuAnimDownSpecialThunderedAir_joint16[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 10,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPikachuAnimDownSpecialThunderedAir_joint17[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1657, 177, 1984, -12, 1414, -196,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1929, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1948, -9, 1116, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1817, -154, 1230, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1639, 0, 1432, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1815, 155, 1236, -152,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1228, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1950, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1832, -138, 1957, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1672, -159, 1977, 20, 1383, 155,
	ftAnimLoop(0x6800, -116),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPikachuAnimDownSpecialThunderedAir_joint19[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 281, 236,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 639, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 485, -205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 229, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 470, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 622, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 494, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 307, -186,
	ftAnimLoop(0x6800, -70),
};

/* Joint 21 */
u16 dFTPikachuAnimDownSpecialThunderedAir_joint21[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -246, -49, 214, 21, 444, -129,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 230, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -271, 66, 333, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -210, 8, 464, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -316, 4, 278, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 255, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -246, 69, 230, -21, 363, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -176, 69, 211, -19, 461, 98,
	ftAnimLoop(0x6800, -104),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimDownSpecialThunderedAir_joint22[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 199, -171, 387, 43, -132, -178,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 426, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -117, 6, -442, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 41, 157, -301, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 197, 7, -139, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 56, -138, -274, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -80, 10, 431, -2, -378, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 76, 155, 420, -29, -228, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 229, 153, 372, -48, -79, 148,
	ftAnimLoop(0x6800, -120),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTPikachuAnimDownSpecialThunderedAir_joint24[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 486, 194,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 802, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 660, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 476, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 658, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 798, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 662, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 486, -175,
	ftAnimLoop(0x6800, -70),
};

/* Joint 25 */
u16 dFTPikachuAnimDownSpecialThunderedAir_joint25[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1309, 42, 1832, 36, -1063, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1416, 3, 1869, -32, -1160, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1425, 43, 1842, 0, -1113, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1573, -28, 1863, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1361, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1307, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1538, -34, 1836, -26, -1220, 87,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTPikachuAnimDownSpecialThunderedAir_joint26[50] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, -180, -354,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -137, -49, 34, 32, 53, -29, 4915, 182, 5734, 364, 4915, 182,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 4915, -182, 5734, -364, 4915, -182,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -383, 196, -94,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -137, 34, 53,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -383, 196, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -137, 18, 34, -8, 53, 31,
	ftAnimLoop(0x6800, -98),
};
