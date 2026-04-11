/* AnimJoint data for relocData file 889 (FTDonkeyAnimCliffEscapeSlow2) */
/* 2464 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimCliffEscapeSlow2_joint1[30];
extern u16 dFTDonkeyAnimCliffEscapeSlow2_joint2[162];
extern u16 dFTDonkeyAnimCliffEscapeSlow2_joint3[42];
extern u16 dFTDonkeyAnimCliffEscapeSlow2_joint5[38];
extern u16 dFTDonkeyAnimCliffEscapeSlow2_joint6[122];
extern u16 dFTDonkeyAnimCliffEscapeSlow2_joint7[52];
extern u16 dFTDonkeyAnimCliffEscapeSlow2_joint8[34];
extern u16 dFTDonkeyAnimCliffEscapeSlow2_joint9[24];
extern u16 dFTDonkeyAnimCliffEscapeSlow2_joint11[24];
extern u16 dFTDonkeyAnimCliffEscapeSlow2_joint12[56];
extern u16 dFTDonkeyAnimCliffEscapeSlow2_joint13[32];
extern u16 dFTDonkeyAnimCliffEscapeSlow2_joint14[42];
extern u16 dFTDonkeyAnimCliffEscapeSlow2_joint15[10];
extern u16 dFTDonkeyAnimCliffEscapeSlow2_joint17[24];
extern u16 dFTDonkeyAnimCliffEscapeSlow2_joint18[72];
extern u16 dFTDonkeyAnimCliffEscapeSlow2_joint20[24];
extern u16 dFTDonkeyAnimCliffEscapeSlow2_joint22[92];
extern u16 dFTDonkeyAnimCliffEscapeSlow2_joint23[124];
extern u16 dFTDonkeyAnimCliffEscapeSlow2_joint25[176];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTDonkeyAnimCliffEscapeSlow2_joints[] = {
	(u32)dFTDonkeyAnimCliffEscapeSlow2_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimCliffEscapeSlow2_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimCliffEscapeSlow2_joint3, /* [2] joint 3 */
	(u32)dFTDonkeyAnimCliffEscapeSlow2_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTDonkeyAnimCliffEscapeSlow2_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimCliffEscapeSlow2_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimCliffEscapeSlow2_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimCliffEscapeSlow2_joint9, /* [8] joint 9 */
	(u32)dFTDonkeyAnimCliffEscapeSlow2_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTDonkeyAnimCliffEscapeSlow2_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimCliffEscapeSlow2_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimCliffEscapeSlow2_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimCliffEscapeSlow2_joint15, /* [14] joint 15 */
	(u32)dFTDonkeyAnimCliffEscapeSlow2_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTDonkeyAnimCliffEscapeSlow2_joint18, /* [17] joint 18 */
	(u32)dFTDonkeyAnimCliffEscapeSlow2_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTDonkeyAnimCliffEscapeSlow2_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTDonkeyAnimCliffEscapeSlow2_joint23, /* [22] joint 23 */
	(u32)dFTDonkeyAnimCliffEscapeSlow2_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	0xFFFF0230, /* [25] END */
};

