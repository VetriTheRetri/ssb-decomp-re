/* AnimJoint data for relocData file 2110 (FTBossAnimLanding2) */
/* 3104 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTBossAnimLanding2_joint1[48];
extern u16 dFTBossAnimLanding2_joint3[30];
extern u16 dFTBossAnimLanding2_joint4[54];
extern u16 dFTBossAnimLanding2_joint5[90];
extern u16 dFTBossAnimLanding2_joint7[56];
extern u16 dFTBossAnimLanding2_joint8[204];
extern u16 dFTBossAnimLanding2_joint10[70];
extern u16 dFTBossAnimLanding2_joint11[130];
extern u16 dFTBossAnimLanding2_joint12[50];
extern u16 dFTBossAnimLanding2_joint14[58];
extern u16 dFTBossAnimLanding2_joint15[100];
extern u16 dFTBossAnimLanding2_joint16[42];
extern u16 dFTBossAnimLanding2_joint17[58];
extern u16 dFTBossAnimLanding2_joint19[18];
extern u16 dFTBossAnimLanding2_joint20[112];
extern u16 dFTBossAnimLanding2_joint21[50];
extern u16 dFTBossAnimLanding2_joint23[58];
extern u16 dFTBossAnimLanding2_joint24[160];
extern u16 dFTBossAnimLanding2_joint25[50];
extern u16 dFTBossAnimLanding2_joint26[62];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTBossAnimLanding2_joints[] = {
	(u32)dFTBossAnimLanding2_joint1, /* [0] joint 1 */
	(u32)dFTBossAnimLanding2_joint3, /* [1] joint 3 */
	0x00000000, /* [2] NULL */
	(u32)dFTBossAnimLanding2_joint4, /* [3] joint 4 */
	(u32)dFTBossAnimLanding2_joint5, /* [4] joint 5 */
	(u32)dFTBossAnimLanding2_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTBossAnimLanding2_joint8, /* [7] joint 8 */
	(u32)dFTBossAnimLanding2_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTBossAnimLanding2_joint11, /* [10] joint 11 */
	(u32)dFTBossAnimLanding2_joint12, /* [11] joint 12 */
	(u32)dFTBossAnimLanding2_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTBossAnimLanding2_joint15, /* [14] joint 15 */
	(u32)dFTBossAnimLanding2_joint16, /* [15] joint 16 */
	(u32)dFTBossAnimLanding2_joint17, /* [16] joint 17 */
	(u32)dFTBossAnimLanding2_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTBossAnimLanding2_joint20, /* [19] joint 20 */
	(u32)dFTBossAnimLanding2_joint21, /* [20] joint 21 */
	(u32)dFTBossAnimLanding2_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTBossAnimLanding2_joint24, /* [23] joint 24 */
	(u32)dFTBossAnimLanding2_joint25, /* [24] joint 25 */
	(u32)dFTBossAnimLanding2_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTBossAnimLanding2_joint1[48] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 85), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 3840, 1152,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -960,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 1440, -1600,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 7), 1440, 799,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 2640, 1920,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 3840, -960,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 1440, -1599,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 7), 1440, 799,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 2640, 1920,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -371,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 26), 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTBossAnimLanding2_joint3[30] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -600, 3960, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 129), -600, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 2), 3600,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), 3960,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 124), 3960,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 26), 0, 600, -1200,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTBossAnimLanding2_joint4[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 804, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 129), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 85), 804, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 804,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 39), 804,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 402, 119,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 7), 804,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 804,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 402, 119,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 7), 804,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 804,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), -982, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTBossAnimLanding2_joint5[90] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -178, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 90), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 85), -178, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -178, -119,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 178,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), -163,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), 536, 21, 268, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -714, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 446, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 536, -59, 268, -104, 268, -44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -178, -163,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 178, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), 536, 21, 268, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -714, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 446, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 536, -59, 268, -104, 268, -44,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -47, -22, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), -178, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTBossAnimLanding2_joint7[56] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 178, 178, 178,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 683, -1280, 155, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 124), 178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 90), 178, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), 0, -10, -178, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 0, 17, -178, 35,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 178, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), 0, -10, -178, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -178, 5, 178, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTBossAnimLanding2_joint8[204] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -653, -9, -1589, 53, -1045, 61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1560, -37,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 32), -653,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -948, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1015, -48,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 9), -1045,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1589, -14,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 20), -1589,
	ftAnimBlock(0, 8),
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 71), -1045,
	ftAnimBlock(0, 12),
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 59), -1589,
	ftAnimBlock(0, 7),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -653,
	ftAnimSetValRateT(FT_ANIM_ROTX, 52), -653, -4,
	ftAnimBlock(0, 51),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1589, 8, -1045, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -1430, -89, -1190, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -663, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -801, 11,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1513, -70, -1157, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1401, 94,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1209, -41,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -782, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -580, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1305, 88,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1329, -28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1244, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1227, 10,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -624, -43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -797, -10,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1364, -66, -1213, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1162, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -1617, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -804, -1, -1572, 60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1150, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -592, -16,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1208, -41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -1254, -1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1156, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), -1177, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -611, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), -696, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1256, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -1273, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -696, 0, -1177, 0, -1273, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTBossAnimLanding2_joint10[70] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -536, -68,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -575, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -536, 19,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 15), -536,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 64), -536,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -536, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -178, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -139, 69,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 12), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -151, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -178, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 33), -165, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -170, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -178, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -178, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTBossAnimLanding2_joint11[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1519, 10, 0, 3, 804, 69,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 27), 1519,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 84), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 906, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 841, -50,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), 804,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 71), 804,
	ftAnimBlock(0, 14),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 1519,
	ftAnimSetValRateT(FT_ANIM_ROTX, 58), 1520, 4,
	ftAnimBlock(0, 56),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -6, 804, -38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 88, -78,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -88, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1529, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 27), 1596, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 43, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 215, 18,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -87, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 58), -67, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 231, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 123, 21,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1596, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 39), 1549, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 147, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 321, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 328, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 369, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1549, 0, -67, 0, 370, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTBossAnimLanding2_joint12[50] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -577, 25,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 12), -577,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 72), -577,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -577, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -58, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -52, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -137, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -112, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -205, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -205, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), -187, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -187, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTBossAnimLanding2_joint14[58] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -840, 46,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -816, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -840, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 25), -840,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 54), -840,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -840, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -87, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -41, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -240, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -251, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -102, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -125, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 35), -215, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -215, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTBossAnimLanding2_joint15[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -26, 2, -1605, -1, -867, 72,
	ftAnimSetValRateT(FT_ANIM_ROTY, 85), -1605, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 87), -23, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -762, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -829, -52,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), -867,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 71), -867,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -867, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1522, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1602, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 68), -1583, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -17, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 57), -9, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1527, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), -1485, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1488, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 30), -1431, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1430, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1426, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -9, 0, -1583, 0, -1426, 0,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTBossAnimLanding2_joint16[42] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -676, 27,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 11), -676,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 73), -676,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -676, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -135, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -129, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -179, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -173, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 42), -389, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -390, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTBossAnimLanding2_joint17[58] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -753, 41,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -732, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -753, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 28), -753,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 51), -753,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -753, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -93, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -55, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -127, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -134, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), -134, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -140, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 30), -348, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -348, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTBossAnimLanding2_joint19[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, -99, -2025, 512, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 129), -178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 26), -44,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTBossAnimLanding2_joint20[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, 23, -1789, 0, 2353, 76,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 13), 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 85), -1789, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 2464, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2393, -55,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 8), 2353,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 72), 2353,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 71), 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4, -10, 2353, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1735, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -166, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1788, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1688, -3,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1732, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), 1770, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -164, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 54), -38, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1690, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 59), -1635, 0,
	ftAnimBlock(0, 18),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1772, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 40), 1616, 0,
	ftAnimBlock(0, 33),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -30, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 0, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, -1635, 0, 1616, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTBossAnimLanding2_joint21[50] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -678, 27,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 11), -678,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 73), -678,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -678, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -185, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), -221, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -223, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), -263, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -277, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -420, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -421, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTBossAnimLanding2_joint23[58] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -751, 42,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -730, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -751, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 27), -751,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 52), -751,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -751, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -103, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -100, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), -142, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -144, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), -190, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -206, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -384, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -384, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTBossAnimLanding2_joint24[160] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 106, 14, -1777, 7, 2479, 83,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 21), 106,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 41), -1777,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 2600, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2522, -60,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 8), 2479,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 72), 2479,
	ftAnimBlock(0, 9),
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 63), 106,
	ftAnimBlock(0, 20),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -1777,
	ftAnimSetValRateT(FT_ANIM_ROTY, 43), -1777, -6,
	ftAnimBlock(0, 42),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 106, -12, 2479, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1833, -62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -133, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1790, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1761, 4,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1800, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1772, -23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -129, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -124, 5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1756, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), -1725, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1749, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 1810, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1833, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 1689, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -120, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 28), -70, 11,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1722, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), -1691, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1693, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), 1808, 0,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -59, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 33, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 33, 0, -1691, 0, 1808, 0,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTBossAnimLanding2_joint25[50] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -529, 28,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 11), -529,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 73), -529,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -529, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -181, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -193, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -139, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -166, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), -102, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -106, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), -196, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -196, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTBossAnimLanding2_joint26[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -866, 68,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -763, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -831, -51,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), -866,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 71), -866,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -866, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -206, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -205, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -181, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -216, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -80, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -84, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), -227, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -227, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
