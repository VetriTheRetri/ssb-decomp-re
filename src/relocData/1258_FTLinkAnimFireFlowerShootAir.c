/* AnimJoint data for relocData file 1258 (FTLinkAnimFireFlowerShootAir) */
/* 2032 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimFireFlowerShootAir_joint1[18];
extern u16 dFTLinkAnimFireFlowerShootAir_joint2[46];
extern u16 dFTLinkAnimFireFlowerShootAir_joint4[62];
extern u16 dFTLinkAnimFireFlowerShootAir_joint5[94];
extern u16 dFTLinkAnimFireFlowerShootAir_joint6[56];
extern u16 dFTLinkAnimFireFlowerShootAir_joint9[8];
extern u16 dFTLinkAnimFireFlowerShootAir_joint10[110];
extern u16 dFTLinkAnimFireFlowerShootAir_joint11[48];
extern u16 dFTLinkAnimFireFlowerShootAir_joint12[32];
extern u16 dFTLinkAnimFireFlowerShootAir_joint13[10];
extern u16 dFTLinkAnimFireFlowerShootAir_joint16[8];
extern u16 dFTLinkAnimFireFlowerShootAir_joint17[8];
extern u16 dFTLinkAnimFireFlowerShootAir_joint18[58];
extern u16 dFTLinkAnimFireFlowerShootAir_joint20[40];
extern u16 dFTLinkAnimFireFlowerShootAir_joint21[88];
extern u16 dFTLinkAnimFireFlowerShootAir_joint23[48];
extern u16 dFTLinkAnimFireFlowerShootAir_joint25[44];
extern u16 dFTLinkAnimFireFlowerShootAir_joint26[80];
extern u16 dFTLinkAnimFireFlowerShootAir_joint28[40];
extern u16 dFTLinkAnimFireFlowerShootAir_joint29[60];

/* Joint pointer table (29 entries, 116 bytes) */
u32 dFTLinkAnimFireFlowerShootAir_joints[] = {
	(u32)dFTLinkAnimFireFlowerShootAir_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimFireFlowerShootAir_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimFireFlowerShootAir_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTLinkAnimFireFlowerShootAir_joint5, /* [4] joint 5 */
	(u32)dFTLinkAnimFireFlowerShootAir_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimFireFlowerShootAir_joint9, /* [6] joint 9 */
	0x00000000, /* [7] NULL */
	0x00000000, /* [8] NULL */
	(u32)dFTLinkAnimFireFlowerShootAir_joint10, /* [9] joint 10 */
	(u32)dFTLinkAnimFireFlowerShootAir_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimFireFlowerShootAir_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimFireFlowerShootAir_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimFireFlowerShootAir_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTLinkAnimFireFlowerShootAir_joint17, /* [16] joint 17 */
	(u32)dFTLinkAnimFireFlowerShootAir_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimFireFlowerShootAir_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTLinkAnimFireFlowerShootAir_joint21, /* [20] joint 21 */
	(u32)dFTLinkAnimFireFlowerShootAir_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTLinkAnimFireFlowerShootAir_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTLinkAnimFireFlowerShootAir_joint26, /* [25] joint 26 */
	(u32)dFTLinkAnimFireFlowerShootAir_joint28, /* [26] joint 28 */
	0x00000000, /* [27] NULL */
	(u32)dFTLinkAnimFireFlowerShootAir_joint29, /* [28] joint 29 */
};

