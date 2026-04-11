/* AnimJoint data for relocData file 1637 (FTCaptainAnimDSmash) */
/* 4192 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimDSmash_joint1[76];
extern u16 dFTCaptainAnimDSmash_joint2[88];
extern u16 dFTCaptainAnimDSmash_joint4[64];
extern u16 dFTCaptainAnimDSmash_joint5[182];
extern u16 dFTCaptainAnimDSmash_joint6[80];
extern u16 dFTCaptainAnimDSmash_joint7[44];
extern u16 dFTCaptainAnimDSmash_joint8[22];
extern u16 dFTCaptainAnimDSmash_joint10[8];
extern u16 dFTCaptainAnimDSmash_joint11[166];
extern u16 dFTCaptainAnimDSmash_joint12[56];
extern u16 dFTCaptainAnimDSmash_joint13[8];
extern u16 dFTCaptainAnimDSmash_joint14[10];
extern u16 dFTCaptainAnimDSmash_joint16[40];
extern u16 dFTCaptainAnimDSmash_joint17[230];
extern u16 dFTCaptainAnimDSmash_joint19[72];
extern u16 dFTCaptainAnimDSmash_joint21[252];
extern u16 dFTCaptainAnimDSmash_joint22[236];
extern u16 dFTCaptainAnimDSmash_joint24[412];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTCaptainAnimDSmash_joints[] = {
	(u32)dFTCaptainAnimDSmash_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimDSmash_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimDSmash_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTCaptainAnimDSmash_joint5, /* [4] joint 5 */
	(u32)dFTCaptainAnimDSmash_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimDSmash_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimDSmash_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimDSmash_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTCaptainAnimDSmash_joint11, /* [10] joint 11 */
	(u32)dFTCaptainAnimDSmash_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimDSmash_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimDSmash_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimDSmash_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTCaptainAnimDSmash_joint17, /* [16] joint 17 */
	(u32)dFTCaptainAnimDSmash_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTCaptainAnimDSmash_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTCaptainAnimDSmash_joint22, /* [21] joint 22 */
	(u32)dFTCaptainAnimDSmash_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF0382, /* [24] END */
};

