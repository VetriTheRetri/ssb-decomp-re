/* AnimJoint data for relocData file 2118 (FTBossAnimGunShoot) */
/* 1744 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTBossAnimGunShoot_joint1[26];
extern u16 dFTBossAnimGunShoot_joint3[50];
extern u16 dFTBossAnimGunShoot_joint4[26];
extern u16 dFTBossAnimGunShoot_joint5[44];
extern u16 dFTBossAnimGunShoot_joint7[22];
extern u16 dFTBossAnimGunShoot_joint8[34];
extern u16 dFTBossAnimGunShoot_joint10[30];
extern u16 dFTBossAnimGunShoot_joint11[70];
extern u16 dFTBossAnimGunShoot_joint12[42];
extern u16 dFTBossAnimGunShoot_joint14[64];
extern u16 dFTBossAnimGunShoot_joint15[56];
extern u16 dFTBossAnimGunShoot_joint16[38];
extern u16 dFTBossAnimGunShoot_joint17[42];
extern u16 dFTBossAnimGunShoot_joint19[22];
extern u16 dFTBossAnimGunShoot_joint20[68];
extern u16 dFTBossAnimGunShoot_joint21[30];
extern u16 dFTBossAnimGunShoot_joint23[30];
extern u16 dFTBossAnimGunShoot_joint24[64];
extern u16 dFTBossAnimGunShoot_joint25[30];
extern u16 dFTBossAnimGunShoot_joint26[32];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTBossAnimGunShoot_joints[] = {
	(u32)dFTBossAnimGunShoot_joint1, /* [0] joint 1 */
	(u32)dFTBossAnimGunShoot_joint3, /* [1] joint 3 */
	0x00000000, /* [2] NULL */
	(u32)dFTBossAnimGunShoot_joint4, /* [3] joint 4 */
	(u32)dFTBossAnimGunShoot_joint5, /* [4] joint 5 */
	(u32)dFTBossAnimGunShoot_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTBossAnimGunShoot_joint8, /* [7] joint 8 */
	(u32)dFTBossAnimGunShoot_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTBossAnimGunShoot_joint11, /* [10] joint 11 */
	(u32)dFTBossAnimGunShoot_joint12, /* [11] joint 12 */
	(u32)dFTBossAnimGunShoot_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTBossAnimGunShoot_joint15, /* [14] joint 15 */
	(u32)dFTBossAnimGunShoot_joint16, /* [15] joint 16 */
	(u32)dFTBossAnimGunShoot_joint17, /* [16] joint 17 */
	(u32)dFTBossAnimGunShoot_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTBossAnimGunShoot_joint20, /* [19] joint 20 */
	(u32)dFTBossAnimGunShoot_joint21, /* [20] joint 21 */
	(u32)dFTBossAnimGunShoot_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTBossAnimGunShoot_joint24, /* [23] joint 24 */
	(u32)dFTBossAnimGunShoot_joint25, /* [24] joint 25 */
	(u32)dFTBossAnimGunShoot_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTBossAnimGunShoot_joint1[26] = {
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, -6400,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 4), -480,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -8000,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), -2400, -614,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 22), -2400, 599,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 10), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 40), 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTBossAnimGunShoot_joint3[50] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY), -178, 600, 1800,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, -1200, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 59), 600, 1800,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -536, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 22), -536, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -178, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 20), -178, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX, 10), 0, 8, 0, -240,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 10), 600,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY, 10), 0, 0, 600,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTBossAnimGunShoot_joint4[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), -804, 804,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 59), -804, 804,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), -982, -8, 0, -40,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), -982, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTBossAnimGunShoot_joint5[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, -178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 59), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 357, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), 357, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -178, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), -178, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), -357, -8, 0, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), -178, 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTBossAnimGunShoot_joint7[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -357,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 683, -1280, 155, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 59), -357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), -178, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTBossAnimGunShoot_joint8[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 984, -1, -435, 2, 362, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 78), -430, 0, 334, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 59), 982, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 979, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 18), 912, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 912, 0, -430, 0, 334, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTBossAnimGunShoot_joint10[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -3, 3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 56), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -184, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -181, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -179, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -178, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTBossAnimGunShoot_joint11[70] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -17, 0, 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), -1608,
	ftAnimSetValRateT(FT_ANIM_ROTY, 59), -17, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 70), -1612, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 57), -35, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -35, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 186, 55,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -22, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -129, 18,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1617, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1667, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -111, 17, 240, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -70, 6, 359, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1667, 0, -67, 3, 370, 10,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTBossAnimGunShoot_joint12[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -80, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -84, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -84, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 44), -42, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -42, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -170, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -183, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -187, -4,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTBossAnimGunShoot_joint14[64] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_SCAX), 0, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -68, -36,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 4,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 38), 4,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -73, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 36), -58, 3,
	ftAnimBlock(0, 33),
	ftAnimSetValT(FT_ANIM_SCAX, 20), 4096,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -54, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 26), 0, 1,
	ftAnimBlock(0, 16),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 20), 4096,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -208, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -215, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTBossAnimGunShoot_joint15[56] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -1626, -1608,
	ftAnimSetValRateT(FT_ANIM_ROTY, 60), -1624, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 78), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 57), -1644, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1644, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -1496, 27,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1618, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -1582, -2,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1469, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1431, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -9, 0, -1583, -1, -1426, 5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTBossAnimGunShoot_joint16[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -76, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -77, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 51), -61, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -60, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 0, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -22, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -381, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -390, -9,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTBossAnimGunShoot_joint17[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_SCAX), 0, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 68), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 4), 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 34), 4,
	ftAnimSetValBlockT(FT_ANIM_SCAX, 20), 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 20), 4096,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -337, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -348, -11,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTBossAnimGunShoot_joint19[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, -99, -2025, 512, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 59), -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), -44, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), -44,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTBossAnimGunShoot_joint20[68] = {
	ftAnimSetValRate(FT_ANIM_ROTY), 180, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 1613, 744,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 59), 1613, -3, 180, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 58), 744, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 744, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1606, -11, 175, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 58, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 1608, 0,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 7, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 54, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 27, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1608, 0, 26, -1, 8, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTBossAnimGunShoot_joint21[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -678,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 58), -678, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -678, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 0, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -24, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -411, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -421, -9,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTBossAnimGunShoot_joint23[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -751,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 58), -751, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -751, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 8, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -372, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -384, -12,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTBossAnimGunShoot_joint24[64] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 106, 0, -737, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), 1439,
	ftAnimSetValRateT(FT_ANIM_ROTX, 59), 106, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 65), 1449, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 58), -737,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -737, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1608, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 97, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 33, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1445, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1523, 5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1602, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -1414, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 33, 0, 1525, 2, -1408, 5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTBossAnimGunShoot_joint25[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -529, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 58), -529,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -529, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -43, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -63, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -191, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -196, -4,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTBossAnimGunShoot_joint26[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -866, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 58), -866,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -866, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 0, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -220, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -227, -7,
	ftAnimEnd(),
	0x0000, 0x0000,
};
