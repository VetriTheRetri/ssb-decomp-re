/* AnimJoint data for relocData file 697 (FTFoxAnimDownAttackU) */
/* 4176 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimDownAttackU_joint1[62];
extern u16 dFTFoxAnimDownAttackU_joint2[48];
extern u16 dFTFoxAnimDownAttackU_joint4[38];
extern u16 dFTFoxAnimDownAttackU_joint5[226];
extern u16 dFTFoxAnimDownAttackU_joint6[104];
extern u16 dFTFoxAnimDownAttackU_joint7[20];
extern u16 dFTFoxAnimDownAttackU_joint8[42];
extern u16 dFTFoxAnimDownAttackU_joint10[10];
extern u16 dFTFoxAnimDownAttackU_joint11[320];
extern u16 dFTFoxAnimDownAttackU_joint12[126];
extern u16 dFTFoxAnimDownAttackU_joint13[62];
extern u16 dFTFoxAnimDownAttackU_joint15[10];
extern u16 dFTFoxAnimDownAttackU_joint16[224];
extern u16 dFTFoxAnimDownAttackU_joint18[80];
extern u16 dFTFoxAnimDownAttackU_joint20[178];
extern u16 dFTFoxAnimDownAttackU_joint21[138];
extern u16 dFTFoxAnimDownAttackU_joint23[76];
extern u16 dFTFoxAnimDownAttackU_joint24[168];
extern u16 dFTFoxAnimDownAttackU_joint25[62];
extern u16 dFTFoxAnimDownAttackU_joint26[42];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTFoxAnimDownAttackU_joints[] = {
	(AObjEvent32 *)dFTFoxAnimDownAttackU_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTFoxAnimDownAttackU_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTFoxAnimDownAttackU_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTFoxAnimDownAttackU_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTFoxAnimDownAttackU_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTFoxAnimDownAttackU_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTFoxAnimDownAttackU_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTFoxAnimDownAttackU_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTFoxAnimDownAttackU_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTFoxAnimDownAttackU_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTFoxAnimDownAttackU_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTFoxAnimDownAttackU_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTFoxAnimDownAttackU_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTFoxAnimDownAttackU_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTFoxAnimDownAttackU_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTFoxAnimDownAttackU_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTFoxAnimDownAttackU_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTFoxAnimDownAttackU_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTFoxAnimDownAttackU_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTFoxAnimDownAttackU_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimDownAttackU_joint1[62] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 9, 189, -13,
	ftAnimSetValRateT(FT_ANIM_TRAY, 10), 540, 212,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 10), 0, -120,
	ftAnimSetValRateT(FT_ANIM_TRAY, 10), 720, 288,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 15), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 10), 480,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 5), -240, -768,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 1080,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 5), -120, -192, 960, -192,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 5), -480,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 840, -191, -360, 287,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 5), -240,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 5), -120, 154, -120, 180,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 720,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 48, 912, -20,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimDownAttackU_joint2[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, 0, -513,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -268, 53,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 268, 53,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -268, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 268, 125,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 536, 268,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 268, -27, 1608, 104,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), -178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -141, 2878, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTFoxAnimDownAttackU_joint4[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 6, -457, 156,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 536, -536, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 25), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 268, 536,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 15), 536,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 309, 156, 81,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimDownAttackU_joint5[226] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 478, 102, -1200, -154, -1163, -115,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 839, 383, -1204, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1354, -278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1758, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1346, 411, -1381, 235, -965, -109,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1764, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1287, 36, -1422, -318,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1277, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1601, -100,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1685, -21,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1759, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1639, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1699, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1666, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1242, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1334, -13,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1711, 42, -1729, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1468, -159, -1264, 188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1322, -81, -1137, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1364, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1304, 87, -1309, 41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1580, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1497, 111,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1264, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1319, 108,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -747, 16,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1274, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1350, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -769, -21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1019, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1574, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -1570, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1560, 37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1458, -24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1035, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -887, -14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1340, -1, -1495, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1508, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1523, 8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -910, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1188, -74,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1506, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1430, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1251, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1335, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1527, 4, -1430, 0, -1348, -13,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimDownAttackU_joint6[104] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -658, -216,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -875, -272,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1203, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -571, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -452, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -395, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -485, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -710, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -873, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -886, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, 312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -261, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -345, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -699, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -717, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -475, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -578, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -771, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -612, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -702, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -671, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -514, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -471, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -502, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -509, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTFoxAnimDownAttackU_joint7[20] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX), 272,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 50), 269,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 50), 0, 0, 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTFoxAnimDownAttackU_joint8[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -134, -402, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -89, 268, -268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -268, -268, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 268, 40,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 20), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 178,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 0, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 15), 536,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -113, 136, -72,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTFoxAnimDownAttackU_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimDownAttackU_joint11[320] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1551, -121, 103, 87, -2278, -65,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4095, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2492, -190,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2273, -362,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 15), 4095, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 191, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 262, -123,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -279, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2725, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2654, -302, -2497, 117,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -3032, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -38, 192, -2490, -91,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -3108, -215,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 159, -48,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3137, -103,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -3349, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3322, -242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3593, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 128, -10, -3635, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 238, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3328, 22, -3557, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3304, 231, -3449, 394,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2865, 314, -2769, 429,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2530, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 96, 126, -2589, 35,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 7168, 5120, 5120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 490, 678, -2697, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1453, 458, -2708, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2861, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1407, -50,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 7168, 5120, 5120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2560, -56, 1353, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -2826, -270, 1364, -20,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4095, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2935, -195,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -3573, -224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3184, -358, 1310, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1495, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -4436, -65,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3702, -123,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -4125, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1334, -123,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1679, 4,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 25), 4095, 4096, 4096,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4456, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -4691, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4050, 83,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -3920, -83,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1661, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1661, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4035, -120,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -4409, -119,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1619, -80,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1389, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4682, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -4781, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4532, -112,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -4722, 74,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1435, 46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1364, -48,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4797, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -4749, 19,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1330, -24, -4640, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1313, -1, -4509, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4739, 10, 1314, 0, -4489, 20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTFoxAnimDownAttackU_joint12[126] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -607, -147,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -898, -226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1208, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1011, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -893, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -474, 264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -113, 237,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -624, -391,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -783, -243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1112, 388,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 552,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -403, -364,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -736, -290,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -990, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -931, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -836, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -671, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -568, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -713, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -605, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -487, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -505, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -490, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -548, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -556, -7,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimDownAttackU_joint13[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 272, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 17), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 0, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 178, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 89, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 0, 35, 0, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 178, 25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 178, -22,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 0, -17, 0, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), -178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTFoxAnimDownAttackU_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimDownAttackU_joint16[224] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1227, -4, -1518, 0, 1210, -10,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4095, 4096, 4095,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1550, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1169, -30,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 4095, 4096, 4095,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -1523, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1598, -66,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1700, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1577, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1368, 22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1125, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 894, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 916, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 931, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1767, -70,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2046, -105,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 6144, 5120, 5120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1353, -17, 1163, 263,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1637, 164,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1300, 100,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2108, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1985, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1788, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1952, 53,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4095, 4096, 4095,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1128, 141, 1894, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2083, 440,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -889, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1977, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2210, -531,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3039, -578, 2791, 479,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3367, -323, -912, 14, 3043, 266,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -409, 17,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 4095, 4096, 4095,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3687, 92, 3324, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3182, 109, 2774, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3469, -196, 3039, 193,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -3420, 62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 3095, -3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -404, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -235, 20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3360, 53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -3611, -21,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3102, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 3182, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3622, -10, -223, 11, 3190, 7,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimDownAttackU_joint18[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 294, 36,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 588, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 539, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 499, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 617, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 873, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 791, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 493, -205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 379, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 220, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 339, 230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 466, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 891, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 877, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 697, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 630, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 374, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, -20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimDownAttackU_joint20[178] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1465, -10, 1816, -17, -1033, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1313, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 1584, 60, 1587, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1644, 54, 1596, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1668, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1634, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1289, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -2007, -3,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1654, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1342, -182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1649, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1628, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1986, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2064, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1759, 48, -1946, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1725, -25, 1165, 51, -2036, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1708, -111, 1445, 251, -1653, 265,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1502, -130, 1667, 150, -1505, -50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1567, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1448, -54, -1754, -149,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1681, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1440, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1537, 80, 1532, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1546, -65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1787, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1764, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -1706, -31,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1499, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 1563, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1491, -64, -1736, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 1634, 34, -1675, 18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1691, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1496, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1655, 20, 1482, -13, -1664, 10,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimDownAttackU_joint21[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 661, 5, 220, -2, 56, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 237, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 176, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 450, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 306, -129,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 17, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 205, -34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 74, 17,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -22, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -84, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 93, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 138, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 209, 18, 219, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 190, 34, -297, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -113, -7, 234, 29, -385, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 67, -45, 89, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -366, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -465, -87,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -413, 33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 4, -66, 123, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), 277, 28, 201, -4,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -369, 52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 123, 20,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 302, 22, 194, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 352, 4, 142, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 355, 2, 137, -5, 134, 11,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimDownAttackU_joint23[76] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 985, 22,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1144, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1085, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 470, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 298, -235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -149,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 50,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -50,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 330, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 456, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 635, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 559, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 354, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, -22,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimDownAttackU_joint24[168] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1400, -16, 1621, 9, -1579, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 1335, 114, -2108, -175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 1851, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1940, 38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1631, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1485, 120, -2287, -136,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 1605, 7, -2364, -1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1649, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1624, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1613, 7, -2367, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1609, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -2180, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2021, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1918, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1606, -39, -1741, 158,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1633, 167,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1729, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1614, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1571, 41,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1845, 168,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1734, -23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1628, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1511, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1813, -78,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -2050, 8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1730, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1788, -28,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2045, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1847, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1532, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1627, -4,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1759, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1717, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1624, -3, 1711, -6, -1835, 11,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimDownAttackU_joint25[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -571, 83, -164,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -126, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -196, 59, 336, -51, -477, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 198, 4, -591, -25, 2, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -138, -46, 0, 1, -102, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -357, -2, -572, -10, 256, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -173, 14, -175, 55, 147, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -62, 13, 586, 30, -24, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 219, 0,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimDownAttackU_joint26[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -384, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -74, 25, 550, -19, -90, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -2, -7, -292, -46, -86, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), -224, -9, -329, 24, -76, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -329, 2, 507, 11, -332, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -178, -122, 0,
	ftAnimEnd(),
};
