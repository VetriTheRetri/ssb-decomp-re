/* AnimJoint data for relocData file 1806 (FTNessAnimPKThunderStartGround1) */
/* 2352 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimPKThunderStartGround1_joint1[50];
extern u16 dFTNessAnimPKThunderStartGround1_joint2[22];
extern u16 dFTNessAnimPKThunderStartGround1_joint4[26];
extern u16 dFTNessAnimPKThunderStartGround1_joint5[134];
extern u16 dFTNessAnimPKThunderStartGround1_joint6[46];
extern u16 dFTNessAnimPKThunderStartGround1_joint7[68];
extern u16 dFTNessAnimPKThunderStartGround1_joint8[56];
extern u16 dFTNessAnimPKThunderStartGround1_joint10[10];
extern u16 dFTNessAnimPKThunderStartGround1_joint11[136];
extern u16 dFTNessAnimPKThunderStartGround1_joint12[40];
extern u16 dFTNessAnimPKThunderStartGround1_joint13[52];
extern u16 dFTNessAnimPKThunderStartGround1_joint15[10];
extern u16 dFTNessAnimPKThunderStartGround1_joint16[88];
extern u16 dFTNessAnimPKThunderStartGround1_joint18[40];
extern u16 dFTNessAnimPKThunderStartGround1_joint19[68];
extern u16 dFTNessAnimPKThunderStartGround1_joint21[34];
extern u16 dFTNessAnimPKThunderStartGround1_joint22[70];
extern u16 dFTNessAnimPKThunderStartGround1_joint24[40];
extern u16 dFTNessAnimPKThunderStartGround1_joint25[86];
extern u16 dFTNessAnimPKThunderStartGround1_joint26[48];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTNessAnimPKThunderStartGround1_joints[] = {
	(u32)dFTNessAnimPKThunderStartGround1_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimPKThunderStartGround1_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimPKThunderStartGround1_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTNessAnimPKThunderStartGround1_joint5, /* [4] joint 5 */
	(u32)dFTNessAnimPKThunderStartGround1_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimPKThunderStartGround1_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimPKThunderStartGround1_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimPKThunderStartGround1_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTNessAnimPKThunderStartGround1_joint11, /* [10] joint 11 */
	(u32)dFTNessAnimPKThunderStartGround1_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimPKThunderStartGround1_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimPKThunderStartGround1_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTNessAnimPKThunderStartGround1_joint16, /* [15] joint 16 */
	(u32)dFTNessAnimPKThunderStartGround1_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTNessAnimPKThunderStartGround1_joint19, /* [18] joint 19 */
	(u32)dFTNessAnimPKThunderStartGround1_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTNessAnimPKThunderStartGround1_joint22, /* [21] joint 22 */
	(u32)dFTNessAnimPKThunderStartGround1_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTNessAnimPKThunderStartGround1_joint25, /* [24] joint 25 */
	(u32)dFTNessAnimPKThunderStartGround1_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTNessAnimPKThunderStartGround1_joint1[50] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -16, 537, -28,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY, 10), -14, -5, -19, 3, 574, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 10), -20,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 14), -4, -1, 441, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAZ, 14), -189, -23,
	ftAnimSetValRateT(FT_ANIM_TRAY, 1), 493, -7,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_TRAZ, 10), -189, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAX, 10), 0, 0, -3, -2,
	ftAnimBlock0(0),
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTNessAnimPKThunderStartGround1_joint2[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 28,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -360, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 26, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 119, 29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), 186,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 10), 186,
	ftAnimBlock0(0),
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTNessAnimPKThunderStartGround1_joint4[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 14, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 158, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 158, 0,
	ftAnimBlock0(0),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimPKThunderStartGround1_joint5[134] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1323, -245, -1415, -113, -1135, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 410, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1526, 32, -1086, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1463, 74, -845, 265,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1329, 10, -368, 90,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 319, -48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 271, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1356, -18, -374, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -479, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1207, 57,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 229, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 63, -42,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -498, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 28, -16, -545, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 30, 140, -1140, 41, -626, -229,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1160, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 310, 250, -1004, -313,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1124, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1254, -194,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1578, -104,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1117, 42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1059, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1694, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1264, 110, -1811, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1344, 80, -1077, -17, -1870, -58,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimPKThunderStartGround1_joint6[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -723, -159,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -824, 311,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -352, 412,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 176,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -311, -265,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -530, -172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -680, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -642, 38,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTNessAnimPKThunderStartGround1_joint7[68] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -334, -1324, 346, 168, 120, -1494,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2649, -597, 337, 121, -2988, -698,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -2127, 288, 710, -49, -1974, 397,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -338, 180, -54, -90, 188, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 33, 24, -372, 20, -39, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 11, -1, 237, 33, -269, -12,
	ftAnimSetValT(FT_ANIM_ROTY, 10), 237,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 11, 0, -269, 10,
	ftAnimBlock0(0),
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTNessAnimPKThunderStartGround1_joint8[56] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -10, 0, 364, 0, -32, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -254, -29, -36, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), 306,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -304, -7, 240, -15, -40, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -328, 38, 143, -13, -48, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 235, 0, -57, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 8), 35,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 235, 0, 35, 0, -57, 0,
	ftAnimBlock0(0),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTNessAnimPKThunderStartGround1_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimPKThunderStartGround1_joint11[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1192, 240, 1038, -113, 1489, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1433, 575, 924, -74, 1681, 478,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2344, 255, 890, -133, 2445, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1944, -250, 658, -154, 1866, -414,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1842, -40, 580, -64, 1617, -158,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 540, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1871, 4, 1506, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1872, -8, 1466, -52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1906, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1303, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1305, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1610, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 571, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 606, -47,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1984, 119,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2550, 150,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1822, 190,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2142, 38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2668, 94,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2784, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 554, -49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 522, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2170, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2904, 75, 2292, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2936, 32, 512, -9, 2323, 30,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimPKThunderStartGround1_joint12[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, -97,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -567, 323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -172, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -196, -24,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTNessAnimPKThunderStartGround1_joint13[52] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 90, 54, 126,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 381, 7, -707, -4, -223, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 164, -16, 10, 109, 138, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 219, 24, 390, -23, 266, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 509, 16, -317, -39, -493, -42,
	ftAnimSetValT(FT_ANIM_ROTY, 10), -317,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 509, -16, -493, 23,
	ftAnimBlock0(0),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTNessAnimPKThunderStartGround1_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimPKThunderStartGround1_joint16[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -365, -1, -279, 2, -297, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -220, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -337, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -234, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -213, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -493, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -252, -47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -382, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -288, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -227, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -496, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -646, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -386, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -422, 3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -222, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -195, -5,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -635, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -203, -7, -418, 3, -621, 13,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimPKThunderStartGround1_joint18[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 396, -5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 290, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 250, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 607, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 654, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 742, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 755, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 777, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 768, -8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTNessAnimPKThunderStartGround1_joint19[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 5, 0, 12, 0, 26, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -54, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -48, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 101, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 139, 53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 236, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -70, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -152, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -61, -10, 213, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -93, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -114, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -121, -4, -159, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -122, -1, -162, -3, -99, -5,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimPKThunderStartGround1_joint21[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -66, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -108, -9, 116, 11, 184, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -296, -7, 269, 6, 141, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -296, -6, 269, -7, 141, -1,
	ftAnimBlock0(0),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimPKThunderStartGround1_joint22[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -127, 4, 136, 1, -210, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), -174, -51, 235, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -165, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -226, -64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -982, -29,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -230, -57, 234, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -261, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 180, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 243, 65, -998, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 383, 1, -768, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -170, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 79, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 103, 23, 382, 0, -743, 24,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimPKThunderStartGround1_joint24[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 407, -16,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 207, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 245, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 836, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 915, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 836, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 765, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 710, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 688, -22,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTNessAnimPKThunderStartGround1_joint25[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 76, 0, 25, -1, -202, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -194, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 298, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -165, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -202, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -122, 73,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -215, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -69, 36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 331, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 209, -78,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -48, 64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -4, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 134, -63,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 28, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -38, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -18, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 22, -6, -11, 6, -8, -3,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimPKThunderStartGround1_joint26[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 56, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -231, -37, -48, -6, -52, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -539, -13, -108, -7, -108, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -419, 6, -153, -2, -137, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -419, -2, -153, 4, -137, 3,
	ftAnimBlock0(0),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
