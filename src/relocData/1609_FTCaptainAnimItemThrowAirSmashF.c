/* AnimJoint data for relocData file 1609 (FTCaptainAnimItemThrowAirSmashF) */
/* 2336 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimItemThrowAirSmashF_joint1[18];
extern u16 dFTCaptainAnimItemThrowAirSmashF_joint2[30];
extern u16 dFTCaptainAnimItemThrowAirSmashF_joint4[52];
extern u16 dFTCaptainAnimItemThrowAirSmashF_joint5[102];
extern u16 dFTCaptainAnimItemThrowAirSmashF_joint6[40];
extern u16 dFTCaptainAnimItemThrowAirSmashF_joint7[26];
extern u16 dFTCaptainAnimItemThrowAirSmashF_joint10[52];
extern u16 dFTCaptainAnimItemThrowAirSmashF_joint11[166];
extern u16 dFTCaptainAnimItemThrowAirSmashF_joint12[64];
extern u16 dFTCaptainAnimItemThrowAirSmashF_joint13[50];
extern u16 dFTCaptainAnimItemThrowAirSmashF_joint14[10];
extern u16 dFTCaptainAnimItemThrowAirSmashF_joint16[34];
extern u16 dFTCaptainAnimItemThrowAirSmashF_joint17[100];
extern u16 dFTCaptainAnimItemThrowAirSmashF_joint19[48];
extern u16 dFTCaptainAnimItemThrowAirSmashF_joint21[86];
extern u16 dFTCaptainAnimItemThrowAirSmashF_joint22[120];
extern u16 dFTCaptainAnimItemThrowAirSmashF_joint24[120];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTCaptainAnimItemThrowAirSmashF_joints[] = {
	(u32)dFTCaptainAnimItemThrowAirSmashF_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimItemThrowAirSmashF_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimItemThrowAirSmashF_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTCaptainAnimItemThrowAirSmashF_joint5, /* [4] joint 5 */
	(u32)dFTCaptainAnimItemThrowAirSmashF_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimItemThrowAirSmashF_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimItemThrowAirSmashF_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTCaptainAnimItemThrowAirSmashF_joint11, /* [10] joint 11 */
	(u32)dFTCaptainAnimItemThrowAirSmashF_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimItemThrowAirSmashF_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimItemThrowAirSmashF_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimItemThrowAirSmashF_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTCaptainAnimItemThrowAirSmashF_joint17, /* [16] joint 17 */
	(u32)dFTCaptainAnimItemThrowAirSmashF_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTCaptainAnimItemThrowAirSmashF_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTCaptainAnimItemThrowAirSmashF_joint22, /* [21] joint 22 */
	(u32)dFTCaptainAnimItemThrowAirSmashF_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF0220, /* [24] END */
};

