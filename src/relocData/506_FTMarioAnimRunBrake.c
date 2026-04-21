/* AnimJoint data for relocData file 506 (FTMarioAnimRunBrake) */
/* 3040 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimRunBrake_joint1[42];
extern u16 dFTMarioAnimRunBrake_joint2[96];
extern u16 dFTMarioAnimRunBrake_joint4[74];
extern u16 dFTMarioAnimRunBrake_joint5[124];
extern u16 dFTMarioAnimRunBrake_joint6[44];
extern u16 dFTMarioAnimRunBrake_joint7[16];
extern u16 dFTMarioAnimRunBrake_joint8[44];
extern u16 dFTMarioAnimRunBrake_joint10[40];
extern u16 dFTMarioAnimRunBrake_joint11[128];
extern u16 dFTMarioAnimRunBrake_joint12[48];
extern u16 dFTMarioAnimRunBrake_joint13[14];
extern u16 dFTMarioAnimRunBrake_joint15[10];
extern u16 dFTMarioAnimRunBrake_joint16[146];
extern u16 dFTMarioAnimRunBrake_joint18[84];
extern u16 dFTMarioAnimRunBrake_joint20[154];
extern u16 dFTMarioAnimRunBrake_joint21[168];
extern u16 dFTMarioAnimRunBrake_joint23[60];
extern u16 dFTMarioAnimRunBrake_joint24[180];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimRunBrake_joints[] = {
	(u32)dFTMarioAnimRunBrake_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimRunBrake_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimRunBrake_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimRunBrake_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimRunBrake_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimRunBrake_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimRunBrake_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimRunBrake_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimRunBrake_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimRunBrake_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimRunBrake_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimRunBrake_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimRunBrake_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimRunBrake_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimRunBrake_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimRunBrake_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimRunBrake_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTMarioAnimRunBrake_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTMarioAnimRunBrake_joint1[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAY), 0, 755,
	ftAnimSetValRate(FT_ANIM_TRAZ), -67, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), 552, -304,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 223, 9,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), -59, 17,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), -60, 137,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 540, -4, 0, 24,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 17), 540, 73, 0, -23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 17), 223,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimRunBrake_joint2[96] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -124, 1, -113, -40, 41, -4,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -71, 2, -790, -29, -95, -5,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, -122, -40, -416, 0, 289,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -50, 0, -172, -258, 120, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 263, -152, 67, 0, -567,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), -71, -2, -790, 28, -95, 5,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 63, 439, -143, 65, -126, -872,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 63, -143, -126,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 63, -87, -143, 38, -126, 96,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 7), 0, 96,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 0, -73, -115, 57,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), -93, 114,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 5), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTMarioAnimRunBrake_joint4[74] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY), 407, 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 234, 22, 78, 12,
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 263, 5, 109, 5,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 6), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 312, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 457, 62,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 457, 263, 109,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 5), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 457, 263, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 481, 4, 263, 0, 109, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 12), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 513, -23, 262, 0, 112, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 208, -11, 258, -2, 110, -3,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimRunBrake_joint5[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1950, -36, -1305, -27, 1896, 54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1939, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1297, 71, 1936, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1190, 107, 1780, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1771, 163, -1081, 88, 1623, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1613, 235, -1012, 76, 1531, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1300, 229, -929, 40, 1332, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1155, 110, -932, -5, 1206, -92,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1297, 46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1127, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1080, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1233, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1284, -50, 1334, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1479, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1401, -22,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1167, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1302, -8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1487, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1475, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1376, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1349, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1475, 0, -1308, -5, 1336, -13,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimRunBrake_joint6[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -247, -219,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -466, -227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -702, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -737, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -716, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -699, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -668, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -285, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -215, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, 32,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTMarioAnimRunBrake_joint7[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -625, -15,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 17), -625,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTMarioAnimRunBrake_joint8[44] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 188, 0, -68, 3, -36, 5,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 201, 1, -4, 7, 176, 23, 0, 0, 288, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 17), 0, 288, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 203, 3, 203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 201, 0, -4, -3, 176, -12,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTMarioAnimRunBrake_joint10[40] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -190, 0, -42, 0, 97, -11,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -221, -1, 139, 7, -209, -13, 0, 0, 54, 0, -17, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), -221, 1, 139, -7, -209, 13,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 17), 0, 54, -17,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTMarioAnimRunBrake_joint11[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1827, 150, 1005, -60, -2168, 201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1676, 356, 944, -20, -1966, 409,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1113, 375, 964, 59, -1348, 466,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -933, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1063, 73, -1033, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1111, 24, -978, 44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -903, 50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1089, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -955, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -947, 19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -842, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), 1089, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -846,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1077, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -842, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1292, -79,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -929, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -989, -40,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1064, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1044, 10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1034, -45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1150, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1372, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1501, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1164, -14, 1056, 11, -1542, -40,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTMarioAnimRunBrake_joint12[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -489, -71,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -560, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -643, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -621, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -528, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -528, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -519, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -678, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -710, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -810, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTMarioAnimRunBrake_joint13[14] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 804, -16,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 625, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 17), 625,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTMarioAnimRunBrake_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 23),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimRunBrake_joint16[146] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1787, -250, -1505, 4, -1993, 233,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1473, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1500, 9, -1759, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1485, 67, -1649, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1764, 167, -1365, 83, -2051, -203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1808, 8, -1318, 46, -2055, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1782, -32, -1272, 67, -1987, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1743, -143, -1184, 83, -1949, 177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1495, -126, -1105, 44, -1633, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1489, -8, -1096, 7, -1628, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1095, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1478, 46, -1616, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1583, 72, -1737, -83,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1780, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1623, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1623, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1617, -41, -1098, -7, -1771, 51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1348, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1472, -26, -1589, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1487, 20, -1601, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 1553, -20, -1671, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1526, -21, -1379, -22, -1606, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1510, -16, -1392, -13, -1567, 39,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimRunBrake_joint18[84] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 112, -112,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 443,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 887, 485,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 978, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 903, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 740, -371,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 159, -269,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 200, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 229, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 431, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 556, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 578, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 622, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 621, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 773, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 767, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 680, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 518, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, -117,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTMarioAnimRunBrake_joint20[154] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1842, 205, 1956, -393, -1339, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1636, 185, 1562, -278, -1256, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1471, -124, 1399, -51, -1170, -342,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1885, -202, 1460, 18, -1940, -434,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1877, 10, 1436, -27, -2039, -47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1941, -174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1404, -62, -2036, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1311, -76, -1975, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2211, -128, 1251, -27, -1700, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2198, 12, 1257, 5, -1729, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1305, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2186, 44, -1750, -43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2046, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1816, -51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1872, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1353, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1406, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2047, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1814, 23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1913, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1992, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1432, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1653, 11,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1980, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1834, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1796, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1800, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1821, -21, 1657, 4, -1764, 70,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimRunBrake_joint21[168] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1654, -167, 1434, 41, -855, -544,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1821, -114, 1476, 105, -1400, -485,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1882, 336, 1646, -157, -1825, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1148, 548, 1160, -343, -1391, 363,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -785, -157, 958, -66, -1098, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1462, -400, 1027, 129, -1722, -372,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1585, -25, 1217, 260, -1844, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1513, 35, 1548, 156, -1945, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1515, -2, 1530, -18, -1949, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1543, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1960, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1462, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1416, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1440, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1528, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1505, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1953, 41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1800, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1388, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1475, 16, 1330, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1497, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1310, -13, -1797, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1818, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1307, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1279, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1309, 53,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1468, 28, -1749, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1440, 13, 1379, 62, -1651, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1441, -1, 1435, 55, -1578, 73,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimRunBrake_joint23[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 284, 622,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 906, 471,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1227, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 804, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 867, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 969, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1035, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1060, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1074, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1050, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 998, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 761, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 581, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, -143,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTMarioAnimRunBrake_joint24[180] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1670, 94, 1479, 63, 1457, -100,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1897, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1542, 47, 1357, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1573, 107, 1380, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2032, 197, 1757, 233, 1088, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2291, 41, 2039, 73, 1065, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2114, -181, 1903, -132, 1143, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1927, -287, 1775, -172, 1158, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1538, -190, 1558, -93, 1187, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1547, 8, 1587, 28, 1183, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1667, 52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1159, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1556, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1625, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1720, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1707, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1587, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1577, 18, 1158, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1111, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1624, 51, 1758, 53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1828, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1681, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1694, 8, 1126, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1692, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1225, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1828, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1812, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1725, 28, 1835, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1723, -23, 1741, -67,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1275, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1347, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1700, -23, 1668, -73, 1396, 48,
	ftAnimEnd(),
	0x0000, 0x0000,
};
