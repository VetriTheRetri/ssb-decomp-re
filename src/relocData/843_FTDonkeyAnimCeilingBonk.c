/* AnimJoint data for relocData file 843 (FTDonkeyAnimCeilingBonk) */
/* 1424 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimCeilingBonk_joint1[42];
extern u16 dFTDonkeyAnimCeilingBonk_joint2[26];
extern u16 dFTDonkeyAnimCeilingBonk_joint4[10];
extern u16 dFTDonkeyAnimCeilingBonk_joint5[68];
extern u16 dFTDonkeyAnimCeilingBonk_joint6[36];
extern u16 dFTDonkeyAnimCeilingBonk_joint7[8];
extern u16 dFTDonkeyAnimCeilingBonk_joint8[54];
extern u16 dFTDonkeyAnimCeilingBonk_joint10[8];
extern u16 dFTDonkeyAnimCeilingBonk_joint11[56];
extern u16 dFTDonkeyAnimCeilingBonk_joint12[28];
extern u16 dFTDonkeyAnimCeilingBonk_joint13[8];
extern u16 dFTDonkeyAnimCeilingBonk_joint14[8];
extern u16 dFTDonkeyAnimCeilingBonk_joint16[16];
extern u16 dFTDonkeyAnimCeilingBonk_joint17[64];
extern u16 dFTDonkeyAnimCeilingBonk_joint19[36];
extern u16 dFTDonkeyAnimCeilingBonk_joint21[44];
extern u16 dFTDonkeyAnimCeilingBonk_joint22[64];
extern u16 dFTDonkeyAnimCeilingBonk_joint24[32];
extern u16 dFTDonkeyAnimCeilingBonk_joint25[54];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTDonkeyAnimCeilingBonk_joints[] = {
	(u32)dFTDonkeyAnimCeilingBonk_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimCeilingBonk_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimCeilingBonk_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTDonkeyAnimCeilingBonk_joint5, /* [4] joint 5 */
	(u32)dFTDonkeyAnimCeilingBonk_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimCeilingBonk_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimCeilingBonk_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimCeilingBonk_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTDonkeyAnimCeilingBonk_joint11, /* [10] joint 11 */
	(u32)dFTDonkeyAnimCeilingBonk_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimCeilingBonk_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimCeilingBonk_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimCeilingBonk_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTDonkeyAnimCeilingBonk_joint17, /* [16] joint 17 */
	(u32)dFTDonkeyAnimCeilingBonk_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTDonkeyAnimCeilingBonk_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTDonkeyAnimCeilingBonk_joint22, /* [21] joint 22 */
	(u32)dFTDonkeyAnimCeilingBonk_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTDonkeyAnimCeilingBonk_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTDonkeyAnimCeilingBonk_joint1[42] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAY), 949, -319, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAZ), 30, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAY, 3), 3078,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1302, 950, -344, -229,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), 1424, -403,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), -376, -86,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 2), -376, 76,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAY, 5), 4096,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 949, -319,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTDonkeyAnimCeilingBonk_joint2[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -257, -28, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -179, 19, -53, -6, 131, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -179, -13, -53, 4, 131, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -257, -28, 131,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTDonkeyAnimCeilingBonk_joint4[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 791, 73, -78, 4096, 4096, 4096,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimCeilingBonk_joint5[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -24, -259, -383, -189, -149, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -284, -339, -572, -279, -57, 179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -703, -208, -941, -236, 208, 123,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 151, -66,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -709, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -701, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -654, 96,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -111, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 58, -80,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -101, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -549, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -434, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -24, 87, -383, 50, -149, -47,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimCeilingBonk_joint6[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -727, -31,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -758, 225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -276, 332,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -93, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -370, -272,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -798, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -781, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -727, 54,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTDonkeyAnimCeilingBonk_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -825, -308, 165,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimCeilingBonk_joint8[54] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 1354, 213,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 393, 144, 74,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 608, 100, 153,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -22, -82, 1275, -246, 397, 672,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -20, 4, 1293, 46, 381, -42,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -20, 27, 1293, 82, 381, -224,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 608, 100, 153,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 1354, 213,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 393, 144, 74,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTDonkeyAnimCeilingBonk_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -452, -206, 75,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTDonkeyAnimCeilingBonk_joint11[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1332, 413, 1223, -133, -1617, 331,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1179, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -918, 521, -1285, 414,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -288, 365, -787, 285,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1040, -228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -331, -201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -590, -299,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1232, -201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1293, -245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1532, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1332, -99, 1223, 44, -1617, -84,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimCeilingBonk_joint12[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -826, -64,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -891, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -631, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -908, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -878, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -826, 51,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTDonkeyAnimCeilingBonk_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 893, 0, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTDonkeyAnimCeilingBonk_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -893, -1340, 2502,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTDonkeyAnimCeilingBonk_joint16[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -404,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -404, 72,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), -112,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), -404,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimCeilingBonk_joint17[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -278, 53, -14, -123, -196, -154,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -262, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -224, 152, -351, -226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 25, 170, -649, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 116, -54, -668, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -84, -38, -451, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 39, 20, -595, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -42, -136, -555, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -232, -118, -122, 124, -318, 179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -278, -46, -14, 108, -196, 121,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimCeilingBonk_joint19[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 651, 162,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 872, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 565, -342,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 188, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 511, 300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 789, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 765, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 651, -113,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTDonkeyAnimCeilingBonk_joint21[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -4, -47, 0, 0, 105, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 137, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -299, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -239, 69,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -53, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 100, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 99, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4, 48, 0, 0, 105, 5,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimCeilingBonk_joint22[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -160, -76, 189, -25, -727, -137,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1066, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -318, 32, 148, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -171, 198, 335, 143,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 341, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 77, 4, -928, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -962, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -162, -184,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -225, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 191, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 178, 0, -832, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -160, 64, 189, 10, -727, 105,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimCeilingBonk_joint24[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1071, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 932, -218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 633, -264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 404, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 602, 242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1046, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1071, 24,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTDonkeyAnimCeilingBonk_joint25[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1678, 63, 1787, 3, -1480, -37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1476, 34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1789, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1615, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1513, -50,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1913, 31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1467, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1495, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1654, 188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1625, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1678, -52, 1787, -1, -1480, 14,
	ftAnimEnd(),
};
