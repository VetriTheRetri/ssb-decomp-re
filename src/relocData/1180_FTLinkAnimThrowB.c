/* AnimJoint data for relocData file 1180 (FTLinkAnimThrowB) */
/* 3936 bytes: 120-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimThrowB_joint1[66];
extern u16 dFTLinkAnimThrowB_joint2[74];
extern u16 dFTLinkAnimThrowB_joint4[94];
extern u16 dFTLinkAnimThrowB_joint5[156];
extern u16 dFTLinkAnimThrowB_joint6[64];
extern u16 dFTLinkAnimThrowB_joint9[8];
extern u16 dFTLinkAnimThrowB_joint10[186];
extern u16 dFTLinkAnimThrowB_joint11[72];
extern u16 dFTLinkAnimThrowB_joint12[8];
extern u16 dFTLinkAnimThrowB_joint13[8];
extern u16 dFTLinkAnimThrowB_joint16[8];
extern u16 dFTLinkAnimThrowB_joint17[32];
extern u16 dFTLinkAnimThrowB_joint18[32];
extern u16 dFTLinkAnimThrowB_joint20[8];
extern u16 dFTLinkAnimThrowB_joint21[202];
extern u16 dFTLinkAnimThrowB_joint23[94];
extern u16 dFTLinkAnimThrowB_joint25[212];
extern u16 dFTLinkAnimThrowB_joint26[178];
extern u16 dFTLinkAnimThrowB_joint28[72];
extern u16 dFTLinkAnimThrowB_joint29[334];

/* Joint pointer table (30 entries, 120 bytes) */
u32 dFTLinkAnimThrowB_joints[] = {
	(u32)dFTLinkAnimThrowB_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimThrowB_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimThrowB_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTLinkAnimThrowB_joint5, /* [4] joint 5 */
	(u32)dFTLinkAnimThrowB_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimThrowB_joint9, /* [6] joint 9 */
	0x00000000, /* [7] NULL */
	0x00000000, /* [8] NULL */
	(u32)dFTLinkAnimThrowB_joint10, /* [9] joint 10 */
	(u32)dFTLinkAnimThrowB_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimThrowB_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimThrowB_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimThrowB_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTLinkAnimThrowB_joint17, /* [16] joint 17 */
	(u32)dFTLinkAnimThrowB_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimThrowB_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTLinkAnimThrowB_joint21, /* [20] joint 21 */
	(u32)dFTLinkAnimThrowB_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTLinkAnimThrowB_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTLinkAnimThrowB_joint26, /* [25] joint 26 */
	(u32)dFTLinkAnimThrowB_joint28, /* [26] joint 28 */
	0x00000000, /* [27] NULL */
	(u32)dFTLinkAnimThrowB_joint29, /* [28] joint 29 */
	0xFFFF0399, /* [29] END */
};

