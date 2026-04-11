/* AnimJoint data for relocData file 951 (FTDonkeyAnimDamage) */
/* 432 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimDamage_joint1[12];
extern u16 dFTDonkeyAnimDamage_joint2[8];
extern u16 dFTDonkeyAnimDamage_joint4[8];
extern u16 dFTDonkeyAnimDamage_joint5[16];
extern u16 dFTDonkeyAnimDamage_joint7[16];
extern u16 dFTDonkeyAnimDamage_joint10[8];
extern u16 dFTDonkeyAnimDamage_joint11[22];
extern u16 dFTDonkeyAnimDamage_joint13[14];
extern u16 dFTDonkeyAnimDamage_joint16[10];
extern u16 dFTDonkeyAnimDamage_joint17[8];
extern u16 dFTDonkeyAnimDamage_joint19[8];
extern u16 dFTDonkeyAnimDamage_joint21[8];
extern u16 dFTDonkeyAnimDamage_joint22[8];
extern u16 dFTDonkeyAnimDamage_joint24[18];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTDonkeyAnimDamage_joints[] = {
	(u32)dFTDonkeyAnimDamage_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimDamage_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimDamage_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTDonkeyAnimDamage_joint5, /* [4] joint 5 */
	(u32)dFTDonkeyAnimDamage_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTDonkeyAnimDamage_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTDonkeyAnimDamage_joint11, /* [10] joint 11 */
	(u32)dFTDonkeyAnimDamage_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTDonkeyAnimDamage_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTDonkeyAnimDamage_joint17, /* [16] joint 17 */
	(u32)dFTDonkeyAnimDamage_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTDonkeyAnimDamage_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTDonkeyAnimDamage_joint22, /* [21] joint 22 */
	(u32)dFTDonkeyAnimDamage_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF0067, /* [24] END */
};

/* 4-byte alignment padding */
static u32 dFTDonkeyAnimDamage_pad[1] = { 0 };

/* Joint 1 */
u16 dFTDonkeyAnimDamage_joint1[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 20, 771, -633,
	ftAnimSetValAfterT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 123, 917, -710,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTDonkeyAnimDamage_joint2[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTDonkeyAnimDamage_joint4[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 357, 0, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTDonkeyAnimDamage_joint5[16] = {
	ftAnimSetValRate(FT_ANIM_ROTY), -451, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), -2458, -875,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -451, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -451, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTDonkeyAnimDamage_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -640, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -640, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -640, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTDonkeyAnimDamage_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -536, 0, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTDonkeyAnimDamage_joint11[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1122, 0, 1362, 0, 486, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1122, 1362, 486,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1122, 0, 1362, 0, 486, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTDonkeyAnimDamage_joint13[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -434, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), -434,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -434, 0,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTDonkeyAnimDamage_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1114, -887, -300, 118, 122, 46,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimDamage_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 87, -479, -1292,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTDonkeyAnimDamage_joint19[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 794,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTDonkeyAnimDamage_joint21[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 126, 288, 23,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTDonkeyAnimDamage_joint22[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 552, 369, -627,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTDonkeyAnimDamage_joint24[18] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 583,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000, 0x500E, 0xFE43, 0xFEF6, 0x0018, 0x0801, 0x0004, 0x0000, 0x0000, 0x0000, 0x0000,
};
