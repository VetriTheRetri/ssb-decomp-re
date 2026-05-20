/* AnimJoint data for relocData file 519 (FTMarioAnimShieldDrop) */
/* 1440 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimShieldDrop_joint1[36];
extern u16 dFTMarioAnimShieldDrop_joint2[10];
extern u16 dFTMarioAnimShieldDrop_joint4[28];
extern u16 dFTMarioAnimShieldDrop_joint5[100];
extern u16 dFTMarioAnimShieldDrop_joint7[52];
extern u16 dFTMarioAnimShieldDrop_joint8[22];
extern u16 dFTMarioAnimShieldDrop_joint10[12];
extern u16 dFTMarioAnimShieldDrop_joint11[116];
extern u16 dFTMarioAnimShieldDrop_joint12[52];
extern u16 dFTMarioAnimShieldDrop_joint13[22];
extern u16 dFTMarioAnimShieldDrop_joint15[10];
extern u16 dFTMarioAnimShieldDrop_joint16[56];
extern u16 dFTMarioAnimShieldDrop_joint18[28];
extern u16 dFTMarioAnimShieldDrop_joint20[62];
extern u16 dFTMarioAnimShieldDrop_joint21[24];
extern u16 dFTMarioAnimShieldDrop_joint23[16];
extern u16 dFTMarioAnimShieldDrop_joint24[26];

/* Joint pointer table (24 entries, 96 bytes) */
AObjEvent32 * dFTMarioAnimShieldDrop_joints[] = {
	(AObjEvent32 *)dFTMarioAnimShieldDrop_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTMarioAnimShieldDrop_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTMarioAnimShieldDrop_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTMarioAnimShieldDrop_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTMarioAnimShieldDrop_joint7, /* [5] joint 7 */
	NULL, /* [6] NULL */
	(AObjEvent32 *)dFTMarioAnimShieldDrop_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTMarioAnimShieldDrop_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTMarioAnimShieldDrop_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTMarioAnimShieldDrop_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTMarioAnimShieldDrop_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTMarioAnimShieldDrop_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTMarioAnimShieldDrop_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTMarioAnimShieldDrop_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTMarioAnimShieldDrop_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTMarioAnimShieldDrop_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTMarioAnimShieldDrop_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTMarioAnimShieldDrop_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTMarioAnimShieldDrop_joint1[36] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -373, 0, 0, 420, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 10), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), -316, -33,
	ftAnimSetValRateT(FT_ANIM_TRAY, 25), 420, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 189, 130,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 20), 3252,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 15), 0, 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTMarioAnimShieldDrop_joint2[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 1671, 1622, 1636,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTMarioAnimShieldDrop_joint4[28] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 393, 251, -182,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 341, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 277, 145,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 251, 0, -182, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 516, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 25, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTMarioAnimShieldDrop_joint5[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -337, -2, -270, 0, 496, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -489, -5, -262, 3, 542, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -493, 42, -258, 24, 533, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -184, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -404, 92, 482, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -308, 17, 411, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 437, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -368, -74, -230, -58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -436, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -458, -86,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -737, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 461, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 585, 96,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -452, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -429, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -884, -142, 695, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1125, -69, 883, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1161, -36, -424, 4, 913, 29,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimShieldDrop_joint7[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -480, -3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -776, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -807, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -934, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1000, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -867, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -732, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -629, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -598, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -525, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -464, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -443, 21,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimShieldDrop_joint8[22] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 201, -4, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 797, 12, 295, -10, 146, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 524, -6, -272, -3, 82, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTMarioAnimShieldDrop_joint10[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -357,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 139, -209,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 100), -221,
	ftAnimBlock(0, 25),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTMarioAnimShieldDrop_joint11[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -528, 28, 157, -327, -652, -78,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -475, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -169, -191, -731, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -226, -19, -681, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -173, 35, -659, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -482, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -473, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -137, 43, -654, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 98, 36, -627, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 130, 55, -624, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 358, 58, -480, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -450, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 29, 83,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 410, 48, -429, 53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -92, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 572, 4,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 109, 74,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 310, 23,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -73, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -62, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 327, 17, 576, 3, -56, 5,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimShieldDrop_joint12[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -561, 561,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 276,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -267, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -354, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -488, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -483, 5,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimShieldDrop_joint13[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 714,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 491, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 625, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 562,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 625, 3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTMarioAnimShieldDrop_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 25),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimShieldDrop_joint16[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1682, -1, -1350, 0, -1807, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -1871, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -1555, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 1517, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1496, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1415, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1864, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1761, 9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1572, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -1624, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1416, 1, -1628, -4, -1753, 7,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimShieldDrop_joint18[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 833, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 690, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 656, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 317, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 288, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 270, -17,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTMarioAnimShieldDrop_joint20[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -279, 2, -72, 2, -353, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 198, 6, -241, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 17), 9, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 16, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 76, 29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 203, -2, -225, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 109, -46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 51, 48,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 103, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 115, 6, 65, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 117, 1, 45, -19, 79, 27,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimShieldDrop_joint21[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 41, 0, 247, 0, -194, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 65, 1, 245, 0, -166, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 67, 1, 245, 0, -164, 2,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimShieldDrop_joint23[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 870, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), 820, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 816, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTMarioAnimShieldDrop_joint24[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 1738, 0, -1559, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), 1183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 1734, 0, -1559, 0, 1183, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1734, 0, -1559, 0, 1183, 0,
	ftAnimEnd(),
	0x0000, 0x0000,
};
