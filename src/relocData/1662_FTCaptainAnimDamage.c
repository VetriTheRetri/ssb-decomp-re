/* AnimJoint data for relocData file 1662 (FTCaptainAnimDamage) */
/* 512 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimDamage_joint1[14];
extern u16 dFTCaptainAnimDamage_joint2[10];
extern u16 dFTCaptainAnimDamage_joint4[10];
extern u16 dFTCaptainAnimDamage_joint5[8];
extern u16 dFTCaptainAnimDamage_joint6[8];
extern u16 dFTCaptainAnimDamage_joint7[10];
extern u16 dFTCaptainAnimDamage_joint8[10];
extern u16 dFTCaptainAnimDamage_joint10[10];
extern u16 dFTCaptainAnimDamage_joint11[8];
extern u16 dFTCaptainAnimDamage_joint12[8];
extern u16 dFTCaptainAnimDamage_joint13[10];
extern u16 dFTCaptainAnimDamage_joint16[10];
extern u16 dFTCaptainAnimDamage_joint17[8];
extern u16 dFTCaptainAnimDamage_joint19[8];
extern u16 dFTCaptainAnimDamage_joint21[8];
extern u16 dFTCaptainAnimDamage_joint22[20];
extern u16 dFTCaptainAnimDamage_joint24[16];
extern u16 dFTCaptainAnimDamage_joint25[30];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTCaptainAnimDamage_joints[] = {
	(u32)dFTCaptainAnimDamage_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimDamage_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimDamage_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTCaptainAnimDamage_joint5, /* [4] joint 5 */
	(u32)dFTCaptainAnimDamage_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimDamage_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimDamage_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimDamage_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTCaptainAnimDamage_joint11, /* [10] joint 11 */
	(u32)dFTCaptainAnimDamage_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimDamage_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimDamage_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTCaptainAnimDamage_joint17, /* [16] joint 17 */
	(u32)dFTCaptainAnimDamage_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTCaptainAnimDamage_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTCaptainAnimDamage_joint22, /* [21] joint 22 */
	(u32)dFTCaptainAnimDamage_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTCaptainAnimDamage_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTCaptainAnimDamage_joint1[14] = {
	ftAnimSetVal(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1320, 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 187, -80, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 1320, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTCaptainAnimDamage_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 187, 0, -107, 0, 0, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTCaptainAnimDamage_joint4[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 107, 160, -160, 53, -55, -43,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimDamage_joint5[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -854, -1733, 510,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTCaptainAnimDamage_joint6[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -878,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimDamage_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 625, 402, 0, 424, 0, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTCaptainAnimDamage_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 360, -108,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTCaptainAnimDamage_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -187, -187, 0, 0, 120, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTCaptainAnimDamage_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -578, 516, -590,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTCaptainAnimDamage_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -215,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimDamage_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -402, 0, 424, 0, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimDamage_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 402, -804, 1251, 86, -10, 38,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimDamage_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -57, -55, -862,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTCaptainAnimDamage_joint19[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 1132,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTCaptainAnimDamage_joint21[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 96, 22, -25,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTCaptainAnimDamage_joint22[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), -32, 0, -818, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -32, 0, -818, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -32, 0, -818, 0,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimDamage_joint24[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 153, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 153, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 153, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTCaptainAnimDamage_joint25[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1315, 0, -1215, 0, -989, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1315, 0, -1215, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), -989,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1315, 0, -1215, 0, -989, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
