/* AnimJoint data for relocData file 1587 (FTCaptainAnimCliffQuick) */
/* 2016 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimCliffQuick_joint1[32];
extern u16 dFTCaptainAnimCliffQuick_joint2[44];
extern u16 dFTCaptainAnimCliffQuick_joint3[36];
extern u16 dFTCaptainAnimCliffQuick_joint5[22];
extern u16 dFTCaptainAnimCliffQuick_joint6[146];
extern u16 dFTCaptainAnimCliffQuick_joint7[68];
extern u16 dFTCaptainAnimCliffQuick_joint8[40];
extern u16 dFTCaptainAnimCliffQuick_joint11[22];
extern u16 dFTCaptainAnimCliffQuick_joint12[138];
extern u16 dFTCaptainAnimCliffQuick_joint13[50];
extern u16 dFTCaptainAnimCliffQuick_joint14[30];
extern u16 dFTCaptainAnimCliffQuick_joint15[12];
extern u16 dFTCaptainAnimCliffQuick_joint17[30];
extern u16 dFTCaptainAnimCliffQuick_joint18[58];
extern u16 dFTCaptainAnimCliffQuick_joint20[36];
extern u16 dFTCaptainAnimCliffQuick_joint22[34];
extern u16 dFTCaptainAnimCliffQuick_joint23[70];
extern u16 dFTCaptainAnimCliffQuick_joint25[88];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTCaptainAnimCliffQuick_joints[] = {
	(u32)dFTCaptainAnimCliffQuick_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimCliffQuick_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimCliffQuick_joint3, /* [2] joint 3 */
	(u32)dFTCaptainAnimCliffQuick_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTCaptainAnimCliffQuick_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimCliffQuick_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimCliffQuick_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimCliffQuick_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTCaptainAnimCliffQuick_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimCliffQuick_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimCliffQuick_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimCliffQuick_joint15, /* [14] joint 15 */
	(u32)dFTCaptainAnimCliffQuick_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTCaptainAnimCliffQuick_joint18, /* [17] joint 18 */
	(u32)dFTCaptainAnimCliffQuick_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTCaptainAnimCliffQuick_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTCaptainAnimCliffQuick_joint23, /* [22] joint 23 */
	(u32)dFTCaptainAnimCliffQuick_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	0xFFFF01E0, /* [25] END */
};

