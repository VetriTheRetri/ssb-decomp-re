/* AnimJoint data for relocData file 1937 (FTYoshiAnimAttackAirU) */
/* 3040 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimAttackAirU_joint1[20];
extern u16 dFTYoshiAnimAttackAirU_joint2[54];
extern u16 dFTYoshiAnimAttackAirU_joint3[60];
extern u16 dFTYoshiAnimAttackAirU_joint6[52];
extern u16 dFTYoshiAnimAttackAirU_joint7[136];
extern u16 dFTYoshiAnimAttackAirU_joint8[36];
extern u16 dFTYoshiAnimAttackAirU_joint10[8];
extern u16 dFTYoshiAnimAttackAirU_joint11[148];
extern u16 dFTYoshiAnimAttackAirU_joint12[16];
extern u16 dFTYoshiAnimAttackAirU_joint13[8];
extern u16 dFTYoshiAnimAttackAirU_joint14[10];
extern u16 dFTYoshiAnimAttackAirU_joint15[70];
extern u16 dFTYoshiAnimAttackAirU_joint17[64];
extern u16 dFTYoshiAnimAttackAirU_joint18[204];
extern u16 dFTYoshiAnimAttackAirU_joint20[88];
extern u16 dFTYoshiAnimAttackAirU_joint22[142];
extern u16 dFTYoshiAnimAttackAirU_joint23[162];
extern u16 dFTYoshiAnimAttackAirU_joint25[190];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTYoshiAnimAttackAirU_joints[] = {
	(u32)dFTYoshiAnimAttackAirU_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimAttackAirU_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimAttackAirU_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimAttackAirU_joint6, /* [3] joint 6 */
	0x00000000, /* [4] NULL */
	0x00000000, /* [5] NULL */
	(u32)dFTYoshiAnimAttackAirU_joint7, /* [6] joint 7 */
	(u32)dFTYoshiAnimAttackAirU_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimAttackAirU_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTYoshiAnimAttackAirU_joint11, /* [10] joint 11 */
	(u32)dFTYoshiAnimAttackAirU_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimAttackAirU_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimAttackAirU_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimAttackAirU_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimAttackAirU_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTYoshiAnimAttackAirU_joint18, /* [17] joint 18 */
	(u32)dFTYoshiAnimAttackAirU_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTYoshiAnimAttackAirU_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTYoshiAnimAttackAirU_joint23, /* [22] joint 23 */
	(u32)dFTYoshiAnimAttackAirU_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	0xFFFF02BB, /* [25] END */
};

