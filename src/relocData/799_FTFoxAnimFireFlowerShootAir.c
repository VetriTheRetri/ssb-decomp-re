/* AnimJoint data for relocData file 799 (FTFoxAnimFireFlowerShootAir) */
/* 3264 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimFireFlowerShootAir_joint1[22];
extern u16 dFTFoxAnimFireFlowerShootAir_joint2[32];
extern u16 dFTFoxAnimFireFlowerShootAir_joint4[38];
extern u16 dFTFoxAnimFireFlowerShootAir_joint5[190];
extern u16 dFTFoxAnimFireFlowerShootAir_joint6[70];
extern u16 dFTFoxAnimFireFlowerShootAir_joint7[10];
extern u16 dFTFoxAnimFireFlowerShootAir_joint8[50];
extern u16 dFTFoxAnimFireFlowerShootAir_joint10[20];
extern u16 dFTFoxAnimFireFlowerShootAir_joint11[176];
extern u16 dFTFoxAnimFireFlowerShootAir_joint12[88];
extern u16 dFTFoxAnimFireFlowerShootAir_joint13[72];
extern u16 dFTFoxAnimFireFlowerShootAir_joint15[10];
extern u16 dFTFoxAnimFireFlowerShootAir_joint16[136];
extern u16 dFTFoxAnimFireFlowerShootAir_joint18[44];
extern u16 dFTFoxAnimFireFlowerShootAir_joint20[140];
extern u16 dFTFoxAnimFireFlowerShootAir_joint21[144];
extern u16 dFTFoxAnimFireFlowerShootAir_joint23[68];
extern u16 dFTFoxAnimFireFlowerShootAir_joint24[156];
extern u16 dFTFoxAnimFireFlowerShootAir_joint25[114];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimFireFlowerShootAir_joints[] = {
	(u32)dFTFoxAnimFireFlowerShootAir_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimFireFlowerShootAir_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimFireFlowerShootAir_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimFireFlowerShootAir_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimFireFlowerShootAir_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimFireFlowerShootAir_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimFireFlowerShootAir_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimFireFlowerShootAir_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimFireFlowerShootAir_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimFireFlowerShootAir_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimFireFlowerShootAir_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimFireFlowerShootAir_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimFireFlowerShootAir_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimFireFlowerShootAir_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimFireFlowerShootAir_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimFireFlowerShootAir_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimFireFlowerShootAir_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimFireFlowerShootAir_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimFireFlowerShootAir_joint25, /* [24] joint 25 */
	0xFFFF0312, /* [25] END */
};

