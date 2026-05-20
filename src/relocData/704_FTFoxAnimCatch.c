/* AnimJoint data for relocData file 704 (FTFoxAnimCatch) */
/* 2064 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimCatch_joint1[36];
extern u16 dFTFoxAnimCatch_joint2[24];
extern u16 dFTFoxAnimCatch_joint4[48];
extern u16 dFTFoxAnimCatch_joint5[98];
extern u16 dFTFoxAnimCatch_joint6[60];
extern u16 dFTFoxAnimCatch_joint7[10];
extern u16 dFTFoxAnimCatch_joint8[50];
extern u16 dFTFoxAnimCatch_joint10[10];
extern u16 dFTFoxAnimCatch_joint11[110];
extern u16 dFTFoxAnimCatch_joint12[50];
extern u16 dFTFoxAnimCatch_joint13[34];
extern u16 dFTFoxAnimCatch_joint15[10];
extern u16 dFTFoxAnimCatch_joint16[56];
extern u16 dFTFoxAnimCatch_joint18[32];
extern u16 dFTFoxAnimCatch_joint20[56];
extern u16 dFTFoxAnimCatch_joint21[74];
extern u16 dFTFoxAnimCatch_joint23[48];
extern u16 dFTFoxAnimCatch_joint24[88];
extern u16 dFTFoxAnimCatch_joint25[16];
extern u16 dFTFoxAnimCatch_joint26[28];
extern u16 dFTFoxAnimCatch_joint27[40];

/* Joint pointer table (27 entries, 108 bytes) */
AObjEvent32 * dFTFoxAnimCatch_joints[] = {
	(AObjEvent32 *)dFTFoxAnimCatch_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTFoxAnimCatch_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTFoxAnimCatch_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTFoxAnimCatch_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTFoxAnimCatch_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTFoxAnimCatch_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTFoxAnimCatch_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTFoxAnimCatch_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTFoxAnimCatch_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTFoxAnimCatch_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTFoxAnimCatch_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTFoxAnimCatch_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTFoxAnimCatch_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTFoxAnimCatch_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTFoxAnimCatch_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTFoxAnimCatch_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTFoxAnimCatch_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTFoxAnimCatch_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTFoxAnimCatch_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTFoxAnimCatch_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTFoxAnimCatch_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTFoxAnimCatch_joint1[36] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 48, 912, -20,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 6), 0, -34, 840, -160,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 6), 480,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 14, 76, 788, -192, 437, -192,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 48, 34, 720, 123, 360, -458,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 48, 912, -20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTFoxAnimCatch_joint2[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -141, -338, -3,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, -402, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, -402, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -141, -338, -3,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTFoxAnimCatch_joint4[48] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 309, 156, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 312, -6, 312, 78, 44, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 268, 22, 625, 81, 0, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 446, 29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 804, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 446, -27, 536, -129, 0, 16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 309, 156, 81,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 309, 156, 81,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTFoxAnimCatch_joint5[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -109, -20, -165, 31, 258, 75,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -194, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -68, -63, 526, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -154, -54, 491, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -307, -198, -177, 133, 661, 270,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -829, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 111, 187, 1031, 181,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 57, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1024, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -701, 159, 1047, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 836, -95,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -138, 16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -56, -37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -37, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 805, -81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 349, -114,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -132, 14, -121, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -109, 23, -165, -43, 258, -90,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimCatch_joint6[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, -81,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -703, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -516, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -390, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -600, -277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -944, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -720, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -825, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -720, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -782, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -708, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -578, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -604, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 45,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTFoxAnimCatch_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 16),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimCatch_joint8[50] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -113, 136, -72,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -123, -3, 44, -59, -13, 19,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -134, -223, 44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -134, -223, 44,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 89, 64, 0, -23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 178, -58, 161, 9, -95, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -113, 136, -72,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTFoxAnimCatch_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 16),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimCatch_joint11[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1475, 26, 1336, 95, -1271, -111,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1368, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1646, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1383, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1646, -236,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2104, -337,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1375, -371,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2110, -527, 1460, -122, -2531, -246,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2446, 64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1748, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2430, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -2388, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2393, 38, -2410, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2281, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1659, 134,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1627, -39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1734, -154,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2308, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1596, 57, -2164, 428,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1544, 60, 1459, -199, -1451, 446,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1475, 69, 1336, -123, -1271, 180,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimCatch_joint12[50] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -594, -35,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -542, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -447, 271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 220,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -275, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -201, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -347,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -702, -297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 108,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimCatch_joint13[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 272, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 0, 24,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 0, -33, 268, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 178, -53,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTFoxAnimCatch_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 16),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimCatch_joint16[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -376, 0, -207, 0, 28, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 106, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -390, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -38, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -22, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -223, 15,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 74, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 6, 24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -373, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -364, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -376, -11, -207, 15, 28, 21,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimCatch_joint18[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 328, 39,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 432, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 384, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 763, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 693, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 415, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 328, -86,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimCatch_joint20[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1609, -7, -1704, 4, -1658, -45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1543, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1698, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1999, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2029, -38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1998, 133,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1562, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1605, 7,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1855, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1723, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1609, 4, -1704, -6, -1658, 65,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimCatch_joint21[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 347, -8, 122, 7, 198, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 380, -56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 211, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 215, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 230, 92,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 583, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 261, -45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 436, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 136, -55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 160, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 580, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 177, -75,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 94, -22, 292, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 312, 64, 174, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 347, 34, 122, -55, 198, 24,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimCatch_joint23[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 290, -19,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 175, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 499, 404,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 814, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 365, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 486, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 397, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 290, -107,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimCatch_joint24[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1563, 26, -1517, -6, -1818, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1644, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1526, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1667, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1672, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1672, 81, -1861, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1635, -54, -1480, 121, -1671, 153,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1542, 173,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1543, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1428, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1618, 54,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1289, 146,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1552, -34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1750, -162,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1857, 25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1548, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1563, -11, -1517, 30, -1818, 39,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimCatch_joint25[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 219, 0, 0, -126, -96,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 419,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 11), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTFoxAnimCatch_joint26[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -122, 0, 0, 64, -450,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -237, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 466, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 218, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -348, -99,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), -178,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTFoxAnimCatch_joint27[40] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -48, 47, 20,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 1608, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -48, -254, 47, 97, 20, 1092,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -240, 120, 840,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -48, 152, 47, -58, 20, -655,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), -48, 47, 20,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