/* Joint 1 */
u16 dFTCaptainAnimCliffQuick_joint1[32] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), -303,
	ftAnimSetValRate(FT_ANIM_TRAY), -2857, 437,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -1997, 1796, -273, 77,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -580, 1657, -205, 126,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -421, -86, -153, 161,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -690, -152, 0, 40,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimCliffQuick_joint2[44] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 340, 0, -12,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAY), 1582,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 9), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 20), 1583, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 1), 42, 161,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), 161,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 3), -415, -602,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), -602,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 4), -549, 69,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), 69,
	ftAnimSetValRateT(FT_ANIM_TRAX, 12), -1, 274,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 11), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTCaptainAnimCliffQuick_joint3[36] = {
	ftAnimSetValAfter(FT_ANIM_TRAX), 4,
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 357, -76, 9,
	ftAnimSetValRate(FT_ANIM_ROTY), -241, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 16, 11, -357, -17,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 35), -76, 9,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 10), 178,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 178, 0, 0, 0, 0, 20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTCaptainAnimCliffQuick_joint5[22] = {
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 0, 0, -11, 0, 75, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 20), 178,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTCaptainAnimCliffQuick_joint6[146] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 615, 459, -304, -128, -1674, -94,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1870, -116,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -617, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1075, 254,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1124, 87,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1557, 416,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2002, -193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -640, -34, -2257, -363,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2084, 579, -686, 97, -2728, -495,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2716, 381, -445, 273, -3249, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2846, 99, -140, 180, -3092, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2915, 33, -85, 6, -3025, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -245, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2912, 8, -3106, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 2988, 77, -3355, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3087, 95, -216, 34, -3395, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -168, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3179, 64, -3365, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3216, 40, -3236, 82,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 3414, 81, -3333, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -183, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -100, 70,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3491, 65, -3423, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3546, 38, -3519, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3568, 22, -15, 85, -3639, -120,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTCaptainAnimCliffQuick_joint7[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -5, -383,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -736, -292,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -973, -215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1334, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1428, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1194, 206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -948, 276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -375, 187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -267, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -324, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -641, -244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -813, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -770, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -530, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -346, 222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -84, 262,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTCaptainAnimCliffQuick_joint8[40] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 453, 3,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 277, 293,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -40, -247, 272, -28, 212, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -174, 45, 203, -26, 340, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 518, 26, -54, -11, -140, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 290, -14, 0, 3, 0, 9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTCaptainAnimCliffQuick_joint11[22] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -268, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 20, 8, 8, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 8), 234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -89, -8, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimCliffQuick_joint12[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1152, 144, 1167, -87, 1521, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1296, 157, 1079, -59, 1693, 190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1466, 144, 1049, -12, 1903, 190,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1090, 18, 2237, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1635, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1633, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1573, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1109, 22, 2260, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1218, 48, 2251, -9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1591, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1635, 7, 1268, 36, 2238, -89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1383, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1606, -48, 2072, -180,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1483, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1877, -186,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1550, -142,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1462, -5, 1457, 72,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1616, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1594, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1415, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1244, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1172, -38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1170, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1619, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1582, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1590, -4, 1540, -42, 1158, -11,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTCaptainAnimCliffQuick_joint13[50] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1070, -17,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -890, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -866, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -855, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -901, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -625, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -431, 252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -120, 215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 5,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTCaptainAnimCliffQuick_joint14[30] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, 275, 62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 145, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 268, -44, -411, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -178, -9, -71, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -249, -37, 118, 15, -161, -11,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTCaptainAnimCliffQuick_joint15[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 1538, 119,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), -1003,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 35), 1538, 119,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimCliffQuick_joint17[30] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -89, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -84, 22, 8, -1, 50, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 134, -18, -15, 6, -111, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -312, -36, 83, 2, 38, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTCaptainAnimCliffQuick_joint18[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -251, 0, 121, -8, -67, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -13, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -138, 31, -198, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -107, 30, -207, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -340, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 13, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -21, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -37, -3,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -348, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -242, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 12, -1, -41, -4, -171, 70,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTCaptainAnimCliffQuick_joint20[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 338, 30,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 441, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 529, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 924, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 906, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 419, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 279, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 100, -179,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTCaptainAnimCliffQuick_joint22[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 7, 0, 48, 0, 259, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 51, -2, 257, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -23, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -30, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -39, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -49, -9, 48, -2, 259, 1,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTCaptainAnimCliffQuick_joint23[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -276, 6, 173, -18, -276, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 65, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -126, 27, -309, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -101, 22, -291, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -173, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -15, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 61, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 49, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -137, 36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -78, -44,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -9, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -6, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -11, -5, 48, 0, -144, -65,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTCaptainAnimCliffQuick_joint25[88] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 341, 64,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 759, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 778, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 665, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 589, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 328, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 275, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 288, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 374, 85,
	ftAnimEnd(),
	0x0000, 0x200E, 0x0045, 0xFFF9, 0x0051, 0x0000, 0x0134, 0x0000, 0x280D, 0x0013, 0x0051, 0x0000, 0x0144, 0xFFF3, 0x2003, 0x0006, 0xFFC4, 0xFFE2, 0x2003, 0x0001, 0xFFA7, 0xFFE8, 0x2003, 0x0007, 0xFF99, 0xFFFF, 0x2003, 0x0001, 0xFF96, 0xFFFF, 0x2003, 0x0004, 0xFFAA, 0x0010, 0x200F, 0x0001, 0xFFBE, 0x0013, 0x0051, 0x0000, 0x0134, 0xFFF1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
