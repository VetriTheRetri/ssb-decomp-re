/* AnimJoint data for relocData file 1249 (FTLinkAnimUpSpecialEndGround) */
/* 2096 bytes: 120-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimUpSpecialEndGround_joint1[10];
extern u16 dFTLinkAnimUpSpecialEndGround_joint2[50];
extern u16 dFTLinkAnimUpSpecialEndGround_joint3[42];
extern u16 dFTLinkAnimUpSpecialEndGround_joint5[46];
extern u16 dFTLinkAnimUpSpecialEndGround_joint6[90];
extern u16 dFTLinkAnimUpSpecialEndGround_joint7[32];
extern u16 dFTLinkAnimUpSpecialEndGround_joint10[26];
extern u16 dFTLinkAnimUpSpecialEndGround_joint11[56];
extern u16 dFTLinkAnimUpSpecialEndGround_joint12[24];
extern u16 dFTLinkAnimUpSpecialEndGround_joint13[10];
extern u16 dFTLinkAnimUpSpecialEndGround_joint14[18];
extern u16 dFTLinkAnimUpSpecialEndGround_joint17[18];
extern u16 dFTLinkAnimUpSpecialEndGround_joint18[22];
extern u16 dFTLinkAnimUpSpecialEndGround_joint19[22];
extern u16 dFTLinkAnimUpSpecialEndGround_joint21[18];
extern u16 dFTLinkAnimUpSpecialEndGround_joint22[134];
extern u16 dFTLinkAnimUpSpecialEndGround_joint24[48];
extern u16 dFTLinkAnimUpSpecialEndGround_joint26[130];
extern u16 dFTLinkAnimUpSpecialEndGround_joint27[82];
extern u16 dFTLinkAnimUpSpecialEndGround_joint29[110];

/* Joint pointer table (30 entries, 120 bytes) */
u32 dFTLinkAnimUpSpecialEndGround_joints[] = {
	(u32)dFTLinkAnimUpSpecialEndGround_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimUpSpecialEndGround_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimUpSpecialEndGround_joint3, /* [2] joint 3 */
	(u32)dFTLinkAnimUpSpecialEndGround_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTLinkAnimUpSpecialEndGround_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimUpSpecialEndGround_joint7, /* [6] joint 7 */
	(u32)dFTLinkAnimUpSpecialEndGround_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTLinkAnimUpSpecialEndGround_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimUpSpecialEndGround_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimUpSpecialEndGround_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimUpSpecialEndGround_joint14, /* [13] joint 14 */
	(u32)dFTLinkAnimUpSpecialEndGround_joint17, /* [14] joint 17 */
	0x00000000, /* [15] NULL */
	0x00000000, /* [16] NULL */
	(u32)dFTLinkAnimUpSpecialEndGround_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimUpSpecialEndGround_joint19, /* [18] joint 19 */
	(u32)dFTLinkAnimUpSpecialEndGround_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTLinkAnimUpSpecialEndGround_joint22, /* [21] joint 22 */
	(u32)dFTLinkAnimUpSpecialEndGround_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTLinkAnimUpSpecialEndGround_joint26, /* [24] joint 26 */
	0x00000000, /* [25] NULL */
	(u32)dFTLinkAnimUpSpecialEndGround_joint27, /* [26] joint 27 */
	(u32)dFTLinkAnimUpSpecialEndGround_joint29, /* [27] joint 29 */
	0x00000000, /* [28] NULL */
	0xFFFF01E5, /* [29] END */
};

