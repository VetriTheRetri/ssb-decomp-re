/* AnimJoint data for relocData file 502 (FTMarioAnimWalk3) */
/* 2352 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimWalk3_joint1[56];
extern u16 dFTMarioAnimWalk3_joint2[64];
extern u16 dFTMarioAnimWalk3_joint4[58];
extern u16 dFTMarioAnimWalk3_joint5[100];
extern u16 dFTMarioAnimWalk3_joint7[48];
extern u16 dFTMarioAnimWalk3_joint8[58];
extern u16 dFTMarioAnimWalk3_joint10[58];
extern u16 dFTMarioAnimWalk3_joint11[88];
extern u16 dFTMarioAnimWalk3_joint12[48];
extern u16 dFTMarioAnimWalk3_joint13[8];
extern u16 dFTMarioAnimWalk3_joint15[12];
extern u16 dFTMarioAnimWalk3_joint16[120];
extern u16 dFTMarioAnimWalk3_joint18[60];
extern u16 dFTMarioAnimWalk3_joint20[112];
extern u16 dFTMarioAnimWalk3_joint21[110];
extern u16 dFTMarioAnimWalk3_joint23[128];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimWalk3_joints[] = {
	(u32)dFTMarioAnimWalk3_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimWalk3_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimWalk3_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimWalk3_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimWalk3_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTMarioAnimWalk3_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimWalk3_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimWalk3_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimWalk3_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimWalk3_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimWalk3_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimWalk3_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimWalk3_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimWalk3_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimWalk3_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimWalk3_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	0xFFFF0224, /* [23] END */
};

/* Joint 1 */
u16 dFTMarioAnimWalk3_joint1[56] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 636, -1, 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 10), -9, -4,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 29), -24,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 10), 508,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 10), 636,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), -8, 9,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 6), 2, 2,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 10), 508,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 9), -4, -7,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 2), -8, 2,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 11), 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAY, 10), 636, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 9), 0, 0,
	ftAnimLoop(0x6800, -110),
};

/* Joint 2 */
u16 dFTMarioAnimWalk3_joint2[64] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -72, 8, 17, -2,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), -222,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 67, 11, 5, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), -271,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 93, -3, -14, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), -279,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 37, -9, 49, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), -233,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -54, -11, 26, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 9), -229,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -85, -1, 50, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), -241,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -72, 8, 17, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 9), -222,
	ftAnimLoop(0x6800, -124),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTMarioAnimWalk3_joint4[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 339, 2, 135, -11, 75, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 411, 7, -87, -22, -108, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 433, -5, -158, -4, -161, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 358, -4, -135, 10, -174, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 360, 1, 5, 19, -30, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 378, -1, 83, 11, 3, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 339, 1, 135, -9, 75, -6,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimWalk3_joint5[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -572, -8, -78, 0, 540, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -244, 42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -291, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 130, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 62, -76,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -442, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -197, 53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 67, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -322, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -325, 26,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 5, -66, -347, 103,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 227, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -549, -19,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -294, 33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -79, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 270, 45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 536, 7,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -564, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -572, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -572, 0, -78, 1, 540, 3,
	ftAnimLoop(0x6800, -196),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimWalk3_joint7[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -500, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -689, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -695, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -569, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -496, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -730, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -711, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -553, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -516, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -495, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, -5,
	ftAnimLoop(0x6800, -94),
};

/* Joint 8 */
u16 dFTMarioAnimWalk3_joint8[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 187, 0, -68, 0, -32, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 173, 0, -68, 0, -24, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 196, 3, -69, 0, -29, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 204, -1, -69, 0, -54, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 166, -2, -68, 0, -43, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 172, 1, -68, 0, -48, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 187, 0, -68, 0, -32, 1,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTMarioAnimWalk3_joint10[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -181, 2, 4, 3, 39, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -159, 0, 106, 11, 35, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -187, -5, 155, 5, 26, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -210, 0, 167, -4, 25, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -198, 0, 80, -10, 37, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -200, 1, 49, -6, 44, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -181, 2, 4, 3, 39, 0,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimWalk3_joint11[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -151, -6, 355, -8, -538, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), 283, 25, 194, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 240, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 211, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), 301, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 305, 27, 239, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 16), 532, -32, 361, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 497, -35, 316, -45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -279, -112,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -16, -76,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 327, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 345, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -390, -101,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -538, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -88, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -138, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -151, -13, 355, 10, -538, 0,
	ftAnimLoop(0x6800, -172),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimWalk3_joint12[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -411, 27,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -726, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -711, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -540, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -511, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -686, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -689, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -595, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -516, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -396, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -411, -14,
	ftAnimLoop(0x6800, -94),
};

/* Joint 13 */
u16 dFTMarioAnimWalk3_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 446, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimLoop(0x6800, -14),
};

/* Joint 15 */
u16 dFTMarioAnimWalk3_joint15[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 40),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimWalk3_joint16[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -201, 7, -81, 5, -133, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -267, -25, 130, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), -59, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -82, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -524, -32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -282, 0, 249, 117,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -106, -109, 691, -28,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -556, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -546, 55,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -246, -123, 651, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 486, -177,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -579, 70,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -462, 157,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -57, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 222, -263,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -404, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -456, 108,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -109, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -50, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -192, -14,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -380, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -195, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -201, -8, -81, 27, -133, 61,
	ftAnimLoop(0x6800, -236),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimWalk3_joint18[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 7, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 143, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 217, -195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -108,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 656, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 824, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1084, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 986, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 309, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 129, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -121,
	ftAnimLoop(0x6800, -116),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTMarioAnimWalk3_joint20[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -105, -4, -2, 9, 24, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -107, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 292, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 15, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 13, -51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -346, 1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -146, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -241, 52,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -345, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -98, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -141, 54, 322, 2, 26, 62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 26, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 115, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -2, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 36, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 112, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 25, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 24, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 121, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -106, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 100, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 6, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -105, 0, -2, -9, 24, 0,
	ftAnimLoop(0x6800, -220),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimWalk3_joint21[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 89, 11, 102, 0, 629, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 134, -7, 356, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 324, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 289, -62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -350, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 104, -51, 381, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 46, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 140, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 129, -9, -362, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 158, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -227, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -211, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -37, 89,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 45, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 52, 15,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 54, 92,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 520, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 162, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 124, -18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 67, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 78, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 89, 10, 102, -21, 629, 108,
	ftAnimLoop(0x6800, -216),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimWalk3_joint23[128] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 91, 59,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 992, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1090, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1064, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 939, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 249, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 167, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 683, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 755, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 244, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 91, -152,
	ftAnimLoop(0x6800, -94),
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 55, -57, -27, 3, -90, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), 24, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 39), -22, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -207, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -230, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 116, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 83, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 39, -13,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 55, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -179, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 30, 8, -206, -87,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 56, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -402, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -438, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -162, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 55, -1, -27, -4, -90, 72,
	ftAnimLoop(0x6800, -152),
	ftAnimEnd(),
	0x0000, 0x0000,
};
