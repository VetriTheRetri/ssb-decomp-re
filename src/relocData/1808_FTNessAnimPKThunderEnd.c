/* AnimJoint data for relocData file 1808 (FTNessAnimPKThunderEnd) */
/* 1424 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimPKThunderEnd_joint1[32];
extern u16 dFTNessAnimPKThunderEnd_joint2[14];
extern u16 dFTNessAnimPKThunderEnd_joint4[18];
extern u16 dFTNessAnimPKThunderEnd_joint5[72];
extern u16 dFTNessAnimPKThunderEnd_joint6[24];
extern u16 dFTNessAnimPKThunderEnd_joint7[18];
extern u16 dFTNessAnimPKThunderEnd_joint8[56];
extern u16 dFTNessAnimPKThunderEnd_joint10[12];
extern u16 dFTNessAnimPKThunderEnd_joint11[72];
extern u16 dFTNessAnimPKThunderEnd_joint12[24];
extern u16 dFTNessAnimPKThunderEnd_joint13[18];
extern u16 dFTNessAnimPKThunderEnd_joint15[12];
extern u16 dFTNessAnimPKThunderEnd_joint16[52];
extern u16 dFTNessAnimPKThunderEnd_joint18[24];
extern u16 dFTNessAnimPKThunderEnd_joint19[42];
extern u16 dFTNessAnimPKThunderEnd_joint21[26];
extern u16 dFTNessAnimPKThunderEnd_joint22[40];
extern u16 dFTNessAnimPKThunderEnd_joint24[24];
extern u16 dFTNessAnimPKThunderEnd_joint25[80];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTNessAnimPKThunderEnd_joints[] = {
	(u32)dFTNessAnimPKThunderEnd_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimPKThunderEnd_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimPKThunderEnd_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTNessAnimPKThunderEnd_joint5, /* [4] joint 5 */
	(u32)dFTNessAnimPKThunderEnd_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimPKThunderEnd_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimPKThunderEnd_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimPKThunderEnd_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTNessAnimPKThunderEnd_joint11, /* [10] joint 11 */
	(u32)dFTNessAnimPKThunderEnd_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimPKThunderEnd_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimPKThunderEnd_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTNessAnimPKThunderEnd_joint16, /* [15] joint 16 */
	(u32)dFTNessAnimPKThunderEnd_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTNessAnimPKThunderEnd_joint19, /* [18] joint 19 */
	(u32)dFTNessAnimPKThunderEnd_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTNessAnimPKThunderEnd_joint22, /* [21] joint 22 */
	(u32)dFTNessAnimPKThunderEnd_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTNessAnimPKThunderEnd_joint25, /* [24] joint 25 */
	0xFFFF0157, /* [25] END */
};

/* Joint 1 */
u16 dFTNessAnimPKThunderEnd_joint1[32] = {
	ftAnimSetValAfter(FT_ANIM_ROTX), 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAZ), -189, -23,
	ftAnimSetValRate(FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, -3, -2,
	ftAnimSetValBlock(FT_ANIM_TRAY), 436,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -189, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 16), 0, -16, -28,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 8), 437,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY, 8), 0, 537,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTNessAnimPKThunderEnd_joint2[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 186,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -360, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 185, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), 28,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTNessAnimPKThunderEnd_joint4[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 158, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 157, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimPKThunderEnd_joint5[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1339, -28, -1069, -4, -1870, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1316, 56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 967, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -1370, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1471, -93,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1548, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1263, 57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1069, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1074, 103,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1318, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1505, 39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1422, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1083, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1127, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1323, 4, -1415, 6, -1135, -8,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimPKThunderEnd_joint6[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -650, -19,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -914, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -864, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -731, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -723, 8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTNessAnimPKThunderEnd_joint7[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 11, 0, 237, -9, -269, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTNessAnimPKThunderEnd_joint8[56] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 235, 0, 35, 0, -57, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 254, -7, 72, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 299,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 190, -11, -125, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), -179,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 172, 13, 9, 21,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), 296,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 270, -26, 323, 8, 2, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -10, 0, 364, 0, -32, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTNessAnimPKThunderEnd_joint10[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 34,
	ftAnimBlock(0, 16),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimPKThunderEnd_joint11[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2919, 12, 515, 10, 2305, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 732, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 3024, -19, 2661, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2992, -7, 2683, 52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 3084, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 758, 10, 2765, 127,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 577, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2937, 119,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 3041, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3038, -69,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2805, -12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3066, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3087, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2801, -3, 569, -7, 3097, 10,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimPKThunderEnd_joint12[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -195, -35,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -803, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -750, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -572, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 13,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTNessAnimPKThunderEnd_joint13[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 509, -16, -317, 14, -493, 23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 90, 54, 126,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTNessAnimPKThunderEnd_joint15[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	_FT_ANIM_CMD(11, 0, 1), 18,
	ftAnimBlock(0, 16),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimPKThunderEnd_joint16[52] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -192, 0, -423, 0, -637, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -276, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -314, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -616, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -581, 42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -313, 28,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -310, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -358, -13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -290, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -365, -7, -279, 10, -297, 16,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimPKThunderEnd_joint18[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 784, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 764, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 730, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 420, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 396, -23,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTNessAnimPKThunderEnd_joint19[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -122, 0, -162, 0, -104, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -7, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 0, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 12), -77, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -44, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 4, 13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 16, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5, 6, 12, 7, 26, 10,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimPKThunderEnd_joint21[26] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -296, -6, 269, -7, 141, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -406, 14, 139, -16, 115, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -66, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTNessAnimPKThunderEnd_joint22[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 90, 0, 384, 0, -760, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 96, -11, 383, -11, -752, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 72, -38, 361, -38, -735, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -124, -5, 139, -6, -236, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -127, -2, 136, -2, -210, 25,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimPKThunderEnd_joint24[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 702, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 685, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 650, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 429, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 407, -21,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTNessAnimPKThunderEnd_joint25[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 23, 0, -11, 0, -10, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -34, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 19, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 23, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 48, 38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 139, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -65, -39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -204, 1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 111, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 86, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 76, -10, 25, 6, -202, 2,
	ftAnimEnd(),
	0x48E0, 0xFF82, 0xFFAE, 0xFFF4, 0x200E, 0xFE5D, 0xFFFE, 0xFF67, 0x0004, 0xFF77, 0x0003, 0x200F, 0x0008, 0xFE2E, 0x001D, 0xFFBD, 0x0009, 0xFFBC, 0x0008, 0x380F, 0x0008, 0x0038, 0x0000, 0x0000, 0x0000, 0x0000,
};
