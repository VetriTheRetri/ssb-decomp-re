/* AnimJoint data for relocData file 450 (FTYoshiAnimUnknown2) */
/* 1280 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimUnknown2_joint1[28];
extern u16 dFTYoshiAnimUnknown2_joint2[10];
extern u16 dFTYoshiAnimUnknown2_joint3[46];
extern u16 dFTYoshiAnimUnknown2_joint4[80];
extern u16 dFTYoshiAnimUnknown2_joint6[24];
extern u16 dFTYoshiAnimUnknown2_joint7[82];
extern u16 dFTYoshiAnimUnknown2_joint8[34];
extern u16 dFTYoshiAnimUnknown2_joint11[8];
extern u16 dFTYoshiAnimUnknown2_joint12[52];
extern u16 dFTYoshiAnimUnknown2_joint14[8];
extern u16 dFTYoshiAnimUnknown2_joint15[10];
extern u16 dFTYoshiAnimUnknown2_joint17[8];
extern u16 dFTYoshiAnimUnknown2_joint18[34];
extern u16 dFTYoshiAnimUnknown2_joint20[30];
extern u16 dFTYoshiAnimUnknown2_joint22[32];
extern u16 dFTYoshiAnimUnknown2_joint23[36];
extern u16 dFTYoshiAnimUnknown2_joint25[30];
extern u16 dFTYoshiAnimUnknown2_joint26[36];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTYoshiAnimUnknown2_joints[] = {
	(u32)dFTYoshiAnimUnknown2_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimUnknown2_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimUnknown2_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimUnknown2_joint4, /* [3] joint 4 */
	(u32)dFTYoshiAnimUnknown2_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTYoshiAnimUnknown2_joint7, /* [6] joint 7 */
	(u32)dFTYoshiAnimUnknown2_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimUnknown2_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTYoshiAnimUnknown2_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimUnknown2_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTYoshiAnimUnknown2_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimUnknown2_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTYoshiAnimUnknown2_joint18, /* [17] joint 18 */
	(u32)dFTYoshiAnimUnknown2_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTYoshiAnimUnknown2_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTYoshiAnimUnknown2_joint23, /* [22] joint 23 */
	(u32)dFTYoshiAnimUnknown2_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTYoshiAnimUnknown2_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTYoshiAnimUnknown2_joint1[28] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 297, -316,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAY), 556,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 60), 556,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY, 1), 1,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -998, 0,
	ftAnimBlock(0, 59),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 15), 556, 38,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 15), 700,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 70), 700,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTYoshiAnimUnknown2_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -266, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 159),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTYoshiAnimUnknown2_joint3[46] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 531, 202, 123,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 60), 531, 202, 123,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 172,
	ftAnimBlock(0, 59),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 531, -9, 202, 0, 123, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 247, 11, 208, 0, 100, 1,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 70), 247, 208, 100,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTYoshiAnimUnknown2_joint4[80] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 68, 0, 228, 0, -384, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 600, 329,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), 45, 0, 236, 0, -381, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 68, -3, 228, -4, -384, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -20, 138, -424,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 68, 2, 228, 3, -384, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 68, 15, 228, 16, -384, 21,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 526, 714, 266,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 15, 16, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 526, -22, 714, 11, 266, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 382, 0, 710, 0, 385, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), 382, 710, 385,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTYoshiAnimUnknown2_joint6[24] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 90), 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 1,
	ftAnimBlock(0, 89),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 0, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 276, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 40), 276,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimUnknown2_joint7[82] = {
	ftAnimSetValRate(FT_ANIM_ROTY), 1423, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), -2120, -2253,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 64), -2262, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 60), -2122, -4, 1420, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2128, -7, 1413, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1484, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -1984, 58,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2268, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -2274, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1492, 6, -2249, 31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -1828, -2,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 82), 1551,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1926, 54,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 22), -1715,
	ftAnimBlock(0, 12),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -1828,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 68), -1828,
	ftAnimBlock(0, 9),
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 59), -1715,
	ftAnimBlock(0, 58),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 1551,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTYoshiAnimUnknown2_joint8[34] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -146, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 59), -146, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -152, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -209, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -146, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 82), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimUnknown2_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 159),
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTYoshiAnimUnknown2_joint12[52] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -553,
	ftAnimSetValRateT(FT_ANIM_ROTY, 74), 0, -3,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 158), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 60), -556, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -562, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -197, 93,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -3, -4,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 83), -36,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -105, 88,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 20), 263,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 59), 263,
	ftAnimBlock(0, 58),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 0, -36,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTYoshiAnimUnknown2_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 159),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTYoshiAnimUnknown2_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -129, -163, -97, 0, 215, -240,
	ftAnimBlock(0, 159),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTYoshiAnimUnknown2_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -348, -116, -123,
	ftAnimBlock(0, 159),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimUnknown2_joint18[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -59, 10, -89,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 158), -33, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 71), -102, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -99, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 215, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 215, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 68), 215,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -33, 32, 215,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTYoshiAnimUnknown2_joint20[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 812, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 70), 839, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 836, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 331, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 268, -31,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 61), 268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTYoshiAnimUnknown2_joint22[32] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 44, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -1647, 1148,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 158), 33, -1638,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 72), 1140, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1143, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 22), 1386,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 64), 1386,
	ftAnimBlock(0, 63),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 33, -1638,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTYoshiAnimUnknown2_joint23[36] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 10, 0, -89, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), -58,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 158), -32, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 71), -102, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -100, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 215, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 215, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 68), 215,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -32, 32, 215,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimUnknown2_joint25[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 812, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 70), 839, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 836, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 331, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 268, -31,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 61), 268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTYoshiAnimUnknown2_joint26[36] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 38, 0, -459, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), 1653,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 158), 1642, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 72), -468, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -464, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 22), -222,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 64), -222,
	ftAnimBlock(0, 63),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1642, 29,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
