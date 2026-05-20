/* AnimJoint data for relocData file 694 (FTFoxAnimDownBackD) */
/* 2832 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimDownBackD_joint1[16];
extern u16 dFTFoxAnimDownBackD_joint2[62];
extern u16 dFTFoxAnimDownBackD_joint3[14];
extern u16 dFTFoxAnimDownBackD_joint5[28];
extern u16 dFTFoxAnimDownBackD_joint6[176];
extern u16 dFTFoxAnimDownBackD_joint7[82];
extern u16 dFTFoxAnimDownBackD_joint8[14];
extern u16 dFTFoxAnimDownBackD_joint11[36];
extern u16 dFTFoxAnimDownBackD_joint12[152];
extern u16 dFTFoxAnimDownBackD_joint13[78];
extern u16 dFTFoxAnimDownBackD_joint14[46];
extern u16 dFTFoxAnimDownBackD_joint16[10];
extern u16 dFTFoxAnimDownBackD_joint17[138];
extern u16 dFTFoxAnimDownBackD_joint19[48];
extern u16 dFTFoxAnimDownBackD_joint21[118];
extern u16 dFTFoxAnimDownBackD_joint22[114];
extern u16 dFTFoxAnimDownBackD_joint24[40];
extern u16 dFTFoxAnimDownBackD_joint25[114];
extern u16 dFTFoxAnimDownBackD_joint26[24];
extern u16 dFTFoxAnimDownBackD_joint27[52];

/* Joint pointer table (27 entries, 108 bytes) */
AObjEvent32 * dFTFoxAnimDownBackD_joints[] = {
	(AObjEvent32 *)dFTFoxAnimDownBackD_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTFoxAnimDownBackD_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTFoxAnimDownBackD_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTFoxAnimDownBackD_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTFoxAnimDownBackD_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTFoxAnimDownBackD_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTFoxAnimDownBackD_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTFoxAnimDownBackD_joint11, /* [8] joint 11 */
	NULL, /* [9] NULL */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTFoxAnimDownBackD_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTFoxAnimDownBackD_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTFoxAnimDownBackD_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTFoxAnimDownBackD_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTFoxAnimDownBackD_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTFoxAnimDownBackD_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTFoxAnimDownBackD_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTFoxAnimDownBackD_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTFoxAnimDownBackD_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTFoxAnimDownBackD_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTFoxAnimDownBackD_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTFoxAnimDownBackD_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTFoxAnimDownBackD_joint1[16] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), -600, -1200,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 23), -4200,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 8), -4200,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimDownBackD_joint2[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 804, 0, 9, 189, -13,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAY, 5), 536, -144, 420, 40,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 20), 9, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 20), -2814, -121, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 240, -48,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 360, 659,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), 900,
	ftAnimSetValRateT(FT_ANIM_TRAY, 7), 360, 5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 5), 9, 19, -13, -3,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 11), -20, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 11), -3216, 0, 48, 912,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTFoxAnimDownBackD_joint3[14] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 36), -3, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 36), -141, -338,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTFoxAnimDownBackD_joint5[28] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 6, 0, 156,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), 187, 15, 0, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 15), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 402, 5, 0, 7, 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 309, 156, 81,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTFoxAnimDownBackD_joint6[176] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -578, 167, -555, -25, -14, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -487, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -411, 491, -44, -328,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 404, 475, -670, -332,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 539, 76, -260, 151, -709, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -109, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 557, 11, -675, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -710, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 518, 20,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -84, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 50, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 89, -61, -732, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -627, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -71, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -128, -52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -527, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -659, -48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1388, 59,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 551, 52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 926, -107,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -521, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -493, 189,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1265, 208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 759, -122, -970, 222,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 228, -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -171, 173, -820, 133,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -493, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -136, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -142, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -181, 26,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -380, 264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 0, -157, 34, 292,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -86, -54, 205, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -109, -23, -165, 16, 258, 53,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimDownBackD_joint7[82] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -692, 48,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -643, 239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -213, 321,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -387, -273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -546, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -696, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -638, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -606, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -508, 299,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -453, -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -544, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, -14,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTFoxAnimDownBackD_joint8[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 269, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 36), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTFoxAnimDownBackD_joint11[36] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -402, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 15), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 187, 26, 0, 26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 402, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 187, -24, 0, 6, 0, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -113, -1, -72, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), 136,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTFoxAnimDownBackD_joint12[152] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1467, 10, 1309, 5, 562, 57,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 1274, -42, 1446, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 535, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 615, 58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 869, 101,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1228, -46, 1457, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1161, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 1556, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1602, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1438, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 956, 69,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 981, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1452, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1549, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1194, 19, 1719, 69, 794, -105,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 719, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1315, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1624, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1597, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1634, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 710, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 902, 62,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1366, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1470, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1619, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1334, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 978, 232,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1736, 271,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1633, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1723, 53, 1335, 0, 1910, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1741, 18, 1336, 1, 1945, 34,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimDownBackD_joint13[78] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -728, 57,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -670, 208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -311, 331,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -329, -259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -519, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -563, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -443, 278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -440, -331,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -662, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -642, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 47,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTFoxAnimDownBackD_joint14[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 272, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 268, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 357, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 714, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1072, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 982, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 714, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 446, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 268, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTFoxAnimDownBackD_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 36),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTFoxAnimDownBackD_joint17[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 106, -50, -86, -12, -162, -131,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -183, -11, -764, -302,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -258, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -424, -52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -297, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -128, 30, -1117, -269,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1380, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 70, 27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -263, 33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -129, -10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1365, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1196, -35,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 95, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 324, 19,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1237, -44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1481, 32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -139, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -329, -95,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1406, 135,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -350, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 320, -55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -222, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -429, -71,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -239, 26,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -297, -62, -234, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -398, -13, -43, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -405, -7, -223, 15, -26, 16,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTFoxAnimDownBackD_joint19[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 292, 233,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 864, 303,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1132, 187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1192, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1194, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 1180, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1182, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1119, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1016, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 399, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, -45,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTFoxAnimDownBackD_joint21[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -561, -32, -424, 5, 419, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -368, 320, -350, 137, 74, -275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 46, 283, -144, 184, -215, -219,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -444, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 142, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -33, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -126, -65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -23, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -445, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -143, 30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 145, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 98, 9,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -7, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 15, -39,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -116, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -327, 20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 118, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 126, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -17, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 45, 1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -295, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -78, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 46, 0, 125, -1, -56, 22,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTFoxAnimDownBackD_joint22[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -585, -84, 1270, -52, -1497, -83,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1161, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -670, -235, -1581, -241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1056, -385, -1981, -439,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1599, -108, -2775, -225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1275, 102,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1509, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1658, -43, -2910, -82,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -1668, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -2888, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2857, 31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -2054, 96,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1500, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1183, -27,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1644, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1417, 13,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1163, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1454, 26,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1396, 24, -1958, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -1257, 8, -1495, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1253, 4, 1470, 16, -1473, 21,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTFoxAnimDownBackD_joint24[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 915, 70,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1261, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1225, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 1254, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1250, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 907, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 778, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 385, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, -53,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTFoxAnimDownBackD_joint25[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 107, -138, -50, -26, -94, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -170, 37, -405, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -31, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -251, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 210, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 286, 57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 209, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -127, 46, -411, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 16, -56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -461, -22,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 212, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 52, -9,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -44, -63,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -216, 94,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -492, -42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -531, 45,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -111, 61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -98, -5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -479, 55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -247, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 40, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 16, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 16, 0, -102, -3, -226, 21,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimDownBackD_joint26[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), -804, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1616, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 7), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 18), -510, 55, 0, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 11), 0, 219,
	ftAnimEnd(),
	0x0000,
};

/* Joint 27 */
u16 dFTFoxAnimDownBackD_joint27[52] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), -404, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -893, -27, -4, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -567, 74, -11, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), -77, 98, -54, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 708, 33, -73, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 261, -86, -98, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -329, -40, -115, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -178, -122,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
