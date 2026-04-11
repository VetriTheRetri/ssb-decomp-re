/* AnimJoint data for relocData file 740 (FTFoxAnimItemThrowAirSmashU) */
/* 2640 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimItemThrowAirSmashU_joint1[10];
extern u16 dFTFoxAnimItemThrowAirSmashU_joint2[30];
extern u16 dFTFoxAnimItemThrowAirSmashU_joint4[40];
extern u16 dFTFoxAnimItemThrowAirSmashU_joint5[162];
extern u16 dFTFoxAnimItemThrowAirSmashU_joint6[88];
extern u16 dFTFoxAnimItemThrowAirSmashU_joint7[10];
extern u16 dFTFoxAnimItemThrowAirSmashU_joint8[32];
extern u16 dFTFoxAnimItemThrowAirSmashU_joint10[10];
extern u16 dFTFoxAnimItemThrowAirSmashU_joint11[170];
extern u16 dFTFoxAnimItemThrowAirSmashU_joint12[70];
extern u16 dFTFoxAnimItemThrowAirSmashU_joint13[54];
extern u16 dFTFoxAnimItemThrowAirSmashU_joint15[10];
extern u16 dFTFoxAnimItemThrowAirSmashU_joint16[96];
extern u16 dFTFoxAnimItemThrowAirSmashU_joint18[14];
extern u16 dFTFoxAnimItemThrowAirSmashU_joint20[126];
extern u16 dFTFoxAnimItemThrowAirSmashU_joint21[124];
extern u16 dFTFoxAnimItemThrowAirSmashU_joint23[56];
extern u16 dFTFoxAnimItemThrowAirSmashU_joint24[108];
extern u16 dFTFoxAnimItemThrowAirSmashU_joint25[58];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimItemThrowAirSmashU_joints[] = {
	(u32)dFTFoxAnimItemThrowAirSmashU_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimItemThrowAirSmashU_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimItemThrowAirSmashU_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimItemThrowAirSmashU_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimItemThrowAirSmashU_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimItemThrowAirSmashU_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimItemThrowAirSmashU_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimItemThrowAirSmashU_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimItemThrowAirSmashU_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimItemThrowAirSmashU_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimItemThrowAirSmashU_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimItemThrowAirSmashU_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimItemThrowAirSmashU_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimItemThrowAirSmashU_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimItemThrowAirSmashU_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimItemThrowAirSmashU_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimItemThrowAirSmashU_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimItemThrowAirSmashU_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimItemThrowAirSmashU_joint25, /* [24] joint 25 */
	0xFFFF027C, /* [25] END */
};

