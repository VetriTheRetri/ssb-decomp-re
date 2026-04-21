/* AnimJoint data for relocData file 789 (FTFoxAnimLandingWhileFireFoxAir) */
/* 2720 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimLandingWhileFireFoxAir_joint1[20];
extern u16 dFTFoxAnimLandingWhileFireFoxAir_joint2[96];
extern u16 dFTFoxAnimLandingWhileFireFoxAir_joint3[22];
extern u16 dFTFoxAnimLandingWhileFireFoxAir_joint5[28];
extern u16 dFTFoxAnimLandingWhileFireFoxAir_joint6[124];
extern u16 dFTFoxAnimLandingWhileFireFoxAir_joint7[64];
extern u16 dFTFoxAnimLandingWhileFireFoxAir_joint8[10];
extern u16 dFTFoxAnimLandingWhileFireFoxAir_joint9[32];
extern u16 dFTFoxAnimLandingWhileFireFoxAir_joint11[14];
extern u16 dFTFoxAnimLandingWhileFireFoxAir_joint12[150];
extern u16 dFTFoxAnimLandingWhileFireFoxAir_joint13[76];
extern u16 dFTFoxAnimLandingWhileFireFoxAir_joint14[18];
extern u16 dFTFoxAnimLandingWhileFireFoxAir_joint16[12];
extern u16 dFTFoxAnimLandingWhileFireFoxAir_joint17[106];
extern u16 dFTFoxAnimLandingWhileFireFoxAir_joint19[72];
extern u16 dFTFoxAnimLandingWhileFireFoxAir_joint21[98];
extern u16 dFTFoxAnimLandingWhileFireFoxAir_joint22[102];
extern u16 dFTFoxAnimLandingWhileFireFoxAir_joint24[62];
extern u16 dFTFoxAnimLandingWhileFireFoxAir_joint25[110];
extern u16 dFTFoxAnimLandingWhileFireFoxAir_joint26[50];
extern u16 dFTFoxAnimLandingWhileFireFoxAir_joint27[40];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTFoxAnimLandingWhileFireFoxAir_joints[] = {
	(u32)dFTFoxAnimLandingWhileFireFoxAir_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimLandingWhileFireFoxAir_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimLandingWhileFireFoxAir_joint3, /* [2] joint 3 */
	(u32)dFTFoxAnimLandingWhileFireFoxAir_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTFoxAnimLandingWhileFireFoxAir_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimLandingWhileFireFoxAir_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimLandingWhileFireFoxAir_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimLandingWhileFireFoxAir_joint9, /* [8] joint 9 */
	(u32)dFTFoxAnimLandingWhileFireFoxAir_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTFoxAnimLandingWhileFireFoxAir_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimLandingWhileFireFoxAir_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimLandingWhileFireFoxAir_joint14, /* [13] joint 14 */
	(u32)dFTFoxAnimLandingWhileFireFoxAir_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTFoxAnimLandingWhileFireFoxAir_joint17, /* [16] joint 17 */
	(u32)dFTFoxAnimLandingWhileFireFoxAir_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTFoxAnimLandingWhileFireFoxAir_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTFoxAnimLandingWhileFireFoxAir_joint22, /* [21] joint 22 */
	(u32)dFTFoxAnimLandingWhileFireFoxAir_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTFoxAnimLandingWhileFireFoxAir_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimLandingWhileFireFoxAir_joint26, /* [25] joint 26 */
	(u32)dFTFoxAnimLandingWhileFireFoxAir_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTFoxAnimLandingWhileFireFoxAir_joint1[20] = {
	ftAnimSetValRate(FT_ANIM_TRAY), 0, 1440,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 12), 1200,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 12), 0, -1440,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 6), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTFoxAnimLandingWhileFireFoxAir_joint2[96] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 960, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 744,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 3216, 595,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 24), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 937, -514, 393, 651,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 702, -938, 325, -1519,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 585, 538, -176, -1941,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 904, 2041, -402, 850,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 17), 6433,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 1351, 572, 142, 2083,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1119, -1919, 379, 284,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 631, -1489, 248, -861,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 560, 9, 55, -165,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 11), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 634, 415,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 820, 433,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), 960,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 1), 960,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 2), 540,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 6433, 48, 912, -20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTFoxAnimLandingWhileFireFoxAir_joint3[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 268, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 18), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 7), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 11), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), -141, -338,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimLandingWhileFireFoxAir_joint5[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 268, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 268, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 536, 3, 0, 12, 0, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 309, 156, 81,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTFoxAnimLandingWhileFireFoxAir_joint6[124] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -1571, -7, -2506, 18,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), 2412,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 2412, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -1645, 13, -2343, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1637, 5, -2351, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1571, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -2550, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2614, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2096, 255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1563, 36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1308, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2417, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2111, -284,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1803, 210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1795, -312, -1432, -68, -1676, 302,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1380, -37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1503, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1197, 323,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1079, -157,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1409, 58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1534, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1345, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1417, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1500, 14, -1521, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1475, 28, -1501, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1501, -32, -1444, 30, -1359, 142,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimLandingWhileFireFoxAir_joint7[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -644, 21,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -417, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -457, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -686, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -692, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -625, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -352, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -636, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -442, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -603, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -578, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -453, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -231, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -296, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -545, -249,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTFoxAnimLandingWhileFireFoxAir_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTFoxAnimLandingWhileFireFoxAir_joint9[32] = {
	ftAnimSetValAfter(FT_ANIM_TRAZ), 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 336,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY, 30), 0, 336,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 268, -17, 0, 21, 0, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -113, 136, -72,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimLandingWhileFireFoxAir_joint11[14] = {
	ftAnimSetVal(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 62, -18,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), 0, 62, -18,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimLandingWhileFireFoxAir_joint12[150] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 109, -164, 16, 166, 726, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -55, -412, 183, 146, 892, -631,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -715, -374, 309, -103, -537, -835,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -804, -44, -23, -180, -778, -100,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -51, -9, -737, 25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -804,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 45, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -804, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -859, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -882, -44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -919, 158,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 54, 46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 347, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -808, 23, -695, 220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -586, 137, -305, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -482, 212, 232, 105, -379, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -161, 487, 558, 155, -13, 529,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 492, 286, 544, -6, 679, 305,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 319, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 411, -358, 596, -409,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -224, -241, -138, -284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -72, 142, 27, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 60, 69, 201, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 66, 39, 210, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 139, 73, 273, -46, 348, 138,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimLandingWhileFireFoxAir_joint13[76] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -722, -425,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1147, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1053, 333,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -480, 316,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -420, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -502, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -520, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -657, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -681, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -496, 345,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -303, -200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -408, -175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -653, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -430, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -573, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -488, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -608, -119,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTFoxAnimLandingWhileFireFoxAir_joint14[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 272, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 1072,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), 1072,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 12), 0,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimLandingWhileFireFoxAir_joint16[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	_FT_ANIM_CMD(11, 0, 1), 80,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTFoxAnimLandingWhileFireFoxAir_joint17[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1645, -1, -1616, 17, -1374, -296,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -1634, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -1578, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -2050, -289,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2251, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -2134, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2119, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), -2322,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2322, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -2175, 179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1655, -42, -1964, 234,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1779, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1706, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1695, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1561, 98, -1686, -160,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1316, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2015, -277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1629, 69, -2241, -77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1994, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1298, 20, -2170, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1356, -41, -1678, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2019, -25, -1388, -31, -1636, 42,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTFoxAnimLandingWhileFireFoxAir_joint19[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 562,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1046, 295,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1153, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1185, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1188, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1174, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1118, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 536, -451,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 368,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 737, 542,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1090, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 953, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 804, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 446, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 352, -94,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTFoxAnimLandingWhileFireFoxAir_joint21[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 68, -4, -2, 3, 490, -430,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 39, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), 131, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -231, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -186, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -141, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -113, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 103, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 54, 28, 278, 226,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 86, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 557, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 539, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 432, -328,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 157, 0, -117, -386,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -324, 41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 127, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4, -56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 46, 11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -267, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -102, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 53, 6, 129, 1, -55, 46,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTFoxAnimLandingWhileFireFoxAir_joint22[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1655, 0, 1580, -1, -2437, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 1660, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 1638, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -2145, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2196, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -2324, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2251, 130,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1829, 265,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1656, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1989, -56,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1532, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1638, -1, -1494, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1634, -116, -1452, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1405, -152, -1590, -71,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1351, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1904, -48, -1594, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 1953, 13, -1507, 39,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1391, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1439, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1961, 8, 1466, 26, -1478, 29,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTFoxAnimLandingWhileFireFoxAir_joint24[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 926, 65,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1154, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1158, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 1184, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1150, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 571, -473,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -285,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 353,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 707, 523,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1047, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 923, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 782, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 431, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 336, -94,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimLandingWhileFireFoxAir_joint25[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1503, -5, 1591, -3, 1525, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1571, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 1512, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1437, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1466, 28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1492, -9,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1553, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1448, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1513, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1522, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1508, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1636, 179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1867, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1518, 58, 1816, -82,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1624, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1702, -330,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1627, 107, 1155, -424,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1633, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 853, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 979, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1660, 31, 1092, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1703, 11, 1323, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1626, -6, 1709, 5, 1379, 55,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimLandingWhileFireFoxAir_joint26[50] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), -555, 11, 21, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -718, 41, 0, 7, 0, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 16), 317, 67, 169, 10,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 16), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 625, -125, 201, 7,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -434, -125, 211, 3,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 0, 219,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTFoxAnimLandingWhileFireFoxAir_joint27[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 0, -46,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 24), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -532, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), -532, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 435, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -337, -102, 0, -26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -178, -158,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
