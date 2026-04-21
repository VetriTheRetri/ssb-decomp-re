/* AnimJoint data for relocData file 856 (FTDonkeyAnimTech) */
/* 2144 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimTech_joint1[46];
extern u16 dFTDonkeyAnimTech_joint2[10];
extern u16 dFTDonkeyAnimTech_joint4[24];
extern u16 dFTDonkeyAnimTech_joint5[98];
extern u16 dFTDonkeyAnimTech_joint6[48];
extern u16 dFTDonkeyAnimTech_joint7[26];
extern u16 dFTDonkeyAnimTech_joint8[20];
extern u16 dFTDonkeyAnimTech_joint10[10];
extern u16 dFTDonkeyAnimTech_joint11[118];
extern u16 dFTDonkeyAnimTech_joint12[48];
extern u16 dFTDonkeyAnimTech_joint13[26];
extern u16 dFTDonkeyAnimTech_joint14[8];
extern u16 dFTDonkeyAnimTech_joint16[16];
extern u16 dFTDonkeyAnimTech_joint17[116];
extern u16 dFTDonkeyAnimTech_joint19[48];
extern u16 dFTDonkeyAnimTech_joint21[86];
extern u16 dFTDonkeyAnimTech_joint22[114];
extern u16 dFTDonkeyAnimTech_joint24[48];
extern u16 dFTDonkeyAnimTech_joint25[112];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTDonkeyAnimTech_joints[] = {
	(u32)dFTDonkeyAnimTech_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimTech_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimTech_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTDonkeyAnimTech_joint5, /* [4] joint 5 */
	(u32)dFTDonkeyAnimTech_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimTech_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimTech_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimTech_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTDonkeyAnimTech_joint11, /* [10] joint 11 */
	(u32)dFTDonkeyAnimTech_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimTech_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimTech_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimTech_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTDonkeyAnimTech_joint17, /* [16] joint 17 */
	(u32)dFTDonkeyAnimTech_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTDonkeyAnimTech_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTDonkeyAnimTech_joint22, /* [21] joint 22 */
	(u32)dFTDonkeyAnimTech_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTDonkeyAnimTech_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTDonkeyAnimTech_joint1[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -402, 480, -400,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -402, 13, 480, 1056, -400, 512,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAY, 5), -268, -175, 1800, 1056,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 5), 240,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 10), -3038, -184, -400, -320,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 1800, -720,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 900, -558,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -3216, 1031, -400,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTDonkeyAnimTech_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -265, -41, -16, 0, -214, -154,
	ftAnimBlock(0, 26),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTDonkeyAnimTech_joint4[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 750,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 24, 41, 0, 319, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 750, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -187, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 938, 58,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 750,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimTech_joint5[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1956, 4, -1323, -26, 1438, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -1973, -32, -1463, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1474, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1419, -122,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 323, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1978, 72, -1431, 51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1633, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1413, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1474, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1351, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1624, -6, 321, 62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1718, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 750, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 825, 69,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1158, -31,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1711, 1, -1333, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1676, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -1521, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1523, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1671, 4, -1523, 0, 1134, -23,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimTech_joint6[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1059, 18,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -827, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -846, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1023, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -824, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -634, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -776, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -1039, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -997, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -478, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -407, 70,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTDonkeyAnimTech_joint7[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -769, -30, -25, 1, 273, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -613, 69, 37, 2, 336, -24,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTDonkeyAnimTech_joint8[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 174,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -67, -44, 0, 1354, 213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 430, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 17), 536, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 174,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTDonkeyAnimTech_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -398, 70, 29, 0, 0, 0,
	ftAnimBlock(0, 26),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTDonkeyAnimTech_joint11[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 423, -25, 387, -29, -11, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 313, 47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 290, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -50, -128,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -687, -414,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 343, -74,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -46, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 392, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 252, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1086, -296,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -887, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -111, -46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 47, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 296, 45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 471, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -800, 81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -390, 20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 53, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -103, -20,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 467, -49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 184, -20,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -387, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -455, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -115, -12, 172, -12, -479, -24,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimTech_joint12[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1107, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -970, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1073, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1048, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -837, 200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -629, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -751, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -1039, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -999, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -485, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, 68,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTDonkeyAnimTech_joint13[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 893, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 848, -32, -36, 0, 364, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 120, -124, -15, 6, 110, -60,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 98, 0, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTDonkeyAnimTech_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -893, -1340, 2502,
	ftAnimBlock(0, 26),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTDonkeyAnimTech_joint16[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -404,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 17), -404, -23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -911,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), -404,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimTech_joint17[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -192, -48, -461, -25, -736, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -434, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -396, 145, -602, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -167, 197, -725, -58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 136, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -183, 35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -371, 36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -489, -90,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 88, -92,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -473, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -130, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -120, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -396, -306, -585, -48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -376, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -732, 186, -262, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -23, 415, -683, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 97, 60, -610, 89,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -339, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 97, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -41, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -380, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -391, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -60, -19, -392, -1, -329, 9,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimTech_joint19[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 908, -11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 994, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1079, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 853, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 932, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 928, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 848, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1094, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1184, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1049, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1026, -23,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTDonkeyAnimTech_joint21[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 395, 46, 266, 23, -20, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 324, -65, 17, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 444, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 219, -144,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 107, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 257, -59, 66, 39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 375, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -214, -90,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 92, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 105, -95,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 384, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -22, -97, 136, -177, -318, -71,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -112, 8, -375, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 29, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 10, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -113, -1, 14, 3, -369, 6,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimTech_joint22[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1358, 2, 1314, 5, 850, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1463, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -1470, -68, 820, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1539, -54, 874, 110,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1669, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1535, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1467, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1324, -90,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1630, -75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1183, 108,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1534, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1185, 252,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1225, -60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1391, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -900, -99, 1339, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1384, -321, 1100, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1542, -94, 1108, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1516, 18, 1305, 14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1393, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1392, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1504, 12, 1391, 0, 1312, 6,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimTech_joint24[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 910, -12,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1006, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1103, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 839, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 905, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 863, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 780, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1050, 186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1153, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1020, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 994, -25,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTDonkeyAnimTech_joint25[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2099, 4, -1451, 1, 1563, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1493, 91,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1425, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -2033, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2034, 87,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1734, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1592, 82,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1568, -53,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1685, 38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1852, -33,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1382, 43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1304, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1872, 8, 1507, -68,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1673, 43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1190, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1286, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1550, -197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1633, 35, -1681, -83,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -1599, -8, -1716, 5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1199, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1213, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1600, -1, -1712, 4, 1221, 7,
	ftAnimEnd(),
	0x0000, 0x0000,
};
