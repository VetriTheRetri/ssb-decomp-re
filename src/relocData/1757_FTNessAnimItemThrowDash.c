/* AnimJoint data for relocData file 1757 (FTNessAnimItemThrowDash) */
/* 3856 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimItemThrowDash_joint1[10];
extern u16 dFTNessAnimItemThrowDash_joint2[104];
extern u16 dFTNessAnimItemThrowDash_joint3[46];
extern u16 dFTNessAnimItemThrowDash_joint5[86];
extern u16 dFTNessAnimItemThrowDash_joint6[130];
extern u16 dFTNessAnimItemThrowDash_joint7[44];
extern u16 dFTNessAnimItemThrowDash_joint8[10];
extern u16 dFTNessAnimItemThrowDash_joint9[80];
extern u16 dFTNessAnimItemThrowDash_joint11[52];
extern u16 dFTNessAnimItemThrowDash_joint12[124];
extern u16 dFTNessAnimItemThrowDash_joint13[30];
extern u16 dFTNessAnimItemThrowDash_joint14[58];
extern u16 dFTNessAnimItemThrowDash_joint16[10];
extern u16 dFTNessAnimItemThrowDash_joint17[190];
extern u16 dFTNessAnimItemThrowDash_joint19[98];
extern u16 dFTNessAnimItemThrowDash_joint20[196];
extern u16 dFTNessAnimItemThrowDash_joint22[78];
extern u16 dFTNessAnimItemThrowDash_joint23[188];
extern u16 dFTNessAnimItemThrowDash_joint25[78];
extern u16 dFTNessAnimItemThrowDash_joint26[262];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTNessAnimItemThrowDash_joints[] = {
	(u32)dFTNessAnimItemThrowDash_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimItemThrowDash_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimItemThrowDash_joint3, /* [2] joint 3 */
	(u32)dFTNessAnimItemThrowDash_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTNessAnimItemThrowDash_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimItemThrowDash_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimItemThrowDash_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimItemThrowDash_joint9, /* [8] joint 9 */
	(u32)dFTNessAnimItemThrowDash_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTNessAnimItemThrowDash_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimItemThrowDash_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimItemThrowDash_joint14, /* [13] joint 14 */
	(u32)dFTNessAnimItemThrowDash_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTNessAnimItemThrowDash_joint17, /* [16] joint 17 */
	(u32)dFTNessAnimItemThrowDash_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTNessAnimItemThrowDash_joint20, /* [19] joint 20 */
	(u32)dFTNessAnimItemThrowDash_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTNessAnimItemThrowDash_joint23, /* [22] joint 23 */
	(u32)dFTNessAnimItemThrowDash_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTNessAnimItemThrowDash_joint26, /* [25] joint 26 */
	0xFFFF03A9, /* [26] END */
};

