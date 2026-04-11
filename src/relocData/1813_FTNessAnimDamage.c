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
extern u16 dFTNessAnimDamage_joint24[38];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTNessAnimDamage_joints[] = {
	(u32)dFTNessAnimDamage_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimDamage_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimDamage_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTNessAnimDamage_joint5, /* [4] joint 5 */
	(u32)dFTNessAnimDamage_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimDamage_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimDamage_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimDamage_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTNessAnimDamage_joint11, /* [10] joint 11 */
	(u32)dFTNessAnimDamage_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimDamage_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimDamage_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTNessAnimDamage_joint16, /* [15] joint 16 */
	(u32)dFTNessAnimDamage_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTNessAnimDamage_joint21, /* [18] joint 21 */
	0x00000000, /* [19] NULL */
	0x00000000, /* [20] NULL */
	(u32)dFTNessAnimDamage_joint22, /* [21] joint 22 */
	(u32)dFTNessAnimDamage_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF0078, /* [24] END */
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
u16 dFTNessAnimDamage_joint24[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 838, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 838,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 838, 0,
	ftAnimEnd(),
	0x200E, 0xFFCB, 0x0000, 0x0000, 0x0000, 0x006B, 0x0000, 0x380F, 0x0003, 0xFFCB, 0x0000, 0x006B, 0x200F, 0x0001, 0xFFCB, 0x0000, 0x0000, 0x0000, 0x006B, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