/* Joint 1 */
u16 dFTCaptainAnimDSmash_joint1[76] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1600, -1650, 0, -150,
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValT(FT_ANIM_TRAX, 8), 156,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 8), -151, -141,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 726, -1878,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 4), 726,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 99, 726, 118,
	ftAnimSetValT(FT_ANIM_TRAY, 9), 726,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 4), 23, 203,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), -512,
	ftAnimSetValRateT(FT_ANIM_TRAX, 11), -229, -3,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -9,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 21), -173, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValT(FT_ANIM_TRAY, 30), 1600,
	ftAnimBlock(0, 6),
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 15), 163,
	ftAnimBlock(0, 10),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 292,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), 0, 289,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 9), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 9), 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimDSmash_joint2[88] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 107, 48, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, -76, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 402, -37,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -714, 1, -893, 1,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), -58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -402, -1,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -281, -552,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 168, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 338, 139, -439, -31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1003, -57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1353, 91,
	ftAnimBlock(0, 4),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 66, 64,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1228, -27,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1947, 0,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 21), -1608,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 16), 1608, 1500,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTCaptainAnimDSmash_joint4[64] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 189, -8, 0, 12, 0, 0, -31, 108, 47, -15,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 120, -10, 81, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 0, 14, 0, 6, 87, 42, -17,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 0, 37, -6, -78, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 19, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 85, -1, 20, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -269,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 42), 189, 12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 42), 0, 0, 0, -31, 47,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimDSmash_joint5[182] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 239, -29, 5, -170, -524, 166,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 154, -39, -189, 195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -165, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -174, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 129, 38, -144, 42, 33, 210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 231, -28, -89, -15, 230, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 72, -178, -175, -72, 264, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -126, -77, -234, -58, 338, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -83, 63, -292, -11, 173, -78,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 215, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 155, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -257, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -151, 29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 183, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -127, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 222, 65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 398, -18,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -120, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -296, -29,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -137, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -28, 26,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 377, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -71, -41,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -325, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -496, -6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 62, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -110, 7, 73, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -13, 44, -93, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 31, 44, -496, 4, -161, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 269, -11, -148, 138, -502, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 239, -29, 5, 153, -524, -21,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimDSmash_joint6[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -797, -15,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -813, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -728, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -680, 188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -352, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -823, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -810, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -689, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -997, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1015, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1026, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -981, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -991, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -849, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -803, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -690, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -694, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -845, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -797, 48,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimDSmash_joint7[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -388, 3,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 2435, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 2943, 0, -5, 37, -341, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 2767, 12, 210, 0, -192, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 2815, -1, 113, -8, -320, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 2813, -2, -53, -6, -382, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 2435, -89, -388,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTCaptainAnimDSmash_joint8[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 74, 0, -268, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 32), 76, 0, -268, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 0, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTCaptainAnimDSmash_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTCaptainAnimDSmash_joint11[166] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -129, 34, 144, 71, 592, -141,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 431, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -124, -83, 248, -205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -261, -163, 39, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -451, -46, 512, 47, -126, -37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 441, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -354, 180, -35, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -91, 221, 167, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 88, 125, 309, -102, 258, 43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 296, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 114, -29, 194, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 81, -34, 157, -42,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), -250, -4, -357, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 316, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 319, 10,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -250, 2, -358, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -64, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -76, -18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 331, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 517, 2,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -63, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 102, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -97, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -139, 28,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 517, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 380, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -108, 31, 196, 97,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -67, -36, 495, 97,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 259, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -129, -61, 144, -115, 592, 97,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimDSmash_joint12[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1024, -42,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1021, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -923, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -982, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -984, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -1097, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1088, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -839, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -807, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -784, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -857, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1042, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1024, 17,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimDSmash_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, 275, 62,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTCaptainAnimDSmash_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimDSmash_joint16[40] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 18, 0, -3,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 35), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 40), -63, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 25), 263, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -2, -21,
	ftAnimBlock(0, 10),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimDSmash_joint17[230] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1799, -134, 1538, -49, 1135, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1515, -174, 1538, 135, 850, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1315, -150, 1760, 187, 854, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1215, 112, 1913, 112, 870, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1540, 311, 1984, -62, 739, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1838, 184, 1788, -185, 577, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1909, 52, 1614, -110, 578, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1556, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1943, 123, 606, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2156, 200, 570, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2344, 108, 1592, 102, 785, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2373, -31, 1761, 84, 862, 49,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 2059, -100, 738, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1761, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1695, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1968, -44, 1763, 43, 582, -110,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1810, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 588, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1960, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1947, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1957, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1829, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1840, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 617, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 536, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1929, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1835, -2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1822, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1632, -15,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 558, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 907, 47,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1830, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1547, -13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1615, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1503, 26,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 955, 45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1108, -6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1542, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1700, 85,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1107, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1799, 99, 1538, 35, 1135, 27,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimDSmash_joint19[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 445, 335,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 781, 280,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1006, 203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1188, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1369, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1415, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1401, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1382, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1404, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1412, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1413, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 1052, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1037, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 676, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 634, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 567, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 445, -121,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTCaptainAnimDSmash_joint21[252] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -126, -113, -42, -478, 80, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -240, 53, -520, -212, 114, -193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -19, 223, -467, 154, -307, -317,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 206, 201, -211, 214, -521, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 383, 36, -38, 136, -647, -48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -541, 53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 42, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 279, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 196, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 83, -68, -511, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 59, -43, 45, -16, -528, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4, -140, 10, -99, -482, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -221, -131, -154, -83, -476, -43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -244, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -156, -16, -569, -61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -594, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -188, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -155, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -159, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -164, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 35, 127, 3, 110,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 35, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 95, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 91, -21, -617, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -10, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -579, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 15, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -155, -17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 14, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 58, -74,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -554, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -413, -9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -167, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -176, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -22, -76,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 30, 70,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -423, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -334, 29,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -174, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -237, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 105, 62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 159, -41,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -299, 50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -16, 107,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 99, -80, -238, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 0, -113, -181, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -126, -125, -42, 139, 80, 96,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimDSmash_joint22[236] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 160, -72, 110, 68, 3140, -273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -50, -189, 206, -68, 2580, -287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -290, -256, 42, -240, 2292, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -563, -36, -274, -66, 2263, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -364, 128, -90, 118, 1961, -248,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -249, 183, 28, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1766, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1731, 399,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 60, 183, 121, 24, 2564, 430,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 118, 28, 78, -26, 2592, 72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2809, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 117, -8, 69, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 71, -47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 270, 12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2746, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 6, -20, 2708, 52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 70, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2852, 123,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 3020, 39,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 80, 13, 278, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 81, -27, 244, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3058, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 3032, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3009, -34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2871, 17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 46, -17, 244, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 60, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 232, 16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2913, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 2877, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 14, -38, 2752, -107,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -124, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 2566, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2576, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 2530, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 243, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 165, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -155, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -3, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 74, 67,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 159, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 155, -12, 2616, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 116, -4, 3037, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 160, 0, 110, -5, 3140, 102,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimDSmash_joint24[412] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 541, 360,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 901, 300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1142, 200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1409, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1444, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1309, -719,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -654,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 156, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 345, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 164, -172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 45, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 157, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 4, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 52, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 241, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 381, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 728, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 751, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 638, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 541, -97,
	ftAnimEnd(),
	0x0000, 0x200E, 0x00A1, 0xFFE4, 0x016D, 0xFF92, 0xFEE9, 0xFFA5, 0x2809, 0x0002, 0xFE8F, 0x001D, 0x2007, 0x0001, 0x0085, 0xFFE5, 0x00FE, 0xFF66, 0x2007, 0x0001, 0x006A, 0x003E, 0x0038, 0xFF49, 0x200F, 0x0001, 0x0102, 0x011A, 0xFF8F, 0xFF97, 0xFEC8, 0x0007, 0x200F, 0x0001, 0x02A0, 0x005F, 0xFF65, 0xFF7F, 0xFE9E, 0x0000, 0x200F, 0x0001, 0x01C1, 0xFF57, 0xFE8D, 0xFF8B, 0xFEC9, 0x005F, 0x2809, 0x0002, 0xFFE9, 0x0076, 0x2007, 0x0001, 0x014E, 0xFFBA, 0xFE7B, 0x0014, 0x2007, 0x0001, 0x0135, 0xFF53, 0xFEB7, 0x0027, 0x200F, 0x0001, 0xFFF3, 0xFEBA, 0xFECA, 0x0096, 0x004A, 0x0172, 0x200F, 0x0001, 0xFEA9, 0xFF75, 0xFFE4, 0x0086, 0x02CD, 0x014A, 0x200F, 0x0001, 0xFEDD, 0x002F, 0xFFD6, 0xFFFA, 0x02DF, 0x002F, 0x2805, 0x0002, 0xFFAB, 0xFFCE, 0x2803, 0x0003, 0xFF75, 0x0057, 0x2009, 0x0001, 0x032C, 0xFFD8, 0x2009, 0x0001, 0x028E, 0xFF2F, 0x200D, 0x0001, 0xFF72, 0xFFCD, 0x0188, 0xFF5A, 0x2805, 0x0005, 0xFF8C, 0x0027, 0x200B, 0x0001, 0xFFDA, 0x0054, 0x0141, 0xFFDA, 0x2803, 0x0003, 0x001D, 0xFFD4, 0x2009, 0x0001, 0x013B, 0xFFD5, 0x2009, 0x0001, 0x00E9, 0xFFD7, 0x2809, 0x0004, 0x01DA, 0x0010, 0x0801, 0x0001, 0x2003, 0x0001, 0xFFE8, 0xFFCD, 0x2803, 0x0002, 0xFFC2, 0x000B, 0x2005, 0x0001, 0xFFBA, 0x0007, 0x2805, 0x0003, 0xFF4B, 0xFFEA, 0x0801, 0x0001, 0x200B, 0x0001, 0xFFCE, 0x0005, 0x01B3, 0xFFD7, 0x280B, 0x0004, 0xFF68, 0xFFD7, 0x00EE, 0xFFD0, 0x0801, 0x0001, 0x2005, 0x0001, 0xFF40, 0x0002, 0x2805, 0x0004, 0xFFAB, 0x0010, 0x0801, 0x0002, 0x200B, 0x0001, 0xFF4C, 0xFFF6, 0x00CA, 0xFFEA, 0x2809, 0x0003, 0x006F, 0xFFB0, 0x2803, 0x0004, 0x0009, 0x0008, 0x0801, 0x0001, 0x2005, 0x0001, 0xFFB9, 0x000D, 0x2805, 0x0007, 0xFFC6, 0xFFE9, 0x0801, 0x0001, 0x2009, 0x0001, 0x0010, 0xFFB8, 0x2809, 0x0004, 0xFF5E, 0xFFD8, 0x2003, 0x0001, 0xFFFB, 0xFFE1, 0x2003, 0x0003, 0xFF88, 0xFFFF, 0x200B, 0x0001, 0xFF97, 0x0015, 0xFF41, 0xFFF2, 0x280B, 0x0005, 0xFFC6, 0xFFEC, 0xFFED, 0x0002, 0x2005, 0x0001, 0xFFAE, 0xFFEF, 0x2005, 0x0003, 0xFFEE, 0x003D, 0x2005, 0x0001, 0x0030, 0x002D, 0x2805, 0x0003, 0x0059, 0x0012, 0x200B, 0x0001, 0xFFB2, 0xFFF1, 0xFFDA, 0xFFF6, 0x2809, 0x0003, 0xFF78, 0xFFBB, 0x2803, 0x0007, 0x000D, 0x003F, 0x0801, 0x0002, 0x2005, 0x0001, 0x006B, 0x000B, 0x2805, 0x0005, 0x00F4, 0x0068, 0x2009, 0x0001, 0xFF2C, 0xFFBB, 0x2809, 0x0004, 0xFEAE, 0x0023, 0x0801, 0x0003, 0x2003, 0x0001, 0x0053, 0x0049, 0x200F, 0x0001, 0x00A1, 0x004E, 0x016D, 0x0078, 0xFEE9, 0x003A, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