/* Joint 1 */
u16 dFTDonkeyAnimCliffEscapeSlow2_joint1[30] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 913,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 50), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), 1370, 2725,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 3730,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 9), 3747, 1202,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 24), 6329, 585,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 15), 6600, -13,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTDonkeyAnimCliffEscapeSlow2_joint2[162] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), 0, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 107, 72,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 10,
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -350, 76, 688, -176, 631, -1116,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 5), -308, 66, 698, -500,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), 172, -4174,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -4174,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), -412, -2683,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -2683,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 266,
	ftAnimSetValRateT(FT_ANIM_ROTX, 33), 3216, 64,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), -412, 35,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), 188, -856,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), -301, 61, -394, 44,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), -285, 60, -395, -12,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -271, 57, 162, 432, -400, -18,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 566, 654, -411, -15,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 3), -249, 52,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), 52,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 2), -236, 52,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 5), -203, 52, 980, 523,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 1), -412,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), -412, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 5), -171, 52, 1221, 310,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 5), -412,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 25), -412,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 5), -138, 52, 1368, 78,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), -125, 52, 1289, -452,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 1), -118, 52, 1198, -218,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), -105, 52, 1207, -265,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 15), 3216,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 3), -86, 51, 1032, -95,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 12), 1028,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 6), -47, 51,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), 51,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 6), -24, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTDonkeyAnimCliffEscapeSlow2_joint3[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 288, 52, 162, 66, -168, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 620, -41, 710, 16, 132, -43,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 33), -1324, -29, 792, -4, -1864, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -423, 70, 563, -55, -764, 123,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -265, -41, -16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTDonkeyAnimCliffEscapeSlow2_joint5[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX), -9, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 382, 8,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 10,
	ftAnimSetValRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 199, -15, -136, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -16, -5, 6, 3,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 382, 8, -16, 0, 6, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 750, 24, 41,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimCliffEscapeSlow2_joint6[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -30, 58, -99, 16, -335, -125,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 124, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 141, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -840, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -946, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -851, 18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 126, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), -3, -14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -833, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), -347, 27,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 149, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), 255, -16,
	ftAnimBlock(0, 20),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -319, 39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 146, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 227, -52, -25, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 33, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -233, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -278, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -82, 33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 120, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -192, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 4, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -82, -8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -379, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -62, 19, -84, -2, -473, -93,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTDonkeyAnimCliffEscapeSlow2_joint7[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -684, 88,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -216, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -58, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -163, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -201, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), -954, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -995, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -768, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -630, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -629, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -499, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -407, 91,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimCliffEscapeSlow2_joint8[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -270, 0, 23, 14, -460, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -246, 0, 34, 0, -442, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), -246, 5, 34, 0, -442, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTDonkeyAnimCliffEscapeSlow2_joint9[24] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 393, 144, 74,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 370, 121, 61,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 6,
	ftAnimBlock(0, 5),
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 370, 121, 61,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 174, -67, -44,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTDonkeyAnimCliffEscapeSlow2_joint11[24] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -603, -188, 324,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -1046, -130, 28,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 6,
	ftAnimBlock(0, 5),
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), -1046, -130, 28,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -398, 70, 29,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimCliffEscapeSlow2_joint12[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1960, 3, 1581, -8, -2006, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 40), 1458, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 36), -1937, 12, -1975, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1921, 18, -1966, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -2061, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1724, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1447, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1435, 0,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2080, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1724, 0, 1436, 0, -2087, -7,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTDonkeyAnimCliffEscapeSlow2_joint13[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -956, 29,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 32), -981, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -985, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -592, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -528, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -432, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, 15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTDonkeyAnimCliffEscapeSlow2_joint14[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 261, -7, 520, -10, 168, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 1056, 19, -153, -16, 172, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 6,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 1056, -8, -153, 2, 172, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 743, -63, -63, 10, 70, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 98, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTDonkeyAnimCliffEscapeSlow2_joint15[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -893, -1340, 2502,
	_FT_ANIM_CMD(11, 0, 1), 10,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTDonkeyAnimCliffEscapeSlow2_joint17[24] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -404, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 36), -404, 2, 0, 6, 0, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -295, 293, 355,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -404, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTDonkeyAnimCliffEscapeSlow2_joint18[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1371, -18, -1160, -51, 434, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 27), -1445, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 30), -1341, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), 595, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 595, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 906, 62,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1447, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -1606, -21,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1335, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -1249, 1,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 969, 60,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1243, 27,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1625, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1632, -7, -1249, 0, 1258, 15,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTDonkeyAnimCliffEscapeSlow2_joint20[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1211, 5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 42), 1172, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1164, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1047, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1039, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTDonkeyAnimCliffEscapeSlow2_joint22[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 69, -69, 11, 0, 14, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 34), 8, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 36), 7, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 24), -223, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -216, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -118, 36,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -340, -178,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -4, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 22, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -69, 63,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 40, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -517, -134,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -427, 20,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 14, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -113, -21,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -408, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -381, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -128, -14, 24, 1, -377, 3,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTDonkeyAnimCliffEscapeSlow2_joint23[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -675, 94, 191, -8, 2082, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 296, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 16), 204, 36, 2386, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 240, 33, 2420, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 2733, 44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 440, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 278, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 12, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5, -11, 2744, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -12, 10, 2737, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 429, -40, 9, 106, 2745, -65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 268, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 308, 52, 2465, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 306, -14, 2468, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 108, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 2989, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 325, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 185, -39,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 146, 36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 238, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3004, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2965, -12,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 150, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 136, -14, 238, 0, 2958, -7,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTDonkeyAnimCliffEscapeSlow2_joint25[176] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1316, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 523, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 449, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 257, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 41, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 384, 319,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 798, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 834, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 849, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 869, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 945, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 951, 5,
	ftAnimEnd(),
	0x0000, 0x200E, 0x064D, 0xFFFC, 0x06B5, 0xFFFE, 0xFAF0, 0xFFFC, 0x280D, 0x001D, 0x0880, 0x000D, 0xF979, 0xFFD3, 0x2003, 0x0016, 0x05B1, 0x0016, 0x2003, 0x0001, 0x05CE, 0x002B, 0x2003, 0x0003, 0x06B6, 0x000E, 0x2003, 0x0001, 0x06C4, 0x0011, 0x2803, 0x0003, 0x071A, 0x0060, 0x0801, 0x0002, 0x200D, 0x0001, 0x088C, 0xFFFD, 0xF948, 0xFFA3, 0x2809, 0x0003, 0xF7C1, 0xFFC8, 0x2805, 0x0005, 0x07D6, 0xFFF0, 0x2003, 0x0001, 0x07B7, 0x0056, 0x2803, 0x0003, 0x06F4, 0xFFC6, 0x0801, 0x0002, 0x2009, 0x0001, 0xF7AA, 0xFFF4, 0x2809, 0x000C, 0xF82E, 0x0005, 0x2003, 0x0001, 0x06D4, 0xFFF0, 0x2803, 0x000A, 0x0663, 0xFFEF, 0x2005, 0x0001, 0x07C2, 0xFFEC, 0x2805, 0x000D, 0x05E4, 0xFFF6, 0x0801, 0x0009, 0x2003, 0x0001, 0x0657, 0xFFF4, 0x2803, 0x0003, 0x063C, 0xFFFD, 0x2009, 0x0001, 0xF833, 0x0003, 0x2009, 0x0002, 0xF838, 0x0001, 0x200F, 0x0001, 0x063A, 0xFFFE, 0x05DF, 0xFFFB, 0xF838, 0x0000, 0x0000, 0x0000, 0x0000,
};
