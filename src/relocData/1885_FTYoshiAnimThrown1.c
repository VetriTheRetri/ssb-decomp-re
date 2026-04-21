/* AnimJoint data for relocData file 1885 (FTYoshiAnimThrown1) */
/* 2048 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimThrown1_joint2[12];
extern u16 dFTYoshiAnimThrown1_joint3[32];
extern u16 dFTYoshiAnimThrown1_joint4[24];
extern u16 dFTYoshiAnimThrown1_joint5[16];
extern u16 dFTYoshiAnimThrown1_joint7[24];
extern u16 dFTYoshiAnimThrown1_joint8[208];
extern u16 dFTYoshiAnimThrown1_joint11[64];
extern u16 dFTYoshiAnimThrown1_joint12[200];
extern u16 dFTYoshiAnimThrown1_joint13[64];
extern u16 dFTYoshiAnimThrown1_joint14[14];
extern u16 dFTYoshiAnimThrown1_joint15[14];
extern u16 dFTYoshiAnimThrown1_joint16[30];
extern u16 dFTYoshiAnimThrown1_joint18[30];
extern u16 dFTYoshiAnimThrown1_joint19[44];
extern u16 dFTYoshiAnimThrown1_joint21[40];
extern u16 dFTYoshiAnimThrown1_joint23[36];
extern u16 dFTYoshiAnimThrown1_joint24[44];
extern u16 dFTYoshiAnimThrown1_joint26[32];
extern u16 dFTYoshiAnimThrown1_joint27[42];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTYoshiAnimThrown1_joints[] = {
	0x00000000, /* [0] NULL */
	(u32)dFTYoshiAnimThrown1_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimThrown1_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimThrown1_joint4, /* [3] joint 4 */
	(u32)dFTYoshiAnimThrown1_joint5, /* [4] joint 5 */
	(u32)dFTYoshiAnimThrown1_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTYoshiAnimThrown1_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimThrown1_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTYoshiAnimThrown1_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimThrown1_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimThrown1_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimThrown1_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimThrown1_joint16, /* [15] joint 16 */
	(u32)dFTYoshiAnimThrown1_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTYoshiAnimThrown1_joint19, /* [18] joint 19 */
	(u32)dFTYoshiAnimThrown1_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTYoshiAnimThrown1_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTYoshiAnimThrown1_joint24, /* [23] joint 24 */
	(u32)dFTYoshiAnimThrown1_joint26, /* [24] joint 26 */
	0x00000000, /* [25] NULL */
	(u32)dFTYoshiAnimThrown1_joint27, /* [26] joint 27 */
};

/* Joint 2 */
u16 dFTYoshiAnimThrown1_joint2[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 412, 55,
	ftAnimBlock(0, 40),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTYoshiAnimThrown1_joint3[32] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), -223, 2, 0, 4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 30, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), -178, 89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 0, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), -223,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), -178, -89,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), -223, 0,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTYoshiAnimThrown1_joint4[24] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 74, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 172,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 134,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 74,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 134,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 74,
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTYoshiAnimThrown1_joint5[16] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -402, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 600, 329,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 40), -402, 10,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimThrown1_joint7[24] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 48, 120,
	ftAnimSetValRate(FT_ANIM_ROTX), 402, -20,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 402,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 402,
	ftAnimLoop(0x6800, -46),
};

/* Joint 8 */
u16 dFTYoshiAnimThrown1_joint8[208] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1683, -80, -552, -76, 981, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1764, 252, -629, -183, 1061, -261,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1178, 147, -919, -258, 459, -169,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1030, 243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1470, -160, 723, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1498, -12, 719, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1485, 54, 727, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1388, -317, 656, 342,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2120, -147, -712, 238, 1412, 162,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -247, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1683, 252, 981, -253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1597, 6, 878, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1602, -8, 884, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -1615, -43, 906, 51,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -236, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -552, -141,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1683, -244, 981, 245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2105, 149, -711, -237, 1397, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1385, 310, -1027, -243, 653, -334,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1485, -56, -1198, -130, 727, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1027, 243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1497, -5, 712, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1485, 56, 727, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1385, -310, 653, 334,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2105, -149, -711, 237, 1397, 164,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -247, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1683, 244, 981, -245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1597, 6, 878, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1602, -8, 884, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -1645, -39, 941, 45,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -236, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -497, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1683, -38, -552, -55, 981, 40,
	ftAnimLoop(0x6800, -412),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTYoshiAnimThrown1_joint11[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -873, -12,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -758, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -592, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -878, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -873, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -528, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -636, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -705, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -565, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -878, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -873, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -554, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -693, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -860, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -873, -13,
	ftAnimLoop(0x6800, -126),
};

