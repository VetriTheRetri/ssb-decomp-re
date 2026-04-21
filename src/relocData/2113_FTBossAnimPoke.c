/* AnimJoint data for relocData file 2113 (FTBossAnimPoke) */
/* 1792 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTBossAnimPoke_joint1[64];
extern u16 dFTBossAnimPoke_joint3[58];
extern u16 dFTBossAnimPoke_joint4[74];
extern u16 dFTBossAnimPoke_joint5[50];
extern u16 dFTBossAnimPoke_joint7[38];
extern u16 dFTBossAnimPoke_joint8[84];
extern u16 dFTBossAnimPoke_joint10[22];
extern u16 dFTBossAnimPoke_joint11[54];
extern u16 dFTBossAnimPoke_joint12[22];
extern u16 dFTBossAnimPoke_joint14[22];
extern u16 dFTBossAnimPoke_joint15[54];
extern u16 dFTBossAnimPoke_joint16[22];
extern u16 dFTBossAnimPoke_joint17[24];
extern u16 dFTBossAnimPoke_joint19[26];
extern u16 dFTBossAnimPoke_joint20[56];
extern u16 dFTBossAnimPoke_joint21[24];
extern u16 dFTBossAnimPoke_joint23[24];
extern u16 dFTBossAnimPoke_joint24[68];
extern u16 dFTBossAnimPoke_joint25[24];
extern u16 dFTBossAnimPoke_joint26[34];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTBossAnimPoke_joints[] = {
	(u32)dFTBossAnimPoke_joint1, /* [0] joint 1 */
	(u32)dFTBossAnimPoke_joint3, /* [1] joint 3 */
	0x00000000, /* [2] NULL */
	(u32)dFTBossAnimPoke_joint4, /* [3] joint 4 */
	(u32)dFTBossAnimPoke_joint5, /* [4] joint 5 */
	(u32)dFTBossAnimPoke_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTBossAnimPoke_joint8, /* [7] joint 8 */
	(u32)dFTBossAnimPoke_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTBossAnimPoke_joint11, /* [10] joint 11 */
	(u32)dFTBossAnimPoke_joint12, /* [11] joint 12 */
	(u32)dFTBossAnimPoke_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTBossAnimPoke_joint15, /* [14] joint 15 */
	(u32)dFTBossAnimPoke_joint16, /* [15] joint 16 */
	(u32)dFTBossAnimPoke_joint17, /* [16] joint 17 */
	(u32)dFTBossAnimPoke_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTBossAnimPoke_joint20, /* [19] joint 20 */
	(u32)dFTBossAnimPoke_joint21, /* [20] joint 21 */
	(u32)dFTBossAnimPoke_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTBossAnimPoke_joint24, /* [23] joint 24 */
	(u32)dFTBossAnimPoke_joint25, /* [24] joint 25 */
	(u32)dFTBossAnimPoke_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTBossAnimPoke_joint1[64] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 0,
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, -1280,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 25), 2400, -2400,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -4000,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 600,
	ftAnimSetValRateT(FT_ANIM_TRAY, 15), 2400, 3200,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), 0, -1600,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 10), -2400,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -4000,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 5), 600, 800,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 20), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 10), 600, -320,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 25), 0,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 15), 2400, 768,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 15), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 10), 2400, -1280,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTBossAnimPoke_joint3[58] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, -600, 3960,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, -1200, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 80), -600,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY, 25), 89, 3960,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY, 5), 0, 3000,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 15), 3960,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 89,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY, 5), 0, 3000,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 50), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 30), 3000,
	ftAnimSetValRateT(FT_ANIM_TRAX, 5), 0, 320,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 600,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 15), 600,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 10), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 5), 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTBossAnimPoke_joint4[74] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -402, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), -402, -178, 178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -446, 26, -178,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -13, 0, 23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -402,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -402, -178, 178,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -446, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 26, -178,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 26, -178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), -446,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -446, -53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1251, -53,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -1251, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -982,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTBossAnimPoke_joint5[50] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 25), 0, -178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -89, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 15), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), -178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -89, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 50), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 30), -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -536, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -536, 23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -178,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTBossAnimPoke_joint7[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 683, -1280, 155, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 25), 178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), -268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 15), 178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), -268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 30), -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 0, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTBossAnimPoke_joint8[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -625, 0, -1175, 0, -1244, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 79), -625, 0, -1175, -1, -1244, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -625, 15, -1175, 11, -1244, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -1069, -8, -1655, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -189, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -208, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -637, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1078, -8, -1616, 40,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -1164, 0, -1303, 10,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -655, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -693, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1167, -4, -1291, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1176, -2, -1275, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -696, -2, -1177, -1, -1273, 2,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTBossAnimPoke_joint10[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 92), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -177, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -178, -1,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTBossAnimPoke_joint11[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, 0, 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 81), -1, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 88), 1606, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 80), 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 367, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -5, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -67, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1602, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 1550, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1549, 0, -67, 0, 370, 2,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTBossAnimPoke_joint12[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 79), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -186, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -187, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTBossAnimPoke_joint14[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 83), 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -213, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -214, -1,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTBossAnimPoke_joint15[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -26, 0, 1611, 0, -868, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 83), -16, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 84), 1620, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 80), -867, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -871, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -1422, -7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -17, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1616, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 14), 1633, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -9, 0, 1633, 0, -1426, -3,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTBossAnimPoke_joint16[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -676,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 81), -674, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -669, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -392, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -390, 2,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTBossAnimPoke_joint17[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -753, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 80), -753, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -751, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -351, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -348, 2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTBossAnimPoke_joint19[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, -99, -2025, 512, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 80), -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -44, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), -44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), -44,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTBossAnimPoke_joint20[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, 0, 1427, 0, -864, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 80), 4, 1, -863, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 79), 1427,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1427, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1572, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 7, 5, -870, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 18), 0, 0, -1594, -10,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1573, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 11), 1581, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 1581, 0, -1600, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTBossAnimPoke_joint21[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -678, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 80), -678, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -676, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -423, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -421, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTBossAnimPoke_joint23[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -751, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 80), -751, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -748, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -387, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -384, 2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTBossAnimPoke_joint24[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 106, 0, -1778, 0, -738, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 83), 115, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 79), -1777, 0, -737, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1777, 7, -737, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1651, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -990, -30,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 113, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 34, -1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1655, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1690, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1022, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -1402, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 33, 0, -1691, 0, -1408, -5,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTBossAnimPoke_joint25[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -529, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 80), -529, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -527, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -198, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -196, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTBossAnimPoke_joint26[34] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -866, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 80), -866, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -860, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -272, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -253, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -230, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -227, 3,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000,
};
