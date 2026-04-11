/* AnimJoint data for relocData file 896 (FTDonkeyAnimItemThrowAirSmashB) */
/* 2048 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimItemThrowAirSmashB_joint1[22];
extern u16 dFTDonkeyAnimItemThrowAirSmashB_joint2[26];
extern u16 dFTDonkeyAnimItemThrowAirSmashB_joint4[40];
extern u16 dFTDonkeyAnimItemThrowAirSmashB_joint5[74];
extern u16 dFTDonkeyAnimItemThrowAirSmashB_joint6[32];
extern u16 dFTDonkeyAnimItemThrowAirSmashB_joint7[8];
extern u16 dFTDonkeyAnimItemThrowAirSmashB_joint8[34];
extern u16 dFTDonkeyAnimItemThrowAirSmashB_joint10[8];
extern u16 dFTDonkeyAnimItemThrowAirSmashB_joint11[110];
extern u16 dFTDonkeyAnimItemThrowAirSmashB_joint12[56];
extern u16 dFTDonkeyAnimItemThrowAirSmashB_joint13[34];
extern u16 dFTDonkeyAnimItemThrowAirSmashB_joint14[10];
extern u16 dFTDonkeyAnimItemThrowAirSmashB_joint16[34];
extern u16 dFTDonkeyAnimItemThrowAirSmashB_joint17[96];
extern u16 dFTDonkeyAnimItemThrowAirSmashB_joint19[40];
extern u16 dFTDonkeyAnimItemThrowAirSmashB_joint21[100];
extern u16 dFTDonkeyAnimItemThrowAirSmashB_joint22[96];
extern u16 dFTDonkeyAnimItemThrowAirSmashB_joint24[154];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTDonkeyAnimItemThrowAirSmashB_joints[] = {
	(u32)dFTDonkeyAnimItemThrowAirSmashB_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimItemThrowAirSmashB_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimItemThrowAirSmashB_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTDonkeyAnimItemThrowAirSmashB_joint5, /* [4] joint 5 */
	(u32)dFTDonkeyAnimItemThrowAirSmashB_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimItemThrowAirSmashB_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimItemThrowAirSmashB_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimItemThrowAirSmashB_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTDonkeyAnimItemThrowAirSmashB_joint11, /* [10] joint 11 */
	(u32)dFTDonkeyAnimItemThrowAirSmashB_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimItemThrowAirSmashB_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimItemThrowAirSmashB_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimItemThrowAirSmashB_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTDonkeyAnimItemThrowAirSmashB_joint17, /* [16] joint 17 */
	(u32)dFTDonkeyAnimItemThrowAirSmashB_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTDonkeyAnimItemThrowAirSmashB_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTDonkeyAnimItemThrowAirSmashB_joint22, /* [21] joint 22 */
	(u32)dFTDonkeyAnimItemThrowAirSmashB_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF01C7, /* [24] END */
};

