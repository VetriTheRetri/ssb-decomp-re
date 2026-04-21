/* AnimJoint data for relocData file 920 (FTDonkeyAnimUSmash) */
/* 3248 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimUSmash_joint1[46];
extern u16 dFTDonkeyAnimUSmash_joint2[50];
extern u16 dFTDonkeyAnimUSmash_joint4[58];
extern u16 dFTDonkeyAnimUSmash_joint5[192];
extern u16 dFTDonkeyAnimUSmash_joint6[84];
extern u16 dFTDonkeyAnimUSmash_joint7[46];
extern u16 dFTDonkeyAnimUSmash_joint8[40];
extern u16 dFTDonkeyAnimUSmash_joint10[58];
extern u16 dFTDonkeyAnimUSmash_joint11[206];
extern u16 dFTDonkeyAnimUSmash_joint12[80];
extern u16 dFTDonkeyAnimUSmash_joint13[42];
extern u16 dFTDonkeyAnimUSmash_joint14[10];
extern u16 dFTDonkeyAnimUSmash_joint16[50];
extern u16 dFTDonkeyAnimUSmash_joint17[158];
extern u16 dFTDonkeyAnimUSmash_joint19[32];
extern u16 dFTDonkeyAnimUSmash_joint21[114];
extern u16 dFTDonkeyAnimUSmash_joint22[130];
extern u16 dFTDonkeyAnimUSmash_joint24[32];
extern u16 dFTDonkeyAnimUSmash_joint25[146];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTDonkeyAnimUSmash_joints[] = {
	(u32)dFTDonkeyAnimUSmash_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimUSmash_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimUSmash_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTDonkeyAnimUSmash_joint5, /* [4] joint 5 */
	(u32)dFTDonkeyAnimUSmash_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimUSmash_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimUSmash_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimUSmash_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTDonkeyAnimUSmash_joint11, /* [10] joint 11 */
	(u32)dFTDonkeyAnimUSmash_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimUSmash_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimUSmash_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimUSmash_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTDonkeyAnimUSmash_joint17, /* [16] joint 17 */
	(u32)dFTDonkeyAnimUSmash_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTDonkeyAnimUSmash_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTDonkeyAnimUSmash_joint22, /* [21] joint 22 */
	(u32)dFTDonkeyAnimUSmash_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTDonkeyAnimUSmash_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTDonkeyAnimUSmash_joint1[46] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -29, 1031, -400,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 79, 61, 535, -283, 247, 370,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 79, 535, 247,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 79, 1, 535, 102, 247, -67,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 25), 85, 0, 881, 90, 20, -117,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 19), 1031, -400,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 9), 74, -48,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 10), -29,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTDonkeyAnimUSmash_joint2[50] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -265, -41, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -328, -4, -518, -34, -17, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -328, -518, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -328, -518, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -328, 0, -518, 5, -17, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -323, -4, -429, 12, -17, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), -41, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 19), -450, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), -265,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTDonkeyAnimUSmash_joint4[58] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 750, 24, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 471, -19, -224, -17, -204, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 471, -224, -204,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 471, -224, -204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 471, 2, -224, 2, -204, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 507, 3, -185, 1, -171, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 725, 20, -167, 7, -93, 7,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 24, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 901, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 750,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimUSmash_joint5[192] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -50, -4, -90, -76, 2744, 101,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2894, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -55, -74, -167, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -200, -88, -380, -151,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -474, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -232, 84, 2489, -409,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -30, 130, 2074, -262,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 178, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1965, -100,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1914, 59,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -464, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -455, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 200, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 152, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 141, 81, -447, 62, 1970, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 472, 79,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1851, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -329, 209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -29, 148,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -37, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 474, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 236, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1854, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 2123, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -38, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -424, -27,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 105, -116,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -39, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2157, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2042, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -448, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 32), -88, -2,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2048, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 2506, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -50, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), -71, 18,
	ftAnimBlock(0, 17),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2534, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 2778, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -56, 10, -90, -1, 2755, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -50, 5, -90, 0, 2744, -11,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimUSmash_joint6[84] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -407, -257,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -907, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -784, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -559, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -490, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -405, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -485, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -571, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -787, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -643, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -652, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -851, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -878, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -442, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -424, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), -867, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -875, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -515, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -439, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -407, 31,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTDonkeyAnimUSmash_joint7[46] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1247, -69, -183, -10, 440, 24,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), -1165, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -183, 0, 440, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -183, 0, 440, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 7, 4, 151, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 33), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimUSmash_joint8[40] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 174, -67, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 18, -11, -62, 0, 31, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 18, -62, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 18, 0, -62, 0, 31, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 34), 28, 3, -63, 0, 6, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 174, -67, -44,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTDonkeyAnimUSmash_joint10[58] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -398, 70, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -357, 3, -337, -37, 44, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -357, 0, -337, 44, 44, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -350, 1, 109, 89, -46, -18,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -350, 109, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -350, -10, 109, -10, -46, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -665, -1, -181, -1, 208, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -398, 70, 29,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTDonkeyAnimUSmash_joint11[206] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1724, 73, 1436, -78, -2087, 102,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1944, -189,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1339, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1650, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1376, 214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1221, 30, -2363, -353,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2907, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1315, -79, 1242, -62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1223, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1463, -9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2938, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2736, 7,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1247, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1395, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1483, -142,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1980, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2751, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1657, 132, -2924, -90,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1660, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1979, 0, -2932, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1704, 148,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -2616, 51,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1657, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1280, -48,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1544, 144,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1322, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2584, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -2571, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1228, -51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 1192, 12,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1324, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -1400, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2558, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -2262, 40,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1204, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1428, 12,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2212, 61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1996, -31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1422, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1713, -19,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2034, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2071, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1724, -10, 1436, 7, -2087, -16,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimUSmash_joint12[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -416, -227,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -879, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -816, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -546, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -467, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -567, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -637, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -833, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -618, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -599, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -618, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -893, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -790, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -656, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -681, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -934, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -905, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -455, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, 38,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTDonkeyAnimUSmash_joint13[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 103, 0, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1044, 63, 210, 13, 386, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 1121, 0, 210, 0, 357, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1121, 0, 210, 0, 357, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 1001, -24, -103, -5, 212, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 33), 103, 0, 1,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTDonkeyAnimUSmash_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 565, -904, 634, 120, 120, 120,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTDonkeyAnimUSmash_joint16[50] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -404, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -375, 4, 167, -17, 175, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -342, -1, -228, -3, -255, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -397, 0, 81, 0, 76, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -344, -4, -243, -9, -265, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -501, -3, -176, 13, -204, 14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -404, 0, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimUSmash_joint17[158] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -61, 50, -393, -18, -329, -53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -379, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 176, 287, -561, -242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 563, 310, -867, -209,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 897, 9, -996, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -227, 101,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -208, -21,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 901, 0, -993, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 852, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -863, 51,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -228, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -634, -30,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 865, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 430, -164,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -800, 81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -71, 57,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -656, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -382, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 253, -166,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -250, 3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -25, 39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 124, -13,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -362, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -370, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -245, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), -61, 1,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 109, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -321, -14,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -382, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -390, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -61, 0, -393, -2, -329, -7,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimUSmash_joint19[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1026, 73,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1406, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1402, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 1334, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1319, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 32), 1027, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1026, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTDonkeyAnimUSmash_joint21[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -113, 41, 15, 53, -369, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 492, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -562, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -80, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -288, -227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -612, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -652, -27, 504, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -553, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 42), -103, -4,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -561, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -757, -13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -552, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -65, 10,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -769, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 36), -394, 15,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -56, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), -112, 1,
	ftAnimBlock(0, 16),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -107, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 12, 5,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -111, 0, -381, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -112, 0, -372, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -113, 0, 15, 2, -369, 3,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimUSmash_joint22[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 104, -21, 217, 70, -295, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -150, -328, 429, 39, -436, -230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -574, -269, 365, -73, -760, -244,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1114, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 310, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -712, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -714, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -504, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1128, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -1081, 26,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 307, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 365, -8,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1045, 53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -476, 43,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -470, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 31), 100, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 358, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), 213, -9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -433, 41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), -192, -33,
	ftAnimBlock(0, 19),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 205, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 215, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -225, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -290, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 104, 3, 217, 1, -295, -5,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimUSmash_joint24[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 994, 74,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1207, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1149, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 1149, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1152, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 42), 995, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 994, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTDonkeyAnimUSmash_joint25[146] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 7, 37, 103, -14, -387, -31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -236, 211,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -172, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 133, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 266, 48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 17, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 156,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 167, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -224, -40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -239, 5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 8, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 76, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 157, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -102, -11,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -230, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 60, 35,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 76, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 383, 12,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -112, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 28), -385, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 94, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 203, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 394, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 27), 19, -11,
	ftAnimBlock(0, 18),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 206, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 118, -15,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -386, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -386, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7, -11, 103, -14, -387, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
