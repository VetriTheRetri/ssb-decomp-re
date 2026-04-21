/* AnimJoint data for relocData file 817 (FTDonkeyAnimCrouchIdle) */
/* 3200 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimCrouchIdle_joint1[8];
extern u16 dFTDonkeyAnimCrouchIdle_joint2[56];
extern u16 dFTDonkeyAnimCrouchIdle_joint4[12];
extern u16 dFTDonkeyAnimCrouchIdle_joint5[188];
extern u16 dFTDonkeyAnimCrouchIdle_joint6[64];
extern u16 dFTDonkeyAnimCrouchIdle_joint7[28];
extern u16 dFTDonkeyAnimCrouchIdle_joint8[8];
extern u16 dFTDonkeyAnimCrouchIdle_joint10[100];
extern u16 dFTDonkeyAnimCrouchIdle_joint11[214];
extern u16 dFTDonkeyAnimCrouchIdle_joint12[64];
extern u16 dFTDonkeyAnimCrouchIdle_joint13[8];
extern u16 dFTDonkeyAnimCrouchIdle_joint16[12];
extern u16 dFTDonkeyAnimCrouchIdle_joint17[182];
extern u16 dFTDonkeyAnimCrouchIdle_joint19[40];
extern u16 dFTDonkeyAnimCrouchIdle_joint21[152];
extern u16 dFTDonkeyAnimCrouchIdle_joint22[202];
extern u16 dFTDonkeyAnimCrouchIdle_joint24[40];
extern u16 dFTDonkeyAnimCrouchIdle_joint25[172];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTDonkeyAnimCrouchIdle_joints[] = {
	(u32)dFTDonkeyAnimCrouchIdle_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimCrouchIdle_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimCrouchIdle_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTDonkeyAnimCrouchIdle_joint5, /* [4] joint 5 */
	(u32)dFTDonkeyAnimCrouchIdle_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimCrouchIdle_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimCrouchIdle_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimCrouchIdle_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTDonkeyAnimCrouchIdle_joint11, /* [10] joint 11 */
	(u32)dFTDonkeyAnimCrouchIdle_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimCrouchIdle_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimCrouchIdle_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTDonkeyAnimCrouchIdle_joint17, /* [16] joint 17 */
	(u32)dFTDonkeyAnimCrouchIdle_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTDonkeyAnimCrouchIdle_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTDonkeyAnimCrouchIdle_joint22, /* [21] joint 22 */
	(u32)dFTDonkeyAnimCrouchIdle_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTDonkeyAnimCrouchIdle_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTDonkeyAnimCrouchIdle_joint1[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -24, 689, -524,
	ftAnimBlock(0, 160),
	ftAnimLoop(0x6800, -14),
};

/* Joint 2 */
u16 dFTDonkeyAnimCrouchIdle_joint2[56] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -139, -35, -26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 60), -139, -35, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), -139, 0, -35, 2, -26, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -145, 0, 71, 4, -26, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -145, 0, 71, -7, -26, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -133, 0, -143, -7, -27, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -133, 0, -143, 3, -27, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -139, -35, -26,
	ftAnimLoop(0x6800, -110),
};

/* Joint 4 */
u16 dFTDonkeyAnimCrouchIdle_joint4[12] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 907, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 22, 40,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 160), 907,
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimCrouchIdle_joint5[188] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1484, 0, -1275, 0, 498, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 59), -1483, 0, -1275, 0, 498, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1484, -7, -1275, 8, 498, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -1909, -26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 832, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -1151, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1141, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -1116, -1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1934, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -2137, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 847, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 984, 8,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1117, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 31), -1200, 1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2151, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), -2399, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 993, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), 1098, -2,
	ftAnimBlock(0, 24),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2396, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -2013, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1197, 3, 1095, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1112, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 926, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 909, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), 867, -16,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1111, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -1122, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2009, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -1954, 34,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 847, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 512, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1916, 43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1506, 22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1127, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1268, -11,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1489, 11, 502, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1484, 5, -1275, -6, 498, -3,
	ftAnimLoop(0x6800, -372),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimCrouchIdle_joint6[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1222, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 62), -1224, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1224, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -1077, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1069, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), -1131, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1134, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), -1087, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1078, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -1065, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1078, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -1225, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1225, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1223, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1222, 0,
	ftAnimLoop(0x6800, -126),
};

/* Joint 7 */
u16 dFTDonkeyAnimCrouchIdle_joint7[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -822, -326, 86,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 702, 15, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 60), -822, -6, -326, 0, 86, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), -1449, -259, 422,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 70), -822, -326, 86,
	ftAnimLoop(0x6800, -54),
};

/* Joint 8 */
u16 dFTDonkeyAnimCrouchIdle_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -199, -78, 6,
	ftAnimBlock(0, 160),
	ftAnimLoop(0x6800, -14),
};

