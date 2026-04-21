/* AnimJoint data for relocData file 727 (FTFoxAnimCliffAttackSlow1) */
/* 2240 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimCliffAttackSlow1_joint1[24];
extern u16 dFTFoxAnimCliffAttackSlow1_joint2[20];
extern u16 dFTFoxAnimCliffAttackSlow1_joint3[16];
extern u16 dFTFoxAnimCliffAttackSlow1_joint5[24];
extern u16 dFTFoxAnimCliffAttackSlow1_joint6[84];
extern u16 dFTFoxAnimCliffAttackSlow1_joint7[28];
extern u16 dFTFoxAnimCliffAttackSlow1_joint8[10];
extern u16 dFTFoxAnimCliffAttackSlow1_joint9[30];
extern u16 dFTFoxAnimCliffAttackSlow1_joint11[10];
extern u16 dFTFoxAnimCliffAttackSlow1_joint12[112];
extern u16 dFTFoxAnimCliffAttackSlow1_joint13[44];
extern u16 dFTFoxAnimCliffAttackSlow1_joint14[90];
extern u16 dFTFoxAnimCliffAttackSlow1_joint16[10];
extern u16 dFTFoxAnimCliffAttackSlow1_joint17[96];
extern u16 dFTFoxAnimCliffAttackSlow1_joint19[32];
extern u16 dFTFoxAnimCliffAttackSlow1_joint21[98];
extern u16 dFTFoxAnimCliffAttackSlow1_joint22[124];
extern u16 dFTFoxAnimCliffAttackSlow1_joint24[38];
extern u16 dFTFoxAnimCliffAttackSlow1_joint25[104];
extern u16 dFTFoxAnimCliffAttackSlow1_joint26[34];
extern u16 dFTFoxAnimCliffAttackSlow1_joint27[38];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTFoxAnimCliffAttackSlow1_joints[] = {
	(u32)dFTFoxAnimCliffAttackSlow1_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimCliffAttackSlow1_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimCliffAttackSlow1_joint3, /* [2] joint 3 */
	(u32)dFTFoxAnimCliffAttackSlow1_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTFoxAnimCliffAttackSlow1_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimCliffAttackSlow1_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimCliffAttackSlow1_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimCliffAttackSlow1_joint9, /* [8] joint 9 */
	(u32)dFTFoxAnimCliffAttackSlow1_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTFoxAnimCliffAttackSlow1_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimCliffAttackSlow1_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimCliffAttackSlow1_joint14, /* [13] joint 14 */
	(u32)dFTFoxAnimCliffAttackSlow1_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTFoxAnimCliffAttackSlow1_joint17, /* [16] joint 17 */
	(u32)dFTFoxAnimCliffAttackSlow1_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTFoxAnimCliffAttackSlow1_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTFoxAnimCliffAttackSlow1_joint22, /* [21] joint 22 */
	(u32)dFTFoxAnimCliffAttackSlow1_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTFoxAnimCliffAttackSlow1_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimCliffAttackSlow1_joint26, /* [25] joint 26 */
	(u32)dFTFoxAnimCliffAttackSlow1_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTFoxAnimCliffAttackSlow1_joint1[24] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), -1320, -240,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 14), -240,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 7), -1080, 335,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 7), -720, 604,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 7), 0, 376,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 7), 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimCliffAttackSlow1_joint2[20] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY), 60, 912,
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 14), 912,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 7), 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 7), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 7), 0, 552,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTFoxAnimCliffAttackSlow1_joint3[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 357,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 536,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 268, -35,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimCliffAttackSlow1_joint5[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, -178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 178, 25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 357, 37, -178, 18,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 714, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTFoxAnimCliffAttackSlow1_joint6[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 622, -175, -1087, 85, -707, 157,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -974, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 447, -390, -550, 378,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -158, -469, 48, 475,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -727, -132, 686, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1121, -154,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1669, -29,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -872, -119, 784, 69,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -994, 2, 852, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1683, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1602, 4,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -994, 4, 853, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -852, -21, 771, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -893, -40, -1600, 2, 797, 26,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimCliffAttackSlow1_joint7[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1263, 94,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -649, 280,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -380, 261,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 12), -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimCliffAttackSlow1_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 21),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTFoxAnimCliffAttackSlow1_joint9[30] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 111,
	ftAnimSetValRate(FT_ANIM_ROTX), -178, 23,
	ftAnimSetValBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 7), -178,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 14), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 7), -178,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 7), -178,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTFoxAnimCliffAttackSlow1_joint11[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 21),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimCliffAttackSlow1_joint12[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -984, -7, 312, 16, -1504, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1533, -198,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 204, -200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -2023, -214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2252, -224,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2681, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1733, -192,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2440, -212,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5, -80, -2553, 133,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2410, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 649, 12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2639, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2795, -317, -2455, -250,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -3373, -318,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3273, -458,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3713, -286, 534, -167,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 105, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3846, -84, -3547, -130,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -3891, 8, -3691, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 62, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 15, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3878, 13, 7, -7, -3674, 17,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimCliffAttackSlow1_joint13[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -809, -15,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1068, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1133, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1198, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1048, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -297, 305,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTFoxAnimCliffAttackSlow1_joint14[90] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -89, 0, 536,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 272, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -173, -1, 0, -1, 714, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -99, 118, -9, 0, 660, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 63, 208, 0, 11, 596, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 317, 198, 14, 28, 540, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 461, 227, 56, 21, 437, -182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 470, 9, 46, 32, 256, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 564, 64, 101, 48, 166, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 598, 61, 142, 103, 89, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 804, 25, 268, 21, 0, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 804, 12, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), 357,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimCliffAttackSlow1_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 21),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTFoxAnimCliffAttackSlow1_joint17[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 58, -76, -266, -1, 25, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -112, -106,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -496, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -230, -193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -403, -119,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -353, 246,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -278, -280,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 24, 281, -576, -31, -673, -282,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 231, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -372, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -843, -78,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -688, 57,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 258, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 80, -97,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -631, 52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -224, 154,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -401, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -562, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -37, -118, -569, -6, -42, 182,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTFoxAnimCliffAttackSlow1_joint19[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 5, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 5, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 273, 249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 908, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 867, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 369, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 292, -77,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTFoxAnimCliffAttackSlow1_joint21[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -31, 101, -94, -47, 397, -71,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -151, 54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -108, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 69, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 284, 116,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 307, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -33, 94,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 153, 165,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 320, -70,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -56, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 368, 141, -160, -68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 111, -71,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -247, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -77, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -299, 5,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 50, -45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 33, -36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -289, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -409, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -422, -12, -9, -42, -253, -6,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTFoxAnimCliffAttackSlow1_joint22[124] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4095,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1741, -16, 1811, -42, 1630, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4095,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 1717, 4, 1700, 7,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 14), 4095,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 1141, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1016, -86,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1129, 48,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1725, -52, 1695, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1580, 9, 1437, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1632, 68, 1419, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1500, 98,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2136, 248,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1184, 82,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1293, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1641, 69,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1672, 19,
	ftAnimSetValRateT(FT_ANIM_SCAX, 7), 4095, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2444, 154,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2440, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1259, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1196, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2431, -14, 1696, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2411, -318, 1735, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1793, -618, 1415, 219, 1408, -327,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTFoxAnimCliffAttackSlow1_joint24[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 5, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 266, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 98, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 375, 242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 941, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1086, 145,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimCliffAttackSlow1_joint25[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -190, -16, 7, 15, 449, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 221, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 75, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -186, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -31, 112,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -362, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 226, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 31, 81,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 27, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -166, -104,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -428, -62, 172, 72,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -428, 86,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -325, -141,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -292, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -139, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -312, 57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -408, -50,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -226, -96, -475, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -415, -65, -332, 166, -664, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -539, -124, 107, 439, -761, -97,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimCliffAttackSlow1_joint26[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -761, 78, -549,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -126, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -721, 7, 0, 7, 0, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -638, 4, 194, 11, -289, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -659, 20, 158, -24, -355, 36,
	ftAnimEnd(),
	0x0000,
};

/* Joint 27 */
u16 dFTFoxAnimCliffAttackSlow1_joint27[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 50, 282, -178,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 64, -450,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 26, -3, -366, -41, -183, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -5, -386, 70, -161, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -29, -61, 338, 64, -171, -2,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
