/* AnimJoint data for relocData file 2120 (FTBossAnimUnknown2) */
/* 1312 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTBossAnimUnknown2_joint1[18];
extern u16 dFTBossAnimUnknown2_joint3[78];
extern u16 dFTBossAnimUnknown2_joint4[30];
extern u16 dFTBossAnimUnknown2_joint5[52];
extern u16 dFTBossAnimUnknown2_joint7[26];
extern u16 dFTBossAnimUnknown2_joint8[24];
extern u16 dFTBossAnimUnknown2_joint10[16];
extern u16 dFTBossAnimUnknown2_joint11[36];
extern u16 dFTBossAnimUnknown2_joint12[22];
extern u16 dFTBossAnimUnknown2_joint14[22];
extern u16 dFTBossAnimUnknown2_joint15[44];
extern u16 dFTBossAnimUnknown2_joint16[24];
extern u16 dFTBossAnimUnknown2_joint17[24];
extern u16 dFTBossAnimUnknown2_joint19[14];
extern u16 dFTBossAnimUnknown2_joint20[34];
extern u16 dFTBossAnimUnknown2_joint21[24];
extern u16 dFTBossAnimUnknown2_joint23[24];
extern u16 dFTBossAnimUnknown2_joint24[42];
extern u16 dFTBossAnimUnknown2_joint25[50];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTBossAnimUnknown2_joints[] = {
	(u32)dFTBossAnimUnknown2_joint1, /* [0] joint 1 */
	(u32)dFTBossAnimUnknown2_joint3, /* [1] joint 3 */
	0x00000000, /* [2] NULL */
	(u32)dFTBossAnimUnknown2_joint4, /* [3] joint 4 */
	(u32)dFTBossAnimUnknown2_joint5, /* [4] joint 5 */
	(u32)dFTBossAnimUnknown2_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTBossAnimUnknown2_joint8, /* [7] joint 8 */
	(u32)dFTBossAnimUnknown2_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTBossAnimUnknown2_joint11, /* [10] joint 11 */
	(u32)dFTBossAnimUnknown2_joint12, /* [11] joint 12 */
	(u32)dFTBossAnimUnknown2_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTBossAnimUnknown2_joint15, /* [14] joint 15 */
	(u32)dFTBossAnimUnknown2_joint16, /* [15] joint 16 */
	(u32)dFTBossAnimUnknown2_joint17, /* [16] joint 17 */
	(u32)dFTBossAnimUnknown2_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTBossAnimUnknown2_joint20, /* [19] joint 20 */
	(u32)dFTBossAnimUnknown2_joint21, /* [20] joint 21 */
	(u32)dFTBossAnimUnknown2_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTBossAnimUnknown2_joint24, /* [23] joint 24 */
	(u32)dFTBossAnimUnknown2_joint25, /* [24] joint 25 */
	0xFFFF013B, /* [25] END */
};

/* Joint 1 */
u16 dFTBossAnimUnknown2_joint1[18] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 10), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 10), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 3200,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 30), 24000, 8000,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTBossAnimUnknown2_joint3[78] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 600, -1200,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAY, 15), 3600, 2400,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), -1440,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), -960,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), -1440,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), -960,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), -1440,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), -960,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), -1440,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 2), -960,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 5400, 3200,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), -1440,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), -1080,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 30), 5400,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), -1320,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), -1080,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), -1320,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), -1080,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), -1200,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 20), -1200,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTBossAnimUnknown2_joint4[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -982,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -938, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -804, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -759,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -804, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), -804,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTBossAnimUnknown2_joint5[52] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -178, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 268, 32,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 22,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 312,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 536, 74,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 7,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -178, -11, -178, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 580,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 536, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 536, -357, -357,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTBossAnimUnknown2_joint7[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 683, -1280, 155, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), -178, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), 357, 35,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 357,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 25), 357,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTBossAnimUnknown2_joint8[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 912, 0, -430, 0, 334, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 49), 912, 0, -430, 0, 334, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 912, 0, -430, 0, 334, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTBossAnimUnknown2_joint10[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -178, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 49), -178, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -178, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTBossAnimUnknown2_joint11[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1549, 0, -67, 0, 370, -7,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 49), 1563,
	ftAnimSetValRateT(FT_ANIM_ROTY, 49), -77, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 111, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 132, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 35), 268, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1563, 0, -77, 0, 268, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTBossAnimUnknown2_joint12[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -187, 2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), -94, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -94, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), -94, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -94,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTBossAnimUnknown2_joint14[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -215, 2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -85, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -86, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 30), -87, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -87,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTBossAnimUnknown2_joint15[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -9, 0, -1583, 0, -1426, -3,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 49), -1585,
	ftAnimSetValRateT(FT_ANIM_ROTX, 49), -12, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -1449, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1426, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 28), -1350, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1350, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1350, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -12, 0, -1585, 0, -1350, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTBossAnimUnknown2_joint16[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -390, 5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -107, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -110, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 34), -128, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -128, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTBossAnimUnknown2_joint17[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -348, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -29, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -30, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 35), -48, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -48, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTBossAnimUnknown2_joint19[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, -44, 0, -99, -2025, 512, 4096, 4096, 4096,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTBossAnimUnknown2_joint20[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1608, 0, 26, 0, 8, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 49), -1595, 0, 23, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 265, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 266, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), 258, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1595, 0, 23, 0, 258, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTBossAnimUnknown2_joint21[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -421, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -106, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -109, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 34), -129, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -129, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTBossAnimUnknown2_joint23[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -384, 8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -26, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -27, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 35), -47, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -47, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTBossAnimUnknown2_joint24[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 33, 0, 1525, 0, 1808, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 49), 44, 0, 1530, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 1773, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1797, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 28), 1875, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1875, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1875, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 44, 0, 1530, 0, 1875, 0,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTBossAnimUnknown2_joint25[50] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -196, 2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), -99, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -99, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 28), -99, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -99, 0,
	ftAnimEnd(),
	0x0000, 0x2808, 0xFF1D, 0x0003, 0x4806, 0x0000, 0x0000, 0x2009, 0x0011, 0xFFB0, 0xFFFE, 0x2009, 0x0001, 0xFFAE, 0xFFFF, 0x2009, 0x001F, 0xFFAC, 0x0000, 0x2009, 0x0001, 0xFFAC, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
