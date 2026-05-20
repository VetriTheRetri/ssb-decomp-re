/* AnimJoint data for relocData file 2122 (FTBossAnimUnknown4) */
/* 1120 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTBossAnimUnknown4_joint1[18];
extern u16 dFTBossAnimUnknown4_joint3[14];
extern u16 dFTBossAnimUnknown4_joint4[22];
extern u16 dFTBossAnimUnknown4_joint5[22];
extern u16 dFTBossAnimUnknown4_joint7[18];
extern u16 dFTBossAnimUnknown4_joint8[24];
extern u16 dFTBossAnimUnknown4_joint10[14];
extern u16 dFTBossAnimUnknown4_joint11[42];
extern u16 dFTBossAnimUnknown4_joint12[20];
extern u16 dFTBossAnimUnknown4_joint14[24];
extern u16 dFTBossAnimUnknown4_joint15[42];
extern u16 dFTBossAnimUnknown4_joint16[24];
extern u16 dFTBossAnimUnknown4_joint17[24];
extern u16 dFTBossAnimUnknown4_joint19[14];
extern u16 dFTBossAnimUnknown4_joint20[42];
extern u16 dFTBossAnimUnknown4_joint21[24];
extern u16 dFTBossAnimUnknown4_joint23[24];
extern u16 dFTBossAnimUnknown4_joint24[42];
extern u16 dFTBossAnimUnknown4_joint25[24];
extern u16 dFTBossAnimUnknown4_joint26[30];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTBossAnimUnknown4_joints[] = {
	(AObjEvent32 *)dFTBossAnimUnknown4_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTBossAnimUnknown4_joint3, /* [1] joint 3 */
	NULL, /* [2] NULL */
	(AObjEvent32 *)dFTBossAnimUnknown4_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTBossAnimUnknown4_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTBossAnimUnknown4_joint7, /* [5] joint 7 */
	NULL, /* [6] NULL */
	(AObjEvent32 *)dFTBossAnimUnknown4_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTBossAnimUnknown4_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTBossAnimUnknown4_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTBossAnimUnknown4_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTBossAnimUnknown4_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTBossAnimUnknown4_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTBossAnimUnknown4_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTBossAnimUnknown4_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTBossAnimUnknown4_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTBossAnimUnknown4_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTBossAnimUnknown4_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTBossAnimUnknown4_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTBossAnimUnknown4_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTBossAnimUnknown4_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTBossAnimUnknown4_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTBossAnimUnknown4_joint1[18] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 24000,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 20), 0, -12800,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 17), 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTBossAnimUnknown4_joint3[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 600, -1200, 4096, 4096, 4096,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTBossAnimUnknown4_joint4[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -1072,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), -1072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -893, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 17), -982,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTBossAnimUnknown4_joint5[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -357,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), -357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 0, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 17), -178,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTBossAnimUnknown4_joint7[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 683, -1280, 155, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 23), -178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 17), 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTBossAnimUnknown4_joint8[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 912, 0, -430, 0, 334, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 39), 912, 0, -430, 0, 334, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 912, 0, -430, 0, 334, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTBossAnimUnknown4_joint10[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), -178, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -178, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTBossAnimUnknown4_joint11[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1593, 0, -88, 0, 88, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 39), 1549, 0, -67, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), 88, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 88, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 228, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 221, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 367, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1549, 0, -67, 0, 370, 3,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTBossAnimUnknown4_joint12[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -94, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 38), -178, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -185, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -187, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTBossAnimUnknown4_joint14[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -87, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 31), -90, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -99, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -211, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -215, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTBossAnimUnknown4_joint15[42] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), -4, 0, -1529, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), -1582,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 39), -9, 0, -1583, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), -1529, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1529, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1383, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1389, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -1425, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -9, 0, -1583, 0, -1426, 0,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTBossAnimUnknown4_joint16[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -128, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 30), -128, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -135, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -383, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -390, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTBossAnimUnknown4_joint17[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -48, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 30), -48, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -56, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -339, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -348, -8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTBossAnimUnknown4_joint19[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, -44, 0, -99, -2025, 512, 4096, 4096, 4096,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTBossAnimUnknown4_joint20[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1604, 0, 26, 0, 79, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 39), -1607, 0, 26, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), 79, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 79, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 225, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 213, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 12, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1608, 0, 26, 0, 8, -4,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTBossAnimUnknown4_joint21[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -129, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 30), -129, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -137, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -413, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -421, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTBossAnimUnknown4_joint23[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -47, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 30), -47, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -55, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -374, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -384, -9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTBossAnimUnknown4_joint24[42] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 14, 0, 1694, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), 1520,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 39), 33, 0, 1525, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), 1694, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1694, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1841, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1835, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 1808, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 33, 0, 1525, 0, 1808, 0,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTBossAnimUnknown4_joint25[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -99, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 33), -120, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -133, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -193, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -196, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTBossAnimUnknown4_joint26[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -84, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 31), -88, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -98, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -223, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -227, -4,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
