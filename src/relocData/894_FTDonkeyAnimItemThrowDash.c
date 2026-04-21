/* AnimJoint data for relocData file 894 (FTDonkeyAnimItemThrowDash) */
/* 3200 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimItemThrowDash_joint1[18];
extern u16 dFTDonkeyAnimItemThrowDash_joint2[60];
extern u16 dFTDonkeyAnimItemThrowDash_joint3[42];
extern u16 dFTDonkeyAnimItemThrowDash_joint5[58];
extern u16 dFTDonkeyAnimItemThrowDash_joint6[152];
extern u16 dFTDonkeyAnimItemThrowDash_joint8[56];
extern u16 dFTDonkeyAnimItemThrowDash_joint9[42];
extern u16 dFTDonkeyAnimItemThrowDash_joint11[10];
extern u16 dFTDonkeyAnimItemThrowDash_joint12[160];
extern u16 dFTDonkeyAnimItemThrowDash_joint13[72];
extern u16 dFTDonkeyAnimItemThrowDash_joint14[34];
extern u16 dFTDonkeyAnimItemThrowDash_joint15[10];
extern u16 dFTDonkeyAnimItemThrowDash_joint17[34];
extern u16 dFTDonkeyAnimItemThrowDash_joint18[136];
extern u16 dFTDonkeyAnimItemThrowDash_joint20[60];
extern u16 dFTDonkeyAnimItemThrowDash_joint22[140];
extern u16 dFTDonkeyAnimItemThrowDash_joint23[196];
extern u16 dFTDonkeyAnimItemThrowDash_joint25[72];
extern u16 dFTDonkeyAnimItemThrowDash_joint26[196];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTDonkeyAnimItemThrowDash_joints[] = {
	(u32)dFTDonkeyAnimItemThrowDash_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimItemThrowDash_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimItemThrowDash_joint3, /* [2] joint 3 */
	(u32)dFTDonkeyAnimItemThrowDash_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTDonkeyAnimItemThrowDash_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimItemThrowDash_joint8, /* [6] joint 8 */
	0x00000000, /* [7] NULL */
	(u32)dFTDonkeyAnimItemThrowDash_joint9, /* [8] joint 9 */
	(u32)dFTDonkeyAnimItemThrowDash_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTDonkeyAnimItemThrowDash_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimItemThrowDash_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimItemThrowDash_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimItemThrowDash_joint15, /* [14] joint 15 */
	(u32)dFTDonkeyAnimItemThrowDash_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTDonkeyAnimItemThrowDash_joint18, /* [17] joint 18 */
	(u32)dFTDonkeyAnimItemThrowDash_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTDonkeyAnimItemThrowDash_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTDonkeyAnimItemThrowDash_joint23, /* [22] joint 23 */
	(u32)dFTDonkeyAnimItemThrowDash_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTDonkeyAnimItemThrowDash_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTDonkeyAnimItemThrowDash_joint1[18] = {
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 4069,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), 1042, 707,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 21), 2040, 161,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 15), 1770,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTDonkeyAnimItemThrowDash_joint2[60] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 65, 1450, -209,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 19, -91, 1135, -630, -456, -1,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 1135, -16, -209, 463,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 2), 19,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 1119, -150, 7, 216,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 6), 19,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 19, 1, 927, -155, 87, 102,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 22, 1, 924, -134, 135, 38,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 22, -20, 760, 42, 135, -214,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), -29, 1031, -400,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTDonkeyAnimItemThrowDash_joint3[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 317, -88, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -322, -99, -409, 60, 279, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -81, 55, 152, 44, 8, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 123, 7, -52, -39, 42, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 2, -12, -284, 0, 109, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), -265, -41, -16,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimItemThrowDash_joint5[58] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 457, 58, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 711, 290, -248, -169, -590, -292,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1618, -90, -618, -54, -1176, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 258, -220, -519, 177, 85, 267,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 517, 304, 271, 304, 162, 216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1477, 18, 697, 3, 950, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 788, -25, 321, -23, 100, -31,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 750, 24, 41,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimItemThrowDash_joint6[152] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 187, 10, 62, -3, -509, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -95, -104,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 104, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -443, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -302, 116,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -196, -99,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -368, 37,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -42, -144, 134, 121,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 303, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -311, 20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -320, 43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -311, 28,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 311, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 161, -81,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -290, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -59, 39,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 75, -79,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 5, 58,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -34, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -134, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -278, 33, 83, 55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -101, -48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -94, 8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -143, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -63, 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -150, -51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -460, -24,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -87, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -62, 1, -84, 2, -473, -13,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTDonkeyAnimItemThrowDash_joint8[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -4, 4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -142, -222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -445, -250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1103, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1139, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -1139, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1114, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -920, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -943, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -670, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -606, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -427, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -407, 19,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTDonkeyAnimItemThrowDash_joint9[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 151, -67, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -46, -31, 388, -31, -373, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -130, -41, -350, -106, 254, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -417, 30, -569, 8, 670, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 328, 21, -219, 18, -56, -26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 174, -67, -44,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTDonkeyAnimItemThrowDash_joint11[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -269, 151, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), -398, 70, 29,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimItemThrowDash_joint12[160] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -381, 4, -3, 122, 2257, 133,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -140, 268, 2874, 363,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 295, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 451, 88,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 362, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 213, 275, 3309, 334,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 477, 45, 3596, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 501, 206, 408, 326, 3590, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 889, 159, 1016, 448, 3735, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 820, -18, 1306, 258, 3693, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 895, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1705, 103, 3911, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1740, 26, 3904, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1601, -68,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 3741, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 901, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 916, 24,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1525, -109,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 914, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 953, 101, 3791, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1118, 327, 3970, 337,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1608, 337, 4467, 342,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1758, -28, 4636, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 945, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1432, 8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1726, -32, 4612, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), 1493, -2, 4350, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1492, -1, 1436, 4, 4346, -4,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTDonkeyAnimItemThrowDash_joint13[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -4, -277,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -924, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -877, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -554, 205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -313, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -509, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -524, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -403, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -379, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -692, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -844, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -852, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -834, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -485, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -450, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -425, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, 9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTDonkeyAnimItemThrowDash_joint14[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 357, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 1554, 54, 207, 5, 613, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1120, -27, 77, -9, 106, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1283, -39, 117, -2, 459, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), 98, 0, 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTDonkeyAnimItemThrowDash_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -893, -1340, 2502, 120, 120, 120,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimItemThrowDash_joint17[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -742, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -458, 14, -627, -18, -79, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -402, -11, -449, 24, -57, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -734, 0, -71, 28, -8, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -411, 0, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTDonkeyAnimItemThrowDash_joint18[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1973, -86, -1118, -96, 938, 287,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1329, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2060, 14, -1215, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1944, 110, -1242, -112,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1605, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1838, 36, 1155, -122,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1046, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1871, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1811, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1610, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1271, 61,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 999, -46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 829, -13,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1207, 62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1014, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1749, 54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1683, 67,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 822, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 829, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1596, 90, 731, -103,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1413, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 507, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1008, 4, 519, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -1212, -6, 1270, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1422, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), -1667, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1669, -2, -1215, -3, 1279, 8,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTDonkeyAnimItemThrowDash_joint20[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1012, 2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 996, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 764, -294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 408, -232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 300, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 500, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 555, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 780, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 769, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 955, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 974, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 1035, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1028, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1026, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTDonkeyAnimItemThrowDash_joint22[140] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 340, -74, -79, -77, -97, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -272, -58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -5, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 266, -312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -284, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 12, 246, -274, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 209, 93, -90, 130, 149, 108,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 142, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 200, 27, -13, 56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 3, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 264, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 166, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 160, -22, 126, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -26, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 119, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -4, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 116, 3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -21, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 112, -40,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 119, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 72, -19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 115, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -365, -7,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 68, -43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -111, -4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 53, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 17, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -113, -2, 14, -2, -369, -3,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTDonkeyAnimItemThrowDash_joint23[196] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1524, -431, 1308, 96, -1779, -192,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1424, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1955, -197, -1971, -214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1919, 129, -2208, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1696, 296, 1244, 59, -1735, 408,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1327, 208, 1544, 194, -1391, 196,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1359, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1279, 45, 1633, 37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1414, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1236, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1304, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1403, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1054, 102,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1382, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1157, -81,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1310, -13, -996, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1520, -145,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1269, -160,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1085, -45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1344, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1681, -156,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2042, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1435, -161,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1721, 48,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1461, 83,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1368, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2037, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1834, 21,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1665, 51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -1882, -16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1360, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1400, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1812, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1508, 7,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1895, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1904, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1396, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1391, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1504, 3, 1391, 0, -1904, 0,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTDonkeyAnimItemThrowDash_joint25[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 673, 245,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 918, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 973, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 895, -233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 505, -272,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 402, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 666, 248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 973, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 940, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1240, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1213, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1075, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1091, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 1030, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1012, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 999, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 994, -4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTDonkeyAnimItemThrowDash_joint26[196] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -23, 619, -268, 221, 232, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 596, 63, -47, 247, 233, -238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 103, -167, 226, 162, -244, -337,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -432, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 261, 30, 277, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 165, -73, 393, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 113, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 147, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 70, -30, -501, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 67, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 131, -80, -486, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -46, -114, -350, 79,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -365, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -96, -7, 0, -49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -68, -75,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -112, -11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -361, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -125, 117,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -165, -74,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -90, 72,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -119, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -56, 50,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 102,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 14, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -29, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 70, 25,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -142, -171,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -520, -52,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 84, 0, -8, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -64, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 100, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -561, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -390, 6,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -55, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 3, 8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 102, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7, 4, 103, 0, -387, 3,
	ftAnimEnd(),
};
