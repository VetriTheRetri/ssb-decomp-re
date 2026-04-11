/* AnimJoint data for relocData file 632 (FTMarioAnimExitPipeWalk) */
/* 2288 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimExitPipeWalk_joint1[32];
extern u16 dFTMarioAnimExitPipeWalk_joint2[62];
extern u16 dFTMarioAnimExitPipeWalk_joint4[56];
extern u16 dFTMarioAnimExitPipeWalk_joint5[98];
extern u16 dFTMarioAnimExitPipeWalk_joint7[48];
extern u16 dFTMarioAnimExitPipeWalk_joint8[56];
extern u16 dFTMarioAnimExitPipeWalk_joint10[56];
extern u16 dFTMarioAnimExitPipeWalk_joint11[86];
extern u16 dFTMarioAnimExitPipeWalk_joint12[48];
extern u16 dFTMarioAnimExitPipeWalk_joint13[8];
extern u16 dFTMarioAnimExitPipeWalk_joint15[10];
extern u16 dFTMarioAnimExitPipeWalk_joint16[120];
extern u16 dFTMarioAnimExitPipeWalk_joint18[62];
extern u16 dFTMarioAnimExitPipeWalk_joint20[102];
extern u16 dFTMarioAnimExitPipeWalk_joint21[108];
extern u16 dFTMarioAnimExitPipeWalk_joint23[144];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimExitPipeWalk_joints[] = {
	(u32)dFTMarioAnimExitPipeWalk_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimExitPipeWalk_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimExitPipeWalk_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimExitPipeWalk_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimExitPipeWalk_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTMarioAnimExitPipeWalk_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimExitPipeWalk_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimExitPipeWalk_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimExitPipeWalk_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimExitPipeWalk_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimExitPipeWalk_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimExitPipeWalk_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimExitPipeWalk_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimExitPipeWalk_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimExitPipeWalk_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimExitPipeWalk_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	0xFFFF0210, /* [23] END */
};

/* Joint 1 */
u16 dFTMarioAnimExitPipeWalk_joint1[32] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 636,
	ftAnimSetValBlock(FT_ANIM_TRAZ), -1200,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 29), -24,
	ftAnimSetValT(FT_ANIM_TRAZ, 40), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 10), 508,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 10), 636,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 10), 508,
	ftAnimBlock(0, 9),
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 11), 0,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 10), 636,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTMarioAnimExitPipeWalk_joint2[62] = {
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
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTMarioAnimExitPipeWalk_joint4[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 339, 2, 135, -11, 75, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 411, 7, -87, -22, -108, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 433, -5, -158, -4, -161, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 358, -4, -135, 10, -174, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 360, 1, 5, 19, -30, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 378, -1, 83, 11, 3, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 339, 1, 135, -9, 75, -6,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimExitPipeWalk_joint5[98] = {
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
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimExitPipeWalk_joint7[48] = {
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
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimExitPipeWalk_joint8[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 187, 0, -68, 0, -32, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 173, 0, -68, 0, -24, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 196, 3, -69, 0, -29, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 204, -1, -69, 0, -54, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 166, -2, -68, 0, -43, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 172, 1, -68, 0, -48, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 187, 0, -68, 0, -32, 1,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTMarioAnimExitPipeWalk_joint10[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -181, 2, 4, 3, 39, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -159, 0, 106, 11, 35, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -187, -5, 155, 5, 26, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -210, 0, 167, -4, 25, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -198, 0, 80, -10, 37, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -200, 1, 49, -6, 44, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -181, 2, 4, 3, 39, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimExitPipeWalk_joint11[86] = {
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
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimExitPipeWalk_joint12[48] = {
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
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTMarioAnimExitPipeWalk_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 446, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTMarioAnimExitPipeWalk_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimExitPipeWalk_joint16[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -202, 7, -80, 5, -129, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -239, -37, 46, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), -66, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -92, -42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -520, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -273, -23, 151, 110,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 683, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -146, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -42, 57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -581, 67,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -553, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -549, 49,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 647, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 500, -168,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -475, 150,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -70, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 244, -260,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -403, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -461, 106,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -111, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -62, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -191, -14,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -382, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -200, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -202, -10, -80, 31, -129, 70,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimExitPipeWalk_joint18[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 159, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 768, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 790, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 218, -191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 660, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 825, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1082, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 988, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 141, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -141,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTMarioAnimExitPipeWalk_joint20[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -106, -4, -2, 9, 24, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -158, -37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 292, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 15, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 13, -51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -346, 1,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -191, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -239, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -345, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -98, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -138, 56, 322, 2, 26, 62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 38, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 115, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 26, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 25, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 24, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 64, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -105, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 100, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 6, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -106, 0, -2, -9, 24, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimExitPipeWalk_joint21[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 90, 11, 101, 0, 638, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 150, 0, 361, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 338, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 311, -54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -329, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 125, -50, 393, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 11, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 142, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 130, -10, -349, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -214, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 161, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 11, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -12, -9,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -197, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -110, 81,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -11, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 79, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -23, 88,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 524, 103,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 164, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 123, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 90, 10, 101, -22, 638, 113,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimExitPipeWalk_joint23[144] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 75, 61,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 345, 198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 534, 179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1066, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 946, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 236, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 139, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 510, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 601, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 663, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 574, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 238, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 75, -163,
	ftAnimEnd(),
	0x0000, 0x200E, 0x0039, 0xFFC5, 0xFFE5, 0x0003, 0xFFA6, 0xFFFB, 0x2809, 0x0013, 0x0018, 0x001F, 0x2805, 0x0027, 0xFFEA, 0xFFFC, 0x2003, 0x0007, 0xFF27, 0xFFD0, 0x2003, 0x0001, 0xFF0B, 0x001C, 0x2003, 0x0003, 0x0080, 0x002E, 0x2003, 0x0001, 0x005B, 0xFFD7, 0x2803, 0x000B, 0x0029, 0x000B, 0x0801, 0x0007, 0x2009, 0x0001, 0x0037, 0x0000, 0x2809, 0x0008, 0xFF4D, 0xFFE5, 0x0801, 0x0003, 0x2003, 0x0001, 0x0037, 0x000D, 0x2803, 0x0007, 0x0052, 0x0010, 0x0801, 0x0004, 0x2009, 0x0001, 0xFF32, 0xFFA9, 0x2009, 0x0002, 0xFE6E, 0xFFD6, 0x200B, 0x0001, 0x005D, 0x000A, 0xFE4A, 0xFFE1, 0x200B, 0x0007, 0x0039, 0xFFFC, 0xFF5E, 0x0045, 0x200F, 0x0001, 0x0039, 0x0000, 0xFFE5, 0xFFFC, 0xFFA6, 0x0048, 0x0000, 0x0000, 0x0000,
};
