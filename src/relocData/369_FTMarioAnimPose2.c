/* AnimJoint data for relocData file 369 (FTMarioAnimPose2) */
/* 416 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimPose2_joint1[10];
extern u16 dFTMarioAnimPose2_joint2[10];
extern u16 dFTMarioAnimPose2_joint4[10];
extern u16 dFTMarioAnimPose2_joint5[8];
extern u16 dFTMarioAnimPose2_joint7[8];
extern u16 dFTMarioAnimPose2_joint8[8];
extern u16 dFTMarioAnimPose2_joint10[8];
extern u16 dFTMarioAnimPose2_joint11[16];
extern u16 dFTMarioAnimPose2_joint15[12];
extern u16 dFTMarioAnimPose2_joint16[14];
extern u16 dFTMarioAnimPose2_joint18[12];
extern u16 dFTMarioAnimPose2_joint20[16];
extern u16 dFTMarioAnimPose2_joint21[8];
extern u16 dFTMarioAnimPose2_joint23[8];
extern u16 dFTMarioAnimPose2_joint24[12];

/* Joint pointer table (24 entries, 96 bytes) */
AObjEvent32 * dFTMarioAnimPose2_joints[] = {
	(AObjEvent32 *)dFTMarioAnimPose2_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTMarioAnimPose2_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTMarioAnimPose2_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTMarioAnimPose2_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTMarioAnimPose2_joint7, /* [5] joint 7 */
	NULL, /* [6] NULL */
	(AObjEvent32 *)dFTMarioAnimPose2_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTMarioAnimPose2_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTMarioAnimPose2_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTMarioAnimPose2_joint15, /* [11] joint 15 */
	NULL, /* [12] NULL */
	NULL, /* [13] NULL */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTMarioAnimPose2_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTMarioAnimPose2_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTMarioAnimPose2_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTMarioAnimPose2_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTMarioAnimPose2_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTMarioAnimPose2_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTMarioAnimPose2_joint1[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 138, 676, 204, 180, 1200, 120,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimPose2_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTMarioAnimPose2_joint4[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimPose2_joint5[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1261, -865, -1576,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTMarioAnimPose2_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimPose2_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 53, -256, 0,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTMarioAnimPose2_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTMarioAnimPose2_joint11[16] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1056, 0, 418, 0, -1683, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1056, 0, 418, 0, -1683, 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTMarioAnimPose2_joint15[12] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTMarioAnimPose2_joint16[14] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -1363, 0, -1524, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 1771,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1363, 0, -1524, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimPose2_joint18[12] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 285, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 285, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTMarioAnimPose2_joint20[16] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -28, 0, -35, 0, 190, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -28, 0, -35, 0, 190, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimPose2_joint21[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -497, 455, -845,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTMarioAnimPose2_joint23[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTMarioAnimPose2_joint24[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1511, -2029, 1857,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
