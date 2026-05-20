/* AnimJoint data for relocData file 494 (FTNYoshiAnimPose1P) */
/* 784 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNYoshiAnimPose1P_joint1[28];
extern u16 dFTNYoshiAnimPose1P_joint2[10];
extern u16 dFTNYoshiAnimPose1P_joint3[22];
extern u16 dFTNYoshiAnimPose1P_joint4[18];
extern u16 dFTNYoshiAnimPose1P_joint7[14];
extern u16 dFTNYoshiAnimPose1P_joint8[16];
extern u16 dFTNYoshiAnimPose1P_joint9[16];
extern u16 dFTNYoshiAnimPose1P_joint11[8];
extern u16 dFTNYoshiAnimPose1P_joint12[24];
extern u16 dFTNYoshiAnimPose1P_joint13[16];
extern u16 dFTNYoshiAnimPose1P_joint14[8];
extern u16 dFTNYoshiAnimPose1P_joint15[8];
extern u16 dFTNYoshiAnimPose1P_joint16[8];
extern u16 dFTNYoshiAnimPose1P_joint18[8];
extern u16 dFTNYoshiAnimPose1P_joint19[24];
extern u16 dFTNYoshiAnimPose1P_joint21[14];
extern u16 dFTNYoshiAnimPose1P_joint23[24];
extern u16 dFTNYoshiAnimPose1P_joint24[24];
extern u16 dFTNYoshiAnimPose1P_joint26[16];
extern u16 dFTNYoshiAnimPose1P_joint27[30];

/* Joint pointer table (27 entries, 108 bytes) */
AObjEvent32 * dFTNYoshiAnimPose1P_joints[] = {
	(AObjEvent32 *)dFTNYoshiAnimPose1P_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTNYoshiAnimPose1P_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTNYoshiAnimPose1P_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTNYoshiAnimPose1P_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTNYoshiAnimPose1P_joint7, /* [4] joint 7 */
	NULL, /* [5] NULL */
	NULL, /* [6] NULL */
	(AObjEvent32 *)dFTNYoshiAnimPose1P_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTNYoshiAnimPose1P_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTNYoshiAnimPose1P_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTNYoshiAnimPose1P_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTNYoshiAnimPose1P_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTNYoshiAnimPose1P_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTNYoshiAnimPose1P_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTNYoshiAnimPose1P_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTNYoshiAnimPose1P_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTNYoshiAnimPose1P_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTNYoshiAnimPose1P_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTNYoshiAnimPose1P_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTNYoshiAnimPose1P_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTNYoshiAnimPose1P_joint26, /* [24] joint 26 */
	NULL, /* [25] NULL */
	(AObjEvent32 *)dFTNYoshiAnimPose1P_joint27, /* [26] joint 27 */
};

/* 4-byte alignment padding */
static u32 dFTNYoshiAnimPose1P_pad[1] = { 0 };

/* Joint 1 */
u16 dFTNYoshiAnimPose1P_joint1[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -1920, 1492, -960,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -268, -134, 0, -355, 960, -3839, 815, -2716, 0, 3839,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -268, -711, -2880, 813, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNYoshiAnimPose1P_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTNYoshiAnimPose1P_joint3[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -194, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 198, 196, 399, 199, 122, 61,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 198, 399, 122,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTNYoshiAnimPose1P_joint4[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -71, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -71, -121, 0, -17, 0, 83,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -314, -34, 167,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNYoshiAnimPose1P_joint7[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 81,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 491, 204,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 491,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTNYoshiAnimPose1P_joint8[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1364, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), -1837, 1946,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1364, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1364, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTNYoshiAnimPose1P_joint9[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -979, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -979, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -979, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTNYoshiAnimPose1P_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTNYoshiAnimPose1P_joint12[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1302, 0, 1831, 0, 960, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1302, 0, 1831, 0, 960, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), 960, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1302, 1831,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNYoshiAnimPose1P_joint13[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -903, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -903, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -903, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTNYoshiAnimPose1P_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTNYoshiAnimPose1P_joint15[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1072, 1608, 0,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTNYoshiAnimPose1P_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 358, 0, 0,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTNYoshiAnimPose1P_joint18[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 261, 0, 0,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTNYoshiAnimPose1P_joint19[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 7, 0, 10, 0, 255, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7, 0, 10, 0, 255, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7, 0, 10, 0, 255, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNYoshiAnimPose1P_joint21[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 289, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 289, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 289,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTNYoshiAnimPose1P_joint23[24] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 22, 0, -30, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), 1623,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1623, 0, 22, 0, -30, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1623, 0, 22, 0, -30, 0,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNYoshiAnimPose1P_joint24[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 7, 0, 10, 0, 255, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7, 0, 10, 0, 255, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7, 0, 10, 0, 255, 0,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNYoshiAnimPose1P_joint26[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 289, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 289, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 289, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 27 */
u16 dFTNYoshiAnimPose1P_joint27[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1623, 0, 22, 0, -30, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1623, 0, 22, 0, -30, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 22, 0, -30, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 1623,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