/* Joint 1 */
u16 dFTYoshiAnimAttackAirU_joint1[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValRate(FT_ANIM_TRAY), 608, -18,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 42), 608,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), -804,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 38), 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTYoshiAnimAttackAirU_joint2[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -893, 1, 0, 2, 0, 1, 0, -9, 214, 215, 1, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 708, 107,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 0, -2, 665, -2,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 20), 2323,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 32), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 32), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 0, 214, 0, 1, 1,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 27), 0, 214, 1,
	ftAnimBlock(0, 15),
	ftAnimSetValBlockT(FT_ANIM_ROTX, 12), 2323,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTYoshiAnimAttackAirU_joint3[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 1161, -4, 0, -9,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 16, 67, 75,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 0, -39,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 16), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 536, 84, 0, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 758, 41, -31, -7, 0, 48,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 826, 30, -53, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 338,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 0, 1, 0, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 1251, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 1161, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTYoshiAnimAttackAirU_joint6[52] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 562, 5, 0, -47, 0, -1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 600, 329,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 0, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -1251, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 675, 58, 0, 138, 0, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 640, -32, 270, 12, 351, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 447, -3, 89, -12, 17, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 562, 4, 0, -3, 0, 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimAttackAirU_joint7[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2054, 2, -1428, 0, -224, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 2096, 20, -1349, 82, -198, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2115, 277, -1232, 406, -157, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2651, 128, -536, 428, -579, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2372, -223, -375, 167, -341, 147,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 2121, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -129, -113, -249, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -376, -135, -115, 49,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -374, 18, -229, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2189, 44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2245, 80,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -352, 20, -240, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -334, -141, -264, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2379, -28, -616, -326, -337, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2187, -92, -987, -205, -155, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2195, 0, -1027, -3, -169, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 21), 2054, 0, -227, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -983, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1071, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 17), -1432, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2054, 0, -1428, 3, -224, 2,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimAttackAirU_joint8[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -8, 8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -275,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -550,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 271,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 32), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -8,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTYoshiAnimAttackAirU_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -625,
	ftAnimBlock(0, 42),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimAttackAirU_joint11[148] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -461, -10, 191, 9, -1833, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 566, 221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -584, -32, -1820, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -606, -276, -1798, -244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1137, -49, 833, 245, -2309, -45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1461, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -704, 242, -1888, 221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -652, 46, -1866, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -611, 38, -1859, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1871, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -410, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -326, 4, 1497, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 915, -222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -617, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -674, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -770, 44, -1944, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -585, 85, 678, -135, -1764, 81,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -583, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 678, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1782, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), -1836, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -570, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -509, 19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 612, -72,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 186, 1,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -491, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -461, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -461, 0, 191, 4, -1833, 2,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimAttackAirU_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -8, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 41), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTYoshiAnimAttackAirU_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -625,
	ftAnimBlock(0, 42),
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTYoshiAnimAttackAirU_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -670, 1608, 0, 0, 156, 0,
	ftAnimBlock(0, 42),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimAttackAirU_joint15[70] = {
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 215, -240,
	ftAnimSetValRate(FT_ANIM_ROTX), 536, -22,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -418, -53,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 9), 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 159, -451,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 38), 0, 215, -240,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 0, 92,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 5120, 5120, 8192,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 319, -31,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 28), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), -536, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 536, 38,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTYoshiAnimAttackAirU_joint17[64] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 48, -264,
	ftAnimSetValRate(FT_ANIM_ROTX), 89, -29,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -644, -8,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 0, 33, 0, -450, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 0, 48, 18, -263, 248,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 0, 126,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 48, -264,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX, 4), 365, -31, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 48, -263,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 28), 0, 48, -264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), -536, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 89, 22,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimAttackAirU_joint18[204] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1540, 40, -1489, 189, 1883, -467,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1500, 74, -1300, 16, 1415, -517,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1390, -14, -1456, -97, 847, -471,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2051, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1495, 51, 471, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1354, 38, 568, 176,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1048, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1418, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1666, -126,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1671, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2044, 0, 1038, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1028, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1906, 146,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1674, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1671, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1667, 113, 1057, -110,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 588, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1443, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1723, 161, -1410, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1598, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1528, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 472, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 606, 307,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1480, 136, 1086, 449,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1296, -72, 2146, 268,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1729, -174,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2042, 13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1436, -64, 2432, 162,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1436, -4, 2446, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1996, 43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1604, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1439, 25, 2426, -79,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -1494, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1878, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1878, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1883, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1592, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -1536, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1540, -3, -1489, 4, 1883, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimAttackAirU_joint20[88] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 687, 390,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1298, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1013, -356,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 586, -503,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -293,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 289,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 586, 477,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 954, 316,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1267, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1023, -289,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 687, -292,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 439, -340,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 6, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 218, 194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 687, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 687,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 687,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTYoshiAnimAttackAirU_joint22[142] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 175, -816, -1728, 21, 1291, 115,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1962, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1633, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -641, -233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -292, 330,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 359, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 316, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 321, 76,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1980, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1386, -99,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 411, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -111, -128,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1660, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1599, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -229, -99,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -414, -50,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1291, -26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1463, 14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -434, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -440, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1509, 68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -1499, -36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1477, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 1330, -26,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -427, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -264, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -202, 87, -1535, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 106, 132, -1600, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 175, 68, -1728, -128, 1291, -39,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimAttackAirU_joint23[162] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1642, -89, 1457, 51, 1894, -409,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1634, -53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1563, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1484, -479,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 936, -496,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 492, -199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1526, -57, 536, 131,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1052, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1429, 108, 1519, 71,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1300, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1669, 76,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1679, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1040, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1031, 22,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1339, -43, 1675, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1711, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1668, -68, 1058, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1538, -69, 748, -248,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1627, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 562, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 629, 317,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1781, 18, 1483, -163, 1111, 444,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1245, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1674, 184, 1519, 410,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1413, 128, 1932, 205,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1421, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1247, 2, 1931, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 1441, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1929, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), 1893, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1425, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 19), -1627, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1642, -14, 1457, 15, 1894, 0,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimAttackAirU_joint25[190] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 670, 396,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1305, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1025, -349,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 605, -512,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -302,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 302,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 605, 483,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 967, 310,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1259, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1011, -294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 670, -170,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 670,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 670, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 670, 0,
	ftAnimEnd(),
	0x200E, 0xFF64, 0xFF38, 0xFA59, 0x0005, 0xF877, 0x0069, 0x2809, 0x0007, 0xFB2A, 0x0018, 0x2805, 0x000E, 0xFA38, 0x0012, 0x2003, 0x0001, 0xFE9C, 0x0034, 0x2003, 0x0001, 0xFFCE, 0x00A8, 0x2003, 0x0003, 0xFF47, 0xFFCC, 0x2003, 0x0001, 0xFF2B, 0xFFF6, 0x2803, 0x0009, 0xFFCE, 0x0037, 0x0801, 0x0001, 0x2009, 0x0001, 0xFB41, 0x0016, 0x2809, 0x0009, 0xF931, 0xFF98, 0x0801, 0x0006, 0x2005, 0x0001, 0xFA4A, 0x000F, 0x2805, 0x0018, 0xFA59, 0x0000, 0x2003, 0x0001, 0x0000, 0x0075, 0x2003, 0x0001, 0x00B8, 0x011D, 0x200B, 0x0001, 0x0239, 0x00B8, 0xF8CD, 0xFFA3, 0x4009, 0x0007, 0xF877, 0x2003, 0x0001, 0x0228, 0xFFF6, 0x2003, 0x0001, 0x0224, 0xFFFC, 0x2803, 0x0014, 0xFFF7, 0xFFB4, 0x0801, 0x0005, 0x2009, 0x0001, 0xF877, 0x0000, 0x2809, 0x000F, 0xF877, 0x0000, 0x0801, 0x000D, 0x2005, 0x0001, 0xFA59, 0x0000, 0x2007, 0x0001, 0xFFAB, 0xFFB7, 0xFA59, 0x0000, 0x200F, 0x0001, 0xFF64, 0xFFBA, 0xFA59, 0x0000, 0xF877, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
