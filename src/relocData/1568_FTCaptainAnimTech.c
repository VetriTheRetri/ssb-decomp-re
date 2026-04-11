/* AnimJoint data for relocData file 1568 (FTCaptainAnimTech) */
/* 3440 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimTech_joint1[94];
extern u16 dFTCaptainAnimTech_joint2[16];
extern u16 dFTCaptainAnimTech_joint4[98];
extern u16 dFTCaptainAnimTech_joint5[174];
extern u16 dFTCaptainAnimTech_joint6[88];
extern u16 dFTCaptainAnimTech_joint7[70];
extern u16 dFTCaptainAnimTech_joint8[22];
extern u16 dFTCaptainAnimTech_joint10[8];
extern u16 dFTCaptainAnimTech_joint11[148];
extern u16 dFTCaptainAnimTech_joint12[64];
extern u16 dFTCaptainAnimTech_joint13[36];
extern u16 dFTCaptainAnimTech_joint14[10];
extern u16 dFTCaptainAnimTech_joint16[26];
extern u16 dFTCaptainAnimTech_joint17[162];
extern u16 dFTCaptainAnimTech_joint19[92];
extern u16 dFTCaptainAnimTech_joint21[162];
extern u16 dFTCaptainAnimTech_joint22[154];
extern u16 dFTCaptainAnimTech_joint24[246];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTCaptainAnimTech_joints[] = {
	(u32)dFTCaptainAnimTech_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimTech_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimTech_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTCaptainAnimTech_joint5, /* [4] joint 5 */
	(u32)dFTCaptainAnimTech_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimTech_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimTech_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimTech_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTCaptainAnimTech_joint11, /* [10] joint 11 */
	(u32)dFTCaptainAnimTech_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimTech_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimTech_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimTech_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTCaptainAnimTech_joint17, /* [16] joint 17 */
	(u32)dFTCaptainAnimTech_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTCaptainAnimTech_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTCaptainAnimTech_joint22, /* [21] joint 22 */
	(u32)dFTCaptainAnimTech_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF0305, /* [24] END */
};

