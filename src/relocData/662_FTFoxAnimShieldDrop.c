/* AnimJoint data for relocData file 662 (FTFoxAnimShieldDrop) */
/* 2112 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimShieldDrop_joint1[24];
extern u16 dFTFoxAnimShieldDrop_joint2[40];
extern u16 dFTFoxAnimShieldDrop_joint4[26];
extern u16 dFTFoxAnimShieldDrop_joint5[142];
extern u16 dFTFoxAnimShieldDrop_joint6[60];
extern u16 dFTFoxAnimShieldDrop_joint7[10];
extern u16 dFTFoxAnimShieldDrop_joint8[26];
extern u16 dFTFoxAnimShieldDrop_joint10[8];
extern u16 dFTFoxAnimShieldDrop_joint11[112];
extern u16 dFTFoxAnimShieldDrop_joint12[48];
extern u16 dFTFoxAnimShieldDrop_joint13[18];
extern u16 dFTFoxAnimShieldDrop_joint15[10];
extern u16 dFTFoxAnimShieldDrop_joint16[90];
extern u16 dFTFoxAnimShieldDrop_joint18[46];
extern u16 dFTFoxAnimShieldDrop_joint20[98];
extern u16 dFTFoxAnimShieldDrop_joint21[88];
extern u16 dFTFoxAnimShieldDrop_joint23[40];
extern u16 dFTFoxAnimShieldDrop_joint24[78];
extern u16 dFTFoxAnimShieldDrop_joint25[22];
extern u16 dFTFoxAnimShieldDrop_joint26[18];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimShieldDrop_joints[] = {
	(u32)dFTFoxAnimShieldDrop_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimShieldDrop_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimShieldDrop_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimShieldDrop_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimShieldDrop_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimShieldDrop_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimShieldDrop_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimShieldDrop_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimShieldDrop_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimShieldDrop_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimShieldDrop_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimShieldDrop_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimShieldDrop_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimShieldDrop_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimShieldDrop_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimShieldDrop_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimShieldDrop_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimShieldDrop_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimShieldDrop_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimShieldDrop_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimShieldDrop_joint1[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 22, -22, 483, 58,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 6), 540, 152,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAZ, 6), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 19), 0, 0, 960, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimShieldDrop_joint2[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 101, 159,
	ftAnimSetValRate(FT_ANIM_ROTX), -267, 357,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 804, 297,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 268, 268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1608, 208, 178, -20, 178, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 2591, 119, 89, -10, 89, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 3216, 0, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTFoxAnimShieldDrop_joint4[26] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 792, 186, 227,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 536, 178, 178,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 357, 134, 134,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 357, 89, 89,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 0, -268, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTFoxAnimShieldDrop_joint5[142] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -167, 21, -153, 24, 118, -60,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -240, -198, 253, 300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -128, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -214, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -543, -114, -105, 2, 658, 148,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -387, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -209, -49, 550, -90,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -176, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 477, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -427, 16, 538, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -387, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -259, -72, 413, -92,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 556, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -198, 49,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -496, -89,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -261, 32,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 516, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 74, -210,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -159, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -433, -94,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -237, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 85, 206,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -511, -38, -167, -255,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -315, 47, -747, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 316, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 567, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 555, -11, -341, -26, -728, 18,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimShieldDrop_joint6[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -617, -10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -628, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -834, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -981, 200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -433, 292,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -529, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -452, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -577, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -522, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -919, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -964, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -286, 255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTFoxAnimShieldDrop_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 25),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimShieldDrop_joint8[26] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -283, -418, 188,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 357, 0, -89,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 268, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 89, -89, -89,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 178, 268, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTFoxAnimShieldDrop_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 25),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTFoxAnimShieldDrop_joint11[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 3092, 749, 535, -213, 2669, 815,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3841, 231, 322, -103, 3485, 316,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3556, -182, 328, -7, 3302, -119,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 542, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 3438, -20, 3199, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3393, -5, 3102, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 3455, 28, 3098, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3484, 178, 3097, 159,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 4213, 243, 3820, 239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 646, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 351, -64,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4299, 53, 3898, 51,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 4136, -24, 3826, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 294, -44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 510, 59,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4114, -18, 3821, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 4024, -56, 3764, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3944, -79, 567, 56, 3668, -96,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimShieldDrop_joint12[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -610, -508,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1119, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -678, 249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -727, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -620, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -675, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -674, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -507, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -454, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -413, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -389, 24,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimShieldDrop_joint13[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 272, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 19), 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimShieldDrop_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 25),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimShieldDrop_joint16[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1799, -117, -1620, 42, 1231, -442,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 622, 52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1456, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1916, -216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2231, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1679, 260, 894, 233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1709, 8, -1547, -78, 1090, 241,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1603, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1616, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1376, 198,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1484, -3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1605, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -1608, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1482, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 1631, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1614, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 11), -1601, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1608, 0, -1601, 0, 1633, 1,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimShieldDrop_joint18[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1084, -29,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1054, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 894, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 981, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 704, -395,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 190, -349,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 5, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 14), 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimShieldDrop_joint20[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 25, 138, 148, 47, -379, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 163, 259, 195, 104, -208, 275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 544, -18, 357, -15, 170, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 126, -187, 163, -136, -228, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 169, 28, 85, -79, -177, 126,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 118, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -83, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 176, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 176, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 396, 34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 109, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 60, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -90, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -94, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 427, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 491, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 60, 0, -94, 0, 493, 2,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimShieldDrop_joint21[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1452, -10, 1329, -100, 1583, -511,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1192, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1462, -57, 1072, -554,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1566, 66, 475, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1329, 55, 1468, 148, 1126, 338,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1456, -104, 1488, 47, 1152, 63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1361, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1599, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1564, 62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1615, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1394, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 853, -15,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1599, 0, 1613, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), -1623, -1, 1607, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1624, 0, 1607, 0, 845, -8,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimShieldDrop_joint23[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1272, 93,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1339, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1177, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 714, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 657, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 499, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 564, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 1010, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1013, 2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimShieldDrop_joint24[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -150, -69, 431, -35, -712, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 351, -105, -559, 187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -220, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -339, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -115, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -50, 34, 244, -128, -290, 221,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -113, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 7, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 1, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 120, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -113, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -253, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -236, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -207, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3, -3, 121, 1, -202, 4,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimShieldDrop_joint25[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 89, 219,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -354, -132, 215, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -836, 23, 162, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 18), 178, 0,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimShieldDrop_joint26[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 27, -20, 186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -499, 11, -20, 0, 183, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), 312, 0, 0,
	ftAnimEnd(),
};
