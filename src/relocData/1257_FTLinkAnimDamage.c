/* AnimJoint data for relocData file 1257 (FTLinkAnimDamage) */
/* 576 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimDamage_joint1[14];
extern u16 dFTLinkAnimDamage_joint2[10];
extern u16 dFTLinkAnimDamage_joint4[10];
extern u16 dFTLinkAnimDamage_joint5[8];
extern u16 dFTLinkAnimDamage_joint6[8];
extern u16 dFTLinkAnimDamage_joint9[10];
extern u16 dFTLinkAnimDamage_joint10[26];
extern u16 dFTLinkAnimDamage_joint12[16];
extern u16 dFTLinkAnimDamage_joint16[10];
extern u16 dFTLinkAnimDamage_joint17[10];
extern u16 dFTLinkAnimDamage_joint18[10];
extern u16 dFTLinkAnimDamage_joint20[10];
extern u16 dFTLinkAnimDamage_joint21[8];
extern u16 dFTLinkAnimDamage_joint23[8];
extern u16 dFTLinkAnimDamage_joint25[8];
extern u16 dFTLinkAnimDamage_joint26[22];
extern u16 dFTLinkAnimDamage_joint28[42];

/* Joint pointer table (29 entries, 116 bytes) */
u32 dFTLinkAnimDamage_joints[] = {
	(u32)dFTLinkAnimDamage_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimDamage_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimDamage_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTLinkAnimDamage_joint5, /* [4] joint 5 */
	(u32)dFTLinkAnimDamage_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimDamage_joint9, /* [6] joint 9 */
	0x00000000, /* [7] NULL */
	0x00000000, /* [8] NULL */
	(u32)dFTLinkAnimDamage_joint10, /* [9] joint 10 */
	(u32)dFTLinkAnimDamage_joint12, /* [10] joint 12 */
	0x00000000, /* [11] NULL */
	(u32)dFTLinkAnimDamage_joint16, /* [12] joint 16 */
	0x00000000, /* [13] NULL */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTLinkAnimDamage_joint17, /* [16] joint 17 */
	(u32)dFTLinkAnimDamage_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimDamage_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTLinkAnimDamage_joint21, /* [20] joint 21 */
	(u32)dFTLinkAnimDamage_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTLinkAnimDamage_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTLinkAnimDamage_joint26, /* [25] joint 26 */
	(u32)dFTLinkAnimDamage_joint28, /* [26] joint 28 */
	0x00000000, /* [27] NULL */
	0xFFFF0082, /* [28] END */
};

/* Joint 1 */
u16 dFTLinkAnimDamage_joint1[14] = {
	ftAnimSetVal(FT_ANIM_TRAY | FT_ANIM_TRAZ), 996, 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, -107, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 996, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTLinkAnimDamage_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -187, 402, 0, 0, 0, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimDamage_joint4[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -321, 107, 0, 0, 130, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimDamage_joint5[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -474, -348, 1246,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTLinkAnimDamage_joint6[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -758,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimDamage_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -80, 107, 241, 226, 0, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTLinkAnimDamage_joint10[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1405, 0, 1361, 0, 754, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1405, 0, 1361, 0, 754, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1405, 0, 754, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 1361,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimDamage_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -195, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -195, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -195, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTLinkAnimDamage_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1608, -1072, 107, 83, 0, 11,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTLinkAnimDamage_joint17[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -134, 0, 0, 0, 362, -56,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimDamage_joint18[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -134, 0, 0, 0, 78, 1,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTLinkAnimDamage_joint20[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 347, 22,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLinkAnimDamage_joint21[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 156, -135, 218,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTLinkAnimDamage_joint23[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 601,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimDamage_joint25[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -549, -124, 15,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTLinkAnimDamage_joint26[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -356, 0, -144, 0, -459, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -356, -144, -459,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -356, 0, -144, 0, -459, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 28 */
u16 dFTLinkAnimDamage_joint28[42] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 610, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 610,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 610, 0,
	ftAnimEnd(),
	0x200E, 0xFE60, 0x0000, 0xFFB0, 0x0000, 0x008C, 0x0000, 0x380F, 0x0003, 0xFE60, 0xFFB0, 0x008C, 0x200F, 0x0001, 0xFE60, 0x0000, 0xFFB0, 0x0000, 0x008C, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
