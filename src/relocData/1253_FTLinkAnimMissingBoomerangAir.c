/* AnimJoint data for relocData file 1253 (FTLinkAnimMissingBoomerangAir) */
/* 2848 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimMissingBoomerangAir_joint1[26];
extern u16 dFTLinkAnimMissingBoomerangAir_joint2[52];
extern u16 dFTLinkAnimMissingBoomerangAir_joint4[46];
extern u16 dFTLinkAnimMissingBoomerangAir_joint5[264];
extern u16 dFTLinkAnimMissingBoomerangAir_joint6[124];
extern u16 dFTLinkAnimMissingBoomerangAir_joint7[114];
extern u16 dFTLinkAnimMissingBoomerangAir_joint9[42];
extern u16 dFTLinkAnimMissingBoomerangAir_joint10[64];
extern u16 dFTLinkAnimMissingBoomerangAir_joint11[32];
extern u16 dFTLinkAnimMissingBoomerangAir_joint12[8];
extern u16 dFTLinkAnimMissingBoomerangAir_joint13[8];
extern u16 dFTLinkAnimMissingBoomerangAir_joint16[8];
extern u16 dFTLinkAnimMissingBoomerangAir_joint17[42];
extern u16 dFTLinkAnimMissingBoomerangAir_joint18[42];
extern u16 dFTLinkAnimMissingBoomerangAir_joint20[58];
extern u16 dFTLinkAnimMissingBoomerangAir_joint21[112];
extern u16 dFTLinkAnimMissingBoomerangAir_joint23[48];
extern u16 dFTLinkAnimMissingBoomerangAir_joint25[48];
extern u16 dFTLinkAnimMissingBoomerangAir_joint26[116];
extern u16 dFTLinkAnimMissingBoomerangAir_joint28[48];
extern u16 dFTLinkAnimMissingBoomerangAir_joint29[64];

/* Joint pointer table (29 entries, 116 bytes) */
u32 dFTLinkAnimMissingBoomerangAir_joints[] = {
	(u32)dFTLinkAnimMissingBoomerangAir_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimMissingBoomerangAir_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimMissingBoomerangAir_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTLinkAnimMissingBoomerangAir_joint5, /* [4] joint 5 */
	(u32)dFTLinkAnimMissingBoomerangAir_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimMissingBoomerangAir_joint7, /* [6] joint 7 */
	(u32)dFTLinkAnimMissingBoomerangAir_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTLinkAnimMissingBoomerangAir_joint10, /* [9] joint 10 */
	(u32)dFTLinkAnimMissingBoomerangAir_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimMissingBoomerangAir_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimMissingBoomerangAir_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimMissingBoomerangAir_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTLinkAnimMissingBoomerangAir_joint17, /* [16] joint 17 */
	(u32)dFTLinkAnimMissingBoomerangAir_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimMissingBoomerangAir_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTLinkAnimMissingBoomerangAir_joint21, /* [20] joint 21 */
	(u32)dFTLinkAnimMissingBoomerangAir_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTLinkAnimMissingBoomerangAir_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTLinkAnimMissingBoomerangAir_joint26, /* [25] joint 26 */
	(u32)dFTLinkAnimMissingBoomerangAir_joint28, /* [26] joint 28 */
	0x00000000, /* [27] NULL */
	(u32)dFTLinkAnimMissingBoomerangAir_joint29, /* [28] joint 29 */
};