/* Joint 1 */
u16 dFTFoxAnimItemThrowAirSmashU_joint1[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 960, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimItemThrowAirSmashU_joint2[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -357, 29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 0, 29, 178, 59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 178, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 89,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), 0, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTFoxAnimItemThrowAirSmashU_joint4[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -268, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -357, 44, 357, -44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 39, 0, 39, -268, -39,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, -14, 0, 14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 0, -268, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimItemThrowAirSmashU_joint5[162] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1331, -540, -1323, 9, 1151, 747,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1871, -664, -1314, -87, 1898, 511,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2660, -740, -1499, 109, 2174, 557,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -3934, -585, -939, -234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3014, 690,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3556, 750,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4525, -280, -1565, -450, 4516, 333,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1754, 203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4496, 44, 4222, -102,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 4615, 242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4435, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -4668, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1432, 212,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1341, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4796, 203,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 5488, 98,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4873, -143,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -4901, -25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1384, -56, 5538, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 5607, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1597, 120,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4941, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -4917, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5614, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 5230, -287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1455, 93, 4901, -204,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1329, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4820, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4743, 160, 4585, -198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4597, 97, 4423, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4548, 49, -1323, 5, 4368, -55,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimItemThrowAirSmashU_joint6[88] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -7, -714,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -721, -598,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1204, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -636, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -941, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -837, 470,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 414,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -433, -202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -412, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -456, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -499, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -421, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -365, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -521, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -397, 281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -82, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTFoxAnimItemThrowAirSmashU_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimItemThrowAirSmashU_joint8[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 178, 268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 336, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -178, -104, 357, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -446, -27, -268, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), -536, 34, -89, 29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 178, 268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTFoxAnimItemThrowAirSmashU_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimItemThrowAirSmashU_joint11[170] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1240, 26, 1090, 175, -1624, 49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1080, -458,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1245, 11, -1563, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1190, -273, -1382, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1792, -199, 406, -499, -1920, -242,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 206, 261,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1589, 284, -1867, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1222, 89, -1678, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1411, 90, 604, 447, -2018, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1041, -180, 1102, 233, -1356, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1772, -588, 1072, 56, -1736, -375,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1447, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2477, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2108, -232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2201, -47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2204, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1416, -55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1139, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2497, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2377, 146,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2183, 55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1855, 92,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2192, 174,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1663, 243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1157, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1174, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1772, 130,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1507, -49,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1407, 152, 1218, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1357, 83, 1110, -63, -1693, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1240, 117, 1090, -20, -1624, 69,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimItemThrowAirSmashU_joint12[70] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -7, -327,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -335, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -354, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -7, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -327,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -663, -565,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1138, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -934, 239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -434, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -465, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -664, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -626, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -528, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -408, 260,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 200,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -7,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimItemThrowAirSmashU_joint13[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 272, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 312, 0, -89, 0, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1251, 804, -357, -22, -446, -357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1608, 22, -44, -89, -714, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1295, -51, -536, -44, -402, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1251, -71, -357, 29, -268, 22,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimItemThrowAirSmashU_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimItemThrowAirSmashU_joint16[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -369, -5, -2, 18, 124,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 90, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -466, 3, 363, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -361, 181, 455, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 202, 152,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -227, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -3, -49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 173, 27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 200, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 165, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -298, -63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -271, 60,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 193, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -3, -2,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -206, 61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 10, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 142, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 19, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -19, -5, -1, 18, 8,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimItemThrowAirSmashU_joint18[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 5, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimItemThrowAirSmashU_joint20[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1625, 216, -1543, -147, -998, -71,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1573, 166, -1290, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1409, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1507, -108,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1630, 20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1374, 142, -1424, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1207, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1288, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1431, -92,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1472, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1217, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1763, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1621, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1532, -2,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1485, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1371, 23,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1788, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1563, 224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1548, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1733, 34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1374, -29, -1291, 227,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1534, -16, -1000, 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1688, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1644, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1625, 19, -1543, -9, -998, 1,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimItemThrowAirSmashU_joint21[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1600, -194, 1603, 152, 1116, 165,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1715, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1406, -221, 1282, 294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1157, -87, 1705, 251,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1399, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1231, 225, 1533, -108,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1463, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1609, 278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1789, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1704, -57, 1351, -85, 1285, -79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1814, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1426, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1039, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1010, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1045, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1811, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1752, -94,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1076, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1595, -109, 932, -81,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1605, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 913, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1104, 21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1488, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1589, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1600, -4, 1603, 13, 1116, 11,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimItemThrowAirSmashU_joint23[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 626, 121,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 666, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 464, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 305, -229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 5, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 336, 246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 498, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 631, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 626, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimItemThrowAirSmashU_joint24[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1594, 59, 1484, -136, 1516, -58,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1582, -95, 1592, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1307, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1495, 214,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1757, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1462, -52, 1827, 235,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1526, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2062, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1618, -98, 2012, -51,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 1762, 15, 1721, -20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1485, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1590, -13,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1775, 6, 1696, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1497, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1629, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1505, -69,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1510, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1587, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1570, 19,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1513, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1594, 23, 1484, -13, 1516, 2,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimItemThrowAirSmashU_joint25[58] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, -126, -96,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x400E, 0x0192, 0x0000, 0x0000, 0x48E0, 0x0000, 0x0040, 0xFE3E, 0x4009, 0x0007, 0x0000, 0x2007, 0x0003, 0xFF4E, 0xFFFB, 0xFF86, 0xFFEF, 0x2803, 0x0004, 0x016B, 0x003A, 0x3805, 0x0004, 0xFF86, 0x200F, 0x0004, 0x011F, 0xFFD1, 0xFF86, 0x005B, 0x0000, 0x002E, 0x2807, 0x0003, 0x0021, 0x0008, 0x0203, 0x0009, 0x3809, 0x0003, 0x0142, 0x380F, 0x000A, 0x0192, 0x0000, 0x0000, 0x0000, 0x0000,
};
