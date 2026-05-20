/* AnimJoint data for relocData file 490 (FTNFoxAnimPose1P) */
/* 736 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNFoxAnimPose1P_joint1[30];
extern u16 dFTNFoxAnimPose1P_joint2[10];
extern u16 dFTNFoxAnimPose1P_joint4[22];
extern u16 dFTNFoxAnimPose1P_joint5[24];
extern u16 dFTNFoxAnimPose1P_joint7[14];
extern u16 dFTNFoxAnimPose1P_joint8[18];
extern u16 dFTNFoxAnimPose1P_joint10[8];
extern u16 dFTNFoxAnimPose1P_joint11[24];
extern u16 dFTNFoxAnimPose1P_joint15[16];
extern u16 dFTNFoxAnimPose1P_joint16[24];
extern u16 dFTNFoxAnimPose1P_joint18[16];
extern u16 dFTNFoxAnimPose1P_joint20[24];
extern u16 dFTNFoxAnimPose1P_joint21[24];
extern u16 dFTNFoxAnimPose1P_joint23[16];
extern u16 dFTNFoxAnimPose1P_joint25[24];
extern u16 dFTNFoxAnimPose1P_joint26[20];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTNFoxAnimPose1P_joints[] = {
	(AObjEvent32 *)dFTNFoxAnimPose1P_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTNFoxAnimPose1P_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTNFoxAnimPose1P_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTNFoxAnimPose1P_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTNFoxAnimPose1P_joint7, /* [5] joint 7 */
	NULL, /* [6] NULL */
	(AObjEvent32 *)dFTNFoxAnimPose1P_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTNFoxAnimPose1P_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTNFoxAnimPose1P_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTNFoxAnimPose1P_joint15, /* [11] joint 15 */
	NULL, /* [12] NULL */
	NULL, /* [13] NULL */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTNFoxAnimPose1P_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTNFoxAnimPose1P_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTNFoxAnimPose1P_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTNFoxAnimPose1P_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTNFoxAnimPose1P_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTNFoxAnimPose1P_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTNFoxAnimPose1P_joint26, /* [25] joint 26 */
};

/* 4-byte alignment padding */
static u32 dFTNFoxAnimPose1P_pad[1] = { 0 };

/* Joint 1 */
u16 dFTNFoxAnimPose1P_joint1[30] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 268, 0, -3942, 2044, -319,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 0, -134, 0, 0, -446, 21522, 1961, -6056, -767, 7588,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 0, 1438, 530, 1577,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNFoxAnimPose1P_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTNFoxAnimPose1P_joint4[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 199, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 199, 0, 0, 291, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 199, 583, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNFoxAnimPose1P_joint5[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1686, -174, 1562, -1518, -2544, 578,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), 43, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1511, -1965,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1686, 174, 1562, 1518, -2544, -578,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNFoxAnimPose1P_joint7[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -579, 571,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -579, -571,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNFoxAnimPose1P_joint8[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -178, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -178, 247, 0, -585, 0, -126,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 316, -1170, -252,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTNFoxAnimPose1P_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTNFoxAnimPose1P_joint11[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 100, 0, 63, 0, 747, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 100, -50, 63, 477, 747, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -101, 1019, 955, 400, -346,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTNFoxAnimPose1P_joint15[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -717, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -717, 355,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 710,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTNFoxAnimPose1P_joint16[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 171, -11, -58, 33, 265, -888,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 160, 0, -24, 0, -623, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 171, 11, -58, -33, 265, 888,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNFoxAnimPose1P_joint18[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 182, 689,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 871, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 182, -689,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTNFoxAnimPose1P_joint20[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 100, -148, -71, 158, -449, 471,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -48, 0, 86, 0, 22, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 100, 148, -71, -158, -449, -471,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNFoxAnimPose1P_joint21[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -206, 200, 54, 52, -475, 683,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5, 0, 107, 0, 208, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -206, -200, 54, -52, -475, -683,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTNFoxAnimPose1P_joint23[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 417, -412,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 417, 412,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTNFoxAnimPose1P_joint25[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 172, -39, 99, 0, 138, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 132, 0, 99, 0, 138, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 172, 39, 99, 0, 138, 0,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNFoxAnimPose1P_joint26[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 0, 215,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
