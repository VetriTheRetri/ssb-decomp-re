/* AnimJoint data for relocData file 1655 (FTCaptainAnimVelocityXDownSpecialAir) */
/* 1712 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimVelocityXDownSpecialAir_joint1[16];
extern u16 dFTCaptainAnimVelocityXDownSpecialAir_joint2[48];
extern u16 dFTCaptainAnimVelocityXDownSpecialAir_joint3[24];
extern u16 dFTCaptainAnimVelocityXDownSpecialAir_joint5[36];
extern u16 dFTCaptainAnimVelocityXDownSpecialAir_joint6[86];
extern u16 dFTCaptainAnimVelocityXDownSpecialAir_joint7[40];
extern u16 dFTCaptainAnimVelocityXDownSpecialAir_joint8[18];
extern u16 dFTCaptainAnimVelocityXDownSpecialAir_joint11[26];
extern u16 dFTCaptainAnimVelocityXDownSpecialAir_joint12[98];
extern u16 dFTCaptainAnimVelocityXDownSpecialAir_joint13[40];
extern u16 dFTCaptainAnimVelocityXDownSpecialAir_joint14[10];
extern u16 dFTCaptainAnimVelocityXDownSpecialAir_joint15[16];
extern u16 dFTCaptainAnimVelocityXDownSpecialAir_joint17[10];
extern u16 dFTCaptainAnimVelocityXDownSpecialAir_joint18[80];
extern u16 dFTCaptainAnimVelocityXDownSpecialAir_joint20[48];
extern u16 dFTCaptainAnimVelocityXDownSpecialAir_joint22[84];
extern u16 dFTCaptainAnimVelocityXDownSpecialAir_joint23[52];
extern u16 dFTCaptainAnimVelocityXDownSpecialAir_joint25[72];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTCaptainAnimVelocityXDownSpecialAir_joints[] = {
	(u32)dFTCaptainAnimVelocityXDownSpecialAir_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimVelocityXDownSpecialAir_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimVelocityXDownSpecialAir_joint3, /* [2] joint 3 */
	(u32)dFTCaptainAnimVelocityXDownSpecialAir_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTCaptainAnimVelocityXDownSpecialAir_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimVelocityXDownSpecialAir_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimVelocityXDownSpecialAir_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimVelocityXDownSpecialAir_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTCaptainAnimVelocityXDownSpecialAir_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimVelocityXDownSpecialAir_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimVelocityXDownSpecialAir_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimVelocityXDownSpecialAir_joint15, /* [14] joint 15 */
	(u32)dFTCaptainAnimVelocityXDownSpecialAir_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTCaptainAnimVelocityXDownSpecialAir_joint18, /* [17] joint 18 */
	(u32)dFTCaptainAnimVelocityXDownSpecialAir_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTCaptainAnimVelocityXDownSpecialAir_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTCaptainAnimVelocityXDownSpecialAir_joint23, /* [22] joint 23 */
	(u32)dFTCaptainAnimVelocityXDownSpecialAir_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	0xFFFF0194, /* [25] END */
};