/* Joint 1 */
u16 dFTLinkAnimThrowB_joint1[66] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 720, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -22, -51, 703, 26, 240, 255,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -58, -50, 750, 195, 287, 86,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -79, -27, 923, 231, 337, 66,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -79, 0, 923, -1, 337, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 41, -215,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -79, 35, 974, -2, 68, -56,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -16, 48, 919, -45, 237, -41,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 0, 901, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimThrowB_joint2[74] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -107, 276, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -119, -1, -351, -55, 132, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -118, 39, -279, 45, 117, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 193, 416, 15, 173, 282, 229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 715, 104, 67, 10, 576, 58,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 715, 0, 67, 0, 576, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 715, -51, 67, -11, 576, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -17, -63, -101, 16, 86, -44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -107, 276, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimThrowB_joint4[94] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 259, 166, 56,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 869, 472, 532, 147, 722, 505,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1204, 318, 461, -121, 1067, 287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1506, 44, 289, -28, 1296, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1513, -36, 262, -7, 1136, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1251, -335, 240, -109, 1034, -403,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 842, -585, 43, -175, 330, -588,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 80, -152, -111, -30, -142, -94,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 80, 0, -111, 0, -142, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 80, 8, -111, 13, -142, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 259, 166, 56,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimThrowB_joint5[156] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1888, -266, -1281, 104, -1694, 331,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1621, -371, -1177, -6, -1363, 381,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1144, -334, -1295, -73, -932, 207,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1032, 98,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1143, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -948, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -976, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1310, -226,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1159, 156,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 2549, 86,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1138, -32, -1580, -242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1341, -236, -2072, -257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1680, -169, -2311, -119,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1680, 0, -2311, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2549, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 2551, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1680, 0, -2311, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -2304, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), -1750, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1747, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1302, 12,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2541, -25, -2285, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 1947, -38, -1742, 35,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1292, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1281, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1917, -23, -1715, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1891, -5, -1695, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1888, -2, -1281, 0, -1694, 1,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimThrowB_joint6[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -500, -243,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -768, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -560, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -681, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -689, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -500, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -610, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -313, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -314, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -220, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -198, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -658, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -659, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -511, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, 10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimThrowB_joint9[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, 7, 76,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimThrowB_joint10[186] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1976, -63, 1283, 292, 1468, -75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1299, -189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1912, -351, 1576, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1273, -506, 1559, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 899, -199, 1696, 43, 1014, -142,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1031, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 874, -14, 1647, -85,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1141, 277,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1021, 98,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1065, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1312, 248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1505, 311, 1631, 250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1763, 312, 1812, 215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2129, 299, 1177, 169, 2061, 118,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2050, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2360, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1360, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1362, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1131, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2051, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 2051, 28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2360, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 2633, 82,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2093, 59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2381, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1061, -62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1281, 78,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2714, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 2080, -43,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2270, -131,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1672, -49,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2052, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 2025, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1354, 63, 1633, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1481, 7, 1561, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2024, 0, 1484, 3, 1557, -3,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimThrowB_joint11[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -798, -192,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -991, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -869, 226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -537, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -590, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -921, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -861, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -783, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -917, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1039, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1033, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -650, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -589, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -772, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -751, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -600, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, 12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimThrowB_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimThrowB_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTLinkAnimThrowB_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -536, -339,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimThrowB_joint17[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -163,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), 63, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 471, 33,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 471, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 471, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 13), -163,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTLinkAnimThrowB_joint18[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -199,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), 65, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 645, 48,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 645, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 645, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 13), -199,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTLinkAnimThrowB_joint20[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimThrowB_joint21[202] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -3, 75, -329, 55, -154, -213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 72, 186, -274, 193, -368, -326,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 369, 135, 57, 47, -808, -420,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 201, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -180, -145, -1209, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -234, -20, -1103, 129,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 4, 54, -528, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 147, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 70, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 25, -213, 29, -165, -485, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -357, -58, -327, -211, -293, 277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -91, 75, -394, -85, 68, 165,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -498, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -207, -57, 37, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -207, 0, 37, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), -246, -24, 120, 62,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -491, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -354, 51,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -263, 14, 179, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -151, 21, 156, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -137, 78, 176, -67,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 366, 50, -399, -37,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -311, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 393, 10, -315, 98, -397, -83,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -706, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 386, -182, -115, 102,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -168, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 29, -212,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -79, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -514, 182,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 71, 55,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -111, -32, -204, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -221, -30, -251, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -242, -20, -244, 7, 108, 37,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimThrowB_joint23[94] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 735, 406,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1471, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1429, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1020, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1010, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1062, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1263, -404,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 254, -504,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 254, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 254, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 222, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -53,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 796, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 872, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 868, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1151, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 966, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 823, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 334, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, -85,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimThrowB_joint25[212] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1859, 245, 1809, -175, 1371, -268,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1570, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2104, 35, 1103, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1929, 67, 1161, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2240, 195, 1442, 11, 1453, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2320, 31, 1593, 117, 1465, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1521, 79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2040, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1677, 89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1959, 60,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1612, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1985, 144, 1996, -140, 1628, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2328, 137, 1679, -81, 1367, -247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2261, -411, 1833, -142, 1133, 211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1506, -377, 1394, -219, 1790, 328,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1505, 0, 1394, 0, 1790, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 11), 1489, -18, 1525, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1790, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1867, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1962, 63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1767, -192,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1464, -35, 1545, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1359, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1375, -11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1574, -186,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1398, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1398, 207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1775, 316,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2031, 214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2204, 300, 1381, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2632, 241, 1602, 149, 1677, 105,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 2702, -16, 1547, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1680, 58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1771, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2655, -113, 1503, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1984, -114, 1543, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1937, -46, 1770, 0, 1573, 30,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimThrowB_joint26[178] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1658, -104, 1254, 114, 1193, -34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1130, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1376, 0, 1545, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1401, 32, 1512, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1591, 33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1297, -43,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1171, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1256, -54,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1629, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1467, -277, 1235, -98, 1097, -172,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1100, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1073, -197, 912, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1073, 0, 912, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 902, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1073, 0, 1100, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 999, -60,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 661, -172,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 883, -56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 698, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 942, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1108, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 487, -154,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 436, 238,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 860, 198,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1288, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1219, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 759, 478, 1446, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1393, 421, 1433, -19, 1240, 31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1472, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1344, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1602, 149,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1877, 5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1489, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1484, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1879, 1, 1338, -5, 1483, 0,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimThrowB_joint28[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 837, 37,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 858, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 765, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 598, -235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 294, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 292, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 292, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 98, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 83, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 338, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 471, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 469, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 432, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 29 */
u16 dFTLinkAnimThrowB_joint29[334] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2818, -144, -50, -3, -229, -47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -449, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 2694, 36, -115, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2746, 34, -273, -118,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 2818, 32, -497, 18,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -451, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -309, 149,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2848, -29, -471, 221,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2702, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -54, 517,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 564, 309, -127, 91,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -125, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 564, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2702, 0, 564, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 2702, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 620, 64,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -125, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -51, 132,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2756, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2911, 355, 693, 55, 137, 402,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 383, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3466, 468, 753, 511,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 4058, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1159, 231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1224, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1226, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1276, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4105, 45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 4188, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 390, 34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 947, 508,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4222, 295, 1302, 225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4780, 97, 1726, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4417, -222, 1600, 416, 1442, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 4274, -55, 1820, 21, 1401, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4224, -39, 1823, -8, 1415, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 4331, 78, 1695, -22, 1528, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4397, 66, 1682, -13, 1538, 10,
	ftAnimEnd(),
	0x40EC, 0x0648, 0x0000, 0x0000, 0x0129, 0x023C, 0x4802, 0x0000, 0x20ED, 0x0001, 0x087E, 0x0218, 0x0000, 0x0000, 0x0235, 0x0000, 0x012D, 0xFFD0, 0x0071, 0xF4AB, 0x20ED, 0x0002, 0x0C90, 0x0026, 0x0000, 0x0000, 0x0000, 0xFE3C, 0x0117, 0xFFAF, 0xFDFC, 0xFE81, 0x28C1, 0x0008, 0x00C8, 0x013D, 0xFE93, 0xFEF7, 0x3004, 0x0000, 0x280D, 0x0009, 0x0C94, 0x0000, 0x0000, 0x0000, 0x3821, 0x0008, 0x0000, 0x4021, 0x0006, 0x0000, 0x20C1, 0x0001, 0x027C, 0x0368, 0xFCD1, 0xFC7E, 0x30C0, 0x0000, 0xFFCC, 0x400D, 0x0002, 0x0C94, 0x0000, 0x38C1, 0x0001, 0x02B8, 0xFCCC, 0x20C1, 0x0001, 0x027C, 0x0368, 0xFCD1, 0xFC7E, 0x30C0, 0x0000, 0xFFCC, 0x400D, 0x0002, 0x0C94, 0x0000, 0x38C1, 0x0001, 0x0240, 0xFCCD, 0x20C1, 0x0001, 0x027C, 0x0368, 0xFCD1, 0xFC7E, 0x30C0, 0x0000, 0xFFCC, 0x280D, 0x0003, 0x0C94, 0x0000, 0x0000, 0x0000, 0x38C1, 0x0001, 0x02B8, 0xFCCC, 0x20E1, 0x0002, 0x0000, 0x0000, 0x027C, 0x0000, 0xFCD1, 0x0011, 0x30C0, 0x01F3, 0xFD9C, 0x38ED, 0x0015, 0x0C90, 0x0000, 0x0000, 0x0818, 0xF5F1, 0x0000, 0x0000, 0x0000,
};
