/* AnimJoint data for relocData file 1955 (FTYoshiAnimDamage) */
/* 496 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimDamage_joint1[14];
extern u16 dFTYoshiAnimDamage_joint2[10];
extern u16 dFTYoshiAnimDamage_joint3[10];
extern u16 dFTYoshiAnimDamage_joint4[10];
extern u16 dFTYoshiAnimDamage_joint6[10];
extern u16 dFTYoshiAnimDamage_joint7[8];
extern u16 dFTYoshiAnimDamage_joint8[8];
extern u16 dFTYoshiAnimDamage_joint10[8];
extern u16 dFTYoshiAnimDamage_joint11[8];
extern u16 dFTYoshiAnimDamage_joint12[8];
extern u16 dFTYoshiAnimDamage_joint13[8];
extern u16 dFTYoshiAnimDamage_joint14[10];
extern u16 dFTYoshiAnimDamage_joint15[10];
extern u16 dFTYoshiAnimDamage_joint17[10];
extern u16 dFTYoshiAnimDamage_joint18[14];
extern u16 dFTYoshiAnimDamage_joint20[8];
extern u16 dFTYoshiAnimDamage_joint22[18];
extern u16 dFTYoshiAnimDamage_joint23[8];
extern u16 dFTYoshiAnimDamage_joint25[8];
extern u16 dFTYoshiAnimDamage_joint26[8];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTYoshiAnimDamage_joints[] = {
	(AObjEvent32 *)dFTYoshiAnimDamage_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTYoshiAnimDamage_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTYoshiAnimDamage_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTYoshiAnimDamage_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTYoshiAnimDamage_joint6, /* [4] joint 6 */
	NULL, /* [5] NULL */
	(AObjEvent32 *)dFTYoshiAnimDamage_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTYoshiAnimDamage_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTYoshiAnimDamage_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTYoshiAnimDamage_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTYoshiAnimDamage_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTYoshiAnimDamage_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTYoshiAnimDamage_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTYoshiAnimDamage_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTYoshiAnimDamage_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTYoshiAnimDamage_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTYoshiAnimDamage_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTYoshiAnimDamage_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTYoshiAnimDamage_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTYoshiAnimDamage_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTYoshiAnimDamage_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTYoshiAnimDamage_joint1[14] = {
	ftAnimSetVal(FT_ANIM_TRAY | FT_ANIM_TRAZ), 672, 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 672, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTYoshiAnimDamage_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -464, 268, 134, 0, 0, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTYoshiAnimDamage_joint3[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -134, -134, 0, 0, 172,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTYoshiAnimDamage_joint4[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 600, 331,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTYoshiAnimDamage_joint6[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 428, 0, 0, 0, 47, 120,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimDamage_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2102, 1843, 680,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTYoshiAnimDamage_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -168,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTYoshiAnimDamage_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimDamage_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1575, 1395, 1413,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTYoshiAnimDamage_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -474,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTYoshiAnimDamage_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTYoshiAnimDamage_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -902, -1608, -375, 0, 156, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimDamage_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 134, -268, 0, 0, 216, -240,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTYoshiAnimDamage_joint17[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 134, -268, 0, 0, 48, -263,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTYoshiAnimDamage_joint18[14] = {
	ftAnimSetValRate(FT_ANIM_ROTY), -23, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 172, -336,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -23, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimDamage_joint20[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 758,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTYoshiAnimDamage_joint22[18] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -208, 0, -101, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 1334,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -208, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -208, 0, -101, 0,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimDamage_joint23[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 71, 360, 511,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTYoshiAnimDamage_joint25[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 6,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTYoshiAnimDamage_joint26[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1839, 0, -165,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};
