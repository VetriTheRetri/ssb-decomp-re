/* AnimJoint data for relocData file 2119 (FTBossAnimGunAim) */
/* 544 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTBossAnimGunAim_joint1[8];
extern u16 dFTBossAnimGunAim_joint3[14];
extern u16 dFTBossAnimGunAim_joint4[14];
extern u16 dFTBossAnimGunAim_joint5[14];
extern u16 dFTBossAnimGunAim_joint7[14];
extern u16 dFTBossAnimGunAim_joint8[22];
extern u16 dFTBossAnimGunAim_joint10[16];
extern u16 dFTBossAnimGunAim_joint11[8];
extern u16 dFTBossAnimGunAim_joint12[8];
extern u16 dFTBossAnimGunAim_joint14[12];
extern u16 dFTBossAnimGunAim_joint15[8];
extern u16 dFTBossAnimGunAim_joint16[8];
extern u16 dFTBossAnimGunAim_joint17[12];
extern u16 dFTBossAnimGunAim_joint19[14];
extern u16 dFTBossAnimGunAim_joint20[8];
extern u16 dFTBossAnimGunAim_joint21[8];
extern u16 dFTBossAnimGunAim_joint23[8];
extern u16 dFTBossAnimGunAim_joint24[8];
extern u16 dFTBossAnimGunAim_joint25[8];
extern u16 dFTBossAnimGunAim_joint26[8];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTBossAnimGunAim_joints[] = {
	(u32)dFTBossAnimGunAim_joint1, /* [0] joint 1 */
	(u32)dFTBossAnimGunAim_joint3, /* [1] joint 3 */
	0x00000000, /* [2] NULL */
	(u32)dFTBossAnimGunAim_joint4, /* [3] joint 4 */
	(u32)dFTBossAnimGunAim_joint5, /* [4] joint 5 */
	(u32)dFTBossAnimGunAim_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTBossAnimGunAim_joint8, /* [7] joint 8 */
	(u32)dFTBossAnimGunAim_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTBossAnimGunAim_joint11, /* [10] joint 11 */
	(u32)dFTBossAnimGunAim_joint12, /* [11] joint 12 */
	(u32)dFTBossAnimGunAim_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTBossAnimGunAim_joint15, /* [14] joint 15 */
	(u32)dFTBossAnimGunAim_joint16, /* [15] joint 16 */
	(u32)dFTBossAnimGunAim_joint17, /* [16] joint 17 */
	(u32)dFTBossAnimGunAim_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTBossAnimGunAim_joint20, /* [19] joint 20 */
	(u32)dFTBossAnimGunAim_joint21, /* [20] joint 21 */
	(u32)dFTBossAnimGunAim_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTBossAnimGunAim_joint24, /* [23] joint 24 */
	(u32)dFTBossAnimGunAim_joint25, /* [24] joint 25 */
	(u32)dFTBossAnimGunAim_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTBossAnimGunAim_joint1[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimBlock(0, 15),
	ftAnimLoop(0x6800, -14),
};

/* Joint 3 */
u16 dFTBossAnimGunAim_joint3[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -178, 0, 0, 600, 1800, -1200, 4096, 4096, 4096,
	ftAnimBlock(0, 15),
	ftAnimLoop(0x6800, -26),
};

/* Joint 4 */
u16 dFTBossAnimGunAim_joint4[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -804, 0, 804, 0, 0, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 15),
	ftAnimLoop(0x6800, -26),
};

/* Joint 5 */
u16 dFTBossAnimGunAim_joint5[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, -178, 0, 0, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 15),
	ftAnimLoop(0x6800, -26),
};

/* Joint 7 */
u16 dFTBossAnimGunAim_joint7[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, -357, 0, 683, -1280, 155, 4096, 4096, 4096,
	ftAnimBlock(0, 15),
	ftAnimLoop(0x6800, -26),
};

/* Joint 8 */
u16 dFTBossAnimGunAim_joint8[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 982, 1, -432, -2, 364, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 982, -432, 364,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 984, 1, -435, -2, 362, -1,
	ftAnimLoop(0x6800, -42),
};

/* Joint 10 */
u16 dFTBossAnimGunAim_joint10[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 14), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3, -3,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTBossAnimGunAim_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1608, -17, 0,
	ftAnimBlock(0, 15),
	ftAnimLoop(0x6800, -14),
};

/* Joint 12 */
u16 dFTBossAnimGunAim_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 15),
	ftAnimLoop(0x6800, -14),
};

/* Joint 14 */
u16 dFTBossAnimGunAim_joint14[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 15),
	ftAnimLoop(0x6800, -22),
};

/* Joint 15 */
u16 dFTBossAnimGunAim_joint15[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -1626, -1608,
	ftAnimBlock(0, 15),
	ftAnimLoop(0x6800, -14),
};

/* Joint 16 */
u16 dFTBossAnimGunAim_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 15),
	ftAnimLoop(0x6800, -14),
};

/* Joint 17 */
u16 dFTBossAnimGunAim_joint17[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 15),
	ftAnimLoop(0x6800, -22),
};

/* Joint 19 */
u16 dFTBossAnimGunAim_joint19[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, -178, 0, -99, -2025, 512, 4096, 4096, 4096,
	ftAnimBlock(0, 15),
	ftAnimLoop(0x6800, -26),
};

/* Joint 20 */
u16 dFTBossAnimGunAim_joint20[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1613, 180, 744,
	ftAnimBlock(0, 15),
	ftAnimLoop(0x6800, -14),
};

/* Joint 21 */
u16 dFTBossAnimGunAim_joint21[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -678,
	ftAnimBlock(0, 15),
	ftAnimLoop(0x6800, -14),
};

/* Joint 23 */
u16 dFTBossAnimGunAim_joint23[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -751,
	ftAnimBlock(0, 15),
	ftAnimLoop(0x6800, -14),
};

/* Joint 24 */
u16 dFTBossAnimGunAim_joint24[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 106, 1439, -737,
	ftAnimBlock(0, 15),
	ftAnimLoop(0x6800, -14),
};

/* Joint 25 */
u16 dFTBossAnimGunAim_joint25[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -529,
	ftAnimBlock(0, 15),
	ftAnimLoop(0x6800, -14),
};

/* Joint 26 */
u16 dFTBossAnimGunAim_joint26[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -866,
	ftAnimBlock(0, 15),
	ftAnimLoop(0x6800, -14),
};
