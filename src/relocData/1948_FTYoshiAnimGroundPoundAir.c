/* AnimJoint data for relocData file 1948 (FTYoshiAnimGroundPoundAir) */
/* 2256 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimGroundPoundAir_joint1[26];
extern u16 dFTYoshiAnimGroundPoundAir_joint2[82];
extern u16 dFTYoshiAnimGroundPoundAir_joint3[72];
extern u16 dFTYoshiAnimGroundPoundAir_joint4[22];
extern u16 dFTYoshiAnimGroundPoundAir_joint7[28];
extern u16 dFTYoshiAnimGroundPoundAir_joint8[104];
extern u16 dFTYoshiAnimGroundPoundAir_joint9[16];
extern u16 dFTYoshiAnimGroundPoundAir_joint11[8];
extern u16 dFTYoshiAnimGroundPoundAir_joint12[106];
extern u16 dFTYoshiAnimGroundPoundAir_joint13[14];
extern u16 dFTYoshiAnimGroundPoundAir_joint14[8];
extern u16 dFTYoshiAnimGroundPoundAir_joint15[22];
extern u16 dFTYoshiAnimGroundPoundAir_joint16[26];
extern u16 dFTYoshiAnimGroundPoundAir_joint18[26];
extern u16 dFTYoshiAnimGroundPoundAir_joint19[98];
extern u16 dFTYoshiAnimGroundPoundAir_joint21[42];
extern u16 dFTYoshiAnimGroundPoundAir_joint23[108];
extern u16 dFTYoshiAnimGroundPoundAir_joint24[100];
extern u16 dFTYoshiAnimGroundPoundAir_joint26[166];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTYoshiAnimGroundPoundAir_joints[] = {
	(u32)dFTYoshiAnimGroundPoundAir_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimGroundPoundAir_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimGroundPoundAir_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimGroundPoundAir_joint4, /* [3] joint 4 */
	(u32)dFTYoshiAnimGroundPoundAir_joint7, /* [4] joint 7 */
	0x00000000, /* [5] NULL */
	0x00000000, /* [6] NULL */
	(u32)dFTYoshiAnimGroundPoundAir_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimGroundPoundAir_joint9, /* [8] joint 9 */
	(u32)dFTYoshiAnimGroundPoundAir_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTYoshiAnimGroundPoundAir_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimGroundPoundAir_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimGroundPoundAir_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimGroundPoundAir_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimGroundPoundAir_joint16, /* [15] joint 16 */
	(u32)dFTYoshiAnimGroundPoundAir_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTYoshiAnimGroundPoundAir_joint19, /* [18] joint 19 */
	(u32)dFTYoshiAnimGroundPoundAir_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTYoshiAnimGroundPoundAir_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTYoshiAnimGroundPoundAir_joint24, /* [23] joint 24 */
	(u32)dFTYoshiAnimGroundPoundAir_joint26, /* [24] joint 26 */
	0x00000000, /* [25] NULL */
	0xFFFF01F9, /* [26] END */
};

