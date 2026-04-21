/* AnimJoint data for relocData file 2109 (FTBossAnimChargeStart2) */
/* 816 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTBossAnimChargeStart2_joint1[8];
extern u16 dFTBossAnimChargeStart2_joint3[26];
extern u16 dFTBossAnimChargeStart2_joint4[14];
extern u16 dFTBossAnimChargeStart2_joint5[14];
extern u16 dFTBossAnimChargeStart2_joint7[14];
extern u16 dFTBossAnimChargeStart2_joint8[26];
extern u16 dFTBossAnimChargeStart2_joint10[16];
extern u16 dFTBossAnimChargeStart2_joint11[26];
extern u16 dFTBossAnimChargeStart2_joint12[16];
extern u16 dFTBossAnimChargeStart2_joint14[16];
extern u16 dFTBossAnimChargeStart2_joint15[22];
extern u16 dFTBossAnimChargeStart2_joint16[16];
extern u16 dFTBossAnimChargeStart2_joint17[16];
extern u16 dFTBossAnimChargeStart2_joint19[14];
extern u16 dFTBossAnimChargeStart2_joint20[22];
extern u16 dFTBossAnimChargeStart2_joint21[16];
extern u16 dFTBossAnimChargeStart2_joint23[16];
extern u16 dFTBossAnimChargeStart2_joint24[20];
extern u16 dFTBossAnimChargeStart2_joint25[16];
extern u16 dFTBossAnimChargeStart2_joint26[22];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTBossAnimChargeStart2_joints[] = {
	(u32)dFTBossAnimChargeStart2_joint1, /* [0] joint 1 */
	(u32)dFTBossAnimChargeStart2_joint3, /* [1] joint 3 */
	0x00000000, /* [2] NULL */
	(u32)dFTBossAnimChargeStart2_joint4, /* [3] joint 4 */
	(u32)dFTBossAnimChargeStart2_joint5, /* [4] joint 5 */
	(u32)dFTBossAnimChargeStart2_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTBossAnimChargeStart2_joint8, /* [7] joint 8 */
	(u32)dFTBossAnimChargeStart2_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTBossAnimChargeStart2_joint11, /* [10] joint 11 */
	(u32)dFTBossAnimChargeStart2_joint12, /* [11] joint 12 */
	(u32)dFTBossAnimChargeStart2_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTBossAnimChargeStart2_joint15, /* [14] joint 15 */
	(u32)dFTBossAnimChargeStart2_joint16, /* [15] joint 16 */
	(u32)dFTBossAnimChargeStart2_joint17, /* [16] joint 17 */
	(u32)dFTBossAnimChargeStart2_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTBossAnimChargeStart2_joint20, /* [19] joint 20 */
	(u32)dFTBossAnimChargeStart2_joint21, /* [20] joint 21 */
	(u32)dFTBossAnimChargeStart2_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTBossAnimChargeStart2_joint24, /* [23] joint 24 */
	(u32)dFTBossAnimChargeStart2_joint25, /* [24] joint 25 */
	(u32)dFTBossAnimChargeStart2_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTBossAnimChargeStart2_joint1[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 9600, 0,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -14),
};

/* Joint 3 */
u16 dFTBossAnimChargeStart2_joint3[26] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 3960,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, -600, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 2), 3600,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 2), 3960,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 2), 3600,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 2), 3960,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTBossAnimChargeStart2_joint4[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 804, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -26),
};

/* Joint 5 */
u16 dFTBossAnimChargeStart2_joint5[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -178, 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -26),
};

/* Joint 7 */
u16 dFTBossAnimChargeStart2_joint7[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 178, 178, 178, 683, -1280, 155, 4096, 4096, 4096,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -26),
};

/* Joint 8 */
u16 dFTBossAnimChargeStart2_joint8[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -653, 0, -1589, 0, -1045, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -653, 0, -1589, 0, -1045, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), -1045, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -653, -1589,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTBossAnimChargeStart2_joint10[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -536, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -536, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -536, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 11 */
u16 dFTBossAnimChargeStart2_joint11[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1519, 0, 0, 0, 804, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 1519, 0, 0, 0, 804, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1519, 0, 804, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 0,
	ftAnimLoop(0x6800, -50),
};

/* Joint 12 */
u16 dFTBossAnimChargeStart2_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -577, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -577, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -577, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 14 */
u16 dFTBossAnimChargeStart2_joint14[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -840, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -840, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -840, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 15 */
u16 dFTBossAnimChargeStart2_joint15[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -26, 0, -1605, 0, -867, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -26, -1605, -867,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -26, 0, -1605, 0, -867, 0,
	ftAnimLoop(0x6800, -42),
};

/* Joint 16 */
u16 dFTBossAnimChargeStart2_joint16[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -676, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), -676,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -676, 0,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTBossAnimChargeStart2_joint17[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -753, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), -753,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -753, 0,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTBossAnimChargeStart2_joint19[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, -178, 0, -99, -2025, 512, 4096, 4096, 4096,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -26),
};

/* Joint 20 */
u16 dFTBossAnimChargeStart2_joint20[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 2353,
	ftAnimSetValRate(FT_ANIM_ROTX), 4, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), -1789,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 4, 0, 2353, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4, 0, 2353, 0,
	ftAnimLoop(0x6800, -40),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTBossAnimChargeStart2_joint21[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -678, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -678, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -678, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 23 */
u16 dFTBossAnimChargeStart2_joint23[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -751, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -751, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -751, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 24 */
u16 dFTBossAnimChargeStart2_joint24[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 2479,
	ftAnimSetValRate(FT_ANIM_ROTX), 106, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), -1777,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 106, 2479,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 106, 0, 2479, 0,
	ftAnimLoop(0x6800, -36),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTBossAnimChargeStart2_joint25[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -529, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), -529,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -529, 0,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTBossAnimChargeStart2_joint26[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -866, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), -866,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -866, 0,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