/* Joint 1 */
u16 dFTLinkAnimMissingBoomerangAir_joint1[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 15), 44, 18,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 5), 45, -4,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 4), 39, -11,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 2), 37, -3,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 4), 37, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 16), 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimMissingBoomerangAir_joint2[52] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 32, 274, 83,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), 745, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 0, -12, 0, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -125, -13, -99, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 11), -186, 11, -151, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 27, 36, -231, -173, -5, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 30, 0, -297, 25, -9, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 32, 274, 83,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimMissingBoomerangAir_joint4[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 315, 166, 56,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 549, 10, 244, 3, 193, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 549, -5, 244, -39, 193, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 492, 6, -195, -66, -221, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 599, -8, -290, 18, -177, 13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 315, 166, 56,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimMissingBoomerangAir_joint5[264] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1916, -2, -1347, -13, -1261, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1347, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1858, 147, -1392, -259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1623, 197, -1788, -387,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1478, -143, -2604, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1496, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1624, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1506, 61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1256, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1724, -133, -2731, -235,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1820, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3075, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3067, 75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2824, 111,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1944, -129,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2145, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2702, 143,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2257, 27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1150, 98,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1108, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2052, 103,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1810, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2289, -52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2302, 59,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1883, -74,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -2131, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2249, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -2370, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2572, -174,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2766, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1140, -50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1251, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2093, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1819, 624, -2581, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -845, 246, -1126, 12, -2902, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1304, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1326, -366, -2607, 220,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2718, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1578, -201,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1820, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1400, -85,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1512, -58,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2813, -85,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2748, 218,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1795, 96,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1458, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1552, -31, -2486, 148,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2451, 131,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1506, 150,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1437, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1677, -221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2188, 377,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1302, 217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1324, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1903, -119, -1354, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1916, -12, -1347, 6, -1261, 40,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimMissingBoomerangAir_joint6[124] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -744, -110,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1041, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1062, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -820, 316,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -428, 205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -410, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -713, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -700, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -920, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -873, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -158, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -145, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -407, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -432, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -531, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -635, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -542, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -889, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -866, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -886, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -983, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -936, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -638, 254,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -428, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -758, -308,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1045, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -921, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -744, 176,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTLinkAnimMissingBoomerangAir_joint7[114] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 278, 266, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -605, -142, -18, -39, -54, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -431, -230, 68, 150, -432, -414,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1758, -239, 733, 163, -2125, -273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1627, 225, 888, -62, -1797, 284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -183, 120, 295, -49, -136, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -183, -16, 295, -41, -136, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -349, -22, -115, -97, -1, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -273, -270, -96, -212, 23, 242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -2240, -142, -1605, -193, 1694, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -1987, 49, -2423, -14, 958, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1747, 50, -1751, 164, 1698, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1732, 723, -1600, 807, 1817, -759,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -300, 670, -137, 622, 180, -541,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 278, 266, 193,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTLinkAnimMissingBoomerangAir_joint9[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 1, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 804, 80, 1, 80, 8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1608, 47, 804, 47, 8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 1608, -47, 804, -47, 8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, -40, 1, -40, 8, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 804, 1, 8,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTLinkAnimMissingBoomerangAir_joint10[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 488, 1, 60, -2, 163, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 359, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 30), 545, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 16), -26, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -19, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 0, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 358, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 27), 164, -2,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 540, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 489, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 10, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 59, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 488, 0, 60, 0, 163, -1,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimMissingBoomerangAir_joint11[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -616, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -387, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -340, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -596, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -609, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -617, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -616, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimMissingBoomerangAir_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimBlock(0, 46),
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimMissingBoomerangAir_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1114, -804, 494,
	ftAnimBlock(0, 46),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTLinkAnimMissingBoomerangAir_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1508, 346, -843,
	ftAnimBlock(0, 46),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimMissingBoomerangAir_joint17[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -163, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -17, 0, -519, -16, 153, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -17, -13, -519, 89, 153, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -165, -18, 465, 123, -63, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -165, 8, 465, -31, -63, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 0, -163, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimMissingBoomerangAir_joint18[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -199, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -150, -6, -203, 0, 183, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -150, 14, -203, 19, 183, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 5, 19, 8, 26, -151, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 5, 0, 8, -10, -151, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 0, -199, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTLinkAnimMissingBoomerangAir_joint20[58] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 97, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -121, -10, 56, 14, -7, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -6, 0, 149, 12, -20, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -112, 9, 177, -24, -26, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 151, 4, -237, 3, 22, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -41, -18, 229, 31, 18, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -72, 8, 138, -14, 6, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 97, 0, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLinkAnimMissingBoomerangAir_joint21[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1577, 0, -1748, 2, 825, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -1236, 42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -1516, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 1203, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1224, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 1066, -83,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1196, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1132, -49,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1491, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1758, -53,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1195, -78,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1634, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1800, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1673, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 981, -74,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 842, -18,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1651, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1583, 8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1677, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1744, -6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 824, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 820, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1577, 5, -1748, -3, 825, 4,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimMissingBoomerangAir_joint23[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1205, -3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 845, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 801, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 680, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 792, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1080, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1036, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1016, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1087, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1190, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1205, 15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimMissingBoomerangAir_joint25[48] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), -1135, 11, -1425, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), -1538,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 45), -1425, -1538,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -1193, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1295, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), -1779, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1758, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -1105, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1082, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), -1142, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), -1135, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1425, -1538,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimMissingBoomerangAir_joint26[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1910, 0, 1289, 0, 1338, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 1882, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 1226, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 1370, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1332, -52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 900, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1847, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1332, -106,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1201, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1271, 84,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 862, 31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1383, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1376, 43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1217, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1251, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1454, 43,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1205, -8, 1422, 36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 1448, -41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 1290, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1497, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 1901, 15,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1408, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1342, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1910, 8, 1289, -1, 1338, -4,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimMissingBoomerangAir_joint28[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 845, -4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 498, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 510, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 932, -172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 734, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 577, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 591, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 809, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 828, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 844, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 845, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 29 */
u16 dFTLinkAnimMissingBoomerangAir_joint29[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -647, 8, -89, 0, 252, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 45), -89, 0, 252, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), -413, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -423, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -609, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -520, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 68, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 81, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -249, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -290, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -632, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -643, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -647, -3, -89, 0, 252, 0,
	ftAnimEnd(),
	0x0000, 0x0000,
};
