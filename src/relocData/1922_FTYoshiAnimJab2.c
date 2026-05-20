/* AnimJoint data for relocData file 1922 (FTYoshiAnimJab2) */
/* 2480 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimJab2_joint1[46];
extern u16 dFTYoshiAnimJab2_joint2[50];
extern u16 dFTYoshiAnimJab2_joint3[42];
extern u16 dFTYoshiAnimJab2_joint4[30];
extern u16 dFTYoshiAnimJab2_joint6[22];
extern u16 dFTYoshiAnimJab2_joint7[104];
extern u16 dFTYoshiAnimJab2_joint10[42];
extern u16 dFTYoshiAnimJab2_joint11[134];
extern u16 dFTYoshiAnimJab2_joint12[64];
extern u16 dFTYoshiAnimJab2_joint13[12];
extern u16 dFTYoshiAnimJab2_joint14[12];
extern u16 dFTYoshiAnimJab2_joint15[28];
extern u16 dFTYoshiAnimJab2_joint17[28];
extern u16 dFTYoshiAnimJab2_joint18[82];
extern u16 dFTYoshiAnimJab2_joint20[64];
extern u16 dFTYoshiAnimJab2_joint22[120];
extern u16 dFTYoshiAnimJab2_joint23[136];
extern u16 dFTYoshiAnimJab2_joint25[56];
extern u16 dFTYoshiAnimJab2_joint26[116];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTYoshiAnimJab2_joints[] = {
	(AObjEvent32 *)dFTYoshiAnimJab2_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTYoshiAnimJab2_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTYoshiAnimJab2_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTYoshiAnimJab2_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTYoshiAnimJab2_joint6, /* [4] joint 6 */
	NULL, /* [5] NULL */
	(AObjEvent32 *)dFTYoshiAnimJab2_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTYoshiAnimJab2_joint10, /* [7] joint 10 */
	NULL, /* [8] NULL */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTYoshiAnimJab2_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTYoshiAnimJab2_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTYoshiAnimJab2_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTYoshiAnimJab2_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTYoshiAnimJab2_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTYoshiAnimJab2_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTYoshiAnimJab2_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTYoshiAnimJab2_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTYoshiAnimJab2_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTYoshiAnimJab2_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTYoshiAnimJab2_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTYoshiAnimJab2_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTYoshiAnimJab2_joint1[46] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), -34,
	ftAnimSetValRate(FT_ANIM_TRAY), 772, 384,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 1080, 491, 0, 54,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 1080, -306, 0, -1,
	ftAnimSetValRateT(FT_ANIM_TRAY, 12), 504, -233,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 12), -3,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 672, 446, 0, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 672, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 672, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTYoshiAnimJab2_joint2[50] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 22,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY), -688, 52, 43, 55, -18, 26,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 0, 36, 30, 20, 20, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 223, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 223, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 89, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -89, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, -89, 30, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, -89, 30, 20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTYoshiAnimJab2_joint3[42] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 398, -33, -10, 0, -137, 10,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 16, -16, 0, 0, 0, 7,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 16, -46,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTYoshiAnimJab2_joint4[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 299, -16, 180, -13, 26, -1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 46, 519, 388,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 78, -11, 0, -9, 0, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 78, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 78, 0, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTYoshiAnimJab2_joint6[22] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 195, 19,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 524, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), 0, -30,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTYoshiAnimJab2_joint7[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1441, 174, -1728, -74, 1390, 81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1550, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1772, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1077, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1099, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1629, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1522, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1186, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1738, 48, 1090, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1366, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1195, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1159, -68,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 928, -181,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1619, 56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1564, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 696, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1348, -52, 803, 280,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1723, -76, -1471, -63, 1258, 226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1718, 2, -1476, -2, 1256, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1718, 0, 1256, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -1476,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTYoshiAnimJab2_joint10[42] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -8, 8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 11), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -432, -310,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -620, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -655, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -533, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -766, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -764, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -764, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTYoshiAnimJab2_joint11[134] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -433, 192, 1359, 81, -1318, 87,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -98, 66,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1424, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1230, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1025, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -108, 0, -1113, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 260, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1053, 171,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -51, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1421, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1449, -99,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -167, -145,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -824, -295,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 221, -69, 1330, -118,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -365, -232, 1123, 9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1133, -245,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -735, 548,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -553, -111, 1146, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -19, 535,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 963, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 925, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 618, 15, 599, -461, -83, 368,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -219, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 12, -381, 2, -351,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -145, -78, -103, -52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), -103, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -145, -219,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimJab2_joint12[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1036, 311,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -725, 391,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -253, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -588, -294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -842, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -595, 307,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -224, 297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -240, -270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1040, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -938, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -645, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1083, -239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1002, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1002, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTYoshiAnimJab2_joint13[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 172, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 12,
	ftAnimBlock(0, 21),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTYoshiAnimJab2_joint14[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -536, -893, 0, 0, 156, 0,
	_FT_ANIM_CMD(11, 0, 1), 12,
	ftAnimBlock(0, 21),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimJab2_joint15[28] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), -535, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -190, 24,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 2,
	ftAnimBlock(0, 16),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -190, -43,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -190,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -190,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTYoshiAnimJab2_joint17[28] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), -310, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -153, 28,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 2,
	ftAnimBlock(0, 16),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 263,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -153, -208,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -153,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -153,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTYoshiAnimJab2_joint18[82] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1588, -10, -1602, -45, 1381, 775,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1599, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -1590, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2157, 553,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2488, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 2421, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2368, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1612, -11, 2278, -181,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1595, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2006, -234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1272, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1274, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1388, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1597, -2, 1643, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1596, 0, 1615, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), 1615, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1596, -1595,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimJab2_joint20[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 951, -617,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 6, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 268, 189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 385, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 723, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 780, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 847, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 861, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 659, -327,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 205, -204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 250, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 250, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTYoshiAnimJab2_joint22[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -89, 187, 1594, 34, -1921, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1735, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 98, 66, -1904, 516,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 44, -20, -888, 511,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 91, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -881, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1746, 7, -881, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1722, -91, -1053, -335,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1568, -108, -1577, -398,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1936, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1650, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -39, -85,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -82, 22,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1972, -38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2153, 37,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1672, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1686, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -57, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -11, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2056, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1850, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1868, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -11, 0, -1868, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 1686,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTYoshiAnimJab2_joint23[136] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, -84, -1608, -130, 2379, -872,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), 1506, -620,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1706, 57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1197, 256,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 10240, 8192, 8192,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1137, -228,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 986, -39,
	ftAnimBlock(0, 2),
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 17), 4096, 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 938, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1635, 104, 898, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1570, 312, -1496, -36, 553, -236,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 617, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1822, 123, -1707, -96,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1622, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1816, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1646, -55,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1624, 8, 651, 48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1287, 212,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1608, 1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1596, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1608, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1513, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1454, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1608, 0, -1608, 0, 1471, 17,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTYoshiAnimJab2_joint25[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 6, 179,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 186, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 265,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 537, 433,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 922, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 991, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 683, -320,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 296, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 348, -30,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTYoshiAnimJab2_joint26[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1655, -51, 38, -1, 216, -207,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1814, 123,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 331, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 8, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 272, 212,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 500, -27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1915, 81,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1714, -180,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 322, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 54, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 461, -140,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 68, -74,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1545, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1647, 35, 131, 6, 72, -53,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -40, -12, -174, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1617, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1609, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -46, -7, -223, -66,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -89, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -369, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -203, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -228, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1610, 0, -89, 0, -221, 7,
	ftAnimEnd(),
};
