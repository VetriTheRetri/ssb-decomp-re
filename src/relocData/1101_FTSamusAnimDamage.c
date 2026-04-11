/* AnimJoint data for relocData file 1101 (FTSamusAnimDamage) */
/* 384 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimDamage_joint2[8];
extern u16 dFTSamusAnimDamage_joint4[10];
extern u16 dFTSamusAnimDamage_joint5[8];
extern u16 dFTSamusAnimDamage_joint6[8];
extern u16 dFTSamusAnimDamage_joint7[8];
extern u16 dFTSamusAnimDamage_joint11[10];
extern u16 dFTSamusAnimDamage_joint12[8];
extern u16 dFTSamusAnimDamage_joint14[14];
extern u16 dFTSamusAnimDamage_joint15[14];
extern u16 dFTSamusAnimDamage_joint17[8];
extern u16 dFTSamusAnimDamage_joint19[18];
extern u16 dFTSamusAnimDamage_joint20[8];
extern u16 dFTSamusAnimDamage_joint22[22];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTSamusAnimDamage_joints[] = {
	0x00000000, /* [0] NULL */
	(u32)dFTSamusAnimDamage_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimDamage_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimDamage_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimDamage_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimDamage_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimDamage_joint11, /* [7] joint 11 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimDamage_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimDamage_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimDamage_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimDamage_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimDamage_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimDamage_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimDamage_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	0xFFFF0059, /* [22] END */
};

/* 4-byte alignment padding */
static u32 dFTSamusAnimDamage_pad[1] = { 0 };

/* Joint 2 */
u16 dFTSamusAnimDamage_joint2[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -348, 205,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTSamusAnimDamage_joint4[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 268, 0, 23, 0, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimDamage_joint5[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2023, 1396, -2177,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTSamusAnimDamage_joint6[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -678,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimDamage_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 464, -433, -419,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTSamusAnimDamage_joint11[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimDamage_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 796, -184, 295,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTSamusAnimDamage_joint14[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -669, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), -669,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -669, 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTSamusAnimDamage_joint15[14] = {
	ftAnimSetValRate(FT_ANIM_ROTY), -1592, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), -1430, -2550,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), -1592,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1592, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimDamage_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 1266,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimDamage_joint19[18] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), -87, 0, -74, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 431,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -87, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -87, 0, -74, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimDamage_joint20[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -496, -181, -617,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTSamusAnimDamage_joint22[22] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 458,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000, 0x500E, 0x0008, 0x0041, 0x0017, 0x0801, 0x0004, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
