/* AnimJoint data for relocData file 368 (FTMarioAnimPose) */
/* 400 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimPose_joint1[10];
extern u16 dFTMarioAnimPose_joint2[10];
extern u16 dFTMarioAnimPose_joint4[10];
extern u16 dFTMarioAnimPose_joint5[8];
extern u16 dFTMarioAnimPose_joint7[8];
extern u16 dFTMarioAnimPose_joint8[10];
extern u16 dFTMarioAnimPose_joint10[10];
extern u16 dFTMarioAnimPose_joint11[8];
extern u16 dFTMarioAnimPose_joint15[8];
extern u16 dFTMarioAnimPose_joint16[8];
extern u16 dFTMarioAnimPose_joint18[8];
extern u16 dFTMarioAnimPose_joint20[8];
extern u16 dFTMarioAnimPose_joint21[16];
extern u16 dFTMarioAnimPose_joint23[12];
extern u16 dFTMarioAnimPose_joint24[18];

/* Joint pointer table (24 entries, 96 bytes) */
AObjEvent32 * dFTMarioAnimPose_joints[] = {
	(AObjEvent32 *)dFTMarioAnimPose_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTMarioAnimPose_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTMarioAnimPose_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTMarioAnimPose_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTMarioAnimPose_joint7, /* [5] joint 7 */
	NULL, /* [6] NULL */
	(AObjEvent32 *)dFTMarioAnimPose_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTMarioAnimPose_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTMarioAnimPose_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTMarioAnimPose_joint15, /* [11] joint 15 */
	NULL, /* [12] NULL */
	NULL, /* [13] NULL */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTMarioAnimPose_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTMarioAnimPose_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTMarioAnimPose_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTMarioAnimPose_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTMarioAnimPose_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTMarioAnimPose_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTMarioAnimPose_joint1[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 250, -673, -439, 0, 540, 191,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimPose_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -71, -790, -95, 0, 0, 0,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTMarioAnimPose_joint4[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1385, 437, 1284, 0, 0, 0,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimPose_joint5[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1436, -946, -1395,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTMarioAnimPose_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimPose_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 173, 114, 279, 0, 288, 0,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTMarioAnimPose_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -188, -196, -180, 0, 54, -17,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimPose_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -588, 603, 1753,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTMarioAnimPose_joint15[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -284,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTMarioAnimPose_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 641, -1179, -1204,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTMarioAnimPose_joint18[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTMarioAnimPose_joint20[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1650, 1873, 1754,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTMarioAnimPose_joint21[16] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1277, 0, 463, 0, -643, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1277, 0, 463, 0, -643, 0,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimPose_joint23[12] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTMarioAnimPose_joint24[18] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 1485, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -1395, 1982,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1485, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
