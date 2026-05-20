/* AnimJoint data for relocData file 640 (FTMarioAnimDamage) */
/* 432 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimDamage_joint1[12];
extern u16 dFTMarioAnimDamage_joint2[8];
extern u16 dFTMarioAnimDamage_joint4[10];
extern u16 dFTMarioAnimDamage_joint5[8];
extern u16 dFTMarioAnimDamage_joint6[8];
extern u16 dFTMarioAnimDamage_joint7[8];
extern u16 dFTMarioAnimDamage_joint10[8];
extern u16 dFTMarioAnimDamage_joint11[22];
extern u16 dFTMarioAnimDamage_joint12[14];
extern u16 dFTMarioAnimDamage_joint13[8];
extern u16 dFTMarioAnimDamage_joint15[10];
extern u16 dFTMarioAnimDamage_joint16[8];
extern u16 dFTMarioAnimDamage_joint18[8];
extern u16 dFTMarioAnimDamage_joint20[8];
extern u16 dFTMarioAnimDamage_joint21[8];
extern u16 dFTMarioAnimDamage_joint23[8];
extern u16 dFTMarioAnimDamage_joint24[12];

/* Joint pointer table (24 entries, 96 bytes) */
AObjEvent32 * dFTMarioAnimDamage_joints[] = {
	(AObjEvent32 *)dFTMarioAnimDamage_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTMarioAnimDamage_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTMarioAnimDamage_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTMarioAnimDamage_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTMarioAnimDamage_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTMarioAnimDamage_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTMarioAnimDamage_joint10, /* [7] joint 10 */
	NULL, /* [8] NULL */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTMarioAnimDamage_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTMarioAnimDamage_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTMarioAnimDamage_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTMarioAnimDamage_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTMarioAnimDamage_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTMarioAnimDamage_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTMarioAnimDamage_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTMarioAnimDamage_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTMarioAnimDamage_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTMarioAnimDamage_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTMarioAnimDamage_joint1[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 20, 521, -19,
	ftAnimSetValAfterT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 123, 667, -96,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimDamage_joint2[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -303, -268, 223,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTMarioAnimDamage_joint4[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 8, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimDamage_joint5[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1476, -418, 982,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTMarioAnimDamage_joint6[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -9,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTMarioAnimDamage_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -607, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTMarioAnimDamage_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -229, 0, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTMarioAnimDamage_joint11[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -150, 0, 1220, 0, -591, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -150, 1220, -591,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -150, 0, 1220, 0, -591, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTMarioAnimDamage_joint12[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimDamage_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 607, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTMarioAnimDamage_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 72, 0, 36,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimDamage_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -204, -391, -347,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTMarioAnimDamage_joint18[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 7,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTMarioAnimDamage_joint20[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -130, -196, 71,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTMarioAnimDamage_joint21[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 109, 398, -352,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTMarioAnimDamage_joint23[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 7,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTMarioAnimDamage_joint24[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 75, 250, 100,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