/* Joint 1 */
u16 dFTDonkeyAnimItemThrowAirSmashB_joint1[22] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAZ), 30, -319,
	ftAnimSetValAfterBlock(FT_ANIM_TRAY), 949,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), -24, -558, -71, 672,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 4), -388, 19, 184, -90,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 18), 30, -319,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTDonkeyAnimItemThrowAirSmashB_joint2[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -257, -28, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -424, 2, -889, 25, 148, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -243, 7, 123, 39, 62, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), -257, -28, 131,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTDonkeyAnimItemThrowAirSmashB_joint4[40] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 791, 73, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 745, -4, -3, 2, -207, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 773, 12, 81, 31, 119, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 794, 0, 121, 0, 245, 69,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 18), 791, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 468, -18,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 15), -78,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimItemThrowAirSmashB_joint5[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -24, 71, -383, 31, -149, -72,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 164, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -425, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -365, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -386, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -202, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 171, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -142, -118,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -444, -10, -77, 116,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -62, -68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -390, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -256, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -114, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -49, 45, -124, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -24, 25, -383, 7, -149, -25,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimItemThrowAirSmashB_joint6[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -727, -74,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -686, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -713, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -615, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -624, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -732, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -727, 5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTDonkeyAnimItemThrowAirSmashB_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -825, -308, 165,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimItemThrowAirSmashB_joint8[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 393, 144, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -83, -51, 244, -77, -548, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 84, 6, -319, -28, 211, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -6, 17, -97, 25, 209, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 393, 144, 74,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTDonkeyAnimItemThrowAirSmashB_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -452, -206, 75,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTDonkeyAnimItemThrowAirSmashB_joint11[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 276, -48, 384, -100, 3208, -53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 423, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 234, 177, 3220, 217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 582, 289, 3588, 255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 812, 480, 3730, 428,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1544, 656, 646, -27, 4445, 663,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2126, 363, 368, -149, 5058, 370,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2271, 84, 348, -19, 5185, 111,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 281, 91,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 5681, 192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 2202, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2225, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 3058, 183,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 371, 79,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 392, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5892, 212,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 6410, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3238, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 3482, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3493, 10, 384, -8, 6425, 14,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimItemThrowAirSmashB_joint12[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -826, -38,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -933, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -900, 215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -503, 202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -495, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -403, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -493, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -389, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -292, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -779, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -834, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -834, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -826, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTDonkeyAnimItemThrowAirSmashB_joint13[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 893, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 2010, 125, -189, 11, 575, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1644, -154, 68, -20, 591, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1392, -41, -272, -3, -130, -32,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 893, 0, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTDonkeyAnimItemThrowAirSmashB_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -893, -1340, 2502, 120, 120, 120,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTDonkeyAnimItemThrowAirSmashB_joint16[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 268, 714, 1072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -818, -142, -334, -170, 45, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -731, -69, -481, 66, -237, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -1788, 58, 599, 70, -834, 77,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 268, 714, 1072,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimItemThrowAirSmashB_joint17[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1887, 228, -1593, 193, 1411, -73,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1648, 340,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1658, -5, -1399, 505,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1898, -225, -583, 384,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2108, -355, -631, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2608, -430, -660, 31, 2137, 428,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -253, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -3059, -34, 2621, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3040, 14, 2614, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -3470, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 3015, 9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -230, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -29, 13,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3482, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -3494, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -18, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3495, -1, -14, 3, 3020, 4,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimItemThrowAirSmashB_joint19[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 651, 327,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 979, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 896, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 639, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 673, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 883, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 894, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 657, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 651, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTDonkeyAnimItemThrowAirSmashB_joint21[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -4, -257, 0, 85, 105, -188,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 260, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -261, -136, -83, -225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -276, -82, -345, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -454, 14, -300, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -397, 70, -189, 150,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -71, 21, 438, 46,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 233, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 202, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -63, 14, 457, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 199, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 39, -15,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 161, -41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 6, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 172, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 108, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 24, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -2, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4, -1, 0, -5, 105, -3,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimItemThrowAirSmashB_joint22[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -160, 22, 189, 41, -727, 120,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 189, 147, 309, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -545, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -617, -51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -704, -97,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 334, 74, 372, 49,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 70, -327, 221, -223,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -827, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -316, -197, -38, -129, -718, 54,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -311, 16, -28, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -718, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -741, 12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -291, 21, -16, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 11), -162, 2, 185, 7,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -731, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -160, 1, 189, 3, -727, 3,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimItemThrowAirSmashB_joint24[154] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1071, -138,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 785, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 852, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 942, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 750, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 747, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 797, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1069, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1071, 2,
	ftAnimEnd(),
	0x0000, 0x200E, 0xFFBB, 0x005C, 0xFF4D, 0xFFB0, 0x007F, 0x005E, 0x2805, 0x0002, 0xFE4C, 0xFF6F, 0x200B, 0x0001, 0x0016, 0x006D, 0x00DD, 0x00B6, 0x200B, 0x0001, 0x0095, 0xFF53, 0x01EC, 0xFFDE, 0x200F, 0x0001, 0xFEBB, 0xFF54, 0xFDDB, 0x005F, 0x0099, 0xFE30, 0x200F, 0x0001, 0xFF3C, 0xFFC6, 0xFF0A, 0x00F8, 0xFE4B, 0xFEB3, 0x200F, 0x0001, 0xFE45, 0xFF74, 0xFFCC, 0x0081, 0xFDFF, 0xFFDC, 0x2805, 0x0006, 0xFFFE, 0xFFE5, 0x200B, 0x0001, 0xFE24, 0x0041, 0xFE01, 0x0032, 0x2809, 0x0002, 0xFF83, 0x00FD, 0x2003, 0x0001, 0xFEC8, 0x0092, 0x2003, 0x0001, 0xFF49, 0x00BD, 0x200B, 0x0001, 0x0042, 0x0083, 0x005E, 0x007E, 0x2809, 0x0003, 0x00A2, 0x0008, 0x2003, 0x0001, 0x004F, 0x0005, 0x2803, 0x000D, 0xFFBD, 0xFFFC, 0x0801, 0x0001, 0x2005, 0x0001, 0xFFE4, 0xFFE7, 0x2805, 0x000B, 0xFF4E, 0xFFFE, 0x2009, 0x0001, 0x00A7, 0x0003, 0x2009, 0x000A, 0x0080, 0xFFFF, 0x200F, 0x0001, 0xFFBB, 0xFFFE, 0xFF4D, 0xFFFF, 0x007F, 0x0000, 0x0000,
};