/* Joint 1 */
u16 dFTYoshiAnimGroundPoundAir_joint1[26] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAY), 0, -150,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 10), 240, 101,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 9), 240,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 2), 240,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 3), 240,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -13292,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), -2640, -406,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTYoshiAnimGroundPoundAir_joint2[82] = {
	ftAnimSetValAfter(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX), 0, 0, 608, 0, 4096,
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096,
	ftAnimSetValT(FT_ANIM_ROTX, 8), 0,
	ftAnimSetValT(FT_ANIM_SCAZ, 22), 4096,
	ftAnimSetValT(FT_ANIM_SCAY, 24), 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), 0,
	ftAnimSetValT(FT_ANIM_ROTY, 10), 0,
	ftAnimBlock(0, 5),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 1295, 292,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 3216, 274, 178, 25,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3216, 178,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3216, 178,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY, 21), 3216, 178,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_SCAZ, 1), 4096, -955,
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 2), 2662,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAY, 2), 6758,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 9), 4096,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAY, 8), 4096,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTYoshiAnimGroundPoundAir_joint3[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -893, -47, 0, 4, 0, 2, 0, -8, 214, 8, 1, -56,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), 0, -27, -167,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -893, 3, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -893, -26, 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 11), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 29), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 29), 214, 52, 1, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -1340, -63,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), -1340,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), -1340,
	ftAnimSetValT(FT_ANIM_ROTX, 21), -1340,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 18), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 0, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTYoshiAnimGroundPoundAir_joint4[22] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 1161, 36,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 16, 67, 75,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 804,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 1161, 8,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 29), 1161,
	ftAnimBlock(0, 15),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimGroundPoundAir_joint7[28] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 562, 0, 0, -1, 0, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -156, -1, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 562, 17, 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), 562, 0, 0,
	ftAnimBlock(0, 15),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimGroundPoundAir_joint8[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1162, 745, -1428, 86, -224, -368,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1386, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -416, 560, -593, -421,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -41, 185, -1066, -232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -46, -13, -1058, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -68, -30, -1013, 54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -648, -200,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -247, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1368, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1446, -1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -852, -182,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1236, -7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -224, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -189, 27,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1243, -4, -1445, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), -1269, -4, -1489, 3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -137, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -11, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1272, -3, -1485, 4, -30, -19,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTYoshiAnimGroundPoundAir_joint9[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -8, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), -8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimGroundPoundAir_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -625,
	ftAnimBlock(0, 28),
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTYoshiAnimGroundPoundAir_joint12[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1147, -721, 1417, -91, -224, -372,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 43, -186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1325, -16, -597, -423,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1384, 26, -1071, -228,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1346, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 52, 15, -1053, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 657, 192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1013, 52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -244, 30,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 849, 172, 1375, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1223, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 1483, 13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -224, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -186, 28,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1230, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1263, 4,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -127, 79,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -8, -15,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1484, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1268, 4, 1478, -5, -26, -18,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTYoshiAnimGroundPoundAir_joint13[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -8, 8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTYoshiAnimGroundPoundAir_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -625,
	ftAnimBlock(0, 28),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTYoshiAnimGroundPoundAir_joint15[22] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), -670, 4, 1608, -89,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 156, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -536, 4, -893, -89,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 26), -536, -893,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTYoshiAnimGroundPoundAir_joint16[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 536, 4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 178, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 178, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -262, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 29), -262, 11,
	ftAnimBlock(0, 15),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimGroundPoundAir_joint18[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 89, -5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -109, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -109, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -504, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 29), -504, 10,
	ftAnimBlock(0, 15),
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTYoshiAnimGroundPoundAir_joint19[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 38, -88, 3065, -51, 271, 258,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 3024, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -50, -154, 529, 346,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -269, -81, 964, 161,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -167, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 852, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3010, -9, 767, -80,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 271, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 16), 3065,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -127, 37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 38, 17,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 271, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 198, -70,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 3065,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 3084, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 73, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 118, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 131, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 95, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 111, -7, 3084, 0, 105, 9,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTYoshiAnimGroundPoundAir_joint21[42] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 687, -98,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 589, -264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 158, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 305, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 398, 80,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 18), 687,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 687, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 927, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 918, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 896, -21,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimGroundPoundAir_joint23[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1586, 1597, 119, 96, -316, 487,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 562, 173,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 202, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 11, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1368, -703,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1395, -29, 518, -48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -339, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1426, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1586, 67,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 211, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 190, 25,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1501, 76,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1424, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -365, -26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -685, -74,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 216, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 274, -33,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1421, 36, -784, -45,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1404, -75, -754, -20,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 237, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1484, -79, 200, -36, -781, -27,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTYoshiAnimGroundPoundAir_joint24[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -34, 88, 150, 45, 286, 257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 54, 151, 196, -13, 543, 360,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 269, 78, 123, -9, 1006, 163,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 167, -41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 200, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 870, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 782, -82,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 286, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 129, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -34, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 201, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 156, -1,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 286, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 211, -70,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -69, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -113, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 148, -9, 145, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 134, -1, 112, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -106, 6, 134, 0, 121, 9,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTYoshiAnimGroundPoundAir_joint26[166] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 670, -101,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 569, -297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 75, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 271, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 371, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 670, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 670, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 803, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 901, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 905, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 883, -22,
	ftAnimEnd(),
	0x0000, 0x200E, 0xFF64, 0xFA26, 0xFA59, 0x0098, 0xF877, 0x0215, 0x2809, 0x0002, 0xFC53, 0x00CD, 0x2007, 0x0001, 0xF98A, 0xFFDB, 0xFAF2, 0x001F, 0x2007, 0x0001, 0xFF19, 0x02C4, 0xFA99, 0xFFDD, 0x2805, 0x0006, 0xFAEF, 0xFFF5, 0x200B, 0x0001, 0xFF13, 0xFFFF, 0xFC27, 0xFFCE, 0x2809, 0x000B, 0xF877, 0x0000, 0x2003, 0x0001, 0xFF17, 0x0007, 0x2803, 0x0006, 0x0031, 0x0011, 0x0801, 0x0004, 0x2005, 0x0001, 0xFADB, 0xFFE7, 0x2805, 0x0009, 0xFA59, 0x0000, 0x0801, 0x0001, 0x2003, 0x0001, 0x0025, 0xFFB6, 0x2003, 0x0002, 0xFF64, 0xFFD2, 0x2003, 0x0001, 0xFF40, 0xFFDD, 0x2803, 0x000C, 0xFEEA, 0x0025, 0x2009, 0x0001, 0xF877, 0x0000, 0x4009, 0x0007, 0xF877, 0x0801, 0x0003, 0x3805, 0x0001, 0xFA59, 0x2805, 0x0007, 0xFA06, 0xFFFA, 0x0801, 0x0003, 0x2009, 0x0001, 0xF877, 0xFFD5, 0x2009, 0x0003, 0xF7D4, 0x0006, 0x200F, 0x0001, 0xFF06, 0x0016, 0xFA09, 0x0004, 0xF7E0, 0x000E, 0x200F, 0x0001, 0xFF16, 0x0010, 0xFA10, 0x0006, 0xF7F1, 0x0011, 0x0000, 0x0000, 0x0000,
};
