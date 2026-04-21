/* AnimJoint data for relocData file 2098 (FTBossAnimDefault) */
/* 1360 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTBossAnimDefault_joint1[8];
extern u16 dFTBossAnimDefault_joint3[14];
extern u16 dFTBossAnimDefault_joint4[14];
extern u16 dFTBossAnimDefault_joint5[34];
extern u16 dFTBossAnimDefault_joint7[34];
extern u16 dFTBossAnimDefault_joint8[58];
extern u16 dFTBossAnimDefault_joint10[24];
extern u16 dFTBossAnimDefault_joint11[54];
extern u16 dFTBossAnimDefault_joint12[24];
extern u16 dFTBossAnimDefault_joint14[24];
extern u16 dFTBossAnimDefault_joint15[44];
extern u16 dFTBossAnimDefault_joint16[24];
extern u16 dFTBossAnimDefault_joint17[32];
extern u16 dFTBossAnimDefault_joint19[34];
extern u16 dFTBossAnimDefault_joint20[44];
extern u16 dFTBossAnimDefault_joint21[24];
extern u16 dFTBossAnimDefault_joint23[32];
extern u16 dFTBossAnimDefault_joint24[44];
extern u16 dFTBossAnimDefault_joint25[24];
extern u16 dFTBossAnimDefault_joint26[38];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTBossAnimDefault_joints[] = {
	(u32)dFTBossAnimDefault_joint1, /* [0] joint 1 */
	(u32)dFTBossAnimDefault_joint3, /* [1] joint 3 */
	0x00000000, /* [2] NULL */
	(u32)dFTBossAnimDefault_joint4, /* [3] joint 4 */
	(u32)dFTBossAnimDefault_joint5, /* [4] joint 5 */
	(u32)dFTBossAnimDefault_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTBossAnimDefault_joint8, /* [7] joint 8 */
	(u32)dFTBossAnimDefault_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTBossAnimDefault_joint11, /* [10] joint 11 */
	(u32)dFTBossAnimDefault_joint12, /* [11] joint 12 */
	(u32)dFTBossAnimDefault_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTBossAnimDefault_joint15, /* [14] joint 15 */
	(u32)dFTBossAnimDefault_joint16, /* [15] joint 16 */
	(u32)dFTBossAnimDefault_joint17, /* [16] joint 17 */
	(u32)dFTBossAnimDefault_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTBossAnimDefault_joint20, /* [19] joint 20 */
	(u32)dFTBossAnimDefault_joint21, /* [20] joint 21 */
	(u32)dFTBossAnimDefault_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTBossAnimDefault_joint24, /* [23] joint 24 */
	(u32)dFTBossAnimDefault_joint25, /* [24] joint 25 */
	(u32)dFTBossAnimDefault_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTBossAnimDefault_joint1[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimBlock(0, 60),
	ftAnimLoop(0x6800, -14),
};

/* Joint 3 */
u16 dFTBossAnimDefault_joint3[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 600, -1200, 4096, 4096, 4096,
	ftAnimBlock(0, 60),
	ftAnimLoop(0x6800, -26),
};

/* Joint 4 */
u16 dFTBossAnimDefault_joint4[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -982, 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 60),
	ftAnimLoop(0x6800, -26),
};

/* Joint 5 */
u16 dFTBossAnimDefault_joint5[34] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -178, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), -156, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 12), -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), -156, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), -178, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), -178, 0,
	ftAnimLoop(0x6800, -64),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTBossAnimDefault_joint7[34] = {
	ftAnimSetValRate(FT_ANIM_ROTY), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 683, -1280, 155, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 12), 178, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 12), 223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 12), 178, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 12), 0, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 12), 0, 7,
	ftAnimLoop(0x6800, -64),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTBossAnimDefault_joint8[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2520, -2, -1177, -4, -1273, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 34), -1252, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 59), 2521, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 31), -1318, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1302, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), -1189, 7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1256, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), -1274, 0,
	ftAnimBlock(0, 21),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1182, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1176, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2520, 0, -1177, -1, -1273, 0,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTBossAnimDefault_joint10[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -178, -5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), -450, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -454, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 33), -176, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -178, -2,
	ftAnimLoop(0x6800, -46),
};

/* Joint 11 */
u16 dFTBossAnimDefault_joint11[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1549, 0, -67, 0, 370, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 56), 1551, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 59), -67, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 31), 105, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 123, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 26), 369, 2,
	ftAnimBlock(0, 24),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1550, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1549, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 371, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1549, 0, -67, 0, 370, -1,
	ftAnimLoop(0x6800, -104),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTBossAnimDefault_joint12[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -187, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 33), -181, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -168, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), -182, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -187, -5,
	ftAnimLoop(0x6800, -46),
};

/* Joint 14 */
u16 dFTBossAnimDefault_joint14[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -215, -10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 31), -245, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -225, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), -207, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -215, -7,
	ftAnimLoop(0x6800, -46),
};

/* Joint 15 */
u16 dFTBossAnimDefault_joint15[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -9, 0, -1583, 0, -1426, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 59), -10, 0, -1583, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -1515, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1496, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), -1255, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1251, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -1410, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -9, 0, -1583, 0, -1426, -15,
	ftAnimLoop(0x6800, -84),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTBossAnimDefault_joint16[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -390, -4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), -236, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -228, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 35), -384, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -390, -6,
	ftAnimLoop(0x6800, -46),
};

/* Joint 17 */
u16 dFTBossAnimDefault_joint17[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -348, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), -175, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -162, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 28), -233, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -247, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -341, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -348, -7,
	ftAnimLoop(0x6800, -62),
};

/* Joint 19 */
u16 dFTBossAnimDefault_joint19[34] = {
	ftAnimSetValRate(FT_ANIM_ROTY), -44, -5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, -99, -2025, 512, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 12), -134, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 12), -134, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 12), -44, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 12), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 12), -44, -5,
	ftAnimLoop(0x6800, -64),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTBossAnimDefault_joint20[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -2, 1581, -1, 1616, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 59), 3, -2, 1583, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 1865, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1871, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 1844, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1827, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 1619, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -2, 1581, -1, 1616, -2,
	ftAnimLoop(0x6800, -84),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTBossAnimDefault_joint21[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -421, 8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), -250, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -253, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 36), -427, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -421, 5,
	ftAnimLoop(0x6800, -46),
};

/* Joint 23 */
u16 dFTBossAnimDefault_joint23[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -384, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), -172, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -175, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 28), -395, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -400, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -392, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -384, 7,
	ftAnimLoop(0x6800, -62),
};

/* Joint 24 */
u16 dFTBossAnimDefault_joint24[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1574, 1, 82, 0, 199, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 59), -1576, 2, 83, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), 384, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 377, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 30), 138, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 156, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 187, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1574, 1, 82, 0, 199, 12,
	ftAnimLoop(0x6800, -84),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTBossAnimDefault_joint25[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -196, 4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 49), -349, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -338, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -203, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -196, 7,
	ftAnimLoop(0x6800, -46),
};

/* Joint 26 */
u16 dFTBossAnimDefault_joint26[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -227, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), -327, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -336, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 30), -360, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -331, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -239, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -227, 11,
	ftAnimLoop(0x6800, -62),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
