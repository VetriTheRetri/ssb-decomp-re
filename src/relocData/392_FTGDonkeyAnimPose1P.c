/* AnimJoint data for relocData file 392 (FTGDonkeyAnimPose1P) */
/* 544 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTGDonkeyAnimPose1P_joint1[10];
extern u16 dFTGDonkeyAnimPose1P_joint2[10];
extern u16 dFTGDonkeyAnimPose1P_joint4[10];
extern u16 dFTGDonkeyAnimPose1P_joint5[16];
extern u16 dFTGDonkeyAnimPose1P_joint6[12];
extern u16 dFTGDonkeyAnimPose1P_joint7[10];
extern u16 dFTGDonkeyAnimPose1P_joint8[10];
extern u16 dFTGDonkeyAnimPose1P_joint10[10];
extern u16 dFTGDonkeyAnimPose1P_joint11[16];
extern u16 dFTGDonkeyAnimPose1P_joint12[12];
extern u16 dFTGDonkeyAnimPose1P_joint13[10];
extern u16 dFTGDonkeyAnimPose1P_joint14[8];
extern u16 dFTGDonkeyAnimPose1P_joint16[10];
extern u16 dFTGDonkeyAnimPose1P_joint17[12];
extern u16 dFTGDonkeyAnimPose1P_joint19[8];
extern u16 dFTGDonkeyAnimPose1P_joint21[16];
extern u16 dFTGDonkeyAnimPose1P_joint22[14];
extern u16 dFTGDonkeyAnimPose1P_joint24[28];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTGDonkeyAnimPose1P_joints[] = {
	(u32)dFTGDonkeyAnimPose1P_joint1, /* [0] joint 1 */
	(u32)dFTGDonkeyAnimPose1P_joint2, /* [1] joint 2 */
	(u32)dFTGDonkeyAnimPose1P_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTGDonkeyAnimPose1P_joint5, /* [4] joint 5 */
	(u32)dFTGDonkeyAnimPose1P_joint6, /* [5] joint 6 */
	(u32)dFTGDonkeyAnimPose1P_joint7, /* [6] joint 7 */
	(u32)dFTGDonkeyAnimPose1P_joint8, /* [7] joint 8 */
	(u32)dFTGDonkeyAnimPose1P_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTGDonkeyAnimPose1P_joint11, /* [10] joint 11 */
	(u32)dFTGDonkeyAnimPose1P_joint12, /* [11] joint 12 */
	(u32)dFTGDonkeyAnimPose1P_joint13, /* [12] joint 13 */
	(u32)dFTGDonkeyAnimPose1P_joint14, /* [13] joint 14 */
	(u32)dFTGDonkeyAnimPose1P_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTGDonkeyAnimPose1P_joint17, /* [16] joint 17 */
	(u32)dFTGDonkeyAnimPose1P_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTGDonkeyAnimPose1P_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTGDonkeyAnimPose1P_joint22, /* [21] joint 22 */
	(u32)dFTGDonkeyAnimPose1P_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF007E, /* [24] END */
};

/* Joint 1 */
u16 dFTGDonkeyAnimPose1P_joint1[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -178, 402, 0, 960, 1200, 600,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTGDonkeyAnimPose1P_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 80, -41, -16, 0, -214, -154,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTGDonkeyAnimPose1P_joint4[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 580, 24, 41, 0, 360, -540,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTGDonkeyAnimPose1P_joint5[16] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 262, 0, -209, 0, -723, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 262, 0, -209, 0, -723, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTGDonkeyAnimPose1P_joint6[12] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -290, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -290, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTGDonkeyAnimPose1P_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -446, 0, 0, 702, 15, 17,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTGDonkeyAnimPose1P_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 80, 0, 0, 0, 1354, 213,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTGDonkeyAnimPose1P_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -402, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTGDonkeyAnimPose1P_joint11[16] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 45, 0, 178, 0, -647, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 45, 0, 178, 0, -647, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTGDonkeyAnimPose1P_joint12[12] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -299, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -299, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTGDonkeyAnimPose1P_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 134, 0, 268, 702, 18, -13,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTGDonkeyAnimPose1P_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -893, -1340, 2502,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTGDonkeyAnimPose1P_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -518, 0, 0, 0, 1140, 591,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTGDonkeyAnimPose1P_joint17[12] = {
	ftAnimSetValRate(FT_ANIM_ROTY), -388, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 703, -1336,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -388, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTGDonkeyAnimPose1P_joint19[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 1428,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTGDonkeyAnimPose1P_joint21[16] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -43, 0, 477, 0, -276, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -43, 0, 477, 0, -276, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTGDonkeyAnimPose1P_joint22[14] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), -36, 0, -748, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -36, 0, -748, 0,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTGDonkeyAnimPose1P_joint24[28] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 1214,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000, 0x200E, 0x003E, 0x0000, 0xFFC8, 0x0000, 0xFE6B, 0x0000, 0x200F, 0x0001, 0x003E, 0x0000, 0xFFC8, 0x0000, 0xFE6B, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
