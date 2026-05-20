/* AnimJoint data for relocData file 1813 (FTNessAnimDamage) */
/* 528 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimDamage_joint1[14];
extern u16 dFTNessAnimDamage_joint2[10];
extern u16 dFTNessAnimDamage_joint4[10];
extern u16 dFTNessAnimDamage_joint5[8];
extern u16 dFTNessAnimDamage_joint6[8];
extern u16 dFTNessAnimDamage_joint7[10];
extern u16 dFTNessAnimDamage_joint8[10];
extern u16 dFTNessAnimDamage_joint10[10];
extern u16 dFTNessAnimDamage_joint11[18];
extern u16 dFTNessAnimDamage_joint12[14];
extern u16 dFTNessAnimDamage_joint13[10];
extern u16 dFTNessAnimDamage_joint15[10];
extern u16 dFTNessAnimDamage_joint16[8];
extern u16 dFTNessAnimDamage_joint18[8];
extern u16 dFTNessAnimDamage_joint21[8];
extern u16 dFTNessAnimDamage_joint22[18];
extern u16 dFTNessAnimDamage_joint24[14];
extern u16 dFTNessAnimDamage_joint25[24];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTNessAnimDamage_joints[] = {
	(AObjEvent32 *)dFTNessAnimDamage_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTNessAnimDamage_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTNessAnimDamage_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTNessAnimDamage_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTNessAnimDamage_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTNessAnimDamage_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTNessAnimDamage_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTNessAnimDamage_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTNessAnimDamage_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTNessAnimDamage_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTNessAnimDamage_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTNessAnimDamage_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTNessAnimDamage_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTNessAnimDamage_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTNessAnimDamage_joint21, /* [18] joint 21 */
	NULL, /* [19] NULL */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTNessAnimDamage_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTNessAnimDamage_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTNessAnimDamage_joint25, /* [24] joint 25 */
};

/* 4-byte alignment padding */
static u32 dFTNessAnimDamage_pad[1] = { 0 };

/* Joint 1 */
u16 dFTNessAnimDamage_joint1[14] = {
	ftAnimSetVal(FT_ANIM_TRAY | FT_ANIM_TRAZ), 600, 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 804, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 600, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTNessAnimDamage_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -268, 0, 0, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTNessAnimDamage_joint4[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimDamage_joint5[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2412, -704, 1608,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTNessAnimDamage_joint6[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -369,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTNessAnimDamage_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -670, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimDamage_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 300, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTNessAnimDamage_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -268, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimDamage_joint11[18] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 903, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 804,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 903, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 903, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimDamage_joint12[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -369, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), -369,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -369, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimDamage_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 670, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTNessAnimDamage_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 59, 30, 42,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimDamage_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -868, -578, 30,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTNessAnimDamage_joint18[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 838,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTNessAnimDamage_joint21[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 22, 0, 107,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTNessAnimDamage_joint22[18] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 578, 0, 30, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), -2348,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 578, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 578, 0, 30, 0,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimDamage_joint24[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 838, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 838,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 838, 0,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTNessAnimDamage_joint25[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -53, 0, 0, 0, 107, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -53, 0, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -53, 0, 0, 0, 107, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000,
};
