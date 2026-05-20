/* AnimJoint data for relocData file 493 (FTNLinkAnimPose1P) */
/* 752 bytes: 124-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNLinkAnimPose1P_joint1[26];
extern u16 dFTNLinkAnimPose1P_joint2[10];
extern u16 dFTNLinkAnimPose1P_joint4[22];
extern u16 dFTNLinkAnimPose1P_joint5[24];
extern u16 dFTNLinkAnimPose1P_joint6[16];
extern u16 dFTNLinkAnimPose1P_joint9[18];
extern u16 dFTNLinkAnimPose1P_joint10[24];
extern u16 dFTNLinkAnimPose1P_joint11[16];
extern u16 dFTNLinkAnimPose1P_joint12[8];
extern u16 dFTNLinkAnimPose1P_joint18[8];
extern u16 dFTNLinkAnimPose1P_joint19[8];
extern u16 dFTNLinkAnimPose1P_joint22[8];
extern u16 dFTNLinkAnimPose1P_joint23[24];
extern u16 dFTNLinkAnimPose1P_joint25[14];
extern u16 dFTNLinkAnimPose1P_joint27[24];
extern u16 dFTNLinkAnimPose1P_joint28[24];
extern u16 dFTNLinkAnimPose1P_joint30[8];
extern u16 dFTNLinkAnimPose1P_joint31[30];

/* Joint pointer table (31 entries, 124 bytes) */
AObjEvent32 * dFTNLinkAnimPose1P_joints[] = {
	(AObjEvent32 *)dFTNLinkAnimPose1P_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTNLinkAnimPose1P_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTNLinkAnimPose1P_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTNLinkAnimPose1P_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTNLinkAnimPose1P_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTNLinkAnimPose1P_joint9, /* [6] joint 9 */
	NULL, /* [7] NULL */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTNLinkAnimPose1P_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTNLinkAnimPose1P_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTNLinkAnimPose1P_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTNLinkAnimPose1P_joint18, /* [12] joint 18 */
	NULL, /* [13] NULL */
	NULL, /* [14] NULL */
	NULL, /* [15] NULL */
	NULL, /* [16] NULL */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTNLinkAnimPose1P_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTNLinkAnimPose1P_joint22, /* [19] joint 22 */
	NULL, /* [20] NULL */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTNLinkAnimPose1P_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTNLinkAnimPose1P_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTNLinkAnimPose1P_joint27, /* [25] joint 27 */
	NULL, /* [26] NULL */
	(AObjEvent32 *)dFTNLinkAnimPose1P_joint28, /* [27] joint 28 */
	(AObjEvent32 *)dFTNLinkAnimPose1P_joint30, /* [28] joint 30 */
	NULL, /* [29] NULL */
	(AObjEvent32 *)dFTNLinkAnimPose1P_joint31, /* [30] joint 31 */
};

/* 4-byte alignment padding */
static u32 dFTNLinkAnimPose1P_pad[1] = { 0 };

/* Joint 1 */
u16 dFTNLinkAnimPose1P_joint1[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 178, -5402, 1954, 1405,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 178, -89, -1027, 10665, 1312, -2437, 960, -1239,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, -2735, 1345, 1096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTNLinkAnimPose1P_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTNLinkAnimPose1P_joint4[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -154, 372, -168,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -154, 77, 372, -186, -168, 84,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNLinkAnimPose1P_joint5[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2681, 678, -1520, 561, -182, -856,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3360, 345, -958, 788, -1039, -399,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3372, 12, 56, 1014, -981, 57,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNLinkAnimPose1P_joint6[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -7, -968,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -975, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 975,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTNLinkAnimPose1P_joint9[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 291, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 291, 259, 0, -484, 0, -312,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 810, -969, -624,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTNLinkAnimPose1P_joint10[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1838, 844, 493, -86, 1962, 695,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2682, 86, 407, 414, 2657, 202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2011, -670, 1323, 916, 2368, -289,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNLinkAnimPose1P_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -604,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1208, -1201,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTNLinkAnimPose1P_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTNLinkAnimPose1P_joint18[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, 0, -804,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTNLinkAnimPose1P_joint19[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTNLinkAnimPose1P_joint22[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTNLinkAnimPose1P_joint23[24] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), -3, 0, 121, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), -684,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3, 13, 121, -83, -684, 296,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 24, 27, -46, -167, -91, 593,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTNLinkAnimPose1P_joint25[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 929,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 929, -464,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -929,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTNLinkAnimPose1P_joint27[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 226, 0, -124, 0, 15, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 226, 139, -124, 0, 15, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 505, 279, -124, 0, 15, 0,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTNLinkAnimPose1P_joint28[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -96, 0, 22, 0, 83, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -96, 0, 22, 0, 83, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -96, 0, 22, 0, 83, 0,
	ftAnimEnd(),
};

/* Joint 30 */
u16 dFTNLinkAnimPose1P_joint30[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 31 */
u16 dFTNLinkAnimPose1P_joint31[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -207, 0, 91, 0, 246, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -207, 466, 91, 48, 246, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 725, 932, 187, 96, 292, 45,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
