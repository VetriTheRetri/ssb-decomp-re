/* AnimJoint data for relocData file 864 (FTDonkeyAnimThrowF) */
/* 1968 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimThrowF_joint1[38];
extern u16 dFTDonkeyAnimThrowF_joint2[22];
extern u16 dFTDonkeyAnimThrowF_joint4[46];
extern u16 dFTDonkeyAnimThrowF_joint5[100];
extern u16 dFTDonkeyAnimThrowF_joint6[40];
extern u16 dFTDonkeyAnimThrowF_joint7[22];
extern u16 dFTDonkeyAnimThrowF_joint8[20];
extern u16 dFTDonkeyAnimThrowF_joint10[14];
extern u16 dFTDonkeyAnimThrowF_joint11[90];
extern u16 dFTDonkeyAnimThrowF_joint12[40];
extern u16 dFTDonkeyAnimThrowF_joint13[22];
extern u16 dFTDonkeyAnimThrowF_joint14[8];
extern u16 dFTDonkeyAnimThrowF_joint16[22];
extern u16 dFTDonkeyAnimThrowF_joint17[66];
extern u16 dFTDonkeyAnimThrowF_joint19[32];
extern u16 dFTDonkeyAnimThrowF_joint21[58];
extern u16 dFTDonkeyAnimThrowF_joint22[96];
extern u16 dFTDonkeyAnimThrowF_joint24[32];
extern u16 dFTDonkeyAnimThrowF_joint25[164];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTDonkeyAnimThrowF_joints[] = {
	(u32)dFTDonkeyAnimThrowF_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimThrowF_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimThrowF_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTDonkeyAnimThrowF_joint5, /* [4] joint 5 */
	(u32)dFTDonkeyAnimThrowF_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimThrowF_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimThrowF_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimThrowF_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTDonkeyAnimThrowF_joint11, /* [10] joint 11 */
	(u32)dFTDonkeyAnimThrowF_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimThrowF_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimThrowF_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimThrowF_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTDonkeyAnimThrowF_joint17, /* [16] joint 17 */
	(u32)dFTDonkeyAnimThrowF_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTDonkeyAnimThrowF_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTDonkeyAnimThrowF_joint22, /* [21] joint 22 */
	(u32)dFTDonkeyAnimThrowF_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTDonkeyAnimThrowF_joint25, /* [24] joint 25 */
	0xFFFF01C4, /* [25] END */
};

/* Joint 1 */
u16 dFTDonkeyAnimThrowF_joint1[38] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -24, -3, 973, 126, -317, -656,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -28, -3, 1020, 0, -767, 180,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -28, 0, 972, 5, -48, 95,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -29, 0, 1028, 59, -610, -592,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -29, 1031, -640,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTDonkeyAnimThrowF_joint2[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -265, -13, -41, 0, -16, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -453, 0, -41, 0, -16, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -265, -41, -16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTDonkeyAnimThrowF_joint4[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 725, 20, 23, 0, 41, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 956, 1, 24, 0, 41, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 736, -89, 24, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 446, -32,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 24, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 458, 71, 24, 0, 41, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1018, 24, 41,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimThrowF_joint5[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1574, 21, -1464, 33, -2245, -56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1609, -39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1297, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -2523, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2424, 146,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1893, 92,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1580, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1666, -80,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1837, 44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1893, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1226, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1387, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1569, -65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1682, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2071, -185,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2567, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1390, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1415, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1666, 13, -2654, -185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1708, 42, -1409, 5, -2939, -285,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimThrowF_joint6[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -695, 5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -509, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -642, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -899, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -987, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -892, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -849, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1090, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1165, -75,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTDonkeyAnimThrowF_joint7[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1008, 2, 87, -37, 64, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -996, 0, -236, -20, 212, 12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), -1001, -314, 309,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimThrowF_joint8[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 174, -67,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 174, 0, -67, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 174, -67,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 174, -67,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTDonkeyAnimThrowF_joint10[14] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -331, 4, 73, 0, 29, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -398, 70, 29,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTDonkeyAnimThrowF_joint11[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1223, 53, 1175, 12, 838, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1366, -1, 779, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 1447, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1485, 53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1556, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1360, 2, 979, 205,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1262, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1461, 10,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1524, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1675, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1273, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1334, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1441, -63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 647, -119,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1644, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1481, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1506, -15, 546, -213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1451, -54, 1322, -11, 220, -326,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimThrowF_joint12[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -692, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -500, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -633, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -892, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -984, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -907, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -869, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1108, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1171, -62,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTDonkeyAnimThrowF_joint13[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1287, -38, 72, 34, 28, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1139, -10, 287, 13, 226, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 1067, 346, 380,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTDonkeyAnimThrowF_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 593, -1165, 732,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTDonkeyAnimThrowF_joint16[22] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -533, -20,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -701, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -512, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -1069, -41,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -759,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimThrowF_joint17[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -41, 3, -387, -6, -283, -58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -378, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -86, 45, -346, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -40, 24, -269, 112,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -169, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 308, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 284, -57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -444, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -134, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -60, -23,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -395, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -423, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -77, -17, -437, -13, -463, -19,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimThrowF_joint19[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1062, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 963, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1012, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 953, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 994, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1009, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 998, -10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTDonkeyAnimThrowF_joint21[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -155, 57, -99, 42, -422, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 117, -92,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -310, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 84, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 71, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 97, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2, -119,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -112, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -431, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -329, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -23, 62, -260, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 13, 36, 109, 11, -235, 24,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimThrowF_joint22[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 239, 126, 27, 38, -471, 80,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -151, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 183, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 366, 197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 635, 206,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 661, -104,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -149, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -230, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 522, -168, 268, 52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 91, -45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 193, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -84, 159,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 141, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 74, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 180, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 198, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 290, 32,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 24, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -407, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 211, 31, 309, 19, -415, -8,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimThrowF_joint24[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 501, -70,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 304, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 458, 177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1034, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 998, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 979, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 962, -16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTDonkeyAnimThrowF_joint25[164] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -271, -113, 289, -125, 95, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -622, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 177, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -187, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -196, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 43, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -596, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -59, 168,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 45, -149,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -635, -21,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 84, 112,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -107, -61,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -636, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -267, 40,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 58, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 49, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -143, -35, 39, -10, -248, 19,
	ftAnimEnd(),
	0x400A, 0x0000, 0x0000, 0x28E0, 0x0018, 0xFFFE, 0x001C, 0xFEDA, 0x05C3, 0xFF13, 0x4804, 0x0648, 0x28E1, 0x0003, 0x0016, 0xFFFA, 0xFFBC, 0x0008, 0x0648, 0x01CE, 0x200B, 0x0001, 0x0000, 0x0078, 0x0000, 0x0000, 0x400B, 0x0013, 0x096C, 0x0000, 0x0801, 0x0002, 0x3040, 0x00A1, 0x20E1, 0x0002, 0x0014, 0xFFF4, 0xFF10, 0xFF99, 0x06EB, 0x0099, 0x20E1, 0x0003, 0x000F, 0xFFF4, 0xFF81, 0x0423, 0x069F, 0xFD0F, 0x20E1, 0x0003, 0x000B, 0xFFF5, 0x01FF, 0x09A1, 0x04D4, 0xF940, 0x20E1, 0x0004, 0x0005, 0xFFF6, 0x07B3, 0x08BD, 0x00E0, 0xFC74, 0x20E1, 0x0003, 0x0002, 0x0025, 0x0970, 0xFB27, 0x01CF, 0x0407, 0x38E1, 0x0002, 0x001D, 0x04AB, 0x0364, 0x0000,
};
