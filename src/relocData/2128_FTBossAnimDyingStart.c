/* AnimJoint data for relocData file 2128 (FTBossAnimDyingStart) */
/* 1104 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTBossAnimDyingStart_joint1[8];
extern u16 dFTBossAnimDyingStart_joint3[22];
extern u16 dFTBossAnimDyingStart_joint4[20];
extern u16 dFTBossAnimDyingStart_joint5[18];
extern u16 dFTBossAnimDyingStart_joint7[18];
extern u16 dFTBossAnimDyingStart_joint8[24];
extern u16 dFTBossAnimDyingStart_joint10[16];
extern u16 dFTBossAnimDyingStart_joint11[42];
extern u16 dFTBossAnimDyingStart_joint12[24];
extern u16 dFTBossAnimDyingStart_joint14[26];
extern u16 dFTBossAnimDyingStart_joint15[34];
extern u16 dFTBossAnimDyingStart_joint16[32];
extern u16 dFTBossAnimDyingStart_joint17[26];
extern u16 dFTBossAnimDyingStart_joint19[14];
extern u16 dFTBossAnimDyingStart_joint20[34];
extern u16 dFTBossAnimDyingStart_joint21[32];
extern u16 dFTBossAnimDyingStart_joint23[24];
extern u16 dFTBossAnimDyingStart_joint24[34];
extern u16 dFTBossAnimDyingStart_joint25[24];
extern u16 dFTBossAnimDyingStart_joint26[28];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTBossAnimDyingStart_joints[] = {
	(u32)dFTBossAnimDyingStart_joint1, /* [0] joint 1 */
	(u32)dFTBossAnimDyingStart_joint3, /* [1] joint 3 */
	0x00000000, /* [2] NULL */
	(u32)dFTBossAnimDyingStart_joint4, /* [3] joint 4 */
	(u32)dFTBossAnimDyingStart_joint5, /* [4] joint 5 */
	(u32)dFTBossAnimDyingStart_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTBossAnimDyingStart_joint8, /* [7] joint 8 */
	(u32)dFTBossAnimDyingStart_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTBossAnimDyingStart_joint11, /* [10] joint 11 */
	(u32)dFTBossAnimDyingStart_joint12, /* [11] joint 12 */
	(u32)dFTBossAnimDyingStart_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTBossAnimDyingStart_joint15, /* [14] joint 15 */
	(u32)dFTBossAnimDyingStart_joint16, /* [15] joint 16 */
	(u32)dFTBossAnimDyingStart_joint17, /* [16] joint 17 */
	(u32)dFTBossAnimDyingStart_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTBossAnimDyingStart_joint20, /* [19] joint 20 */
	(u32)dFTBossAnimDyingStart_joint21, /* [20] joint 21 */
	(u32)dFTBossAnimDyingStart_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTBossAnimDyingStart_joint24, /* [23] joint 24 */
	(u32)dFTBossAnimDyingStart_joint25, /* [24] joint 25 */
	(u32)dFTBossAnimDyingStart_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTBossAnimDyingStart_joint1[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTBossAnimDyingStart_joint3[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 600, -1200,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 804, 1200, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 804, 1200, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTBossAnimDyingStart_joint4[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -982,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -2144, -151,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), -2502,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTBossAnimDyingStart_joint5[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 357,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), 357,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTBossAnimDyingStart_joint7[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 683, -1280, 155, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 357,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 8), -178,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTBossAnimDyingStart_joint8[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2520, 1, -1177, 3, -1273, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 2505, 0, -1317, -14, -1231, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2505, 0, -1329, -12, -1227, 3,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTBossAnimDyingStart_joint10[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -178, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -173, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -178, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTBossAnimDyingStart_joint11[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1667, -7, -67, 13, 370, 88,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1614, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -262, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 539, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 454, -93,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -27, -5,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1595, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1608, -13, -268, -6, 0, 27,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTBossAnimDyingStart_joint12[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -187, 78,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -26, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -46, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -39, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 39,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTBossAnimDyingStart_joint14[26] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -215, 108,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -7, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -26, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -18, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 18,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTBossAnimDyingStart_joint15[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -9, -6, -1583, -5, -1426, 171,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), -16, 4, -1522, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1072, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1141, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1510, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -13, 2, -1520, 2, -1527, -17,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTBossAnimDyingStart_joint16[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -390, 161,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -229, 195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -64, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -62, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -98, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -128, -29,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTBossAnimDyingStart_joint17[26] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -348, 195,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 12, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -22, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -48, -26,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTBossAnimDyingStart_joint19[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, -44, 0, -99, -2025, 512, 4096, 4096, 4096,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTBossAnimDyingStart_joint20[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, 11, 26, -4, 8, 251,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), 1642, -5, 80, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 536, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 516, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 203, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1637, -4, 84, 3, 169, -33,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTBossAnimDyingStart_joint21[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -421, 176,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -244, 210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -41, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -61, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -200, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -218, -18,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTBossAnimDyingStart_joint23[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -384, 216,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 14, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 15, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -119, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -139, -19,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTBossAnimDyingStart_joint24[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 33, 21, 1525, 18, -1408, 162,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), 150, -2, 1390, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1068, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1074, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1285, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 147, -2, 1381, -8, -1298, -13,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTBossAnimDyingStart_joint25[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -196, 84,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -25, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -58, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -216, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -239, -22,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTBossAnimDyingStart_joint26[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -227, 126,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -31, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -259, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -296, -37,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