/* Joint 1 */
u16 dFTFoxAnimFireFlowerShootAir_joint1[22] = {
	ftAnimSetVal(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 0, 960,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 10), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), -480,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 4), -60,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 14), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTFoxAnimFireFlowerShootAir_joint2[32] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfter(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValT(FT_ANIM_ROTX, 10), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 2), -268,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 10), -268,
	ftAnimBlock(0, 8),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), -178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -178, -357,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 14), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTFoxAnimFireFlowerShootAir_joint4[38] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -268, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 178, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 268, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 178, 268, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -178, -178, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 178, 9,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 18), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), 178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 14), 0, -268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTFoxAnimFireFlowerShootAir_joint5[190] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1888, -7, -1326, -177, -2070, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1880, 83, -1503, -318, -2072, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2055, 82, -1963, -268, -2387, -170,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2444, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2017, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2039, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2084, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1973, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2450, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2389, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2032, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 2055, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2055, -338, -1963, 234, -2387, 198,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 761, -335,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1311, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1504, 667,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -628, 405,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1073, -240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 708, 241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1243, 470, -1601, -224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1649, 315, -1174, -89, -1759, -170,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1899, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1022, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1942, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1925, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1898, 0, -1921, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1939, 77, -1988, -94,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -960, 60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1128, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2061, 70, -2129, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2080, -63, -2159, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1935, -78, -2015, 66,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1973, -7, -2151, -32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1303, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1909, -42, -1319, -11, -2091, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1888, -21, -1326, -6, -2070, 20,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimFireFlowerShootAir_joint6[70] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -489,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -489, -175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -350, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -340, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -350, -270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -880, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 436,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -457, -251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -401, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -431, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -653, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -571, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -370, 285,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 185,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTFoxAnimFireFlowerShootAir_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimFireFlowerShootAir_joint8[50] = {
	ftAnimSetValAfter(FT_ANIM_TRAZ), 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 178, 268, 0,
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 336,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -89, -26,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 12), 0,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY, 16), 0, 336,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), -89, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 178, 357,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 89, 134, -44,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 14), 178, 268,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 0, 7,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 14), 0, 336,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTFoxAnimFireFlowerShootAir_joint10[20] = {
	ftAnimSetVal(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 62, -18,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 0, 62, -18,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), 0, 62, -18,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTFoxAnimFireFlowerShootAir_joint11[176] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 367, -284, 517, -613, -16, 324,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -96, -373, 308, -490,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -229, -69, -997, -650,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -236, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1, 0, -991, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -992, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -992, 31,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -235, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -229, 36,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 0, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 142, 258, -158, 202, -929, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 517, 144, 176, 137, -1332, -156,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 310, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 117, -54, -1241, 93,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 87, 47, -1209, -121,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 262, -58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -53, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 162, 0, -1387, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 9, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1214, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1179, 36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -934, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -14, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 86, 104,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -734, 153,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -504, 124,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -24, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 280, 108,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 229, 174, -371, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 436, 144, -170, 177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 367, 87, 517, 81, -16, 154,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimFireFlowerShootAir_joint12[88] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -7, -1220,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1227, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 610,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -308,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -624, -259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -526, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -725, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -510, 358,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -216, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -223, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimFireFlowerShootAir_joint13[72] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 272, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 4, 227, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 4, 227, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 35, 1, -53, -168, 31, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7, 47, -109, -23, 209, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 178, 16, -125, -17, 196, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 71, -20, -178, 8, 26, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 58, -4, -71, 16, -32, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 35, -5, -44, 7, 281, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimFireFlowerShootAir_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimFireFlowerShootAir_joint16[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, -265, -1603, 52, 1629, -104,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1398, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1369, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1342, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1347, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1295, -52,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1392, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1412, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1368, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1403, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1407, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1406, -80, 1528, 232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1243, -25, -1574, -94, 1873, 185,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1343, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1595, -29, 1899, 34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1510, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1942, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1688, -49,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1421, 41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1598, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1701, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1531, 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1331, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1568, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1541, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1628, 2,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1602, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1608, 40, -1603, -1, 1629, 1,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimFireFlowerShootAir_joint18[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 427, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 312, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 183, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 323, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 308, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -154,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimFireFlowerShootAir_joint20[140] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1625, 141, 1673, -113, 2221, -147,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1991, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1562, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1483, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1637, -77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1639, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1998, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1977, -3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1639, 0, 1564, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1591, 42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1569, 26,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1975, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1746, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1551, 14, 1818, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1653, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1782, 31,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1594, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1588, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1699, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1912, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1974, 42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 2102, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1740, 48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1520, -58,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2146, 39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2209, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1625, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1589, -52, 1658, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1625, -36, 1673, 14, 2221, 12,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimFireFlowerShootAir_joint21[144] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1616, -123, -1613, 131, 1116, -153,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1729, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1414, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 820, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 828, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 821, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1727, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1710, -49,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1413, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1413, -173, 820, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1811, 18, -1760, -324, 1097, 481,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1673, 70, -2061, -154, 1783, 333,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1670, -7, -2068, -9, 1763, -60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1898, 227,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1763, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1662, -147,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1026, -73,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1603, 229,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1434, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1694, 42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1739, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 995, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1111, 7,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1455, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1601, -19,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1714, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1636, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1616, 20, -1613, -12, 1116, 4,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimFireFlowerShootAir_joint23[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 626, 99,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 655, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 671, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 701, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 706, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1001, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 434, -276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 447, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 530, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1013, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 896, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 651, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 679, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 670, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 638, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 626, -12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimFireFlowerShootAir_joint24[156] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -14, 246, 124, -6, -91, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -48, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 232, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 67, -82,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 66, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -60, -49,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 66, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 2, -118,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -54, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -56, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -194, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -168, -88, -96, -25, 210, 187,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -191, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -209, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 181, -64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -332, 50,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -187, 48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -67, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -88, 88,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 76, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -102, -13, -203, 130,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -158, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 228, -59,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 107, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 136, -16,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -139, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -99, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 145, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 39, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -14, -54, 124, -12, -91, 7,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimFireFlowerShootAir_joint25[114] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -126, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 0, 0, 0, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 0, -89,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 5), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 0, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -536, -29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 357,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 18), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -178, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 357, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 268, -35,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 0,
	ftAnimEnd(),
	0x4006, 0x0192, 0x0000, 0x48E8, 0x0000, 0x0000, 0x0040, 0xFE3E, 0x2803, 0x0008, 0x0000, 0xFFD8, 0x2005, 0x0002, 0x0165, 0xFFD4, 0x2005, 0x0006, 0xFE9B, 0xFFBD, 0x2805, 0x0002, 0xFF4E, 0x0059, 0x3803, 0x0002, 0x0000, 0x2007, 0x0002, 0x0218, 0xFFC5, 0x0000, 0x001D, 0x2803, 0x0004, 0xFE9B, 0xFFB2, 0x3805, 0x0004, 0x0000, 0x4005, 0x000E, 0x0000, 0x2003, 0x0004, 0xFFA7, 0x0043, 0x2003, 0x0004, 0x00B2, 0x0031, 0x3803, 0x0006, 0x0192, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
