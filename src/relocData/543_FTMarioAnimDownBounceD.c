/* AnimJoint data for relocData file 543 (FTMarioAnimDownBounceD) */
/* 1840 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimDownBounceD_joint2[38];
extern u16 dFTMarioAnimDownBounceD_joint4[16];
extern u16 dFTMarioAnimDownBounceD_joint5[138];
extern u16 dFTMarioAnimDownBounceD_joint7[62];
extern u16 dFTMarioAnimDownBounceD_joint10[34];
extern u16 dFTMarioAnimDownBounceD_joint11[104];
extern u16 dFTMarioAnimDownBounceD_joint12[54];
extern u16 dFTMarioAnimDownBounceD_joint13[10];
extern u16 dFTMarioAnimDownBounceD_joint15[10];
extern u16 dFTMarioAnimDownBounceD_joint16[78];
extern u16 dFTMarioAnimDownBounceD_joint18[48];
extern u16 dFTMarioAnimDownBounceD_joint20[86];
extern u16 dFTMarioAnimDownBounceD_joint21[94];
extern u16 dFTMarioAnimDownBounceD_joint23[32];
extern u16 dFTMarioAnimDownBounceD_joint24[68];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimDownBounceD_joints[] = {
	(u32)dFTMarioAnimDownBounceD_joint2, /* [0] joint 2 */
	0x00000000, /* [1] NULL */
	(u32)dFTMarioAnimDownBounceD_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimDownBounceD_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimDownBounceD_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTMarioAnimDownBounceD_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimDownBounceD_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimDownBounceD_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimDownBounceD_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimDownBounceD_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimDownBounceD_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimDownBounceD_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimDownBounceD_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimDownBounceD_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimDownBounceD_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTMarioAnimDownBounceD_joint24, /* [23] joint 24 */
};

/* Joint 2 */
u16 dFTMarioAnimDownBounceD_joint2[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ), 625, 0, 0, -45,
	ftAnimSetValRate(FT_ANIM_TRAY), 420, 1632,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), 1161, 3, -402, 5, 723, 26,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 26), -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 10), 1200,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 12), 298, -1340,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 4), 723, 134, 697, 293,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTMarioAnimDownBounceD_joint4[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 284, 14, 12,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), -457, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -402, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), 6,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimDownBounceD_joint5[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 3152, -83, -246, -11, -124, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 2774, -339, -277, 66, 189, 286,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2389, -241, -124, 123, 520, 240,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2274, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 863, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -96, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -316, -99,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -269, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2262, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 2120, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -251, 41, 875, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 653, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -13, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -126, -134,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -297, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 655, -33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 378, -73,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -310, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -403, -47,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2137, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2463, 345,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 290, -210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -465, 41, -42, -422,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -183, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2877, 248, -554, -335,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2961, 48, -712, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2973, 11, -144, 38, -747, -34,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimDownBounceD_joint7[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1041, -75,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1197, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -931, 315,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -566, 465,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 283,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -102, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -343, -183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -337, 265,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTMarioAnimDownBounceD_joint10[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 268, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -402, -49, -268, -21, 0, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -810, -65, -464, -17, 486, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1538, 235, -567, -69, 605, -234,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 204, -764, -525,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimDownBounceD_joint11[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1495, -4, 1378, 3, 1477, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1453, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1535, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -1398, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1228, 156,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -388, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1444, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1225, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1529, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1955, 137,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1248, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1438, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -204, 152,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 0, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2066, 59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2099, 21,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1445, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1128, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -37, -111, 2131, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -379, -61, 1991, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -344, 35, 996, -131, 2082, 91,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimDownBounceD_joint12[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -903, 16,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -538, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -497, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -661, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -631, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -443, 186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -175, 221,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -369, -294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -589, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -522, 66,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTMarioAnimDownBounceD_joint13[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 714, -1512, -100,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), -268, -1072, 714,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTMarioAnimDownBounceD_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 26),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimDownBounceD_joint16[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -93, 21, -99, -8, -515, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 55, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -130, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -89, 209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 127, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 24, 14, 303, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 406, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 193, -89,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -526, -12,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 472, 67,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 945, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -107, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -297, -57,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -532, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -529, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 940, -5, -338, -41, -524, 5,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimDownBounceD_joint18[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 548, 42,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 489, -186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 253, -244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 202, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 788, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 821, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 668, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 684, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 785, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 792, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTMarioAnimDownBounceD_joint20[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 142, -46, -143, 0, -257, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 300, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 108, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -118, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -71, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 115, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 173, 38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -54, -16,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 304, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 301, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -68, -101, 128, 100, 292, -213,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -488, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -258, -204, 309, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -476, 98, 329, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -60, 293, 365, -13, -81, 323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 111, 171, 301, -64, 158, 239,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimDownBounceD_joint21[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1555, -16, 1571, 0, -2368, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1587, 57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1318, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -2190, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2139, 37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1893, 93,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1522, 76,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -707, 54,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1282, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1708, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1793, 91,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1642, 21,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -663, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -686, -74,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1685, -41, -1592, 68,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1621, 17, -1442, 46,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -766, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -805, -39, 1660, 39, -1412, 29,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimDownBounceD_joint23[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 667, 42,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 933, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 917, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 284, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 197, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 213, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 106, -107,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTMarioAnimDownBounceD_joint24[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -172, 37, 319, -1, -115, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -120, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), 441, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 411, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 417, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -302, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -324, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -292, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -147, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -252, -13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 474, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 573, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -296, -4, -260, -8, 598, 24,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