/* Joint 1 */
u16 dFTLinkAnimFireFlowerShootAir_joint1[18] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 744,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 14), -6, -51,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), -115, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 12), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTLinkAnimFireFlowerShootAir_joint2[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 32, 274, 83,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 246, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -77, -34, 5, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -311, -19, -137, -11,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -311, 0, 246, 0, -137, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 17, 1, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 32, 274, 83,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimFireFlowerShootAir_joint4[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 315, 166, 56,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 342, 4, -47, 10, 175, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 359, 1, 272, 35, 414, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 359, -25, 272, -56, 414, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 208, -53, -64, -35, -4, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 40, -23, 56, 39, -122, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 67, 27, 172, 10, -58, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 315, 166, 56,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimFireFlowerShootAir_joint5[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1300, 6, -1347, 0, -1261, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 13), 1593, -11, -1373, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -1722, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1731, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1565, -120, -1318, 85, -1679, 159,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1180, -81,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1033, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1412, 205,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1308, 17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1189, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1351, 85,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1043, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1334, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1285, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1422, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1434, 56, -1512, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 1318, -30, -1291, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1300, -17, -1347, -13, -1261, 29,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimFireFlowerShootAir_joint6[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -744, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -397, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -354, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -385, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -498, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -304, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -190, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -315, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -299, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -403, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -570, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -695, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -744, -49,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimFireFlowerShootAir_joint9[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 278, 266, 193,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimFireFlowerShootAir_joint10[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1119, 4, 1548, 34, 1771, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -903, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 1777, -89, 1861, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1674, -89, 1819, -37,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1604, 21, 1737, 36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -887, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -839, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -860, -166,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1464, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1613, -60, 1820, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1740, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1483, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1467, 7, 1486, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1599, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1134, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1753, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 1772, 0,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1581, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1552, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1125, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1121, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1119, 1, 1548, -4, 1771, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimFireFlowerShootAir_joint11[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -616, -62,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -901, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -868, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -897, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -871, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -897, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1095, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1063, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1035, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -628, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -616, 11,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimFireFlowerShootAir_joint12[32] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 199, 14, 69, 19, -11, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 199, 69, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 199, -12, 69, -17, -11, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 0, -209, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimFireFlowerShootAir_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1114, -804, 494, 83, 0, 12,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTLinkAnimFireFlowerShootAir_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -536, -339,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimFireFlowerShootAir_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -163, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTLinkAnimFireFlowerShootAir_joint18[58] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -199, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -225, -9, -80, -14, -14, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -99, 12, -342, -26, 74, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -99, 14, -342, 41, 74, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 3, 27, -50, 32, 167, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 62, -24, -146, -20, 140, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -164, -6, -193, -5, 28, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, -199, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTLinkAnimFireFlowerShootAir_joint20[40] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 97, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -73, -12, -12, 0, -16, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -73, -12, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -73, 23, -12, 4, -16, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 42, 12, 8, 0, 7, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 97, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimFireFlowerShootAir_joint21[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 30, 9, 139, 7, -782, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -57, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 11), 252, 0, -18, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 251, 0, -32, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -39, 65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -9, -22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -48, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 91, 86, -246, -124,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 209, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -296, -40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -890, -42,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 226, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 154, -21,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -24, -5, -917, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 20, 16, -807, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 30, 9, 139, -14, -782, 24,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimFireFlowerShootAir_joint23[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1205, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 907, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 840, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 681, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 671, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 325, -218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 235, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 816, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 956, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1192, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1205, 12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimFireFlowerShootAir_joint25[44] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -1135, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -1425, -1538,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -1136, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1145, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1066, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -838, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -707, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -733, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -1186, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1159, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1135, 24,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTLinkAnimFireFlowerShootAir_joint26[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 301, 0, 318, 0, -270, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 352, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 13), 191, -17, -267, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 172, -76, -281, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -87, -21, -582, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3, 101, -469, 138,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 350, 0, 91, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 340, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 152, 26,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 348, -4, 51, -49,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 303, -4, -253, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 185, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 310, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 301, -2, 318, 8, -270, -16,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimFireFlowerShootAir_joint28[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 845, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 859, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 876, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1086, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1008, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 510, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 557, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 835, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 845, 9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 29 */
u16 dFTLinkAnimFireFlowerShootAir_joint29[60] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -647, 1,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -89, 252,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), -89, 0, 252, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), -553, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -541, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -394, -199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -939, -402,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -875, 209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -685, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -735, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -716, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -657, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -647, 10, -89, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 252,
	ftAnimEnd(),
	0x0000, 0x0000,
};
