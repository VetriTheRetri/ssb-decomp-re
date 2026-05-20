/* AnimJoint data for relocData file 1684 (FTNessAnimShieldDrop) */
/* 1856 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimShieldDrop_joint1[36];
extern u16 dFTNessAnimShieldDrop_joint2[10];
extern u16 dFTNessAnimShieldDrop_joint4[36];
extern u16 dFTNessAnimShieldDrop_joint5[82];
extern u16 dFTNessAnimShieldDrop_joint6[40];
extern u16 dFTNessAnimShieldDrop_joint7[14];
extern u16 dFTNessAnimShieldDrop_joint8[30];
extern u16 dFTNessAnimShieldDrop_joint10[20];
extern u16 dFTNessAnimShieldDrop_joint11[112];
extern u16 dFTNessAnimShieldDrop_joint12[46];
extern u16 dFTNessAnimShieldDrop_joint13[34];
extern u16 dFTNessAnimShieldDrop_joint15[10];
extern u16 dFTNessAnimShieldDrop_joint16[78];
extern u16 dFTNessAnimShieldDrop_joint18[32];
extern u16 dFTNessAnimShieldDrop_joint19[58];
extern u16 dFTNessAnimShieldDrop_joint21[26];
extern u16 dFTNessAnimShieldDrop_joint22[94];
extern u16 dFTNessAnimShieldDrop_joint24[32];
extern u16 dFTNessAnimShieldDrop_joint25[46];
extern u16 dFTNessAnimShieldDrop_joint26[40];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTNessAnimShieldDrop_joints[] = {
	(AObjEvent32 *)dFTNessAnimShieldDrop_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTNessAnimShieldDrop_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTNessAnimShieldDrop_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTNessAnimShieldDrop_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTNessAnimShieldDrop_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTNessAnimShieldDrop_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTNessAnimShieldDrop_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTNessAnimShieldDrop_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTNessAnimShieldDrop_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTNessAnimShieldDrop_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTNessAnimShieldDrop_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTNessAnimShieldDrop_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTNessAnimShieldDrop_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTNessAnimShieldDrop_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTNessAnimShieldDrop_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTNessAnimShieldDrop_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTNessAnimShieldDrop_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTNessAnimShieldDrop_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTNessAnimShieldDrop_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTNessAnimShieldDrop_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTNessAnimShieldDrop_joint1[36] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -373, 0, 0, 420, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 10), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 24), 242, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 189, 134,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 19), 3216,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 14), 0, 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTNessAnimShieldDrop_joint2[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 1608, 1818, 1608,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTNessAnimShieldDrop_joint4[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 393, 251, -182, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 24), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 341, 6, 277, -10, 145, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 516, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 148, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTNessAnimShieldDrop_joint5[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -337, -4, -270, 0, 496, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 418, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 13), -577, -4, -204, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -578, 47, -198, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -379, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -150, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 383, -39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 465, 102,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -438, -70,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -803, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -244, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -385, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -961, -141, -319, 60, 570, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1087, -87, -264, 38, 640, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1136, -48, -241, 22, 665, 24,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimShieldDrop_joint6[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -480, -3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -776, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -807, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1000, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -962, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -629, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -656, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -686, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -673, 13,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTNessAnimShieldDrop_joint7[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 0, 0, 268,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimShieldDrop_joint8[30] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 201, -4, 176, 0, 288, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), 0, 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 797, -2, 295, 0, 146, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 138, -6, 0, -3, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTNessAnimShieldDrop_joint10[20] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -357, 139, -209, 0, 54, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), 0, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), 0, 0, 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTNessAnimShieldDrop_joint11[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2688, 30, 157, -327, 2564, -78,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 2828, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -169, -193, 2485, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -229, -19, 2532, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 2591, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -38, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 10, 48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 185, 97,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2587, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2843, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2868, 58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 3670, 213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 289, 89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 528, -18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2940, 104,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 3893, 74,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3887, 199,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 4411, 31,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 511, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 494, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3958, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4003, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4432, 20, 492, -1, 4025, 22,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimShieldDrop_joint12[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -561, 561,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 280,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -418, -200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -576, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -728, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -665, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -613, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -584, 29,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTNessAnimShieldDrop_joint13[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 714, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 491, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 625, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 562, -72, 0, 4, 0, 56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -104, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 44, 566,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTNessAnimShieldDrop_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimShieldDrop_joint16[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 73, 2, -257, -4, -199, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 208, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -411, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -621, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -704, -70,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -713, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 204, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 57, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -82, -102, -553, 115,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -117, 7, -563, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -383, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -336, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -110, 7, -581, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -92, 0, -627, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -92, 0, -336, 0, -627, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimShieldDrop_joint18[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 833, 3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 593, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 441, -212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 7, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTNessAnimShieldDrop_joint19[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1620, -7, 1680, -2, -1962, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 1405, -2, -1859, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -1795, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1783, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1814, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1824, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -1701, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1682, 38, 1404, 20, -1834, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1575, -8, 1628, 57, -1457, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1588, -12, 1659, 31, -1414, 43,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimShieldDrop_joint21[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 80, 170, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -79, -29, 172, 0, 162, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -248, -16, 174, 0, 146, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -384, 178, 112,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimShieldDrop_joint22[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 41, -2, 247, 5, -194, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -116, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 402, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -620, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -708, -74,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -725, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -117, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 145, 104,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -592, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 236, 39, 350, -28, -476, 42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 201, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 324, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -507, -31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -620, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 196, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 176, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 324, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 323, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 175, 0, 323, 0, -621, 0,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimShieldDrop_joint24[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 870, 4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 645, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 493, -197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 7, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTNessAnimShieldDrop_joint25[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 129, 0, -49, 0, -424, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 178, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), 9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 31, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -66, 0,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 194, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 228, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -66, 0, 10, 0, 230, 1,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimShieldDrop_joint26[40] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 73, -96, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -91, -56, -106, -15, -127, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -381, -32, -217, -10, -242, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -355, 0, -188, 7, -197, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -392, -96, -76,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