/* Joint 1 */
u16 dFTNessAnimItemThrowDash_joint1[10] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAZ), 0, 2116,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 38), 3600,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 2), 3600,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNessAnimItemThrowDash_joint2[104] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 755, -67,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 4), 552, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), -59, 8,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 4), -60, -7,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 5), 755,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 6), -67, 24,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 6), 552,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 3), -32, 8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 755, 32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), -60, -35,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 5), -67, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 588, -46,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 703, 25,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), -67, 16,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), -59, 17,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), -59, -1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 613, -108, -60, -15,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 608, -73, -72, -9,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 4), 540,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), -67, 145,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTNessAnimItemThrowDash_joint3[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -124, 0, -113, 0, 41, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), -124, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 37, 0, -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -113, 0, 41, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -83, 3, -202, -4, 31, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -82, 37, -173, -52, 26, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 28, -360, 8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTNessAnimItemThrowDash_joint5[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 407, 0, 234, 0, 78, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 255, -345, -308, -449, -145, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -282, -67, -663, 198, 273, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 121, 542, 88, 552, -1, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 803, 294, 441, -6, 609, 233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1006, 4, 67, -8, 699, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 1006, 0, 67, 1, 699, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 996, -5, 116, 9, 741, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 945, -123, 173, 30, 497, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 379, -236, 270, -43, -55, -124,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTNessAnimItemThrowDash_joint6[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1894, -138, -1293, 92, 1907, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2032, -386, -1200, 384, 1909, 235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2667, -307, -525, 302, 2377, 224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2648, -55, -596, -84, 2358, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2778, -194, -694, -71, 2493, 197,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -734, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3037, -127, 2752, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3032, -12, 2749, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 13), -2969, 0, 2683, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -735, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), -584, 38,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2971, 9, 2685, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), -3327, -75, 3055, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3399, -58, 3133, 65,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -3621, -48, 3471, 100,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -541, 64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -270, 19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3655, -12, 3564, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -3633, 9, 3625, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3627, 5, -261, 9, 3632, 7,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimItemThrowDash_joint7[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -247, -419,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -666, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 333,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 30), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -421, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -461, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, -12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTNessAnimItemThrowDash_joint8[10] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -804,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 40), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTNessAnimItemThrowDash_joint9[80] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 188, -1,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -68, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -78, -264, 372, 396, -297, -263,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -340, 117, 723, -172, -563, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 156, 189, 28, -614, -224, 311,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 38, -170, -505, -259, 60, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -184, -108, -491, 9, 0, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -178, 0, -486, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), -178, 1, -486, 5, 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 221, 11, -319, 56, 65, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -10, 0, 364, -3, -32, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTNessAnimItemThrowDash_joint11[52] = {
	ftAnimSetValRate(FT_ANIM_ROTY), -42, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), -190, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -190, 38, -42, 8, 103, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 94, 0, 23, 0, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1, 0, 5, 0, -1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), -1, 0, 5, 1, -1, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 15), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 150, 0, 28, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimItemThrowDash_joint12[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 513, 404, 948, 129, 522, 558,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1005, -428,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 917, 299, 1080, 412,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1112, 560, 1348, 227,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1774, 302,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2039, 446, 220, -288,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2005, 64, 428, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2168, 86, 544, 58, 2141, 191,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2159, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 545, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2179, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), 2161, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2159, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), 2130, 5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 545, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), 552, 4,
	ftAnimBlock(0, 21),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2168, 13, 2141, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 2516, 173, 2680, 253,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 553, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 477, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2745, 142, 586, 46, 3001, 208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2801, 56, 569, -16, 3097, 95,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimItemThrowDash_joint13[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -489, 480,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 240,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 35), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -467, -279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, -91,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTNessAnimItemThrowDash_joint14[58] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 143, 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), 804,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 75, 68, 30,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 4), 1072,
	ftAnimSetValT(FT_ANIM_ROTX, 8), 580,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 143, 17, 0, -17, 0, -7,
	ftAnimBlock(0, 4),
	ftAnimSetValBlockT(FT_ANIM_ROTX, 8), 625,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 2, 0, 6,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 4), 625,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 54, 126, 143, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 16), 90,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimItemThrowDash_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTNessAnimItemThrowDash_joint17[190] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2087, 47, -1438, 91, 1244, -55,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -2001, -47, -1393, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1311, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1527, 234,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1902, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2049, -29, -1558, -113,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1602, 53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -2282, -95,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1946, 47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2164, 142,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1508, 139,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1136, 69,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2322, 152,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2518, -198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2378, -65, -1073, 54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -967, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2412, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2071, 342, 2072, -516,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1727, 162, -1078, -99, 1484, -393,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1416, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1745, -46, 1286, -134,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -2047, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1301, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1414, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1588, -103, 1638, 150,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1656, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2045, 0, 1716, 65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1939, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -2001, 28,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1664, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1337, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1325, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1360, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1893, -66,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1340, -34,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1978, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1996, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1990, 6, -1347, 12, 1318, -21,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTNessAnimItemThrowDash_joint19[98] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 112, 246,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 520, -262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 140, -260,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 194, 275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 558, 262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 960, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1060, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 964, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 782, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 340, -243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -170,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 368, 363,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 727, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 706, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 619, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 637, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 453, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 419, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 430, 11,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTNessAnimItemThrowDash_joint20[196] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1382, -16, -1839, 14, 1826, -132,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1548, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -2072, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1380, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1455, 76,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1627, -91,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1540, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1673, -24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1508, -99,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1308, -65,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2123, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1945, 115,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1690, 59, 1211, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1426, 3, 1461, 14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1835, 73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1811, 23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1449, -32, 1447, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1552, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1471, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1785, 20, 1647, 125,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1703, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1600, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1496, -12, 1590, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1578, -20, 1292, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1537, 18, 1485, 229,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1564, 100, 1940, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1597, 83,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1732, -215,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1388, 96, 1881, -138,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1522, -59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1447, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1991, -146,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1868, 110,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1543, 57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1617, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1421, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1528, -83, -1717, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1587, -59, -1622, 95, 1583, -33,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimItemThrowDash_joint22[78] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -66, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -290, 57, 4, 2, -6, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 276, 108, 15, -13, -26, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 898, 41, -147, -24, -48, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 651, -224, -206, 64, 371, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -224, -109, 173, 65, 129, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -114, 51, 254, 5, -83, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 236, 59, 220, -29, -63, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 482, -23, -38, -16, 69, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -66, 0, 0,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTNessAnimItemThrowDash_joint23[188] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2138, 27, 310, 38, -2225, 51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 432, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2110, -6, -2174, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2151, -372, -2116, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2855, -543, 457, -117, -2543, -338,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3237, -220, 196, -182, -2793, -233,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -3298, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -3484, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 91, -81,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 11, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3302, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -3374, 44,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3527, -47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -3431, 138,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3318, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -3164, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 7, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 319, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3269, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -3053, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3078, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -3128, -118,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3116, 8, 389, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -3316, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -48, -13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3255, -122,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -3565, 149,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3270, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -3270, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -50, 0, -3323, 192,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 129, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -3136, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3119, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -3312, -76,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3271, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3304, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3337, -33, 179, 49, -3367, -54,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTNessAnimItemThrowDash_joint25[78] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 284, 99,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1040, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1072, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 722, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 678, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 467, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 299, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 755, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 805, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1050, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1139, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 836, -412,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 294, -418,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 7, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 305, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 356, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 311, -44,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimItemThrowDash_joint26[262] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1538, -134, -694, -8, 1769, -116,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -791, -275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1673, 85, 1652, -319,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1367, -18, 1130, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1710, -158, -1253, -414, 1374, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1684, 4, -1621, -221, 1359, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1603, 159,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1619, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1696, -53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1877, -82,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1395, 69,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1509, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1948, -40, 1423, -155,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1394, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1855, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1535, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1607, 34,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1370, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1597, -22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1833, 36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1440, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1573, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1972, 16,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1551, -26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1585, -43,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1505, -64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1756, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1947, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1875, -41,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1509, -69,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1593, 146,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1914, 3, -1711, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -1832, 5, -1926, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1753, 74,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1569, -35,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1824, 29, -1958, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -1573, 85, -1708, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1558, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1412, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1501, 72, -1636, 71, 1435, 23,
	ftAnimEnd(),
	0x400E, 0x038B, 0x004B, 0x000F, 0x48E0, 0xFF82, 0xFFAE, 0xFFF4, 0x200F, 0x0003, 0x0386, 0xFF94, 0x00E6, 0x000A, 0x002D, 0xFFFE, 0x200F, 0x0007, 0xFF52, 0xFFD6, 0x00B7, 0xFFF9, 0xFFF4, 0xFFFC, 0x200F, 0x0008, 0x0108, 0x0036, 0x007C, 0x0000, 0xFFF1, 0xFFFD, 0x200F, 0x0006, 0x024F, 0xFFEA, 0x00BE, 0x0000, 0xFFC5, 0x0009, 0x200F, 0x0006, 0xFFFC, 0xFFDF, 0x007A, 0xFFF5, 0x005C, 0x0003, 0x380F, 0x000A, 0x0038, 0x0000, 0x0000, 0x0000,
};