/* Joint 1 */
u16 dFTCaptainAnimTech_joint1[94] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -4637,
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 715, 1440, -1364, 0, -267,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 4), -244, 326,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAY, 5), -4637, 34, 761, 314,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 3), 181,
	ftAnimSetValRateT(FT_ANIM_TRAX, 3), 0, -362,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), -173, 255,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 2374,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 1123, 1003,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -4289, 242,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), -160, 480,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 689,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 4), 0, 91,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 1), 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 1884,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), 1680, -26,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 3), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_TRAZ), 1288, 51,
	ftAnimSetValRateT(FT_ANIM_TRAY, 10), 1080, -720,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 16), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 10), 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 1600, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 6), 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimTech_joint2[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 26), 107, 0, 4, -76, 9,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTCaptainAnimTech_joint4[98] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -241, 402, 268, -99, -26, -68,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -402, 77, 402, -40, 268, -26,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -123, -21, -87, -131, -113, -39,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -115, 114, -108, 155, -93, 153,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), 57,
	ftAnimSetValRateT(FT_ANIM_TRAX, 3), -6, 72,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 536, 62, 0, -26, 0, -17,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 9, 361, -17, 431,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 26, -325, 68, 549,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), 177,
	ftAnimSetValRateT(FT_ANIM_TRAX, 2), 10, -6,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -71, -617, 119, 231,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -127, -25, 126, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 536, -21, 2, -5, -107, 47, 114, -39,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 189, 0, 0, 0, -31, 47,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimTech_joint5[174] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1528, -6, -1270, 53, -2826, 192,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1197, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1535, -49, -2633, 195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1628, -89, -2435, 165,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1787, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1216, -25, -2302, 118,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1262, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2198, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1839, 34, -2207, -243,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1577, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1260, -95, -2685, -557,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1625, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3322, -648,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1611, -10, -3983, -294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1598, -39, -1592, 32, -3911, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1691, 8, -1560, 75, -4203, -355,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1582, 56, -1441, 58, -4622, -285,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1579, -3, -1443, -1, -4774, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1589, 8, -1444, 1, -4884, -144,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1442, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1562, 34, -5063, -170,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1485, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5225, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5288, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -5264, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1479, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1369, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1446, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1599, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5278, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -5345, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1368, 0, -1614, -14, -5349, -4,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimTech_joint6[88] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -181, -317,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -782, -222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -943, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1076, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1189, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1036, 203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -781, 518,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -561, -459,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -919, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -721, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -728, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -875, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -960, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -923, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -809, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -781, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -790, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -797, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -798, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -797, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimTech_joint7[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -89, -679,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 744, -28, -64, 17, -290, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 688, -23, -19, 19, 8, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 674, 12, -4, 8, 86, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 713, 118, -2, 1, 79, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 911, -223, -1, 0, 63, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -402, -119, 0, 0, 0, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -402, -25, 0, -5, 0, -25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -781, -89, -388,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTCaptainAnimTech_joint8[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -134, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 178, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 0, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTCaptainAnimTech_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 26),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTCaptainAnimTech_joint11[148] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -500, -1, 645, -6, -447, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -502, -1, 639, -13, -463, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -504, 246, 618, 20, -506, 204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -9, 321, 680, 6, -54, 267,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 137, 63, 632, -55, 28, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 33, -93,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 250, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -49, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -171, -119,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -500, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -69, -97,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -287, -9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 187, -48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 233, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -531, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -78, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -288, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -195, 6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 249, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 202, -31,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 108, 187,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 438, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -188, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -132, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 524, 65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 587, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 172, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 151, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -129, 3, 144, -7, 592, 4,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimTech_joint12[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -5, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -392, -292,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -584, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -852, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -816, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -746, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -775, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1172, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1246, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1218, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1152, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1042, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1024, 17,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimTech_joint13[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 270, 62,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 365, -41, 62, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -149, -57,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -149, 34, 62, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 191, 38, 272, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 270, 62,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTCaptainAnimTech_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	ftAnimBlock(0, 26),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimTech_joint16[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -709, 7, -8, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 14), 160, 37, -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 0, 5, 0, 2,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimTech_joint17[162] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 87, 12, -27, 11, -389, -43,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 174, 16, 76, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -433, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -508, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -613, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 185, -24, 100, -25, -665, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 125, -121, 25, -69, -660, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -57, -77, -39, -46, -346, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -103, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -30, 40, -651, -278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 23, 60, -903, -161,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 152, 61, -959, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -161, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 213, 19, -225, -22, -960, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 131, -50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -926, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -205, 39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -103, 33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 89, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 9, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -80, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -6, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -828, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -737, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -838, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 40, 35, -916, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 183, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 55, 49, -879, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 79, -11, -509, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 191, 7, 70, -8, -472, 36,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimTech_joint19[92] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 478, 101,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 579, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 771, 187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1086, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1136, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 745, -565,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 591, 559,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1123, 403,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1398, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1469, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1451, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1398, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1264, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1042, -216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 832, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 886, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 949, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 923, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 623, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 502, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 445, -57,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTCaptainAnimTech_joint21[162] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -78, -13, 17, -14, 217, -45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -211, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -145, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 172, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 61, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -152, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -240, 4, -186, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -202, 87, -16, 198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -65, 88, -132, 9, 210, 126,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -100, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -25, 32, 237, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 0, 2, 246, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 158, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -85, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -78, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -56, 47, -79, 39, 135, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 70, 82, 34, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 16, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 49, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 17, -19, 143, 33, -14, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 112, -34, 7, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 11, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -29, -50,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -121, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 67, -43, -6, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 23, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -37, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -130, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -127, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 60, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -126, 0, -42, -4, 80, 19,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimTech_joint22[154] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 225, -41, 160, 6, -49, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -89, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 143, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 183, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 105, -68,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 19, -18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -59, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 10, 77, 148, 47, -79, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 173, 208, 237, -40, -255, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 428, -6, 68, -34, -98, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 161, -213, 168, 35, -429, -320,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -974, -194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1, -125, 139, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 50, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -104, 16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1126, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1200, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1164, 61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -463, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 72, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 195, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -89, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 96, 21,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 192, -5, -363, 91,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 118, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -208, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 116, 20, -181, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 153, 11, -97, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 160, 6, 110, -8, -76, 20,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimTech_joint24[246] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 442, 84,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 526, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 675, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 877, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 928, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 757, -420,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 87, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 657, 522,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1133, 370,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1398, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1466, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1398, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1373, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 939, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 831, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 593, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 541, -51,
	ftAnimEnd(),
	0x0000, 0x200E, 0x06F4, 0xFFCF, 0xF960, 0xFFFF, 0x062F, 0xFFF1, 0x2809, 0x0003, 0x05DA, 0xFFE6, 0x2805, 0x0004, 0xF961, 0x0009, 0x2003, 0x0001, 0x06C3, 0xFFBD, 0x2003, 0x0001, 0x066D, 0xFFCA, 0x2803, 0x0002, 0x0664, 0x000D, 0x0801, 0x0001, 0x2009, 0x0001, 0x05C8, 0x0000, 0x200F, 0x0001, 0x0671, 0xFFE8, 0xF96E, 0x0026, 0x05D8, 0x0057, 0x2805, 0x0002, 0xF9D8, 0x0014, 0x200B, 0x0001, 0x0633, 0x0002, 0x0678, 0x008D, 0x200B, 0x0001, 0x0676, 0xFFFC, 0x06F3, 0x0043, 0x2803, 0x0002, 0x05D9, 0xFFED, 0x200D, 0x0001, 0xF9D7, 0xFFFD, 0x06FF, 0x0008, 0x2809, 0x0007, 0x06B9, 0xFFE0, 0x2805, 0x000A, 0xF91D, 0xFFD6, 0x0801, 0x0001, 0x2003, 0x0001, 0x0604, 0x0027, 0x2003, 0x0002, 0x0626, 0xFFF5, 0x2003, 0x0001, 0x0612, 0xFFEB, 0x2803, 0x0003, 0x0603, 0x0018, 0x0801, 0x0002, 0x2009, 0x0001, 0x068F, 0xFFC9, 0x2809, 0x0002, 0x05F9, 0xFFAC, 0x2003, 0x0001, 0x0620, 0x0025, 0x2003, 0x0001, 0x064D, 0x0037, 0x200F, 0x0001, 0x068F, 0x0019, 0xF8EF, 0xFF93, 0x05A1, 0xFF4F, 0x2803, 0x0002, 0x0681, 0x0016, 0x200D, 0x0001, 0xF842, 0xFFA8, 0x0497, 0xFF57, 0x200D, 0x0001, 0xF83F, 0x000B, 0x044F, 0xFFE4, 0x2809, 0x0003, 0x04DD, 0x003D, 0x2007, 0x0001, 0x06AE, 0x0022, 0xF858, 0x0009, 0x2803, 0x0003, 0x06E5, 0x0008, 0x2005, 0x0001, 0xF853, 0xFFFC, 0x2805, 0x0002, 0xF84C, 0xFFFE, 0x0801, 0x0001, 0x2009, 0x0001, 0x0516, 0x0029, 0x200F, 0x0001, 0x06E9, 0x0004, 0xF84B, 0xFFFF, 0x0530, 0x001A, 0x0000, 0x0000, 0x0000,
};
