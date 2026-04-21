/* AnimJoint data for relocData file 1625 (FTCaptainAnimDashAttack) */
/* 3040 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimDashAttack_joint1[24];
extern u16 dFTCaptainAnimDashAttack_joint2[34];
extern u16 dFTCaptainAnimDashAttack_joint3[54];
extern u16 dFTCaptainAnimDashAttack_joint5[64];
extern u16 dFTCaptainAnimDashAttack_joint6[158];
extern u16 dFTCaptainAnimDashAttack_joint7[64];
extern u16 dFTCaptainAnimDashAttack_joint8[8];
extern u16 dFTCaptainAnimDashAttack_joint9[8];
extern u16 dFTCaptainAnimDashAttack_joint11[8];
extern u16 dFTCaptainAnimDashAttack_joint12[186];
extern u16 dFTCaptainAnimDashAttack_joint13[60];
extern u16 dFTCaptainAnimDashAttack_joint14[8];
extern u16 dFTCaptainAnimDashAttack_joint15[10];
extern u16 dFTCaptainAnimDashAttack_joint17[20];
extern u16 dFTCaptainAnimDashAttack_joint18[150];
extern u16 dFTCaptainAnimDashAttack_joint20[64];
extern u16 dFTCaptainAnimDashAttack_joint22[104];
extern u16 dFTCaptainAnimDashAttack_joint23[194];
extern u16 dFTCaptainAnimDashAttack_joint25[80];
extern u16 dFTCaptainAnimDashAttack_joint26[170];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTCaptainAnimDashAttack_joints[] = {
	(u32)dFTCaptainAnimDashAttack_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimDashAttack_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimDashAttack_joint3, /* [2] joint 3 */
	(u32)dFTCaptainAnimDashAttack_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTCaptainAnimDashAttack_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimDashAttack_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimDashAttack_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimDashAttack_joint9, /* [8] joint 9 */
	(u32)dFTCaptainAnimDashAttack_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTCaptainAnimDashAttack_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimDashAttack_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimDashAttack_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimDashAttack_joint15, /* [14] joint 15 */
	(u32)dFTCaptainAnimDashAttack_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTCaptainAnimDashAttack_joint18, /* [17] joint 18 */
	(u32)dFTCaptainAnimDashAttack_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTCaptainAnimDashAttack_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTCaptainAnimDashAttack_joint23, /* [22] joint 23 */
	(u32)dFTCaptainAnimDashAttack_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTCaptainAnimDashAttack_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTCaptainAnimDashAttack_joint1[24] = {
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 3713,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 6), 1277, 1742,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 1740,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 13), 3759, 525,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 7), 4264, 300,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 14), 4547,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimDashAttack_joint2[34] = {
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 1503, -80,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 1250, -80,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 36), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 0, 1152,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 13), 24, 1183,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 7), 0, 842,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 7), 0, 1116,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 7), 0, 1600,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTCaptainAnimDashAttack_joint3[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), 242,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 26), 0, 0, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 4), 223,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), 478,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 13), 478,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 7), 318,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 0, 7, 0, 0, 0, 2, 0, -43, 0, 5,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 7), 318,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 107, 0, 4, -76, 9,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 7), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTCaptainAnimDashAttack_joint5[64] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 92, 230, -11, 35, -5, 24,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 184, 0, 0, 0, -13, 65,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 125, 431, 42, 59, -22, 14,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), 125, 431, 42, 59, -22, 14,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 23, 27, -19,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -79, 181, -2,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 257, 111, 76,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -102, 153, -7, 23, 27, -19,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 189, 0, 0, 0, -31, 47,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTCaptainAnimDashAttack_joint6[158] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1733, 12, 1886, 26, -1047, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1720, -33, 1912, -49, -1068, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1799, -45, 1787, -89, -1190, -116,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1817, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1698, -54, -1334, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1624, -53, -1159, 134,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1035, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1629, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1824, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1848, 20,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1022, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -989, -34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1647, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1817, -11,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1826, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1634, 39,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1804, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1854, 14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1026, -37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1452, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1595, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -1442, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1368, 27, 1866, -1, -1570, -99,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1863, -109,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1622, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1384, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1370, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1361, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1970, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -2113, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1368, -7, 1602, -19, -2132, -19,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTCaptainAnimDashAttack_joint7[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1016, -25,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1120, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1065, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -920, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -890, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -655, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -659, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -820, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -812, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -771, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -730, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -858, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -880, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -810, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -797, 13,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTCaptainAnimDashAttack_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2435, -89, -388,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTCaptainAnimDashAttack_joint9[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTCaptainAnimDashAttack_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTCaptainAnimDashAttack_joint12[186] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 131, -201, 287, 141, -637, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -69, -308, 428, 64, -591, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -485, -329, 417, -90, -714, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -838, -12, 105, -69, -770, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -754, 67, 109, 16, -634, 125,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 125, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -725, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -520, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -505, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -583, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 108, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -54, 22,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -736, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -827, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -838, 12, -595, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -475, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -554, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -19, 48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 305, 32,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -446, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -363, -10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -498, 28, 327, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -490, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 488, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -377, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -193, 153,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -471, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -256, 89,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 499, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 199, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 195,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 493, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -180, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -162, 19,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 561, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -129, 32, 144, -55, 592, 30,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTCaptainAnimDashAttack_joint13[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1127, -22,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1115, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -951, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -777, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -852, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -974, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -987, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -1010, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1021, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -973, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1063, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1102, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1049, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1024, 24,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTCaptainAnimDashAttack_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, 275, 62,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTCaptainAnimDashAttack_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimDashAttack_joint17[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 18, 0, -3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 40), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 25), 263, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 0, 18,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTCaptainAnimDashAttack_joint18[150] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 24, 33, -83, -6, -959, 116,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 69, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -160, -41, -586, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -206, 9, -534, -121,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -57, 36, -1125, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 135, 55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 166, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -69, -11, -1091, 34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -928, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -94, 16,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 162, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 165, -5,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -961, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1019, -36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -81, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -13, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 160, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 106, -11,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1049, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1065, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 93, 36, -22, 43, -1054, 53,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 227, 30, -872, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 72, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 112, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 87, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 240, 2, -798, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 200, -12, -568, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 191, -9, 70, -17, -472, 96,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTCaptainAnimDashAttack_joint20[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 871, 188,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1059, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1119, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1198, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1290, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1344, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1343, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1379, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1395, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1244, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1213, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 625, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 572, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 513, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 445, -68,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTCaptainAnimDashAttack_joint22[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -16, -28, 2, -1, 22, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -37, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -11, -4, -227, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -16, -4, -235, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -319, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -113, -14,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -40, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -69, 7,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -347, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -203, 51,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -67, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -55, 15, -61, 6, -151, 47,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -42, 0, 75, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -35, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -217, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -234, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -195, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -158, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -126, 31, -42, 0, 80, 4,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTCaptainAnimDashAttack_joint23[194] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -24, 30, 50, 6, -71, 148,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -31, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 14, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 76, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -164, -273,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -619, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -86, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -113, 24, -22, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -38, 74, 58, 32, -255, 421,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 35, 37, 43, -8, 224, 241,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 68, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 35, 0, 227, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -38, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 246, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 247, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -52, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 69, -5, -195, -149,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -19, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -84, -64, -352, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -167, -47, -555, -139,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -688, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -178, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -85, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -25, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 58, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -723, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -753, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 59, 1, -764, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -738, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 120, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -79, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 2, 39,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -721, 50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -362, 93,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 38, 34, 139, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 142, 18, 123, -12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -268, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -174, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 160, 17, 110, -13, -76, 97,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTCaptainAnimDashAttack_joint25[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 606, -202,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 403, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 728, 294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1063, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 830, -531,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -413,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 4, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 547, 271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 786, 234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1016, 230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1247, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1275, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1280, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1114, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1084, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 632, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 541, -90,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTCaptainAnimDashAttack_joint26[170] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1597, -20, 1601, -9, -1299, -77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1579, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1554, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1376, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1612, -247,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1948, 153,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1573, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1509, -19, 1602, 39, -1564, 312,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1633, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1613, -53, -1323, 120,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1616, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1323, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -1794, -133,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1617, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1512, 48,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1631, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1545, -11,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1464, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1424, -23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1931, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -2030, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1449, -24, -2086, -55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2212, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1425, 19,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1532, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1248, -5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2191, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1892, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1403, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1348, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1406, -47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1443, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1244, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1447, -3, 1243, -1, -1888, 4,
	ftAnimEnd(),
};