/* Joint 1 */
u16 dFTCaptainAnimVelocityXDownSpecialAir_joint1[16] = {
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 1534,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 18), 3296, 1024,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 12), 3840, -48,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTCaptainAnimVelocityXDownSpecialAir_joint2[48] = {
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 21, 62,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -85, 1, 950, -12, -162, 131,
	ftAnimSetValBlock(FT_ANIM_TRAX), -16,
	ftAnimSetValRateT(FT_ANIM_TRAY, 10), 879, 179,
	ftAnimSetValT(FT_ANIM_TRAX, 30), -54,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 30), -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 141, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 581, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY, 5), 1558, 341, 1087, 365,
	ftAnimSetValRateT(FT_ANIM_TRAY, 15), 1231, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 2566, 135,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 3223,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTCaptainAnimVelocityXDownSpecialAir_joint3[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 18, -598, 65,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, -76, 9,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 63, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 20), 215, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 238,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTCaptainAnimVelocityXDownSpecialAir_joint5[36] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 447, -25, -460, 27, -488, 32,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -70, -10, 13,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), 0, -31, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 527, -9, -267, 9, -219, 15,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -182, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 258, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 242,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimVelocityXDownSpecialAir_joint6[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 724, 11, -1106, 57, -1111, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -589, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 774, -12, -1125, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 710, -23, -1040, 43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 916, -38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -864, 36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -556, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 75, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 89, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -125, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 872, -49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 338, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -826, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -727, -2,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 325, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 303, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 301, -1, -128, -3, -729, -1,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTCaptainAnimVelocityXDownSpecialAir_joint7[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -678, -10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -557, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -523, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -870, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -841, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -665, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -678, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -974, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -974, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTCaptainAnimVelocityXDownSpecialAir_joint8[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -381, -70, -209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 93, 19, -63, 0, 93, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 191, -97, -323,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTCaptainAnimVelocityXDownSpecialAir_joint11[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -258, 821, -368,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -500, 750, -337,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 157, 343, -26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 25, 135, -71,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -153, 113, -38,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTCaptainAnimVelocityXDownSpecialAir_joint12[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1766, 32, 1681, -46, -1199, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1939, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1128, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 1413, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1426, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1523, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1916, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1631, -17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1163, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1320, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1437, -85,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1192, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1538, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1396, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1622, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 1755, 5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1185, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -910, 12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1392, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 1400, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1759, 3, 1401, 1, -904, 6,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTCaptainAnimVelocityXDownSpecialAir_joint13[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1191, 4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -622, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -526, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -867, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -857, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -603, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -484, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -454, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -457, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTCaptainAnimVelocityXDownSpecialAir_joint14[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -182, -222, 401,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 146, 154, 110,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTCaptainAnimVelocityXDownSpecialAir_joint15[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), 1538, -1003, 119, 85, 49, 39,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimVelocityXDownSpecialAir_joint17[10] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 30), 255, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTCaptainAnimVelocityXDownSpecialAir_joint18[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1170, 27, -1455, -43, 1065, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1151, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1733, -91, 859, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1820, -46, 749, -133,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 516, 73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1574, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1328, -171,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -1712, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 632, 94,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 627, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1583, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -1736, -1,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1710, 3, 624, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -1624, 9, 895, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1618, 6, -1737, 0, 917, 21,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTCaptainAnimVelocityXDownSpecialAir_joint20[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 723, -2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 657, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 513, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 630, 192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 849, 216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1401, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1403, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 707, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 583, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 362, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 318, -43,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTCaptainAnimVelocityXDownSpecialAir_joint22[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1839, 29, 1823, 0, 1627, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1193, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 1749, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1871, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1939, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -1504, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1480, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1623, 14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1199, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 1763, 90,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1750, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1640, -11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1607, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1546, 3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1849, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1907, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1544, 1, 1633, -6, 1929, 21,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTCaptainAnimVelocityXDownSpecialAir_joint23[52] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1348, 3, 1175, 5, 298, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1400, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 1455, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 680, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 683, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 723, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1403, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1422, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1444, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), 1337, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1336, 0, 1421, 0, 724, 0,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTCaptainAnimVelocityXDownSpecialAir_joint25[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1260, 2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 1202, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1187, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1101, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1100, -1,
	ftAnimEnd(),
	0x0000, 0x200E, 0x001A, 0xFFFD, 0xFFA3, 0x0001, 0xFF54, 0xFFFC, 0x2803, 0x0019, 0x0083, 0xFFFB, 0x2805, 0x001D, 0x001A, 0x0000, 0x2009, 0x000E, 0xFEFF, 0x0013, 0x2009, 0x0001, 0xFF14, 0x0016, 0x2809, 0x000E, 0x0056, 0x0004, 0x0801, 0x000A, 0x2003, 0x0001, 0x007E, 0xFFFC, 0x2003, 0x0003, 0x0074, 0xFFFF, 0x200F, 0x0001, 0x0073, 0x0000, 0x001A, 0x0000, 0x0058, 0x0002, 0x0000, 0x0000, 0x0000,
};
