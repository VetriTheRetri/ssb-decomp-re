/* AnimJoint data for relocData file 1907 (FTYoshiAnimItemThrowDash) */
/* 3392 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimItemThrowDash_joint1[10];
extern u16 dFTYoshiAnimItemThrowDash_joint2[28];
extern u16 dFTYoshiAnimItemThrowDash_joint3[128];
extern u16 dFTYoshiAnimItemThrowDash_joint4[66];
extern u16 dFTYoshiAnimItemThrowDash_joint5[62];
extern u16 dFTYoshiAnimItemThrowDash_joint7[16];
extern u16 dFTYoshiAnimItemThrowDash_joint8[166];
extern u16 dFTYoshiAnimItemThrowDash_joint9[54];
extern u16 dFTYoshiAnimItemThrowDash_joint11[18];
extern u16 dFTYoshiAnimItemThrowDash_joint12[200];
extern u16 dFTYoshiAnimItemThrowDash_joint13[60];
extern u16 dFTYoshiAnimItemThrowDash_joint14[40];
extern u16 dFTYoshiAnimItemThrowDash_joint15[22];
extern u16 dFTYoshiAnimItemThrowDash_joint16[30];
extern u16 dFTYoshiAnimItemThrowDash_joint18[40];
extern u16 dFTYoshiAnimItemThrowDash_joint19[140];
extern u16 dFTYoshiAnimItemThrowDash_joint21[64];
extern u16 dFTYoshiAnimItemThrowDash_joint23[120];
extern u16 dFTYoshiAnimItemThrowDash_joint24[150];
extern u16 dFTYoshiAnimItemThrowDash_joint26[80];
extern u16 dFTYoshiAnimItemThrowDash_joint27[148];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTYoshiAnimItemThrowDash_joints[] = {
	(u32)dFTYoshiAnimItemThrowDash_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimItemThrowDash_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimItemThrowDash_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimItemThrowDash_joint4, /* [3] joint 4 */
	(u32)dFTYoshiAnimItemThrowDash_joint5, /* [4] joint 5 */
	(u32)dFTYoshiAnimItemThrowDash_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTYoshiAnimItemThrowDash_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimItemThrowDash_joint9, /* [8] joint 9 */
	(u32)dFTYoshiAnimItemThrowDash_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTYoshiAnimItemThrowDash_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimItemThrowDash_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimItemThrowDash_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimItemThrowDash_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimItemThrowDash_joint16, /* [15] joint 16 */
	(u32)dFTYoshiAnimItemThrowDash_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTYoshiAnimItemThrowDash_joint19, /* [18] joint 19 */
	(u32)dFTYoshiAnimItemThrowDash_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTYoshiAnimItemThrowDash_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTYoshiAnimItemThrowDash_joint24, /* [23] joint 24 */
	(u32)dFTYoshiAnimItemThrowDash_joint26, /* [24] joint 26 */
	0x00000000, /* [25] NULL */
	(u32)dFTYoshiAnimItemThrowDash_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTYoshiAnimItemThrowDash_joint1[10] = {
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 2365,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 40), 4800,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTYoshiAnimItemThrowDash_joint2[28] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAY), 746, 25,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 9), 648,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY, 1), 5,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 746, 39,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 18), 746, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 16), 672,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTYoshiAnimItemThrowDash_joint3[128] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX), -30,
	ftAnimSetValRateBlock(FT_ANIM_ROTZ | FT_ANIM_TRAZ), 44, 8, 43, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 139, -7,
	_FT_ANIM_CMD(11, FT_ANIM_ROTZ, 1), 6,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 12), 30, 29, 43, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 6,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), 0, -1,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 9), -38,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 5,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAY), 240,
	ftAnimSetValRateBlock(FT_ANIM_ROTY), -284, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -109, 37,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 1,
	ftAnimSetValRateT(FT_ANIM_TRAY, 7), -60, -64,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY, 1), 1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, -14, -20, 9, -44, -34,
	ftAnimSetValRateT(FT_ANIM_TRAY, 6), 135, -48,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -183, -15, -10, 0, -207, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 6), 36, 44,
	ftAnimSetValRateT(FT_ANIM_TRAY, 8), -146, -30,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 12), 30, -10, 43, -6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -174, 35, -9, 1, -193, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 134, 7, 0, -3, -61, 8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_TRAY, 20), 30, 30,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 17), -89,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 17), 0, -3, 0, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAX, 16), 0, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 16), 20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTYoshiAnimItemThrowDash_joint4[66] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 16, 67, 75,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 36), 9, -2, 37, -10, 119, 14,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 12,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 446, 31, -474, -67, -370, -52,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 446, -474, -370,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 446, -25, -474, 227, -370, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 342, -10, 437, 21, 281, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 223, -1, 0, -12, 0, -8,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 0, 0, 0, 0, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 312, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 12), 16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTYoshiAnimItemThrowDash_joint5[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -135, 8, -28, -28, -35, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -213, -7, -462, -24, 149, 14,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 6,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 600, 329,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -267, 4, -450, 25, 210, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -137, 10, 22, 31, 35, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -93, 32, 51, 0, 17, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 191, 13, 20, -3, 4, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 78, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTYoshiAnimItemThrowDash_joint7[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 9), 450,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 11), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTYoshiAnimItemThrowDash_joint8[166] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1897, -556, -387, -58, 511, 711,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1341, -318, -445, -3, 1223, 410,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1260, 150, -394, -72, 1333, -183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1642, 132, -591, -587, 856, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1526, 13, -1569, -531, 1472, 256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1669, -4, -1654, 2, 1369, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1517, -203, -1564, 82, 1467, 92,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2082, 74,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1518, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 292, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 210, -62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 21, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2144, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 2380, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 29, 87, -1519, 74, 2333, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 196, 525, -1369, 76, 2126, -386,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1080, 457, -1367, 16, 1561, -300,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1145, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1112, 31, 1525, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1144, 36, 1485, -47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1068, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1483, 5,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1179, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1468, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1071, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1239, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1486, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 1498, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1498, 0, -1476, -8, 1256, 16,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTYoshiAnimItemThrowDash_joint9[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -687, 687,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 339,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -452,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -905, -371,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -751, 452,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 371,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -556, -303,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -616, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -771, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -764, 6,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTYoshiAnimItemThrowDash_joint11[18] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -625, -48,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -625,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -625, 16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 38), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTYoshiAnimItemThrowDash_joint12[200] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 332, -27, 1107, 96, 2881, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 295, -103, 1291, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2891, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2933, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 97, -193, 1233, -37, 2644, -280,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -90, 168, 1216, -246, 2372, 146,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 3502, 312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 434, 579, 740, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1069, 469, 1203, 363,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1373, 268, 1468, 201, 3561, 37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 3724, 66,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1199, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1605, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1548, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1310, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1354, 35, 3779, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1589, 124,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 3295, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1235, 47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1641, -13,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1757, 275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 2484, 211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2563, 234,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 3238, 188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1623, -17, 3279, -26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 3160, -139,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1328, -179,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3331, 70,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 3499, 330,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2964, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2946, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4039, 592, 1116, 8, 3320, 447,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4684, 382, 1345, 203, 3842, 333,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4804, 70, 1523, 136, 3986, 132,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 1717, -4, 4586, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 4696, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4684, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4680, -4, 1711, -5, 4606, 20,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTYoshiAnimItemThrowDash_joint13[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -8, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -102,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -111, -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -537, -316,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1061, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1110, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1016, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1002, 13,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTYoshiAnimItemThrowDash_joint14[40] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 19, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 312, -5,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, -78, 0, -155,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -625, -156,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 32), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -625, 19,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 30), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTYoshiAnimItemThrowDash_joint15[22] = {
	ftAnimSetValBlock(FT_ANIM_ROTY), -893,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), -1188, 9,
	ftAnimSetValT(FT_ANIM_ROTY, 52), -893,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 12,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 52), -536,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 12,
	ftAnimSetFlagsT(0, 7),
	ftAnimSetFlagsT(FT_ANIM_ROTY, 33),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTYoshiAnimItemThrowDash_joint16[30] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), 89, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 89, -18,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 7,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -265, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 175, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -194, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), -190,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTYoshiAnimItemThrowDash_joint18[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValRate(FT_ANIM_ROTX), -178, -35,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -178, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -178, -8, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), -293, 23, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 199, -9, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 13), -453, -16, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), -153, 0,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTYoshiAnimItemThrowDash_joint19[140] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -13, 46, 304, 0, 378, 82,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 144, -59, 229, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 593, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 704, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -15, -114, 223, -66, 364, -336,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 0, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 108, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 31, -287,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -593, -163,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 43, 59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 119, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 157, 51, -723, -75,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 167, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -606, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 52, -62, -517, 111,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -179, -66,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -24, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 113, -49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -224, 11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -283, -97,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -404, 14,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -32, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 14, -13,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -389, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -61, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -212, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -19, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5, 13, 5, -9, -3, 57,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTYoshiAnimItemThrowDash_joint21[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 505, 389,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 785, 211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1065, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 972, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 702, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 627, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 740, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 724, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 439, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 397, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 326, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 262, -64,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTYoshiAnimItemThrowDash_joint23[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 110, -16, -1559, 9, 2084, -209,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 107, -112,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1576, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1351, -239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1089, -157,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1091, 56,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -7, -80,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 129, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1553, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1465, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1176, 89,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1249, 20,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1523, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1691, -49,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1272, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1321, 6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1742, -41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1646, 25,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 135, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 18, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1326, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1331, 5,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1613, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1537, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 6, -12, -1524, 12, 1344, 13,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTYoshiAnimItemThrowDash_joint24[150] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 882, -11, 202, 127, -371, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 294, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 871, -319, -361, -223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 242, -446, -818, -251,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -281, 434,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 47, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -28, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -6, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -124, -69, 213, 278,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -172, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 36, -13, 276, 61,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -97, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 335, 58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 688, 69,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -166, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 17, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 749, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -51, 70, 595, -259,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 34, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 229, -284,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 24, 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 8, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -1, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -411, -3,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 13, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 0, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -403, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -235, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 1, 0, 0, -154, 81,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTYoshiAnimItemThrowDash_joint26[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 551, 156,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1033, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1045, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 717, -522,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -355,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 168, 259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 518, 244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 797, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 867, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 810, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 833, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 1016, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 931, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 529, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, -150,
	ftAnimEnd(),
	0x0000,
};

/* Joint 27 */
u16 dFTYoshiAnimItemThrowDash_joint27[148] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1326, 29, -1177, 26, -424, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1297, -245, -1150, 306, -510, 215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1817, -134, -565, 496, 5, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1565, 125, -157, 247, -288, -220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1565, -38, -70, 37, -435, -79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1705, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -133, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -448, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -195, 138,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -100, 108,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1707, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1760, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -141, 1, 46, 181,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -87, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 443, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1696, 58, 288, -203,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1463, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -393, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -382, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -465, 14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -84, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -87, -3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1459, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -1608, 0,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -432, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -283, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1607, 1, -89, -1, -228, 54,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
