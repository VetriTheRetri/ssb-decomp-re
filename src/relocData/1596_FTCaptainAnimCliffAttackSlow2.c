/* AnimJoint data for relocData file 1596 (FTCaptainAnimCliffAttackSlow2) */
/* 2000 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimCliffAttackSlow2_joint1[18];
extern u16 dFTCaptainAnimCliffAttackSlow2_joint2[74];
extern u16 dFTCaptainAnimCliffAttackSlow2_joint3[38];
extern u16 dFTCaptainAnimCliffAttackSlow2_joint5[56];
extern u16 dFTCaptainAnimCliffAttackSlow2_joint6[88];
extern u16 dFTCaptainAnimCliffAttackSlow2_joint7[44];
extern u16 dFTCaptainAnimCliffAttackSlow2_joint8[18];
extern u16 dFTCaptainAnimCliffAttackSlow2_joint11[42];
extern u16 dFTCaptainAnimCliffAttackSlow2_joint12[74];
extern u16 dFTCaptainAnimCliffAttackSlow2_joint13[30];
extern u16 dFTCaptainAnimCliffAttackSlow2_joint14[30];
extern u16 dFTCaptainAnimCliffAttackSlow2_joint15[12];
extern u16 dFTCaptainAnimCliffAttackSlow2_joint17[28];
extern u16 dFTCaptainAnimCliffAttackSlow2_joint18[106];
extern u16 dFTCaptainAnimCliffAttackSlow2_joint20[32];
extern u16 dFTCaptainAnimCliffAttackSlow2_joint22[64];
extern u16 dFTCaptainAnimCliffAttackSlow2_joint23[84];
extern u16 dFTCaptainAnimCliffAttackSlow2_joint25[32];
extern u16 dFTCaptainAnimCliffAttackSlow2_joint26[78];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTCaptainAnimCliffAttackSlow2_joints[] = {
	(u32)dFTCaptainAnimCliffAttackSlow2_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimCliffAttackSlow2_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimCliffAttackSlow2_joint3, /* [2] joint 3 */
	(u32)dFTCaptainAnimCliffAttackSlow2_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTCaptainAnimCliffAttackSlow2_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimCliffAttackSlow2_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimCliffAttackSlow2_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimCliffAttackSlow2_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTCaptainAnimCliffAttackSlow2_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimCliffAttackSlow2_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimCliffAttackSlow2_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimCliffAttackSlow2_joint15, /* [14] joint 15 */
	(u32)dFTCaptainAnimCliffAttackSlow2_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTCaptainAnimCliffAttackSlow2_joint18, /* [17] joint 18 */
	(u32)dFTCaptainAnimCliffAttackSlow2_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTCaptainAnimCliffAttackSlow2_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTCaptainAnimCliffAttackSlow2_joint23, /* [22] joint 23 */
	(u32)dFTCaptainAnimCliffAttackSlow2_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTCaptainAnimCliffAttackSlow2_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTCaptainAnimCliffAttackSlow2_joint1[18] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 231,
	ftAnimSetValBlock(FT_ANIM_TRAY), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 24), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 24), 916, 74,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 24), 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimCliffAttackSlow2_joint2[74] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 13, 244, -19,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 21), 120, -167,
	_FT_ANIM_CMD(11, FT_ANIM_TRAZ, 1), 18,
	ftAnimSetValRateT(FT_ANIM_TRAX, 22), 82, -4,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX, 1), 18,
	ftAnimSetValRateBlock(FT_ANIM_TRAY), 981, -131,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 1006, 64,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 64, -167,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 1126, 161, 90, 96,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), -4,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 5), 15, -159,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 96,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), -159,
	ftAnimSetValRateT(FT_ANIM_TRAX, 5), 20, 8,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 161,
	ftAnimSetValRateT(FT_ANIM_TRAY, 15), 1600, 10,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), 102, -7,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -7,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 13), 0, -72,
	ftAnimBlock(0, 3),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), 8,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 10), 0, -2,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTCaptainAnimCliffAttackSlow2_joint3[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 6, 0, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 362, -9, 138, -8,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 18,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), 312, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 393, 2,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 6,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 294, -21, -268, -14, -232, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 107, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimCliffAttackSlow2_joint5[56] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54,
	ftAnimSetValRateBlock(FT_ANIM_TRAX), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), 0, -7, 0, 12, 0, -15,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 18,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), 0, -5,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 12), 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 0, -17,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 6,
	ftAnimBlock(0, 6),
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 10, 41, -14, 0, 21,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX, 3), -268, -25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 189, 0, 0, -31, 47,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimCliffAttackSlow2_joint6[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -580, -38, -275, 16, 536, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -744, -6, 479, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -268, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -284, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -742, 196, -542, -246, 441, -221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -351, -44, -777, -284, 35, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -830, -247, -1110, -167, 505, 243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -847, -19, -1112, 3, 523, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1412, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -870, -26, 549, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), -1358, -14, 1073, 15,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1485, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1590, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1367, -9, -1612, -21, 1083, 10,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTCaptainAnimCliffAttackSlow2_joint7[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1190, 17,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1052, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -935, 179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -692, 381,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -173, 230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -232, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -319, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -806, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -801, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -797, 3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTCaptainAnimCliffAttackSlow2_joint8[18] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 8, -35, 8, -1, 8, -10,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 36), -781, -89, -388,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 12,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTCaptainAnimCliffAttackSlow2_joint11[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -89, -1, -341, -26, 0, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -226, 0, -416, 69, 123, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 4, 491, 0, 0, -28,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 15), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 398, -32, -13, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTCaptainAnimCliffAttackSlow2_joint12[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -315, -29, 173, 1, -239, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 286, 83,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -211, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -222, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -87, 108,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 481, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 346, 53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 212, -36,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -221, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -135, 7,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 506, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 588, 5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 179, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 156, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -129, 5, 145, -11, 591, 3,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTCaptainAnimCliffAttackSlow2_joint13[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -335, -257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -836, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -902, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -1028, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1025, 3,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTCaptainAnimCliffAttackSlow2_joint14[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 125, 53, 187, 7, -71, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 580, 9, 223, 4, -26, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 242, -17, 245, 2, 7, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 270, 275, 62,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTCaptainAnimCliffAttackSlow2_joint15[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	_FT_ANIM_CMD(11, 0, 1), 18,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimCliffAttackSlow2_joint17[28] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 250, 4, 58, 0, -178, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 18), 35, -6, 0, 4,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 12,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 36), 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 12,
	ftAnimBlock(0, 6),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 18), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTCaptainAnimCliffAttackSlow2_joint18[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 84, 15, 92, 9, -480, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 176, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -582, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 184, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 214, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 145, -161, 112, -204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -108, -171, -232, -231, -599, 114,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 40, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -351, -47, -354, 141,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -335, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -317, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -833, -22,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -312, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 11, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 85, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 154, 23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -830, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -527, 49,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 35, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 67, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 179, 25, 68, 1, -484, 43,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTCaptainAnimCliffAttackSlow2_joint20[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 959, -15,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 1023, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1096, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 960, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 856, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 536, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 462, -74,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTCaptainAnimCliffAttackSlow2_joint22[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -37, 0, 15, -2, 79, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 233, 49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), -41, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -31, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -23, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 221, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 80, -128,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 37, -36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 277, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 87, -9,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -15, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -101, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -119, -18, -41, 0, 80, -6,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTCaptainAnimCliffAttackSlow2_joint23[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -279, -6, 356, -17, -896, -64,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 354, -8, -1166, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -260, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -221, 107,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 79, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 326, -172, -1144, 63,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -193, -124,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -525, 66,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 97, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 156, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -238, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 14, 29,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -458, 65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -93, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 41, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 108, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 160, 3, 109, 0, -77, 15,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTCaptainAnimCliffAttackSlow2_joint25[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1153, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1013, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 954, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 897, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 863, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 555, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 540, -14,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTCaptainAnimCliffAttackSlow2_joint26[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 59, 71, 50, -7, -460, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -239, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 202, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 68, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 46, -44,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -278, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -284, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 8, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 119, -3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 242, 37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 358, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 113, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 154, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 159, 5, 364, 6, -280, 4,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
