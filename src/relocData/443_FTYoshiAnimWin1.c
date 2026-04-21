/* AnimJoint data for relocData file 443 (FTYoshiAnimWin1) */
/* 4000 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimWin1_joint1[18];
extern u16 dFTYoshiAnimWin1_joint2[70];
extern u16 dFTYoshiAnimWin1_joint3[46];
extern u16 dFTYoshiAnimWin1_joint4[84];
extern u16 dFTYoshiAnimWin1_joint6[32];
extern u16 dFTYoshiAnimWin1_joint7[228];
extern u16 dFTYoshiAnimWin1_joint8[102];
extern u16 dFTYoshiAnimWin1_joint10[38];
extern u16 dFTYoshiAnimWin1_joint11[214];
extern u16 dFTYoshiAnimWin1_joint12[68];
extern u16 dFTYoshiAnimWin1_joint13[42];
extern u16 dFTYoshiAnimWin1_joint14[10];
extern u16 dFTYoshiAnimWin1_joint15[32];
extern u16 dFTYoshiAnimWin1_joint17[32];
extern u16 dFTYoshiAnimWin1_joint18[170];
extern u16 dFTYoshiAnimWin1_joint20[88];
extern u16 dFTYoshiAnimWin1_joint22[182];
extern u16 dFTYoshiAnimWin1_joint23[216];
extern u16 dFTYoshiAnimWin1_joint25[102];
extern u16 dFTYoshiAnimWin1_joint26[174];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTYoshiAnimWin1_joints[] = {
	(u32)dFTYoshiAnimWin1_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimWin1_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimWin1_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimWin1_joint4, /* [3] joint 4 */
	(u32)dFTYoshiAnimWin1_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTYoshiAnimWin1_joint7, /* [6] joint 7 */
	(u32)dFTYoshiAnimWin1_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimWin1_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTYoshiAnimWin1_joint11, /* [10] joint 11 */
	(u32)dFTYoshiAnimWin1_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimWin1_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimWin1_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimWin1_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimWin1_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTYoshiAnimWin1_joint18, /* [17] joint 18 */
	(u32)dFTYoshiAnimWin1_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTYoshiAnimWin1_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTYoshiAnimWin1_joint23, /* [22] joint 23 */
	(u32)dFTYoshiAnimWin1_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTYoshiAnimWin1_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTYoshiAnimWin1_joint1[18] = {
	ftAnimSetVal(FT_ANIM_ROTY), 446,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 672, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 40), 446,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 15), -2770,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 65), -2770,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTYoshiAnimWin1_joint2[70] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX), 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ), -402, -5, -89, -2, 30, 8, 20, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 30), -402, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), -89, 0, 30, 20,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 90), -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 24, 0, -4, 30, -46, 20, 24,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), -13, -4, -116, -2, 97, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -134, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -134, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), -250,
	ftAnimSetValT(FT_ANIM_ROTX, 65), -250,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 25), -21, -203, 142,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 40), -13, -116, 97,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTYoshiAnimWin1_joint3[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), -75, -3,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 172,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 41), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 30), -75, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 16, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -268, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -268, 20, 0, -8, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 16, -112, -3,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 65), 16, -112, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTYoshiAnimWin1_joint4[84] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 78, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 73, 550, 365,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), 73, -14, 550, 10, 365, -7,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 41), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 30), 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 78, 33, 0, -23, 600, 16, 329, -11,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 0, 600, 329,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 446, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 446, -40, 0, 0, 0, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -118, -24, -12, -1, 119, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 275, 21,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 65), 0, 600, 329,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -12, 119,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 62), -12, 119,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 19), 347,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 43), 275,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTYoshiAnimWin1_joint6[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 471,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 48, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 30), 471, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 0, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), 230, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 268, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 268,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 62), 268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTYoshiAnimWin1_joint7[228] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1384, 14, -1984, 12, 1205, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), -1966, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 28), -1354, -12, 1260, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1367, -15, 1234, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1384, 34, -1984, 27, 1205, 57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1804, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1298, 61, 1350, 115,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), -1554, -32, 1212, -67,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1774, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -1688, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1579, -328, -1661, 526, 1147, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2211, -356, -636, 493, 1498, 208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2293, -102, -673, -19, 1565, 86,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -567, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -2511, -64, 1746, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2545, -31, 1751, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -2751, -48, 1693, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -512, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -424, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2800, -236, -408, -21, 1667, 220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3224, -309, -468, 43, 2133, 384,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3420, -37, -321, 156, 2436, 301,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3298, 318, -155, 26, 2735, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2783, 256, -269, -55, 2767, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -262, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 2725, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2786, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2791, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), -2946, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -257, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), -123, -2,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2716, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), 2611, 5,
	ftAnimBlock(0, 18),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2945, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 35), -2784, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -126, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 32), -268, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2617, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 30), 2767, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2783, 0, -269, 0, 2767, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimWin1_joint8[102] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -824, -10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 28), -834, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -829, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -824, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -930, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -893, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -770, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -598, 288,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -194, 177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -243, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -244, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -8, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, -521,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1043, -333,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1262, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1060, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1067, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1074, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 30), -1004, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1007, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 31), -1060, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1060, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTYoshiAnimWin1_joint10[38] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 41), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 30), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 0, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -178, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, -14, 0, -119, -178, -33,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -199, -1672, -652,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 65), -199, -1672, -652,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTYoshiAnimWin1_joint11[214] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1318, -7, 1799, -10, 1430, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 29), 1312, 5, 1784, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 28), 1473, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1453, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1318, -8, 1799, -22, 1430, 34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1661, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1391, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1521, 75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1525, -50,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1646, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1575, -22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1464, 77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1674, 48,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1480, -31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1477, 54,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1715, 298, 1558, -511,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2272, 290, 553, -468, 1572, 55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1642, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2296, 40, 622, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 529, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2407, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1677, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1710, 36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 508, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 414, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2403, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 2431, 57,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 389, -41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 187, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2485, 54, 1741, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1747, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 2625, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2615, -9, 187, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 33), 155, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 60), 2635, 1,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1747, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 53), 1779, 0,
	ftAnimBlock(0, 23),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 152, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), 180, 0,
	ftAnimBlock(0, 26),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2636, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 2638, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2638, 0, 180, 0, 1780, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimWin1_joint12[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -984, 4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), -964, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -971, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -984, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1060, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -1227, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1157, 609,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 512,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -132, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -8, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), -8, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 22), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 25), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTYoshiAnimWin1_joint13[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 759, -518,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 172, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 759, -18, -518, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, -69, 0, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), -178, -16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 79), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -178, -31,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), -625,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 65), -625,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTYoshiAnimWin1_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -536, -893, 0, 0, 156, 0,
	ftAnimBlock(0, 120),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimWin1_joint15[32] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -190, -4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 30), -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -190, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 177, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 372, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 25), 157, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 18), -83,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 7), -83,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTYoshiAnimWin1_joint17[32] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -153, -4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 30), -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -153, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 137, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 21), 552, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 26), 35, -18,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 16), -220,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), -220,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTYoshiAnimWin1_joint18[170] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 2, 0, 531, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 39), -2, 0, 2, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 30), 531, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 510, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 287, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 233, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -11, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3, 36, 2, 45, -87, -432,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 69, 21, 93, 26, -876, -401,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 38, -8, 55, -5, -891, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 53, -110, 82, 636, -910, -316,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -182, -38, 1327, 742, -1524, -278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -23, 85, 1566, 129, -1468, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -11, 7, 1587, 14, -1466, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), -1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1600, 0, -1459, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1600, -800, -1447, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -800, -1072, 397,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1, 0, -652, 432,
	ftAnimSetValRateT(FT_ANIM_ROTY, 66), 3, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -207, 411,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 171, 192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 177, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 181, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 39), 160, 0,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 48), -1, 0,
	ftAnimBlock(0, 25),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 160, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), 171, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1, 0, 3, 0, 171, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimWin1_joint20[88] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 261, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 335, 260,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 782, 234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 805, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1017, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1039, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1210, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1162, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 926, -308,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 546, -191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 542, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 542, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 26), 702, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 701, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 35), 546, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 546, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTYoshiAnimWin1_joint22[182] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2, -1, 1608, 2, -1668, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 39), 1605, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 40), 2, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 36), -1721, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1730, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1832, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1605, 47, -1860, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4, -7, 1701, 25, -2081, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -11, -3, 1656, -8, -2082, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2, -68, 1685, 616, -2084, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -147, -22, 2888, 734, -1732, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -46, 53, 3154, 144, -1792, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -38, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3177, 15, -1815, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 3191, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1916, -6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -38, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 3, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 3191, -796,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1598, -794, -1913, -72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2144, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1602, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 51), 1607, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2080, 31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2095, -5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 61), 3, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2102, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), -2215, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2211, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 29), -2080, 0,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1607, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 14), 1607, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3, 0, 1607, 0, -2080, 0,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimWin1_joint23[216] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -298, -1, -197, 2, 95, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 31), -291, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), -199, 1, 112, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -197, 9, 95, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 12, -37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -8, 13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -274, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -38, 36,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -25, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -95, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3, 61, 2, -100, -87, 178,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 107, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -208, -105, 260, 179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -209, -2, 272, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 301, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -176, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 132, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 304, 60,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 306, -41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 183, -23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 353, 43, -140, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -87, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 407, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 170, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 186, -42,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -70, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 172, 197, 87, -83,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -8, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 294, -115, 324, 112,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 152, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 424, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 85, 48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 88, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 152, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 27), -69, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 426, 2, 84, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), -82, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 60), 421, 0,
	ftAnimBlock(0, 24),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -67, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 35), 151, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -80, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 34), 84, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 152, 0, 420, 0, 85, 0,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimWin1_joint25[102] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 715, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 708, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 715, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 529, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 498, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 388, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 335, -194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -164,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 167, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 261, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 364, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 391, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 637, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 697, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 618, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 379, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 382, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), 610, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 608, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 36), 379, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTYoshiAnimWin1_joint26[174] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 413, -1, 1211, 0, -1423, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), 419, -5, 1207, 4, -1414, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 413, -73, 1211, -4, -1423, -56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1706, -67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1560, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 162, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 85, -62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 3, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1763, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1860, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2, -57, 1605, -25, -1860, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -111, -57, 1509, -35, -1794, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -111, -3, 1533, 25, -1806, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), -193, 0, 1788, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1868, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1951, -67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2106, -59,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -191, 48, 1809, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 43, 32, 1509, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2198, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -2110, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 52, 5, 1357, -76, -1982, 62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 64), 52, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1352, -2, -1987, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1349, -3, -1991, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 43), -2031, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 37), 1298, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1301, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), 1357, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2028, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -1983, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 52, 0, 1357, 0, -1982, 0,
	ftAnimEnd(),
};
