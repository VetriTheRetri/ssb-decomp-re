/* AnimJoint data for relocData file 2106 (FTBossAnimUnknown1) */
/* 2096 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTBossAnimUnknown1_joint1[8];
extern u16 dFTBossAnimUnknown1_joint3[26];
extern u16 dFTBossAnimUnknown1_joint4[28];
extern u16 dFTBossAnimUnknown1_joint5[26];
extern u16 dFTBossAnimUnknown1_joint7[36];
extern u16 dFTBossAnimUnknown1_joint8[88];
extern u16 dFTBossAnimUnknown1_joint10[38];
extern u16 dFTBossAnimUnknown1_joint11[106];
extern u16 dFTBossAnimUnknown1_joint12[34];
extern u16 dFTBossAnimUnknown1_joint14[34];
extern u16 dFTBossAnimUnknown1_joint15[72];
extern u16 dFTBossAnimUnknown1_joint16[54];
extern u16 dFTBossAnimUnknown1_joint17[38];
extern u16 dFTBossAnimUnknown1_joint19[22];
extern u16 dFTBossAnimUnknown1_joint20[90];
extern u16 dFTBossAnimUnknown1_joint21[48];
extern u16 dFTBossAnimUnknown1_joint23[48];
extern u16 dFTBossAnimUnknown1_joint24[104];
extern u16 dFTBossAnimUnknown1_joint25[96];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTBossAnimUnknown1_joints[] = {
	(u32)dFTBossAnimUnknown1_joint1, /* [0] joint 1 */
	(u32)dFTBossAnimUnknown1_joint3, /* [1] joint 3 */
	0x00000000, /* [2] NULL */
	(u32)dFTBossAnimUnknown1_joint4, /* [3] joint 4 */
	(u32)dFTBossAnimUnknown1_joint5, /* [4] joint 5 */
	(u32)dFTBossAnimUnknown1_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTBossAnimUnknown1_joint8, /* [7] joint 8 */
	(u32)dFTBossAnimUnknown1_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTBossAnimUnknown1_joint11, /* [10] joint 11 */
	(u32)dFTBossAnimUnknown1_joint12, /* [11] joint 12 */
	(u32)dFTBossAnimUnknown1_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTBossAnimUnknown1_joint15, /* [14] joint 15 */
	(u32)dFTBossAnimUnknown1_joint16, /* [15] joint 16 */
	(u32)dFTBossAnimUnknown1_joint17, /* [16] joint 17 */
	(u32)dFTBossAnimUnknown1_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTBossAnimUnknown1_joint20, /* [19] joint 20 */
	(u32)dFTBossAnimUnknown1_joint21, /* [20] joint 21 */
	(u32)dFTBossAnimUnknown1_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTBossAnimUnknown1_joint24, /* [23] joint 24 */
	(u32)dFTBossAnimUnknown1_joint25, /* [24] joint 25 */
	0xFFFF01F3, /* [25] END */
};

/* Joint 1 */
u16 dFTBossAnimUnknown1_joint1[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTBossAnimUnknown1_joint3[26] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY), -600, 5880,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, -1200, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 30), 600,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 10), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 50), 0,
	ftAnimBlock(0, 20),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 30), 600,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTBossAnimUnknown1_joint4[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 3127, -44,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 2234, -44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 50), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 2234,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 40), 2234,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTBossAnimUnknown1_joint5[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -89,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), -536,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), -536,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -178, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 30), -178,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTBossAnimUnknown1_joint7[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 178, 178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 683, -1280, 155, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 0, -8, -357, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -357, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 40), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), 0, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 30), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTBossAnimUnknown1_joint8[88] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3276,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -705, -8, -2088, 18, 2082, -14,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -679, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1176, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1972, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1972, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 49), 1968, 0,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 50), 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -654, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -709, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1175, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 36), -1236, 0,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -710, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 34), -710, 0,
	ftAnimBlock(0, 25),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1236, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), -1237, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -710, 0, -1237, 0, 1968, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTBossAnimUnknown1_joint10[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 8), -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -131, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -137, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), -98, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -98, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), -97, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -97, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTBossAnimUnknown1_joint11[106] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4915,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1597, 0, -43, -3, 133, -3,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -179, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), 1579, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -12, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -49, -31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 107, 80,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 50), 4096,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -177, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -52, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1558, -11, 191, 54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), 427, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 31), 1547, 0,
	ftAnimBlock(0, 16),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -52, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -64, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 394, 0,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1547, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1547, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1547, 0, -64, 0, 394, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTBossAnimUnknown1_joint12[34] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -133, 4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 8), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 15), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -189, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -190, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), -171, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -171, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTBossAnimUnknown1_joint14[34] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -139, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 8), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 15), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -204, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -208, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 26), -192, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -191, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTBossAnimUnknown1_joint15[72] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4505,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 20, -1, -1647, 2, -1353, -7,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), -1552, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 59), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1454, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1430, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1679, -35,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 50), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1708, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -1642, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1582, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 37), -1410, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1556, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 36), -1583, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -9, 0, -1583, 0, -1410, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTBossAnimUnknown1_joint16[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -304, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -137, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 68,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, 30,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -93, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -158, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), -409, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -406, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -380, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -380, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTBossAnimUnknown1_joint17[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -242, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 8), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 0, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -18, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -355, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -361, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 26), -336, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -335, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTBossAnimUnknown1_joint19[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, -99, -2025, 512, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), -44, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), -44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 40), -44,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTBossAnimUnknown1_joint20[90] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3276,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1573, 0, 0, 1, 771, -31,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), -1613, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 30), 27, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 310, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 296, -58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -179, -97,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 50), 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -265, -62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -27, -14,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1608, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 37), -1607, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -26, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 35), 24, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 26, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 28), 27, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1607, 0, 27, 0, 24, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTBossAnimUnknown1_joint21[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -752, 15,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -287, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -110, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -128, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -132, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 0, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -116, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -452, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -452, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -412, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -412, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTBossAnimUnknown1_joint23[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -864, 21,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -218, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -30, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 0, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -36, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -393, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -401, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 26), -373, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -373, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTBossAnimUnknown1_joint24[104] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3276,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 97, 3, 1640, -8, 2559, -49,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -26, -41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1450, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1953, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1970, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1536, -123,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 50), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -69, -36, 1410, -108,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1530, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 30, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1457, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1515, 8,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1566, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1736, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 32, 2, 1757, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 33), 38, 0, 1838, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1522, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 30), 1527, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 38, 0, 1527, 0, 1838, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTBossAnimUnknown1_joint25[96] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -573, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -227, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -59, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -100, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -101, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -183, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -187, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), -179, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -178, 0,
	ftAnimEnd(),
	0x0000, 0x2808, 0xFC29, 0x0015, 0x4806, 0x0000, 0x0000, 0x2009, 0x0006, 0xFEEB, 0x00E2, 0x2009, 0x0001, 0xFFE1, 0x008A, 0x2009, 0x0003, 0x0000, 0xFFF3, 0x2009, 0x0001, 0xFFE6, 0xFFDE, 0x3809, 0x000B, 0x0000, 0x3809, 0x0001, 0x0000, 0x2009, 0x0008, 0xFF31, 0xFFFB, 0x2009, 0x0001, 0xFF2B, 0xFFFB, 0x2009, 0x001B, 0xFF37, 0x0000, 0x2009, 0x0001, 0xFF37, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