/* Joint 1 */
u16 dFTLinkAnimUpSpecialEndGround_joint1[10] = {
	ftAnimSetValRate(FT_ANIM_ROTY), 0, -33,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 40), 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimUpSpecialEndGround_joint2[50] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 31, -2, 716, 16, 51, -4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 21, -7, 636, -63, 151, 80,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 21, 4, 636, 39, 151, -50,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 31, 0, 716, 0, 51, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -2, 16, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 0, 901, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTLinkAnimUpSpecialEndGround_joint3[42] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 14, 0, -158, -2, -13, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 19, 0, -319, -16, -19, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 19, 0, -319, 10, -19, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 14, -4, -158, 19, -13, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -107, 276, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTLinkAnimUpSpecialEndGround_joint5[46] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 692, -4, -559, 7, -698, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 748, 5, -442, 11, -698, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 748, -3, -442, -7, -698, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 692, 0, -559, 0, -698, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -4, 7, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 259, 166, 56,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTLinkAnimUpSpecialEndGround_joint6[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1474, 61, 2726, 3, 1045, -78,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 483, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 2600, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -940, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -860, 67,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -360, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 469, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 325, -54,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2606, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 2769, 22,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -287, 74,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 277, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 269, -55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -85, -1,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2791, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 2888, 3,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 279, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 280, 0, 2890, 1, -86, 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTLinkAnimUpSpecialEndGround_joint7[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -139, -93,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -545, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -562, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), -635, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -614, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -502, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, 2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimUpSpecialEndGround_joint10[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 37, 0, 1406, 0, 871, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 37, 0, 1406, 0, 871, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 4, 7, 76,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTLinkAnimUpSpecialEndGround_joint11[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -234, 2, 104, 5, -275, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), 158, 44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), 211, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), -202, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -196, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -51, 1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 200, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 415, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 200, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 11), 124, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 416, 0, 123, 0, -50, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTLinkAnimUpSpecialEndGround_joint12[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -610, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -324, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -297, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), -585, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimUpSpecialEndGround_joint13[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	_FT_ANIM_CMD(11, 0, 1), 54,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTLinkAnimUpSpecialEndGround_joint14[18] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1427, -6, -882, 0, 280, 5,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 94), 804, -804, 804,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 54,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimUpSpecialEndGround_joint17[18] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1959, -2, -239, -3, -501, 1,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 94), 1697, -536, -339,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 54,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTLinkAnimUpSpecialEndGround_joint18[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 295, 8, 475, 13, 378, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 295, -7, 475, -15, 378, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 0, -163, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTLinkAnimUpSpecialEndGround_joint19[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -30, 0, 242, 7, -44, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -30, 0, 242, -11, -44, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 0, -199, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimUpSpecialEndGround_joint21[18] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -6, 0, 164, -5, -30, 1,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 47), 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTLinkAnimUpSpecialEndGround_joint22[134] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -178, 227, -276, 67, -615, -40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -59, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -596, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 393, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 426, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 516, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -57, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -174, 5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -591, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -492, 5,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 491, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 115, -189,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -503, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -481, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -68, -116,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -73, -34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -158, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -245, -6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -125, -48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -215, -12,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -430, 53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 97, 20,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -250, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -246, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -228, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -238, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -242, -3, -244, 1, 108, 11,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTLinkAnimUpSpecialEndGround_joint24[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 406, 59,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 751, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 747, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 155, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 74, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 442, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 511, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 370, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 312, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 267, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, -17,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTLinkAnimUpSpecialEndGround_joint26[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -888, -315, -2146, 140, 1994, -267,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1463, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -1478, -44, -1659, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1503, -21, -1613, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1583, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1692, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1460, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 1927, 57,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1606, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1910, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1664, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1440, 189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1214, 164, -2038, -76, 1994, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1072, 69, -1995, 3, 1776, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -984, 74, -2000, 2, 1741, -44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1488, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1232, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1384, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1394, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1564, 16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1470, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1447, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1254, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1276, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1279, -2, -1446, 0, 1573, 9,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTLinkAnimUpSpecialEndGround_joint27[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 86, 0, 11, 7, -448, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 65, -59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -460, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 140, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 154, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -10, 15,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 5, -57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 251, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -463, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), -140, 14,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 5, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 269, 3,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 259, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 269, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -129, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, 1, 269, 0, -125, 4,
	ftAnimEnd(),
};

/* Joint 29 */
u16 dFTLinkAnimUpSpecialEndGround_joint29[110] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 882, 18,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1025, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1021, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 827, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 807, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 430, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, -5,
	ftAnimEnd(),
	0x0000, 0x200E, 0xFDCA, 0xFFFF, 0xFF4B, 0xFFF5, 0xFE70, 0xFFEF, 0x2805, 0x000B, 0xFFA7, 0x000F, 0x2803, 0x000E, 0xFE1C, 0xFFED, 0x2009, 0x0007, 0xFDCE, 0x0003, 0x2009, 0x0001, 0xFDD3, 0x0005, 0x2809, 0x0010, 0xFE8C, 0x000D, 0x0801, 0x0003, 0x2005, 0x0001, 0xFFBC, 0x0016, 0x2805, 0x0017, 0xFF9D, 0x0008, 0x0801, 0x0002, 0x2003, 0x0001, 0xFE08, 0xFFED, 0x2803, 0x0018, 0xFE52, 0x0005, 0x0801, 0x0009, 0x2009, 0x0001, 0xFE9B, 0x000F, 0x2809, 0x000E, 0xFFB7, 0x0006, 0x0801, 0x000A, 0x2005, 0x0001, 0xFFA5, 0x0007, 0x2005, 0x0003, 0xFFB5, 0x0002, 0x200F, 0x0001, 0xFE55, 0x0003, 0xFFB6, 0x0001, 0xFFBB, 0x0003, 0x0000, 0x0000, 0x0000,
};
