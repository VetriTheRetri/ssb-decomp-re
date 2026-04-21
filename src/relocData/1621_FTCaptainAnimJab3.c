/* AnimJoint data for relocData file 1621 (FTCaptainAnimJab3) */
/* 3904 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimJab3_joint1[36];
extern u16 dFTCaptainAnimJab3_joint2[76];
extern u16 dFTCaptainAnimJab3_joint3[68];
extern u16 dFTCaptainAnimJab3_joint5[78];
extern u16 dFTCaptainAnimJab3_joint6[200];
extern u16 dFTCaptainAnimJab3_joint7[96];
extern u16 dFTCaptainAnimJab3_joint8[18];
extern u16 dFTCaptainAnimJab3_joint9[62];
extern u16 dFTCaptainAnimJab3_joint11[62];
extern u16 dFTCaptainAnimJab3_joint12[190];
extern u16 dFTCaptainAnimJab3_joint13[80];
extern u16 dFTCaptainAnimJab3_joint14[14];
extern u16 dFTCaptainAnimJab3_joint15[12];
extern u16 dFTCaptainAnimJab3_joint17[42];
extern u16 dFTCaptainAnimJab3_joint18[168];
extern u16 dFTCaptainAnimJab3_joint20[72];
extern u16 dFTCaptainAnimJab3_joint22[162];
extern u16 dFTCaptainAnimJab3_joint23[174];
extern u16 dFTCaptainAnimJab3_joint25[96];
extern u16 dFTCaptainAnimJab3_joint26[194];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTCaptainAnimJab3_joints[] = {
	(u32)dFTCaptainAnimJab3_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimJab3_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimJab3_joint3, /* [2] joint 3 */
	(u32)dFTCaptainAnimJab3_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTCaptainAnimJab3_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimJab3_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimJab3_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimJab3_joint9, /* [8] joint 9 */
	(u32)dFTCaptainAnimJab3_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTCaptainAnimJab3_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimJab3_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimJab3_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimJab3_joint15, /* [14] joint 15 */
	(u32)dFTCaptainAnimJab3_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTCaptainAnimJab3_joint18, /* [17] joint 18 */
	(u32)dFTCaptainAnimJab3_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTCaptainAnimJab3_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTCaptainAnimJab3_joint23, /* [22] joint 23 */
	(u32)dFTCaptainAnimJab3_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTCaptainAnimJab3_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTCaptainAnimJab3_joint1[36] = {
	ftAnimSetVal(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 3), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), 887, 709,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 10,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 7), 888, -10,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 11,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), 887, -7,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -425,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 9), 81, -453,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 6), 36, -120,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTCaptainAnimJab3_joint2[76] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1564, -653, 1, -76,
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 991, -991, 43, 315,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 2), -37,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1192, 2044, 119, 862,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 1), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 1757, 565, 366, 247,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 2), 36,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 12, 5,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 1757, -3, 366, -6,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 7), 36,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), -216, -128,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 1462, -278, 366, -117,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 5), 36,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 1409, 73, 219, -195,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 5), 23,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 1600, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 10), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTCaptainAnimJab3_joint3[68] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, -76, 9,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 35, 158, -4, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 245, -106, 155, 1, 0, -57,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -531, -86, 197, 4, -286, -31,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -531, 0, 197, 0, -286, 4,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 49, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -88, 134, 185, -6, -225, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 140, 4, 162, -4, -121, 34,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 15,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 107, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTCaptainAnimJab3_joint5[78] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -31, 47,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 194, 3, 28, -58, 12, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 227, 44, -210, -71, 10, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 418, 21, -329, -13, -101, -12,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 418, 0, -329, 0, -101, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -25, 13, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 146, -21, -164, 25, 5, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 203, 18, -76, 13, 15, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 164, -1, -39, 7, 10, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 189, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTCaptainAnimJab3_joint6[200] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 171, -8, 0, -94, -320, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 162, 274, -94, -293, -318, -338,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 719, 3, -586, -202, -997, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -194, 232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 169, -339, -395, 479,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 41, -20, -37, 213,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 13, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 129, 47, -34, 89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -8, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 135, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 124, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 48, 54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 354, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -19, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -94, -19,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 112, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -36, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -122, -48, 334, -78,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -380, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 196, -203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 0, 74, -73, -246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 112, 86, -295, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 171, 69, -368, 21, -381, -102,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 334, -35, -244, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -644, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -647, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 268, -34, -230, 30, -534, 54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 267, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -30, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -564, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -581, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -583, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 262, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 241, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -4, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 11, -3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -553, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 239, -2, 5, -5, -524, 29,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTCaptainAnimJab3_joint7[96] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1054, 69,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -984, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1232, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1245, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1236, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1154, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1175, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1086, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1025, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1254, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1218, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -981, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -845, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -680, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -704, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -889, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -898, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -653, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -588, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -523, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -577, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -732, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -797, -65,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTCaptainAnimJab3_joint8[18] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 3018, -10, -77, 0, 31, -7,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 49), 2435, -89, -388,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 17,
	ftAnimBlock(0, 32),
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTCaptainAnimJab3_joint9[62] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -26, -119, 30, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 360, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -184, 3, -17, 25, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 15, 22, 7, 2, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 15, 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 15, 2, 7, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 39, -1, 4, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 4, -3, 2, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTCaptainAnimJab3_joint11[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, -21, -66, 23,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 120, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -148, 5, 40, 28, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 25, 19, 76, 3, 1, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 25, 76, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 25, 3, 76, -3, 1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 56, -1, 45, -5, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 8, -5, 26, -4, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimJab3_joint12[190] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -183, -2, 206, -4, -128, 37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -172, 34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 253, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -90, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -131, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -116, 11, 29, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -148, 30, 222, 0, 151, 230,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 252, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -55, 41, 490, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -65, 1, 489, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 440, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -53, 4, 249, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -172, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 126, -44,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 388, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -181, -22, 347, -109,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -187, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 170, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 90, 13, 51, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 211, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 130, 96,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 386, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -119, 71,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -35, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 242, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 340, -38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 334, -77,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 36, -51,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -79, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -56, 18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 11, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 359, 115,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 294, -50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 148, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -47, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -120, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 470, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 584, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -129, -8, 144, -4, 592, 7,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTCaptainAnimJab3_joint13[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1049, 86,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -963, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -998, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -957, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -887, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1067, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1079, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -968, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -828, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -554, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -392, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -335, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -510, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -948, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -942, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1031, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1077, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1032, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1024, 8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTCaptainAnimJab3_joint14[14] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 272, 10, 242, 3, 42, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 32), 270, 275, 62,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTCaptainAnimJab3_joint15[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	_FT_ANIM_CMD(11, 0, 1), 28,
	ftAnimBlock(0, 32),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimJab3_joint17[42] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, -1, 0, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 31), -18, 0, 3, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 28,
	ftAnimBlock(0, 3),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 663, 40, 8, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 11), -80, -57, 15, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 13), 0, 6, 0, -3,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTCaptainAnimJab3_joint18[168] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -24, 0, -9, -5, -525, -319,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 20, 48, 24, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -844, -327,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1181, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 71, 135, 59, -52, -1045, 405,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 291, -199, -81, -294, -369, 815,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -328, -303, -528, -223, 585, 474,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -315, 11, -528, 0, 579, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 582, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -305, 7, -528, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -313, -13, -528, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -330, 213, -528, 40, 587, -240,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -310, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 114, 309, 100, -422,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 288, 92, -256, -265,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 279, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -249, 50, -429, -147,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -81, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -552, -93,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -741, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 249, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 154, -27,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -40, 36, -790, -43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -664, 56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 49, 14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 128, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 140, 37,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -608, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -489, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 191, 50, 70, 21, -472, 16,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTCaptainAnimJab3_joint20[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 489, 239,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 883, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 804, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 877, -248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 306, -286,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 304, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 303, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 302, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 305, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 546, 202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 710, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 986, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1018, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 587, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 527, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 444, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 445, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTCaptainAnimJab3_joint22[162] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 67, -16, 174, -5, 88, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 111, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 51, -54, 76, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -40, -68, 129, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -85, -47, 75, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -135, 30, 121, 186, -189, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -23, 51, 484, 178, 71, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -32, -8, 478, -5, 68, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -36, 9, 473, 8, 64, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -23, -32, 485, -93, 71, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -100, -47, 285, -147, -47, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -118, 13, 190, -45, -66, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 35, 25, 58, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 206, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 206, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 64, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 33, -1, 88, 44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -40, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 159, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 181, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 144, -28,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -48, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -94, -24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 48, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 3, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 117, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 93, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -126, -32, -42, -45, 80, -13,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTCaptainAnimJab3_joint23[174] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 199, -111, 209, 36, -148, -241,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -12, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -670, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 246, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 213, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 36, 28, 200, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 43, -61, 37, -68, -612, 49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -408, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -87, -52, 63, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -60, 27, 59, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 29, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -32, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 73, 7,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -379, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -357, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -588, -180,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -809, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 84, -15, -11, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -60, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 116, 78,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -790, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -913, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -37, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 104, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 204, 74,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 206, -25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 93, 3, -920, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -531, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 92, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 82, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 157, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 179, -28, -370, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 122, -19, -112, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 160, 2, 110, -11, -76, 35,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTCaptainAnimJab3_joint25[96] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 733, 293,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1026, 260,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1253, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1127, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1299, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1309, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1298, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1236, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1217, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1143, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 918, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 747, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 683, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 659, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 592, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 614, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 755, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 875, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 810, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 766, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 673, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 579, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 541, -38,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTCaptainAnimJab3_joint26[194] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 203, -27, 174, 4, -231, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 183, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 109, -134, -319, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -92, -13, -286, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 81, 165, 198, -119, -312, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 237, 75, -55, -112, 55, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 232, -7, -27, 30, 12, -42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 101, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 222, -12, -29, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 172, 0, -159, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 178, -41, 116, 31, -171, 42,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -28, -45, 222, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -74, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -12, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1, 25, 206, -6, 116, 84,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 194, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -93, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 156, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 173, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 151, -29, 215, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 135, -43, 217, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -180, -57, 63, -60, 101, -100,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 11, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -200, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 15, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 64, 50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 95, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 84, 34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -361, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -162, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 61, 18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 78, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 80, 16,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 75, 14, -360, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 89, 13, 104, 24, -323, 37,
	ftAnimEnd(),
	0x0000, 0x0000,
};
