/* AnimJoint data for relocData file 952 (FTDonkeyAnimFireFlowerShootAir) */
/* 2304 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimFireFlowerShootAir_joint1[40];
extern u16 dFTDonkeyAnimFireFlowerShootAir_joint2[34];
extern u16 dFTDonkeyAnimFireFlowerShootAir_joint4[44];
extern u16 dFTDonkeyAnimFireFlowerShootAir_joint5[126];
extern u16 dFTDonkeyAnimFireFlowerShootAir_joint6[48];
extern u16 dFTDonkeyAnimFireFlowerShootAir_joint7[36];
extern u16 dFTDonkeyAnimFireFlowerShootAir_joint8[36];
extern u16 dFTDonkeyAnimFireFlowerShootAir_joint10[36];
extern u16 dFTDonkeyAnimFireFlowerShootAir_joint11[90];
extern u16 dFTDonkeyAnimFireFlowerShootAir_joint12[40];
extern u16 dFTDonkeyAnimFireFlowerShootAir_joint13[36];
extern u16 dFTDonkeyAnimFireFlowerShootAir_joint14[16];
extern u16 dFTDonkeyAnimFireFlowerShootAir_joint16[34];
extern u16 dFTDonkeyAnimFireFlowerShootAir_joint17[138];
extern u16 dFTDonkeyAnimFireFlowerShootAir_joint19[32];
extern u16 dFTDonkeyAnimFireFlowerShootAir_joint21[102];
extern u16 dFTDonkeyAnimFireFlowerShootAir_joint22[96];
extern u16 dFTDonkeyAnimFireFlowerShootAir_joint24[32];
extern u16 dFTDonkeyAnimFireFlowerShootAir_joint25[86];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTDonkeyAnimFireFlowerShootAir_joints[] = {
	(AObjEvent32 *)dFTDonkeyAnimFireFlowerShootAir_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTDonkeyAnimFireFlowerShootAir_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTDonkeyAnimFireFlowerShootAir_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTDonkeyAnimFireFlowerShootAir_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTDonkeyAnimFireFlowerShootAir_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTDonkeyAnimFireFlowerShootAir_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTDonkeyAnimFireFlowerShootAir_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTDonkeyAnimFireFlowerShootAir_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTDonkeyAnimFireFlowerShootAir_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTDonkeyAnimFireFlowerShootAir_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTDonkeyAnimFireFlowerShootAir_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTDonkeyAnimFireFlowerShootAir_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTDonkeyAnimFireFlowerShootAir_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTDonkeyAnimFireFlowerShootAir_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTDonkeyAnimFireFlowerShootAir_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTDonkeyAnimFireFlowerShootAir_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTDonkeyAnimFireFlowerShootAir_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTDonkeyAnimFireFlowerShootAir_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTDonkeyAnimFireFlowerShootAir_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTDonkeyAnimFireFlowerShootAir_joint1[40] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 30, 949, -319,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 10), -847, -471,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 5), -24, -43, 784, -131,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 784, -25,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 5), -24,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -24, 765, -967,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), -24, 23, 784, 77, -847, 272,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 30, 949, -319,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTDonkeyAnimFireFlowerShootAir_joint2[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -257, -28, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -264, 0, 286, 32, -92, -7,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -264, 286, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -264, 0, 286, -15, -92, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -257, -28, 131,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTDonkeyAnimFireFlowerShootAir_joint4[44] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 791, 73, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 574, -17, 50, -2, 100, 17,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 574, 0, 50, 3, 100, -3,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 528, 69, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 574, 13, 50, 0, 100, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 791, 73, -78,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTDonkeyAnimFireFlowerShootAir_joint5[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -24, -70, -383, 16, -149, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -142, 184, -370, -42, -321, -415,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 176, 256, -411, 9, -899, -452,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1252, 38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 370, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -327, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -343, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -386, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1226, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1302, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 370, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 411, -22,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1294, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -550, 284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 370, -63,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -201, -14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -415, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -347, -20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -280, 213,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -132, -27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -188, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -43, 33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -368, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -379, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -24, 19, -383, -3, -149, -16,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimFireFlowerShootAir_joint6[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -727, -124,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1087, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1236, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -925, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -915, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -962, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -943, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1174, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1073, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -760, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -727, 33,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTDonkeyAnimFireFlowerShootAir_joint7[36] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -825, -308, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1302, -47, -66, 24, 294, 12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1302, -66, 294,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1302, -66, 294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1302, 31, -66, -16, 294, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -825, -308, 165,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTDonkeyAnimFireFlowerShootAir_joint8[36] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 393, 144, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 245, -14, -322, -46, 236, 16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 245, -322, 236,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 245, -322, 236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 245, 9, -322, 31, 236, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 393, 144, 74,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTDonkeyAnimFireFlowerShootAir_joint10[36] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -452, -206, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -398, 5, 70, 27, 29, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -398, 70, 29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -398, 70, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -398, -3, 70, -18, 29, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -452, -206, 75,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTDonkeyAnimFireFlowerShootAir_joint11[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1884, -15, -1993, 21, 1599, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1993, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 1725, 0, 1399, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1725, 0, 1399, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1726, 74, 1399, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1874, 93, 1495, 52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1399, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1732, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2013, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1926, -3,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1404, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1590, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1746, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1881, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1930, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -1987, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1884, 3, -1993, -5, 1599, 9,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimFireFlowerShootAir_joint12[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -826, -2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -833, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -833, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1066, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1100, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -879, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -833, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -825, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -826, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTDonkeyAnimFireFlowerShootAir_joint13[36] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 893, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 962, 6, 431, 43, 256, 25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 962, 431, 256,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 962, 431, 256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 962, -4, 431, -28, 256, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 893, 0, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTDonkeyAnimFireFlowerShootAir_joint14[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -893,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1340, 2502, 120, 120, 180,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), -777,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), -893,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTDonkeyAnimFireFlowerShootAir_joint16[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 268, 714, 1072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -404, -90, 0, -59, 0, -89,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -814, -68,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -948, 60, 0, 39, 0, 59,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 268, 714, 1072,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimFireFlowerShootAir_joint17[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -278, -11, -14, -12, -196, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -275, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -614, -187, 53, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -801, -129, 201, 110,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 275, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -777, -25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -290, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -335, 62,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 261, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -852, -36, -198, 70, 30, -113,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -219, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -854, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 34, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 246, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -233, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -155, 46,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -865, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -285, 19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 224, -43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -139, -36,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -111, 39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -19, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -274, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -276, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -171, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -190, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -278, -1, -14, 4, -196, -6,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimFireFlowerShootAir_joint19[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 651, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 701, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 731, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 892, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 894, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 664, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 651, -12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTDonkeyAnimFireFlowerShootAir_joint21[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -4, -3, 0, -1, 105, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -17, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 105, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 115, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 152, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 151, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 140, 72, 0, 52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 276, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 296, 103, 174, 94,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 346, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 348, 51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 449, -56,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 274, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 3, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 334, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 107, -4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 371, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -62, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -43, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -10, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4, 5, 0, -2, 105, -2,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimFireFlowerShootAir_joint22[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1769, 7, 1418, -12, -2336, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -1543, 236, 1116, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -2312, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2265, 142,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1729, 208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1205, 349, 979, -68,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -679, 94,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1094, 23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1611, 59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1674, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -654, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -725, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -868, -414, 1115, 14, -1776, -369,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 1417, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1554, -368, -2414, -335,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1606, -47, -2447, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 17), -1770, 1, -2338, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1769, 0, 1418, 1, -2336, 2,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimFireFlowerShootAir_joint24[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1071, -10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 592, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 542, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 727, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 756, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 1070, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1071, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTDonkeyAnimFireFlowerShootAir_joint25[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -69, -30, -179, 4, 127, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 352, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -16, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -549, -198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -737, -140,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -623, 184,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, -37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -23, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -378, 156,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -237, 22,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -29, -13, -33, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -178, -1, 125, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -213, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), -80, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -72, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -69, 2, -179, 0, 127, 1,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
