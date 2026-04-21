/* AnimJoint data for relocData file 649 (FTFoxAnimRunBrake) */
/* 1952 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimRunBrake_joint1[34];
extern u16 dFTFoxAnimRunBrake_joint2[14];
extern u16 dFTFoxAnimRunBrake_joint4[40];
extern u16 dFTFoxAnimRunBrake_joint5[88];
extern u16 dFTFoxAnimRunBrake_joint7[40];
extern u16 dFTFoxAnimRunBrake_joint8[48];
extern u16 dFTFoxAnimRunBrake_joint10[10];
extern u16 dFTFoxAnimRunBrake_joint11[98];
extern u16 dFTFoxAnimRunBrake_joint12[56];
extern u16 dFTFoxAnimRunBrake_joint13[16];
extern u16 dFTFoxAnimRunBrake_joint15[10];
extern u16 dFTFoxAnimRunBrake_joint16[88];
extern u16 dFTFoxAnimRunBrake_joint18[48];
extern u16 dFTFoxAnimRunBrake_joint20[50];
extern u16 dFTFoxAnimRunBrake_joint21[70];
extern u16 dFTFoxAnimRunBrake_joint23[48];
extern u16 dFTFoxAnimRunBrake_joint24[88];
extern u16 dFTFoxAnimRunBrake_joint25[36];
extern u16 dFTFoxAnimRunBrake_joint26[42];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimRunBrake_joints[] = {
	(u32)dFTFoxAnimRunBrake_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimRunBrake_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimRunBrake_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimRunBrake_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimRunBrake_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTFoxAnimRunBrake_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimRunBrake_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimRunBrake_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimRunBrake_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimRunBrake_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimRunBrake_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimRunBrake_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimRunBrake_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimRunBrake_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimRunBrake_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimRunBrake_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimRunBrake_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimRunBrake_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimRunBrake_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimRunBrake_joint1[34] = {
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 640,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 780,
	ftAnimSetValRateT(FT_ANIM_TRAY, 9), 600, -64,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 9), 0, 480,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 6), 32, 43, 660, 278,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), 240, -445,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 6), -20,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 3), 48, 912,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimRunBrake_joint2[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 357, -268, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), -141, -338, -3,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTFoxAnimRunBrake_joint4[40] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 320, 201, -181,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 320, 201, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 583, 32, 265, 15, -113, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 515, -27, 296, 9, -69, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 418, -22, 319, -15, -14, 16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 309, 156, 81,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTFoxAnimRunBrake_joint5[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1889, -55, 1893, -64, 2007, 123,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1899, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1780, 53, 2228, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1869, 45, 2070, -80,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2530, 119,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1528, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1889, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -2241, 43,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2638, 92,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2704, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1424, -91,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1536, 172,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2174, 127, 2632, -158,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1790, 133, 2045, -260,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1732, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1774, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1718, 71, 1774, 0, 1867, -178,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimRunBrake_joint7[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -190,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -241, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -448, -189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -625, -175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1232, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1087, 228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -775, 264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 216,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTFoxAnimRunBrake_joint8[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -536, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 9), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -73, -18, 81, 22, -63, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -113, 136, -72,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTFoxAnimRunBrake_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 18),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimRunBrake_joint11[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1305, 7, -1870, 12, 2049, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1800, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1349, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 2128, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2027, -58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2053, 33,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1795, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1745, 61,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1345, 28, 2088, 98,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2351, 87,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1161, 33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1696, 41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1771, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2426, 67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2376, -206,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1134, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1380, -134,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1867, -54, 2100, -215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1475, -94, -1880, -12, 1945, -155,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimRunBrake_joint12[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -73, -20,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -137, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -195, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -280, -226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -461, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1012, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -980, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -761, 192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 166,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimRunBrake_joint13[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 446,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 446,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 357, -37,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimRunBrake_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 18),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimRunBrake_joint16[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -90, 23, -214, -8, -952, -63,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -65, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -361, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1015, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -920, 71,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -890, 20,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -32, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -37, -28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -863, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -632, 4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -44, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -189, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -650, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -396, 227,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -373, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -349, -107, -298, 75, -143, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -405, -56, -223, 75, -26, 116,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimRunBrake_joint18[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 107, 270,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 377, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 410, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 762, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 788, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 604, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 415, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 761, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 721, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 528, -183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, -174,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimRunBrake_joint20[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1537, 17, -1508, -15, -1540, -187,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 16), -1588, 26, -1681, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1687, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1635, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1449, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1315, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1714, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1568, 13, -1722, -26, -1715, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1561, 6, -1734, -11, -1664, 51,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimRunBrake_joint21[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -161, 26, 225, 0, 159, -47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 287, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 190, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 111, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -99, -165,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 180, -58,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 288, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 191, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 201, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 261, 62,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 90, -71,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 78, 62,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 326, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 355, 28, 137, -54, 134, 56,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimRunBrake_joint23[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 305, 53,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 359, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 643, 202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 513, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 455, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 495, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 680, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 854, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 743, -172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 510, -205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, -178,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimRunBrake_joint24[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1535, -60, 1504, -33, 1925, -48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1274, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1435, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1876, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1642, -221,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1157, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1354, 86,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1708, -34,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1171, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1047, -64,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1436, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1701, 17,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1003, -26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1122, 124,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1667, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1635, -21, 1276, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1624, -10, 1711, 9, 1381, 105,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimRunBrake_joint25[36] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -442, 268, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -215, 261, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, -184, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 30, -92, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -286, 109, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 659, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 219, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTFoxAnimRunBrake_joint26[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -178, 53, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 192, 97, 27, -69, -164, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 409, -88, -363, -134, -72, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -178, -26, -536, 74, 0, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 350, 40,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 158, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -178, -122, 0,
	ftAnimEnd(),
};
