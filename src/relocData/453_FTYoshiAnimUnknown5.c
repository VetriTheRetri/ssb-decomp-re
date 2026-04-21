/* AnimJoint data for relocData file 453 (FTYoshiAnimUnknown5) */
/* 736 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimUnknown5_joint1[10];
extern u16 dFTYoshiAnimUnknown5_joint2[10];
extern u16 dFTYoshiAnimUnknown5_joint3[84];
extern u16 dFTYoshiAnimUnknown5_joint4[44];
extern u16 dFTYoshiAnimUnknown5_joint6[10];
extern u16 dFTYoshiAnimUnknown5_joint7[8];
extern u16 dFTYoshiAnimUnknown5_joint10[8];
extern u16 dFTYoshiAnimUnknown5_joint11[8];
extern u16 dFTYoshiAnimUnknown5_joint14[8];
extern u16 dFTYoshiAnimUnknown5_joint15[8];
extern u16 dFTYoshiAnimUnknown5_joint16[8];
extern u16 dFTYoshiAnimUnknown5_joint17[8];
extern u16 dFTYoshiAnimUnknown5_joint18[24];
extern u16 dFTYoshiAnimUnknown5_joint20[16];
extern u16 dFTYoshiAnimUnknown5_joint21[8];
extern u16 dFTYoshiAnimUnknown5_joint22[8];
extern u16 dFTYoshiAnimUnknown5_joint23[18];
extern u16 dFTYoshiAnimUnknown5_joint25[14];
extern u16 dFTYoshiAnimUnknown5_joint26[14];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTYoshiAnimUnknown5_joints[] = {
	(u32)dFTYoshiAnimUnknown5_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimUnknown5_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimUnknown5_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimUnknown5_joint4, /* [3] joint 4 */
	(u32)dFTYoshiAnimUnknown5_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTYoshiAnimUnknown5_joint7, /* [6] joint 7 */
	(u32)dFTYoshiAnimUnknown5_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTYoshiAnimUnknown5_joint11, /* [10] joint 11 */
	(u32)dFTYoshiAnimUnknown5_joint14, /* [11] joint 14 */
	0x00000000, /* [12] NULL */
	0x00000000, /* [13] NULL */
	(u32)dFTYoshiAnimUnknown5_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimUnknown5_joint16, /* [15] joint 16 */
	(u32)dFTYoshiAnimUnknown5_joint17, /* [16] joint 17 */
	(u32)dFTYoshiAnimUnknown5_joint18, /* [17] joint 18 */
	(u32)dFTYoshiAnimUnknown5_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTYoshiAnimUnknown5_joint21, /* [20] joint 21 */
	(u32)dFTYoshiAnimUnknown5_joint22, /* [21] joint 22 */
	(u32)dFTYoshiAnimUnknown5_joint23, /* [22] joint 23 */
	(u32)dFTYoshiAnimUnknown5_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTYoshiAnimUnknown5_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTYoshiAnimUnknown5_joint1[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -701, 0, -552, 434, -1392,
	ftAnimBlock(0, 159),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTYoshiAnimUnknown5_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 159),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTYoshiAnimUnknown5_joint3[84] = {
	ftAnimSetVal(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 942, 942, 901,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 174, 0, 89, 180, 293,
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 577,
	ftAnimSetFlags(FT_ANIM_ROTY),
	ftAnimSetValRateT(FT_ANIM_ROTX, 119), 311, 0,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 119), 942, 942, 901,
	ftAnimSetFlags(0),
	ftAnimSetTargetRateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 10, -48, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -61, 0,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 2684, 485, 6746, 485, 2341, 491,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 543, 4096, -1219, 4096, 682,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -31, 12,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 5734, 2754, 4549,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 20), -31,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 16), 4096, 4096, 4096,
	ftAnimBlock(0, 11),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -31,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTYoshiAnimUnknown5_joint4[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 600, 329,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 119), 0, 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -35, 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 105, 28, 387, 51, -38, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 105, 387, -38,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 105, 387, -38,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTYoshiAnimUnknown5_joint6[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 48, 120,
	ftAnimBlock(0, 159),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimUnknown5_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1608, 1608, 1359,
	ftAnimBlock(0, 159),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTYoshiAnimUnknown5_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -875,
	ftAnimBlock(0, 159),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimUnknown5_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1608, 1608, 1359,
	ftAnimBlock(0, 159),
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTYoshiAnimUnknown5_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -875,
	ftAnimBlock(0, 159),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTYoshiAnimUnknown5_joint15[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 215, -240,
	ftAnimBlock(0, 159),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTYoshiAnimUnknown5_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 48, -263,
	ftAnimBlock(0, 159),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTYoshiAnimUnknown5_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, 0, -804,
	ftAnimBlock(0, 159),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimUnknown5_joint18[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -12, 0, 38, 0, 215, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 158), -12, 0, 38, 0, 215, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -12, 0, 38, 0, 215, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimUnknown5_joint20[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 268, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 158), 268, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 268, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTYoshiAnimUnknown5_joint21[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, 0, -301,
	ftAnimBlock(0, 159),
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTYoshiAnimUnknown5_joint22[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, 0, -804,
	ftAnimBlock(0, 159),
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTYoshiAnimUnknown5_joint23[18] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -12, 0, 38, 0, 215, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 158), -12, 38, 215,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -12, 38, 215,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimUnknown5_joint25[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 268, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 158), 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTYoshiAnimUnknown5_joint26[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, 0, -301,
	ftAnimBlock(0, 159),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
