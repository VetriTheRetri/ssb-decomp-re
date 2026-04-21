/* AnimJoint data for relocData file 2099 (FTBossAnimSlap) */
/* 1984 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTBossAnimSlap_joint1[26];
extern u16 dFTBossAnimSlap_joint3[46];
extern u16 dFTBossAnimSlap_joint4[58];
extern u16 dFTBossAnimSlap_joint5[44];
extern u16 dFTBossAnimSlap_joint7[38];
extern u16 dFTBossAnimSlap_joint8[24];
extern u16 dFTBossAnimSlap_joint10[14];
extern u16 dFTBossAnimSlap_joint11[104];
extern u16 dFTBossAnimSlap_joint12[38];
extern u16 dFTBossAnimSlap_joint14[38];
extern u16 dFTBossAnimSlap_joint15[72];
extern u16 dFTBossAnimSlap_joint16[48];
extern u16 dFTBossAnimSlap_joint17[40];
extern u16 dFTBossAnimSlap_joint19[14];
extern u16 dFTBossAnimSlap_joint20[64];
extern u16 dFTBossAnimSlap_joint21[48];
extern u16 dFTBossAnimSlap_joint23[40];
extern u16 dFTBossAnimSlap_joint24[104];
extern u16 dFTBossAnimSlap_joint25[40];
extern u16 dFTBossAnimSlap_joint26[40];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTBossAnimSlap_joints[] = {
	(u32)dFTBossAnimSlap_joint1, /* [0] joint 1 */
	(u32)dFTBossAnimSlap_joint3, /* [1] joint 3 */
	0x00000000, /* [2] NULL */
	(u32)dFTBossAnimSlap_joint4, /* [3] joint 4 */
	(u32)dFTBossAnimSlap_joint5, /* [4] joint 5 */
	(u32)dFTBossAnimSlap_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTBossAnimSlap_joint8, /* [7] joint 8 */
	(u32)dFTBossAnimSlap_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTBossAnimSlap_joint11, /* [10] joint 11 */
	(u32)dFTBossAnimSlap_joint12, /* [11] joint 12 */
	(u32)dFTBossAnimSlap_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTBossAnimSlap_joint15, /* [14] joint 15 */
	(u32)dFTBossAnimSlap_joint16, /* [15] joint 16 */
	(u32)dFTBossAnimSlap_joint17, /* [16] joint 17 */
	(u32)dFTBossAnimSlap_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTBossAnimSlap_joint20, /* [19] joint 20 */
	(u32)dFTBossAnimSlap_joint21, /* [20] joint 21 */
	(u32)dFTBossAnimSlap_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTBossAnimSlap_joint24, /* [23] joint 24 */
	(u32)dFTBossAnimSlap_joint25, /* [24] joint 25 */
	(u32)dFTBossAnimSlap_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTBossAnimSlap_joint1[26] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 12), -3600, -1152,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 13), -3600, 3199,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), 3600, 11519,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 10), 18000, 3840,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 20), 18000,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTBossAnimSlap_joint3[46] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 600,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, -1200, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 12), 2400, 767, 3600, 959,
	ftAnimSetValRateT(FT_ANIM_TRAY, 13), 3600, -799,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 13), 2400,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 15), 2400,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 1800, -960,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 10), 1800,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 5), 2400, -960, 1800, -480,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 15), 0, 600,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTBossAnimSlap_joint4[58] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -982, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), -1608, -25, -804, -32,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 12), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -1608, -9, -804, 44, 0, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1787, 11, 0, 53, 714, 53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1429, 35,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 804,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 20), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1251, 22, 714, -40,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), -982, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTBossAnimSlap_joint5[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 178, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 268, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -536, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), -536, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -178, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 357, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 536, -26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), -178,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTBossAnimSlap_joint7[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 683, -1280, 155, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 8), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 0, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 13), -357, -19,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), -357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), -357, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 0, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 15), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTBossAnimSlap_joint8[24] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -430, 0, 334, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), 912,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 59), 912, 0, -430, 0, 334, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 912, 0, -430, 0, 334, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTBossAnimSlap_joint10[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 59), -178, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -178, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTBossAnimSlap_joint11[104] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1667, 3149, 370,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), 3116, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 36), -1542, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 202, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 171, -31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -103, -11,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 3096, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 3133, 9,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -117, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 76, 69,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1543, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -1656, -2,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 141, 53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 362, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 3138, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 3149, 0,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1659, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1667, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 366, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 369, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1667, 0, 3149, 0, 370, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTBossAnimSlap_joint12[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -187,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), -31, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -76, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -116, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -188, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -187, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTBossAnimSlap_joint14[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -215,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), -70, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -50, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 0, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -22, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -218, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -222, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -215, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -215, 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTBossAnimSlap_joint15[72] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), -9, 0, 1790, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), -1583,
	ftAnimSetValRateT(FT_ANIM_ROTY, 40), -1546, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 59), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 1630, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1610, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1518, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1509, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1681, 67,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1551, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -1583, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1743, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 1796, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1793, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1791, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -9, 0, -1583, 0, 1790, 0,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTBossAnimSlap_joint16[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -390, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -204, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -174, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -28, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -46, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -41, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -42, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -46, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -389, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -390, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTBossAnimSlap_joint17[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -348, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -195, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -161, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 0, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -109, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -140, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -347, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -348, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTBossAnimSlap_joint19[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, -44, 0, -99, -2025, 512, 4096, 4096, 4096,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTBossAnimSlap_joint20[64] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 1581, 1616,
	ftAnimSetValRateT(FT_ANIM_ROTY, 40), 1546, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 59), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), 1600, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1608, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 1687, 67,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1551, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 1581, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1748, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 1648, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1635, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1618, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 1581, 0, 1616, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTBossAnimSlap_joint21[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -421, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -253, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -221, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -30, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -48, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -42, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -43, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -46, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -420, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -421, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTBossAnimSlap_joint23[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -384, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -216, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -178, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 0, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -107, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -139, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -383, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -384, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTBossAnimSlap_joint24[104] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 82, 0, 199, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), -1574,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), 89, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 36), -1674, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 23, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -103, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 100, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 96, -17,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -117, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 82, 70,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1673, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -1575, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 147, 50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 208, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 83, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 82, 0,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1574, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1574, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 205, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 200, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1574, 0, 82, 0, 199, 0,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTBossAnimSlap_joint25[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -196, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), -61, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -46, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -44, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -196, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -196, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTBossAnimSlap_joint26[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -227, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), -69, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -50, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -15, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -215, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -221, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -228, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -227, 0,
	ftAnimEnd(),
	0x0000,
};
