/* AnimJoint data for relocData file 2117 (FTBossAnimGunDraw) */
/* 1152 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTBossAnimGunDraw_joint1[8];
extern u16 dFTBossAnimGunDraw_joint3[36];
extern u16 dFTBossAnimGunDraw_joint4[20];
extern u16 dFTBossAnimGunDraw_joint5[34];
extern u16 dFTBossAnimGunDraw_joint7[34];
extern u16 dFTBossAnimGunDraw_joint8[24];
extern u16 dFTBossAnimGunDraw_joint10[16];
extern u16 dFTBossAnimGunDraw_joint11[48];
extern u16 dFTBossAnimGunDraw_joint12[14];
extern u16 dFTBossAnimGunDraw_joint14[16];
extern u16 dFTBossAnimGunDraw_joint15[44];
extern u16 dFTBossAnimGunDraw_joint16[14];
extern u16 dFTBossAnimGunDraw_joint17[20];
extern u16 dFTBossAnimGunDraw_joint19[18];
extern u16 dFTBossAnimGunDraw_joint20[50];
extern u16 dFTBossAnimGunDraw_joint21[22];
extern u16 dFTBossAnimGunDraw_joint23[24];
extern u16 dFTBossAnimGunDraw_joint24[34];
extern u16 dFTBossAnimGunDraw_joint25[22];
extern u16 dFTBossAnimGunDraw_joint26[26];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTBossAnimGunDraw_joints[] = {
	(u32)dFTBossAnimGunDraw_joint1, /* [0] joint 1 */
	(u32)dFTBossAnimGunDraw_joint3, /* [1] joint 3 */
	0x00000000, /* [2] NULL */
	(u32)dFTBossAnimGunDraw_joint4, /* [3] joint 4 */
	(u32)dFTBossAnimGunDraw_joint5, /* [4] joint 5 */
	(u32)dFTBossAnimGunDraw_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTBossAnimGunDraw_joint8, /* [7] joint 8 */
	(u32)dFTBossAnimGunDraw_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTBossAnimGunDraw_joint11, /* [10] joint 11 */
	(u32)dFTBossAnimGunDraw_joint12, /* [11] joint 12 */
	(u32)dFTBossAnimGunDraw_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTBossAnimGunDraw_joint15, /* [14] joint 15 */
	(u32)dFTBossAnimGunDraw_joint16, /* [15] joint 16 */
	(u32)dFTBossAnimGunDraw_joint17, /* [16] joint 17 */
	(u32)dFTBossAnimGunDraw_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTBossAnimGunDraw_joint20, /* [19] joint 20 */
	(u32)dFTBossAnimGunDraw_joint21, /* [20] joint 21 */
	(u32)dFTBossAnimGunDraw_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTBossAnimGunDraw_joint24, /* [23] joint 24 */
	(u32)dFTBossAnimGunDraw_joint25, /* [24] joint 25 */
	(u32)dFTBossAnimGunDraw_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTBossAnimGunDraw_joint1[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTBossAnimGunDraw_joint3[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 600,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, -1200, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -357, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 5), 600, 1800,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 25), 600, 1800,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), -357, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -178, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -178,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTBossAnimGunDraw_joint4[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), -982, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -804, 804,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 25), -804, 804,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTBossAnimGunDraw_joint5[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), -178, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 357, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 25), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 357, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -178, -53,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), -178,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTBossAnimGunDraw_joint7[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 683, -1280, 155, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 25), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 20), -357, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), -357,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 5), -357,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -44, -44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTBossAnimGunDraw_joint8[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 912, 0, -430, 0, 334, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), 982, 0, -432, 0, 364, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 984, 1, -435, -2, 362, -1,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTBossAnimGunDraw_joint10[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -178, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTBossAnimGunDraw_joint11[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1667, 0, -67, 0, 370, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), -17, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 29), -1608, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 0, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 5, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 26, -44,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -17, -44, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -1608,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTBossAnimGunDraw_joint12[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -187, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 29), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTBossAnimGunDraw_joint14[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -215, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 24), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTBossAnimGunDraw_joint15[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -9, 0, -1583, 0, -1426, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), -1608, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 29), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 24), -1626, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1626, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1671, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1608, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1608, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, -1626, 44, -1608, 0,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTBossAnimGunDraw_joint16[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -390, 2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 25), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTBossAnimGunDraw_joint17[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -348, 3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 0, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), 0,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTBossAnimGunDraw_joint19[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -44,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, -99, -2025, 512, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 20), -178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), -178,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTBossAnimGunDraw_joint20[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, -1, 26, 0, 8, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), 744, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 28), 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 19), 1611, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1613, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 9), 1613,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 744, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 744, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 180, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1613, 0, 180, 0, 744, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTBossAnimGunDraw_joint21[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -421, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), -678, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -678,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -678, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -678, 0,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTBossAnimGunDraw_joint23[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -384, -2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), -751, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -751, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -751, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -751, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTBossAnimGunDraw_joint24[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 33, 0, 1525, 0, -1408, 4,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 29), 1439,
	ftAnimSetValRateT(FT_ANIM_ROTX, 29), 106, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), -737, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -737,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -737, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 106, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1439, -737,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTBossAnimGunDraw_joint25[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -196, -2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), -529, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -529, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -529, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -529,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTBossAnimGunDraw_joint26[26] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -227, -4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), -866, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -866, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -866, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -866, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000,
};
