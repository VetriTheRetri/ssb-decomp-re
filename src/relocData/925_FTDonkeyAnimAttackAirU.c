/* AnimJoint data for relocData file 925 (FTDonkeyAnimAttackAirU) */
/* 2784 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimAttackAirU_joint1[16];
extern u16 dFTDonkeyAnimAttackAirU_joint2[54];
extern u16 dFTDonkeyAnimAttackAirU_joint4[48];
extern u16 dFTDonkeyAnimAttackAirU_joint5[156];
extern u16 dFTDonkeyAnimAttackAirU_joint6[64];
extern u16 dFTDonkeyAnimAttackAirU_joint7[16];
extern u16 dFTDonkeyAnimAttackAirU_joint8[16];
extern u16 dFTDonkeyAnimAttackAirU_joint10[42];
extern u16 dFTDonkeyAnimAttackAirU_joint11[152];
extern u16 dFTDonkeyAnimAttackAirU_joint12[48];
extern u16 dFTDonkeyAnimAttackAirU_joint13[34];
extern u16 dFTDonkeyAnimAttackAirU_joint14[8];
extern u16 dFTDonkeyAnimAttackAirU_joint16[26];
extern u16 dFTDonkeyAnimAttackAirU_joint17[142];
extern u16 dFTDonkeyAnimAttackAirU_joint19[48];
extern u16 dFTDonkeyAnimAttackAirU_joint21[138];
extern u16 dFTDonkeyAnimAttackAirU_joint22[138];
extern u16 dFTDonkeyAnimAttackAirU_joint24[40];
extern u16 dFTDonkeyAnimAttackAirU_joint25[156];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTDonkeyAnimAttackAirU_joints[] = {
	(u32)dFTDonkeyAnimAttackAirU_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimAttackAirU_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimAttackAirU_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTDonkeyAnimAttackAirU_joint5, /* [4] joint 5 */
	(u32)dFTDonkeyAnimAttackAirU_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimAttackAirU_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimAttackAirU_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimAttackAirU_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTDonkeyAnimAttackAirU_joint11, /* [10] joint 11 */
	(u32)dFTDonkeyAnimAttackAirU_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimAttackAirU_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimAttackAirU_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimAttackAirU_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTDonkeyAnimAttackAirU_joint17, /* [16] joint 17 */
	(u32)dFTDonkeyAnimAttackAirU_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTDonkeyAnimAttackAirU_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTDonkeyAnimAttackAirU_joint22, /* [21] joint 22 */
	(u32)dFTDonkeyAnimAttackAirU_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTDonkeyAnimAttackAirU_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTDonkeyAnimAttackAirU_joint1[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 30, 949, -319,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), -397, 785, -327,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 40), 30, 949, -319,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTDonkeyAnimAttackAirU_joint2[54] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -245, 10, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -122, 11, -289, 2, 199, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 13), -72, 2, 43, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 291, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 264, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 229, 0, 122, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -78, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -262, -4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 182, -6, -48, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), -245, 10, 156,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTDonkeyAnimAttackAirU_joint4[48] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 791, 73, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 726, -13, 134, 27, 229, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 586, -33, 492, 29, -118, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 163, 1, 636, -2, -434, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 625, 22, 440, -14, 47, 9,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 25), 791, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), 315, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 15), 73,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimAttackAirU_joint5[156] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -24, 113, -382, -3, -149, -270,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 262, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -386, 54, -419, -352,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -274, 35, -855, -256,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -466, -157, -1046, -432,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 234, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 285, 440,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1115, 638, -629, -2, -1798, -560,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1688, 28, -2325, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -472, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -426, 34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -467, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1703, 4, -2375, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1642, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -2353, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2373, -80,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -3213, -102,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1787, 157,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 2651, 76,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -438, 36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -241, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3291, -61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -3523, -33,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2727, 74,
	ftAnimSetValRateT(FT_ANIM_ROTX, 34), 3193, -1,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3555, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 27), -3367, 2,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -244, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 19), -381, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3192, 0, -382, 0, -3366, 1,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimAttackAirU_joint6[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -728, -61,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -789, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -606, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -733, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -748, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -247, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -151, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -591, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -634, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -442, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -429, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -313, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -337, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -726, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -728, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTDonkeyAnimAttackAirU_joint7[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -825, -308, 166,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, -36, -183,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 54), -825, -308, 166,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimAttackAirU_joint8[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 393, 144, 74,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -199, -78, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 54), 393, 144, 74,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTDonkeyAnimAttackAirU_joint10[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -452, -206, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 35, -17, 524, 47, 41, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -747, -20, 596, -7, -528, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -494, 12, 337, -14, -367, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -372, 1, 146, -19, -87, 15,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -452, -206, 75,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTDonkeyAnimAttackAirU_joint11[152] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 276, -16, 385, 43, -8, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 584, 212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 259, -24, 17, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 228, -372, 129, -198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -485, -181, 855, 200, -378, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1038, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -135, 196, 89, 271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -28, 79, 209, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 66, 99, 265, 62,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), 585, 5, 563, -13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1051, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1194, -9,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 589, 3, 548, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 1003, 40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 853, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1185, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 1587, -14,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1040, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 1461, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 878, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 1310, 69,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1570, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1203, -11,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1540, 78, 1380, 67,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 1879, 10, 1599, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1197, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 1222, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1885, 5, 1222, 0, 1600, 1,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimAttackAirU_joint12[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -825, 4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -341, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -293, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -712, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -731, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -646, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -652, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -857, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -841, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -830, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -825, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTDonkeyAnimAttackAirU_joint13[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 893, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 802, -15, 408, 3, 199, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 439, -6, 92, -5, 313, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 505, 15, 158, -3, 225, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 893, 0, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTDonkeyAnimAttackAirU_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -893, -1340, 2502,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTDonkeyAnimAttackAirU_joint16[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 268, 714, 1072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -721, -46, -187, -27, -33, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), -853, 18, 46, 16, 253, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 36), 268, 714, 1072,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimAttackAirU_joint17[142] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -280, 3, -18, -57, -202, -96,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -687, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -24, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -232, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -270, -62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -687, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -692, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -180, 401,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -77, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -531, -399,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1047, -371, 310, 320,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 442, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1391, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -605, 74,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -377, 24,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 443, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 414, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1359, 43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -412, 21,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -359, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), -139, 20,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 423, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 86, -38,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -392, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), -279, 0,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -119, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -18, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 48, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -201, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -280, 0, -18, 0, -202, -1,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimAttackAirU_joint19[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 665, 37,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 716, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 699, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 577, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 461, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 287, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 263, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 28), 737, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 733, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 666, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 665, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTDonkeyAnimAttackAirU_joint21[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -12, 4, -17, -57, 112, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 375, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -180, -130, -50, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -317, -113, 21, 70,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -234, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 426, 17,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 377, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 570, 116,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -245, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 199, 57,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 689, 82,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 280, -50,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 226, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -397, 18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 438, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -35, -5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 239, -39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), -153, 10,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -37, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), -18, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -374, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 14, -1,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -141, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 110, 4,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 12, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -11, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -12, 0, -17, 0, 112, 2,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimAttackAirU_joint22[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -167, 103, 177, -32, 2497, -92,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 79, -112,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2424, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 57, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -36, -119,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -341, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -68, -102,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 36, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2525, 89,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 2452, -8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -328, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 144, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 55, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 320, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 355, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 365, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2443, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 2404, -28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 127, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), -15, -12,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2382, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 2521, 5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 354, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), 177, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2526, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), 2498, 0,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -29, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), -166, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -167, -1, 177, 0, 2497, 0,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimAttackAirU_joint24[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1064, -47,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 953, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 972, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 967, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 924, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 958, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 962, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), 1064, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1064, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTDonkeyAnimAttackAirU_joint25[156] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1560, -83, 1777, -3, 1729, 98,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1845, -109,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1529, -266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1477, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1283, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1795, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1609, -185,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1620, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1201, -223,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1282, 50,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1904, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1719, -41,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1601, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 1359, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1307, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1284, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1697, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 1228, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1167, -47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1141, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1300, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1326, -28,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1378, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1575, 36,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1133, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 31), 1559, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1301, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1601, 19,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1610, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 27), 1729, 0,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1620, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 14), 1776, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1560, 1, 1777, 0, 1729, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