/* Joint 1 */
u16 dFTCaptainAnimItemThrowAirSmashF_joint1[18] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), -1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), -55, 1225,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), 0, -243,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), -183, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 18), -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTCaptainAnimItemThrowAirSmashF_joint2[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 240, 95, 49,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, -76, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 267, 4, 0, -15, -89, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 267, -1, 0, 4, 80, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 240, 95, 49,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTCaptainAnimItemThrowAirSmashF_joint4[52] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 242, -182, -12, 0, -31, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -14, 11, -211, 63, -236, 27, -38, -35, 2, -14, 26, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 309, 123, 196, 1, 151, 11, -26, 15, -42, -13, 80, 8,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 18), -182, -12, 0, -31, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 357, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 17), 242, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTCaptainAnimItemThrowAirSmashF_joint5[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 274, -37, -120, -87, -606, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -104, -142, -498, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -355, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -235, 203,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 283, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -300, -100, -368, 142,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -237, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -277, 16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 344, 54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 242, -100,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -202, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 249, 4,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -253, 25, 143, -91,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -317, -139,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -117, -2,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 253, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 268, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -458, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -565, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 274, 5, -120, -3, -606, -41,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimItemThrowAirSmashF_joint6[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1109, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -947, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -861, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1153, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1169, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -1139, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1098, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1124, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1109, 15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimItemThrowAirSmashF_joint7[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 191, -97, -323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -406, -100, -89, 56, 0, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -413, 29, 241, 0, -268, -16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 191, -97, -323,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTCaptainAnimItemThrowAirSmashF_joint10[52] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -153, 0, 113, 26, -38, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 19, 24, 4, -37, 0, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -30, 57, -72, -76, -2, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 134, 0, -148, -17, 0, 2,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -268, -56, -244, 14, 23, -2,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -153, 14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 113, -38,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTCaptainAnimItemThrowAirSmashF_joint11[166] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 133, 152, 249, -50, 628, 65,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 152, 72, 703, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 286, 260,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 654, 348,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 984, 284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1224, -98, 241, 783, 805, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 787, -162, 1719, 650, 513, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 899, -10, 1543, -79, 1063, 302,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1014, -64,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 559, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1560, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1396, -94,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1282, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 989, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1088, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 785, 205,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1085, 25,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1044, -57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1052, 290,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1128, 144, 1104, -162,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1067, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1374, 380,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1890, 415, 1494, 370,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2082, 150,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2097, -186,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1273, 199,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1491, -29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2253, 114,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2267, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1904, -156, 1408, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1784, -80, 1366, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1742, -42, 1358, -8, 2237, -30,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimItemThrowAirSmashF_joint12[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -631, -52,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -762, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -844, 291,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -178, 422,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -536, -311,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -622, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -733, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1026, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1094, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1165, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1192, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -695, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -631, 64,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimItemThrowAirSmashF_joint13[50] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -5, 167, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 232, 208, 40, -59, 367, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1034, 94, -128, -179, 123, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 422, -48, -318, -48, 505, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 889, -55, -272, 74, 370, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -75, -55, 354, 27, 486, -19,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -5, 167, 63,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTCaptainAnimItemThrowAirSmashF_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 39,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimItemThrowAirSmashF_joint16[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 255, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 129, -101, 0, -3, -24, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -351, -105, -18, -26, -52, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -506, 33, -157, 1, -164, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 255, 0, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimItemThrowAirSmashF_joint17[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1553, -17, -1690, 3, 1051, -78,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1511, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1642, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 972, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1328, 371,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1715, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1627, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1550, -23, 1330, -272,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1507, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1081, -334,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 661, -273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1742, -66, 535, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 614, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1669, 18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1521, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1690, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 615, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1039, 21,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1651, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -1556, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1553, 3, -1690, 0, 1051, 11,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimItemThrowAirSmashF_joint19[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 237, 428,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 702, -222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 219, -251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 423, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 515, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 692, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 444, -207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 433, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 453, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 251, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 237, -14,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTCaptainAnimItemThrowAirSmashF_joint21[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 5, -9, -2, 2, 513, -48,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 86, 42, -54, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -250, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -79, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -74, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -77, 1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 131, 17, 49, 41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 21, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -119, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -95, 31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 505, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 16, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -2, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -63, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 4, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5, 0, -2, 0, 513, 7,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimItemThrowAirSmashF_joint22[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -13, -28, 289, 19, -825, 130,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -16, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 308, -65, -694, 342,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 158, -124, -140, 400,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 92, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1, -227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -115, -42, -350, -315,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1055, -175,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 157, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 266, 137,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 429, -13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1223, -56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1043, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 167, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 55, -97,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -999, 35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -826, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 403, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 160, 13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -49, -83,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -21, 13,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 182, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 278, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -13, 7, 289, 11, -825, 1,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimItemThrowAirSmashF_joint24[120] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 875, 143,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1018, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 866, -219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 416, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 664, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 586, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 627, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 871, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 875, 3,
	ftAnimEnd(),
	0x0000, 0x200E, 0xFFFE, 0x003F, 0xFFC7, 0x0004, 0xFF66, 0x0000, 0x2805, 0x000F, 0x0003, 0xFFF7, 0x2809, 0x0017, 0xFF67, 0x0000, 0x2003, 0x0002, 0xFFE7, 0xFFAC, 0x2003, 0x0001, 0xFF94, 0xFFEA, 0x2003, 0x0004, 0x0026, 0xFFBA, 0x2003, 0x0001, 0xFFAF, 0xFFA6, 0x2003, 0x0001, 0xFF73, 0x001C, 0x2003, 0x0001, 0xFFE8, 0x0046, 0x2003, 0x0005, 0xFFE6, 0xFFDA, 0x2007, 0x0001, 0xFFC9, 0x000C, 0xFFFB, 0xFFF7, 0x2805, 0x0007, 0xFFC8, 0xFFFE, 0x2003, 0x0004, 0x0071, 0xFFF4, 0x2003, 0x0001, 0x0059, 0xFFE3, 0x2003, 0x0002, 0x0014, 0xFFE4, 0x200F, 0x0001, 0xFFFE, 0xFFEA, 0xFFC7, 0xFFFF, 0xFF66, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
