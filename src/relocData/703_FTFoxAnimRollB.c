/* AnimJoint data for relocData file 703 (FTFoxAnimRollB) */
/* 3808 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimRollB_joint1[74];
extern u16 dFTFoxAnimRollB_joint2[70];
extern u16 dFTFoxAnimRollB_joint3[10];
extern u16 dFTFoxAnimRollB_joint5[66];
extern u16 dFTFoxAnimRollB_joint6[188];
extern u16 dFTFoxAnimRollB_joint7[86];
extern u16 dFTFoxAnimRollB_joint8[10];
extern u16 dFTFoxAnimRollB_joint9[44];
extern u16 dFTFoxAnimRollB_joint11[10];
extern u16 dFTFoxAnimRollB_joint12[190];
extern u16 dFTFoxAnimRollB_joint13[98];
extern u16 dFTFoxAnimRollB_joint14[104];
extern u16 dFTFoxAnimRollB_joint16[10];
extern u16 dFTFoxAnimRollB_joint17[178];
extern u16 dFTFoxAnimRollB_joint19[78];
extern u16 dFTFoxAnimRollB_joint21[136];
extern u16 dFTFoxAnimRollB_joint22[154];
extern u16 dFTFoxAnimRollB_joint24[78];
extern u16 dFTFoxAnimRollB_joint25[184];
extern u16 dFTFoxAnimRollB_joint26[36];
extern u16 dFTFoxAnimRollB_joint27[46];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTFoxAnimRollB_joints[] = {
	(u32)dFTFoxAnimRollB_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimRollB_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimRollB_joint3, /* [2] joint 3 */
	(u32)dFTFoxAnimRollB_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTFoxAnimRollB_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimRollB_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimRollB_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimRollB_joint9, /* [8] joint 9 */
	(u32)dFTFoxAnimRollB_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTFoxAnimRollB_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimRollB_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimRollB_joint14, /* [13] joint 14 */
	(u32)dFTFoxAnimRollB_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTFoxAnimRollB_joint17, /* [16] joint 17 */
	(u32)dFTFoxAnimRollB_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTFoxAnimRollB_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTFoxAnimRollB_joint22, /* [21] joint 22 */
	(u32)dFTFoxAnimRollB_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTFoxAnimRollB_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimRollB_joint26, /* [25] joint 26 */
	(u32)dFTFoxAnimRollB_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTFoxAnimRollB_joint1[74] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAY), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 5), 0, -499,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 5), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), 800,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 7), 900,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), -480, -2141,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), -1200, -2676,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), -1680, -1927,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 3), -2280, -1784,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAX, 7), 0, -1280,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), -2880, -1784,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), -3480, -1223,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 11), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), -3840, -535,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), -4080, -411,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), -4200,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 0, -4200,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimRollB_joint2[70] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAZ), 48, -20,
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 912,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 1), 600,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 5), 600,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 4), 960,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -804, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 3), 720,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1608, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 4), 960,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 4), -2412,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 3), 600,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 3), -3216,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 9), 600,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 9), -3216,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 3), 912,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 3), -3216,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTFoxAnimRollB_joint3[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -141, -338, -3, 0, 0, 0,
	ftAnimBlock(0, 32),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimRollB_joint5[66] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 309,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 156, 81,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 448, 23,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 171, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 448, -70,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 171, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -217, -3,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 226, 266,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 406, 86,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 174, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 633, 10,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 214, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 536, -27,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 134, -27,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 3), 309,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 156, 81,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTFoxAnimRollB_joint6[188] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 3107, -7, -165, 105, 258, 68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -60, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 3099, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 240, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 157, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 171, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -60, -89, 327, -99,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -400, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -239, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3082, -147, -209, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2804, 47, -12, 97, -387, -710,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3177, 297, -15, -6, -1820, -662,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 3602, 204,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -153, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1712, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1459, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3807, 139, -1490, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 4046, 118, -1670, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -67, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -118, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4200, 326, -182, -250, -1623, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4700, 114, -618, -617, -1950, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4430, -92, -1416, -360, -1519, 138,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 4601, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1340, 73, -1674, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1269, 39, -1821, -53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1388, 91,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1300, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4583, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 4463, 105,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1302, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1233, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1251, -50, -1279, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4562, 126, -1402, -95, -1169, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4715, 153, -1442, -40, -1349, -180,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimRollB_joint7[86] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, 245,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -537, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -278,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -1094,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 543,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -103, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -197, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -328,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -665, -323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -653, 186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -7, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -295,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -598, -275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 39,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimRollB_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 32),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTFoxAnimRollB_joint9[44] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -113, 136, -72,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 75, 135, -77,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 75, 135, -77,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -629, 131, -71,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -242, 134, -74,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 78, 136, -75,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -178, 178, -89,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -113, 136, -72,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimRollB_joint11[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 32),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimRollB_joint12[190] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1741, -124, 1336, 10, 1945, -244,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1348, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1622, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1701, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1700, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1735, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1347, 135, 1701, -255,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 922, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1619, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1591, -36, 1676, 55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1646, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1549, 150, 1281, -498,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1893, 66, -73, -623,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1681, -230, 34, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1432, -218, 1660, 1, 256, 95,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1626, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1094, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 226, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 208, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1624, -161, 240, 147,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1109, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1053, -143, 503, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 808, 229, 626, 542,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1513, 338, 1357, 182, 1588, 347,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1588, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1484, 1, 1321, -206,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 919, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1516, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1573, 15,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1593, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1484, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 862, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 823, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 805, 188,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1692, 372,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1606, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1711, 67, 1392, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1741, 30, 1336, -55, 1945, 252,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimRollB_joint13[98] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -594, 587,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -388, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -894, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 443,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -470, -301,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -611, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -504, 242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -125, 248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -424, -310,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -621, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 26,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTFoxAnimRollB_joint14[104] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 272, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTY), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 7), 0,
	ftAnimSetValT(FT_ANIM_ROTY, 10), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -357, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -357, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 268, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 0, 71, -268, -42,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 446, 99, 0, 85,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 3), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 625, -9, 268, 1,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 4), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 395, -174, 10, -124,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 2), 105,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 0, -127, -178, -54,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 1), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -63, -16, -183, 20,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 2), 4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -60, 8, -104, 57,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 2), 16,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 0, 7, 230, 12,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 5), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 3), 0,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimRollB_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 32),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTFoxAnimRollB_joint17[178] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -405, 263, -223, -192, -26, -377,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -142, 129, -415, -94, -404, -182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -147, -7, -412, 5, -392, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -163, 12, -401, -8, -354, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -142, -148, -415, 78, -404, 132,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 187, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -460, -179, -243, 307,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -500, 0, 198, 277,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 218, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -459, -39, 273, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -579, -32, 72, -66,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -440, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 168, -57, 140, 72,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -16, -87,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 34, -92,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -439, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -379, 74,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -111, -92,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -299, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -279, 50, -87, -56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -132, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -246, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -306, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -368, -7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -146, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -252, -18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -240, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -353, -78,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -370, 33, -248, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -301, 73, -122, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -405, -51, -223, 78, -26, 95,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTFoxAnimRollB_joint19[78] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 354, 651,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1005, 328,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1010, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1024, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1005, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 777, -499,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -385,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 757, 331,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1093, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1095, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1093, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1042, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1032, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 581, -266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, -227,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimRollB_joint21[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 46, -21, 125, -19, -56, -291,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 17, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 133, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -347, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -361, -21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -347, 103,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 25, 79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 231, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -196, 323,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 519, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 72, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 215, -6, -2, 73,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 12, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 220, 86, 63, -290,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -77, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 104, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 73, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 86, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -83, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -373, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 12, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 44, 12,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -575, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -579, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -573, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -510, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 89, 10, -481, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 122, 9, -167, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 46, 1, 125, 3, -56, 111,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTFoxAnimRollB_joint22[154] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1253, -154, 1470, -164, 1743, -205,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1305, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1432, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1537, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1544, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1537, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1301, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1197, -51,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1407, -95,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1691, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1483, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1583, 252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1469, 240, 1142, 119, 1988, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1210, 149, 1436, 180, 1594, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1171, 22, 1504, 70, 1630, 52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1419, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -1175, -45, 1659, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1257, -122, 1638, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1526, -45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1793, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1306, -97,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1254, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1511, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1389, 85,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1775, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1669, 63,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1265, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1402, 73,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1290, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1253, 37, 1470, 68, 1743, 73,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTFoxAnimRollB_joint24[78] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 332, 664,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 997, 329,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 991, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 997, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 924, -198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 600, -459,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 494, 220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 695, 201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 896, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 845, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 893, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 821, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 564, -244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, -232,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimRollB_joint25[184] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 16, 61, -102, 40, 2990, -412,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 78, -78,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 15, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2577, -206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2577, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 2578, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2577, 92,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 3087, 416,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 14, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 31, 76, 57, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 167, -326, 73, -338, 3598, 366,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 4113, 377,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -622, -567, -618, -414,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -759, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -968, -432,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1486, -381, 4575, 336,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 5128, 420,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1731, -185, -746, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -757, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -2089, -451,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2759, -624, 5750, 514,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3339, -378, -719, 145, 6158, 218,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -156, 211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3516, 0, 6188, -54,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -3147, 121, 5885, -72,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -43, 66,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 28, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3094, 43, 5905, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 5847, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -3122, -71,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 27, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -91, -28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5827, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 6072, 155,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3190, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3200, -10, -102, -10, 6207, 134,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimRollB_joint26[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 219, 0, 0, -126, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 385, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 537, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -510, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 602, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -273, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -290, 33,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 0,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTFoxAnimRollB_joint27[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -122, 0, 0, 64, -450,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 195, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -266, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 189, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 379, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 431, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 210, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -178, -72,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -178,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