/* Joint 12 */
u16 dFTYoshiAnimThrown1_joint12[200] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 79, -78, 1052, 136, -625, -87,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1052, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -8, -7, -731, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -11, 7, -734, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 540, 654, -171, 639,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 894, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1201, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1389, 471, 653, 446,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1484, 53, 722, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1496, 4, 1290, 58, 706, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1031, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1484, -54, 722, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1386, -479, 651, -454,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 525, -653, 895, 10, -186, -638,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1177, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 79, -258, -625, -258,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -11, -8, -734, -13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1271, 76,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1052, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -8, 7, -731, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 8, 45, -704, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 79, 258, -625, 258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 525, 653, 895, -10, -186, 638,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1200, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1386, 479, 651, 454,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1484, 54, 722, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1496, 4, 1289, 59, 706, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 932, -257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1496, -12, 711, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1467, -147, 715, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1201, 162, 478, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1793, 243, 637, -187, 1087, 252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1688, -104, 556, -81, 983, -104,
	ftAnimLoop(0x6800, -396),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTYoshiAnimThrown1_joint13[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -873, 39,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -540, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -643, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -698, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -557, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -876, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -873, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -540, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -645, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -699, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -747, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -856, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -881, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -873, 7,
	ftAnimLoop(0x6800, -126),
};

/* Joint 14 */
u16 dFTYoshiAnimThrown1_joint14[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 172, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 13,
	ftAnimBlock(0, 40),
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimThrown1_joint15[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -536, -893, 0, 0, 156, 0,
	_FT_ANIM_CMD(11, 0, 1), 13,
	ftAnimBlock(0, 40),
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTYoshiAnimThrown1_joint16[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -223, 0, 0, 7, 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -234, 0, 152, -6, -73, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -249, 0, -219, -5, 111, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -223, 0, 0,
	ftAnimLoop(0x6800, -58),
};

/* Joint 18 */
u16 dFTYoshiAnimThrown1_joint18[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -153, -1, 0, 13, 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -201, 0, 353, -6, -132, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -179, 1, -213, -13, 71, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -153, 0, 0,
	ftAnimLoop(0x6800, -58),
};

/* Joint 19 */
u16 dFTYoshiAnimThrown1_joint19[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0, 0, 245, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 39), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 245, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 202, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 290, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 245, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 215, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 0, 0, 245, 29,
	ftAnimLoop(0x6800, -84),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTYoshiAnimThrown1_joint21[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 546, -49,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 546, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 601, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 389, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 376, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 667, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 658, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 585, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 546, -38,
	ftAnimLoop(0x6800, -78),
};

/* Joint 23 */
u16 dFTYoshiAnimThrown1_joint23[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1472, 6, -83, 0, -263, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 39), -83, 0, -263, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 24), 1494, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1496, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), 1467, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1472, 5, -83, 0, -263, 0,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTYoshiAnimThrown1_joint24[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0, 0, 245, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 39), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 310, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 210, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 245, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 283, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 0, 0, 245, -38,
	ftAnimLoop(0x6800, -84),
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTYoshiAnimThrown1_joint26[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 546, 42,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 458, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 428, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 623, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 591, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 495, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 546, 50,
	ftAnimLoop(0x6800, -62),
};

/* Joint 27 */
u16 dFTYoshiAnimThrown1_joint27[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1440, -7, -89, 0, -228, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 39), -228,
	ftAnimSetValRateT(FT_ANIM_ROTY, 39), -89, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 23), 1424, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1422, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 1449, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1440, -9, -89, 0, -228, 0,
	ftAnimLoop(0x6800, -70),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
