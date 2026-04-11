/* AnimJoint data for relocData file 1595 (FTCaptainAnimCliffAttackSlow1) */
/* 1280 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimCliffAttackSlow1_joint1[16];
extern u16 dFTCaptainAnimCliffAttackSlow1_joint2[26];
extern u16 dFTCaptainAnimCliffAttackSlow1_joint3[24];
extern u16 dFTCaptainAnimCliffAttackSlow1_joint5[36];
extern u16 dFTCaptainAnimCliffAttackSlow1_joint6[48];
extern u16 dFTCaptainAnimCliffAttackSlow1_joint7[24];
extern u16 dFTCaptainAnimCliffAttackSlow1_joint8[24];
extern u16 dFTCaptainAnimCliffAttackSlow1_joint11[44];
extern u16 dFTCaptainAnimCliffAttackSlow1_joint12[42];
extern u16 dFTCaptainAnimCliffAttackSlow1_joint13[22];
extern u16 dFTCaptainAnimCliffAttackSlow1_joint14[24];
extern u16 dFTCaptainAnimCliffAttackSlow1_joint15[10];
extern u16 dFTCaptainAnimCliffAttackSlow1_joint17[28];
extern u16 dFTCaptainAnimCliffAttackSlow1_joint18[52];
extern u16 dFTCaptainAnimCliffAttackSlow1_joint20[24];
extern u16 dFTCaptainAnimCliffAttackSlow1_joint22[34];
extern u16 dFTCaptainAnimCliffAttackSlow1_joint23[46];
extern u16 dFTCaptainAnimCliffAttackSlow1_joint25[64];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTCaptainAnimCliffAttackSlow1_joints[] = {
	(u32)dFTCaptainAnimCliffAttackSlow1_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimCliffAttackSlow1_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimCliffAttackSlow1_joint3, /* [2] joint 3 */
	(u32)dFTCaptainAnimCliffAttackSlow1_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTCaptainAnimCliffAttackSlow1_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimCliffAttackSlow1_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimCliffAttackSlow1_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimCliffAttackSlow1_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTCaptainAnimCliffAttackSlow1_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimCliffAttackSlow1_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimCliffAttackSlow1_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimCliffAttackSlow1_joint15, /* [14] joint 15 */
	(u32)dFTCaptainAnimCliffAttackSlow1_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTCaptainAnimCliffAttackSlow1_joint18, /* [17] joint 18 */
	(u32)dFTCaptainAnimCliffAttackSlow1_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTCaptainAnimCliffAttackSlow1_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTCaptainAnimCliffAttackSlow1_joint23, /* [22] joint 23 */
	(u32)dFTCaptainAnimCliffAttackSlow1_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	0xFFFF012C, /* [25] END */
};

/* Joint 1 */
u16 dFTCaptainAnimCliffAttackSlow1_joint1[16] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), -1358, 552, -303, 36,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 18), 0, 0, 0, 155, 0, 231,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimCliffAttackSlow1_joint2[26] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 13, 1665, -327, 244, -19,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 21), 120, -167,
	ftAnimSetValRateT(FT_ANIM_TRAX, 22), 82, -4,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 6), 1556, -241,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -241,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 12), 981, -131,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTCaptainAnimCliffAttackSlow1_joint3[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 87, 18, 0, 6, 0, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 362, -9, 138, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 312, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 393, 2,
	ftAnimBlock(0, 6),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimCliffAttackSlow1_joint5[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ), 134, 0, 0, 54,
	ftAnimSetValRate(FT_ANIM_TRAX), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 0, -5,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), 0, -7, 0, 12, 0, -15,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 12), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 12), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 0, -17,
	ftAnimBlock(0, 6),
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTCaptainAnimCliffAttackSlow1_joint6[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 20, 4, -56, -25, -118, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 172, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 118, -57, -462, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 55, -66, -474, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), -538, -43, -298, 26,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 247, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 540, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -580, -42, -275, 23, 536, -3,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTCaptainAnimCliffAttackSlow1_joint7[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -950, 25,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -1164, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1184, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1204, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1190, 14,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTCaptainAnimCliffAttackSlow1_joint8[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 727, -17, -9, -2, 69, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 8, -35, 8, -1, 8, -10,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 36), -781, -89, -388,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTCaptainAnimCliffAttackSlow1_joint11[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -178, 0, 0, 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 44, 7, -71, -22, -32, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -341, -17, 0, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -89, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -89, 3,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), -1, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -226, 0, -416, 69, 123, 0,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTCaptainAnimCliffAttackSlow1_joint12[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 40, -4, 25, 7, -81, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 17), -284, -30, 174, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -376, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -505, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -422, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -391, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -248, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -315, -31, 173, 0, -239, 8,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTCaptainAnimCliffAttackSlow1_joint13[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -939, 57,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -297, 282,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 148,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTCaptainAnimCliffAttackSlow1_joint14[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -176, -8, 135, -2, -49, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -223, 16, 116, 2, -71, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 125, 53, 187, 7, -71, 2,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTCaptainAnimCliffAttackSlow1_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	ftAnimBlock(0, 18),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimCliffAttackSlow1_joint17[28] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -78, 6, 6, 1, -13, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 250, 4, 58, 0, -178, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 18), 35, -6, 0, 4,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 36), 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTCaptainAnimCliffAttackSlow1_joint18[52] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -125, 8, -50, -15, -8, -54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -385, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 49, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 13), 67, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 70, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 84, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -412, -26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -460, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 59, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 70, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 84, 13, 92, 7, -480, -20,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTCaptainAnimCliffAttackSlow1_joint20[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 166, 149,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 889, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 912, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 972, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 959, -12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTCaptainAnimCliffAttackSlow1_joint22[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 27, 12, 48, 0, 219, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 17, -2, 86, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -13, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -34, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -39, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -37, 1, 15, -2, 79, -6,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTCaptainAnimCliffAttackSlow1_joint23[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 59, 12, 50, 13, 0, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -420, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), 10, -68, 474, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -61, -70, 471, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -262, -23, 380, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -531, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -821, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -279, -16, 356, -24, -896, -74,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTCaptainAnimCliffAttackSlow1_joint25[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 359, 47,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 803, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 833, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 1153, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1153, 0,
	ftAnimEnd(),
	0x0000, 0x200E, 0xFFF7, 0xFFFB, 0xFFDF, 0x0000, 0x005D, 0xFFF2, 0x280D, 0x0011, 0x0030, 0x0002, 0xFE46, 0xFFEC, 0x2003, 0x000A, 0x0007, 0xFFF0, 0x2003, 0x0001, 0xFFF7, 0xFFF1, 0x2003, 0x0006, 0x000A, 0x0027, 0x200F, 0x0001, 0x003B, 0x0030, 0x0032, 0x0001, 0xFE34, 0xFFEE, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
