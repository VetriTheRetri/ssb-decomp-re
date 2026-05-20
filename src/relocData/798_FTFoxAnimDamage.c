/* AnimJoint data for relocData file 798 (FTFoxAnimDamage) */
/* 496 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimDamage_joint1[12];
extern u16 dFTFoxAnimDamage_joint2[10];
extern u16 dFTFoxAnimDamage_joint4[10];
extern u16 dFTFoxAnimDamage_joint5[8];
extern u16 dFTFoxAnimDamage_joint7[8];
extern u16 dFTFoxAnimDamage_joint10[8];
extern u16 dFTFoxAnimDamage_joint11[8];
extern u16 dFTFoxAnimDamage_joint12[8];
extern u16 dFTFoxAnimDamage_joint13[8];
extern u16 dFTFoxAnimDamage_joint15[10];
extern u16 dFTFoxAnimDamage_joint16[8];
extern u16 dFTFoxAnimDamage_joint18[8];
extern u16 dFTFoxAnimDamage_joint20[8];
extern u16 dFTFoxAnimDamage_joint21[22];
extern u16 dFTFoxAnimDamage_joint23[14];
extern u16 dFTFoxAnimDamage_joint24[22];
extern u16 dFTFoxAnimDamage_joint25[8];
extern u16 dFTFoxAnimDamage_joint26[16];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTFoxAnimDamage_joints[] = {
	(AObjEvent32 *)dFTFoxAnimDamage_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTFoxAnimDamage_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTFoxAnimDamage_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTFoxAnimDamage_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTFoxAnimDamage_joint7, /* [5] joint 7 */
	NULL, /* [6] NULL */
	(AObjEvent32 *)dFTFoxAnimDamage_joint10, /* [7] joint 10 */
	NULL, /* [8] NULL */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTFoxAnimDamage_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTFoxAnimDamage_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTFoxAnimDamage_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTFoxAnimDamage_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTFoxAnimDamage_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTFoxAnimDamage_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTFoxAnimDamage_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTFoxAnimDamage_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTFoxAnimDamage_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTFoxAnimDamage_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTFoxAnimDamage_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTFoxAnimDamage_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimDamage_joint1[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 20, 864, -19,
	ftAnimSetValAfterT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 123, 1010, -96,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimDamage_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTFoxAnimDamage_joint4[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimDamage_joint5[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 198, -265, -1039,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTFoxAnimDamage_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -7,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTFoxAnimDamage_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -263, 0, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTFoxAnimDamage_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1383, 219, 864,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTFoxAnimDamage_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -556,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimDamage_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 475, -220, 154,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTFoxAnimDamage_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimDamage_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -43, -230, -1066,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTFoxAnimDamage_joint18[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 343,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimDamage_joint20[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 74, 220, -138,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTFoxAnimDamage_joint21[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 209, 0, 366, 0, 67, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 209, 366, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 209, 0, 366, 0, 67, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTFoxAnimDamage_joint23[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 517, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 517,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 517, 0,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTFoxAnimDamage_joint24[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -311, 0, -200, 0, 75, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -311, -200, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -311, 0, -200, 0, 75, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTFoxAnimDamage_joint25[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTFoxAnimDamage_joint26[16] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 64, -450,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