/* Joint 10 */
u16 dFTDonkeyAnimCrouchIdle_joint10[100] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 60, 61, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 60), 60, 0, 61, 0, 25, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -264, -10, 67, 0, 29, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 10, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -264, -16, 67, 0, 29, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 10, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -603, -13, 379, 12, -642, -26,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -603, 0, 379, 0, -642, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 10, -13, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -366, 3, 70, -47, 29, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -552, -8, -331, -18, 606, 26,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -552, 0, -331, 0, 606, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 6, 13, -19,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 60, 61, 25,
	ftAnimLoop(0x6800, -196),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTDonkeyAnimCrouchIdle_joint11[214] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1819, 0, 1272, 0, 422, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 59), -1819, 0, 1272, 0, 422, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1819, 7, 1272, -11, 422, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 630, 62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1463, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 1096, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1075, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1092, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 696, 67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 990, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1387, 73,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -1030, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1011, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 1064, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1095, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 40), 1113, 2,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1030, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 29), -950, 17,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1063, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), 1108, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -932, 18, 1117, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -815, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), 1155, -10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1115, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), 1091, -5,
	ftAnimBlock(0, 16),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -836, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1061, -22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1143, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1029, -20,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1085, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1373, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1084, -6, 1005, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1122, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 785, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1473, -100, 695, -89,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1768, -37, 451, -24,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1162, 40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1263, 16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1797, -22, 433, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1813, -11, 424, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1819, -5, 1272, 8, 422, -2,
	ftAnimLoop(0x6800, -424),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimCrouchIdle_joint12[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1269, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 59), -1269, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1269, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -1247, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1235, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -1127, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1127, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 37), -1167, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1167, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -1141, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1144, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -1280, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1277, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1270, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1269, 1,
	ftAnimLoop(0x6800, -126),
};

/* Joint 13 */
u16 dFTDonkeyAnimCrouchIdle_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 893, 446, 268,
	ftAnimBlock(0, 160),
	ftAnimLoop(0x6800, -14),
};

/* Joint 16 */
u16 dFTDonkeyAnimCrouchIdle_joint16[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -893, -1340, 2502, 127, 93, 134,
	ftAnimBlock(0, 160),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimCrouchIdle_joint17[182] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 321, 0, -396, 0, -1166, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 63), -1172, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 89), 410, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 62), -400, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -401, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), -491, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1173, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 26), -1295, -13,
	ftAnimBlock(0, 25),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 416, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 523, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -503, -14, -1311, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -677, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -1534, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1545, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -1594, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -684, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -580, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 527, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 557, -5,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1587, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -1268, 31,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 551, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 478, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -557, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -414, 2,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1239, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -1128, 5,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -412, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -354, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 478, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), 321, -1,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1122, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1117, -7,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -352, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -394, -2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1125, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1165, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 321, 0, -396, -1, -1166, -1,
	ftAnimLoop(0x6800, -360),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimCrouchIdle_joint19[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 1327,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 89), 1327, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1327, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 1290, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1291, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 1346, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1346, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), 1327, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1327, 0,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTDonkeyAnimCrouchIdle_joint21[152] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 95, 0, -218, 0, -251, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 62), -214, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 90), -274, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 61), 97, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 98, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 28), 148, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -212, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 27), -118, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 161, 16, -106, 16, -276, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 27), -285, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), 352, 7, 70, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 358, 5, 76, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 22), 177, -32, -60, -26,
	ftAnimBlock(0, 17),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -285, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -221, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 143, -33, -87, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -237, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -58, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -64, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -90, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -239, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -255, 8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -220, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -233, -4,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -92, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 92, 5,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -247, 8, -238, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -219, 2, -250, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 95, 2, -218, 1, -251, 0,
	ftAnimLoop(0x6800, -300),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimCrouchIdle_joint22[202] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1625, 0, 1187, 0, -2533, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 78), -1606, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 84), -2532, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 61), 1184, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1181, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), 1057, 2,
	ftAnimBlock(0, 16),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1605, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -1670, -14,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2533, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -2527, 7,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1061, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1204, 5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1684, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -1730, 1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2520, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -2541, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1207, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 1167, -17,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1728, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -1460, 56,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1148, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 947, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2547, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -2432, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1401, 57, -2385, 47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -2202, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1182, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 943, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 973, 5,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2200, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -2356, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1184, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1355, -26,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 978, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1184, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1384, -31, -2381, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), -1604, -10, -2530, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1613, -7, -2532, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1623, -2, -2533, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1625, -1, 1187, 2, -2533, 0,
	ftAnimLoop(0x6800, -400),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimCrouchIdle_joint24[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1306, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 89), 1305, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1306, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 1331, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1330, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), 1268, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1269, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 1306, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1306, 0,
	ftAnimLoop(0x6800, -78),
};

/* Joint 25 */
u16 dFTDonkeyAnimCrouchIdle_joint25[172] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1799, 0, -1779, 0, 1258, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 63), -1804, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 94), 1245, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 62), -1774, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1770, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), -1673, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1806, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 26), -1853, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1846, 10, -1679, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), -1690, 0, -1849, -7,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1245, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), 1244, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1691, 0, -1854, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -1731, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -1667, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1671, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1915, -22,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1244, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 1287, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1701, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1497, 3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1935, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -1972, 3,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1494, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1559, -13,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1286, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), 1258, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1968, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1819, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1573, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1776, -5,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1810, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1800, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1799, 1, -1779, -2, 1258, 0,
	ftAnimLoop(0x6800, -336),
	ftAnimEnd(),
	0x0000, 0x0000,
};
