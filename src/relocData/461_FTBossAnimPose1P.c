/* AnimJoint data for relocData file 461 (FTBossAnimPose1P) */
/* 544 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTBossAnimPose1P_joint1[20];
extern u16 dFTBossAnimPose1P_joint3[14];
extern u16 dFTBossAnimPose1P_joint4[14];
extern u16 dFTBossAnimPose1P_joint5[18];
extern u16 dFTBossAnimPose1P_joint7[18];
extern u16 dFTBossAnimPose1P_joint8[8];
extern u16 dFTBossAnimPose1P_joint10[8];
extern u16 dFTBossAnimPose1P_joint11[8];
extern u16 dFTBossAnimPose1P_joint12[8];
extern u16 dFTBossAnimPose1P_joint14[8];
extern u16 dFTBossAnimPose1P_joint15[10];
extern u16 dFTBossAnimPose1P_joint16[8];
extern u16 dFTBossAnimPose1P_joint17[8];
extern u16 dFTBossAnimPose1P_joint19[18];
extern u16 dFTBossAnimPose1P_joint20[8];
extern u16 dFTBossAnimPose1P_joint21[8];
extern u16 dFTBossAnimPose1P_joint23[8];
extern u16 dFTBossAnimPose1P_joint24[8];
extern u16 dFTBossAnimPose1P_joint25[8];
extern u16 dFTBossAnimPose1P_joint26[12];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTBossAnimPose1P_joints[] = {
	(u32)dFTBossAnimPose1P_joint1, /* [0] joint 1 */
	(u32)dFTBossAnimPose1P_joint3, /* [1] joint 3 */
	0x00000000, /* [2] NULL */
	(u32)dFTBossAnimPose1P_joint4, /* [3] joint 4 */
	(u32)dFTBossAnimPose1P_joint5, /* [4] joint 5 */
	(u32)dFTBossAnimPose1P_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTBossAnimPose1P_joint8, /* [7] joint 8 */
	(u32)dFTBossAnimPose1P_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTBossAnimPose1P_joint11, /* [10] joint 11 */
	(u32)dFTBossAnimPose1P_joint12, /* [11] joint 12 */
	(u32)dFTBossAnimPose1P_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTBossAnimPose1P_joint15, /* [14] joint 15 */
	(u32)dFTBossAnimPose1P_joint16, /* [15] joint 16 */
	(u32)dFTBossAnimPose1P_joint17, /* [16] joint 17 */
	(u32)dFTBossAnimPose1P_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTBossAnimPose1P_joint20, /* [19] joint 20 */
	(u32)dFTBossAnimPose1P_joint21, /* [20] joint 21 */
	(u32)dFTBossAnimPose1P_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTBossAnimPose1P_joint24, /* [23] joint 24 */
	(u32)dFTBossAnimPose1P_joint25, /* [24] joint 25 */
	(u32)dFTBossAnimPose1P_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTBossAnimPose1P_joint1[20] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 600, 70, 540, 63, 1080, 127,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -80, 455, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 600, -44, 540, -40, 1080, -80,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTBossAnimPose1P_joint3[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 600, -1200, 4096, 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTBossAnimPose1P_joint4[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -982, 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTBossAnimPose1P_joint5[18] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -170, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -170, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTBossAnimPose1P_joint7[18] = {
	ftAnimSetValRate(FT_ANIM_ROTY), 68, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 683, -1280, 155, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 68, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTBossAnimPose1P_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2579, -1051, -1324,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTBossAnimPose1P_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -425,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTBossAnimPose1P_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1567, -79, 244,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTBossAnimPose1P_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -140,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTBossAnimPose1P_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -149,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTBossAnimPose1P_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -17, -1588, -1247, 4096, 3481, 2867,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTBossAnimPose1P_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -163,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTBossAnimPose1P_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -83,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTBossAnimPose1P_joint19[18] = {
	ftAnimSetValRate(FT_ANIM_ROTY), -10, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, -99, -2025, 512, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -10, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTBossAnimPose1P_joint20[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 18, 1588, 1881,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTBossAnimPose1P_joint21[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -376,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTBossAnimPose1P_joint23[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -327,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTBossAnimPose1P_joint24[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1605, 89, 18,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTBossAnimPose1P_joint25[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -259,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTBossAnimPose1P_joint26[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -330,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
