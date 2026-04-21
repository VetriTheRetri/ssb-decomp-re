/* AnimJoint data for relocData file 768 (FTFoxAnimAttackAirF) */
/* 3136 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimAttackAirF_joint1[36];
extern u16 dFTFoxAnimAttackAirF_joint2[6];
extern u16 dFTFoxAnimAttackAirF_joint4[116];
extern u16 dFTFoxAnimAttackAirF_joint5[194];
extern u16 dFTFoxAnimAttackAirF_joint7[86];
extern u16 dFTFoxAnimAttackAirF_joint10[58];
extern u16 dFTFoxAnimAttackAirF_joint11[208];
extern u16 dFTFoxAnimAttackAirF_joint12[88];
extern u16 dFTFoxAnimAttackAirF_joint13[38];
extern u16 dFTFoxAnimAttackAirF_joint15[10];
extern u16 dFTFoxAnimAttackAirF_joint16[128];
extern u16 dFTFoxAnimAttackAirF_joint18[58];
extern u16 dFTFoxAnimAttackAirF_joint19[90];
extern u16 dFTFoxAnimAttackAirF_joint20[42];
extern u16 dFTFoxAnimAttackAirF_joint21[120];
extern u16 dFTFoxAnimAttackAirF_joint23[60];
extern u16 dFTFoxAnimAttackAirF_joint24[102];
extern u16 dFTFoxAnimAttackAirF_joint25[28];
extern u16 dFTFoxAnimAttackAirF_joint26[48];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimAttackAirF_joints[] = {
	(u32)dFTFoxAnimAttackAirF_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimAttackAirF_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimAttackAirF_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimAttackAirF_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimAttackAirF_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTFoxAnimAttackAirF_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimAttackAirF_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimAttackAirF_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimAttackAirF_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimAttackAirF_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimAttackAirF_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimAttackAirF_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimAttackAirF_joint19, /* [18] joint 19 */
	(u32)dFTFoxAnimAttackAirF_joint20, /* [19] joint 20 */
	(u32)dFTFoxAnimAttackAirF_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimAttackAirF_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimAttackAirF_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimAttackAirF_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimAttackAirF_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimAttackAirF_joint1[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 960, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 40), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -775, -3, 1, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), -778, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 493, 404,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 33), 6433,
	ftAnimBlock(0, 24),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 0, 89,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimAttackAirF_joint2[6] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTFoxAnimAttackAirF_joint4[116] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -277, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -4, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 287, 145, -18, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 362, -113,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -15, -38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 7, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 8, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -1, -1, 2, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 73, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -20, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 2, 0,
	ftAnimBlock(0, 10),
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 14, -6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 30, 12,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 0, 6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 176, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 31, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -7, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 4, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 150, -42,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), -277,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimAttackAirF_joint5[194] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1885, 6, -1323, -17, -2065, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1755, -99,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1425, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -2078, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1900, 166,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1666, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1672, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1654, -78, -1408, 215,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -601, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1516, 188, -1530, -318,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2031, -83, -2304, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1349, -497, -625, 135, -1835, 392,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1062, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -330, 151, -1519, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -323, 9, -1549, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -242, -1, -1622, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1074, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1215, 45,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -246, -42, -1619, -48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2144, -195,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -719, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1288, 86,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 2410, 351,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2363, -280,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -3228, -174,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2740, 279,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 3329, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -687, 37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -308, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3365, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -3574, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3464, 71, -3737, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 3440, 0, -3697, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3446, 8, -3687, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 3475, 19, -3680, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -295, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -285, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3496, 20, -282, 2, -3678, 1,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimAttackAirF_joint7[86] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -328, -315,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -845, -210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1051, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -595, 497,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 293,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -520, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -576, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -465, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -426, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -272, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -73, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTFoxAnimAttackAirF_joint10[58] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 178, 270, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 12, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 139, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -27, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), -35, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -3, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 53, -3,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 33), 270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), -151, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -36, -10,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 14), 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -40, 31,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 7), 178,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimAttackAirF_joint11[208] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2854, -21, 520, -30, -22, -74,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -66, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2875, 33, 490, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2788, 7, 246, -213,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -3230, 45, 45, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -166, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -196, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3104, 8, 121, 212, -232, -304,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3212, -380, 470, 143, -804, -663,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3865, -379, 409, -104, -1560, -423,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 162, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3971, -87, -1651, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4039, -67, -1677, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1691, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -4765, -70,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 153, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 212, 66,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1686, -73,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1930, -52,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4821, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -4742, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 311, 123, -1943, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1744, 50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 703, -52,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4586, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4605, -262, -1777, -270,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2808, -328,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -5112, -515,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -5636, -332,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5777, -99, 639, -59, -2943, -93,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 575, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -6017, -102, -3173, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -6168, -56, -3344, -65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -3273, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -6082, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 555, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 526, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3250, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -6071, 11, 520, -6, -3239, 11,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimAttackAirF_joint12[88] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -391, -255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -742, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -998, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -885, 296,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -405, 370,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -265, -209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -427, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -493, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -551, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -343, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -222, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimAttackAirF_joint13[38] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -315, -90, 223, 54, 311, 88,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -627, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -62, 16,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 0, 0,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 25), 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimAttackAirF_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -98, -804, 1707, 59, -58, 11,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimAttackAirF_joint16[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 9, -5, 10, 18, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -25, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -210, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 4, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 12, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -308, -262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -511, -211,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -869, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -72, -76,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 13, 57,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -258, -37, -861, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -783, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 11), -365, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -367, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -361, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 66, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 11, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -771, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -301, 102,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -348, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -27, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -199, 91,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 27, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -30, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -18, 22,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 124, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 65, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 18, -5, 22, 18, -46,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimAttackAirF_joint18[58] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 5, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 350,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 701, 519,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1038, 265,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1336, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1346, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 777, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 696, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 416, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 304, -205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 0,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTFoxAnimAttackAirF_joint19[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -16, -14, -64, -6, 610, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 226, -138,
	ftAnimSetValRateT(FT_ANIM_ROTY, 39), -59, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 8, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 106, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 184, 123,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 86, -128,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -177, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 336, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 154, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 113, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -27, 16,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -156, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 591, 21,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -15, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -36, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 14, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -16, -21, -64, -4, 610, 18,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTFoxAnimAttackAirF_joint20[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4095,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 0, 4096, 0, 4096, 0,
	ftAnimSetValRateT(FT_ANIM_SCAX, 3), 5324, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4505, 4505,
	ftAnimSetValRateT(FT_ANIM_SCAX, 16), 5324, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 16), 4505, 4505,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 4096, 0, 4096, 0, 4096, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 9), 4096, 4096, 4095,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimAttackAirF_joint21[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -7, 8, 5, -5, -492, -69,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -21, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 32, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -688, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -528, 189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -309, 264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1, 154,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -20, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 42, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 0, -3,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 50, 31, 38, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 71, -72,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 200, -12,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -82,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -257, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -28, -78,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -18, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 177, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 14, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -336, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -444, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -451, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -468, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -7, 11, 5, -9, -492, -23,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimAttackAirF_joint23[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 626, 22,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 839, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1041, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 689, -544,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -341,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 315, 244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 494, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 853, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 744, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 626, -118,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimAttackAirF_joint24[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -14, -21, 124, -8, -91, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 17, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -85, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 48, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 187, 81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 230, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 12, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 50, 21,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -87, -1, 230, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 235, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 11), -154, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 75, 30, -167, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 96, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 39, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 196, -44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -85, -5,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 113, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 124, -1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -89, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -92, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -14, -53, 124, 0, -91, 0,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimAttackAirF_joint25[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -126, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 34, 0, 13, 0, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 382, 145, 130,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTFoxAnimAttackAirF_joint26[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 402, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 64, -450,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -253, 4, 0, 19, 0, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 448, 26, 215, 1, 233, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), 434, -26, 31, -8, 34, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -188, -4, 17, -4, 19, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 402, 0, 0,
	ftAnimEnd(),
	0x0000, 0x0000,
};
