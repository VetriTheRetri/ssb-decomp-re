/* AnimJoint data for relocData file 767 (FTFoxAnimAttackAirN) */
/* 2976 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimAttackAirN_joint1[10];
extern u16 dFTFoxAnimAttackAirN_joint2[28];
extern u16 dFTFoxAnimAttackAirN_joint4[26];
extern u16 dFTFoxAnimAttackAirN_joint5[174];
extern u16 dFTFoxAnimAttackAirN_joint7[70];
extern u16 dFTFoxAnimAttackAirN_joint8[40];
extern u16 dFTFoxAnimAttackAirN_joint10[10];
extern u16 dFTFoxAnimAttackAirN_joint11[160];
extern u16 dFTFoxAnimAttackAirN_joint12[64];
extern u16 dFTFoxAnimAttackAirN_joint13[32];
extern u16 dFTFoxAnimAttackAirN_joint15[8];
extern u16 dFTFoxAnimAttackAirN_joint16[168];
extern u16 dFTFoxAnimAttackAirN_joint18[70];
extern u16 dFTFoxAnimAttackAirN_joint20[192];
extern u16 dFTFoxAnimAttackAirN_joint21[118];
extern u16 dFTFoxAnimAttackAirN_joint23[40];
extern u16 dFTFoxAnimAttackAirN_joint24[144];
extern u16 dFTFoxAnimAttackAirN_joint25[20];
extern u16 dFTFoxAnimAttackAirN_joint26[62];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimAttackAirN_joints[] = {
	(u32)dFTFoxAnimAttackAirN_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimAttackAirN_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimAttackAirN_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimAttackAirN_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimAttackAirN_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTFoxAnimAttackAirN_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimAttackAirN_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimAttackAirN_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimAttackAirN_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimAttackAirN_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimAttackAirN_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimAttackAirN_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimAttackAirN_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimAttackAirN_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimAttackAirN_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimAttackAirN_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimAttackAirN_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimAttackAirN_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimAttackAirN_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimAttackAirN_joint1[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 960, 0,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimAttackAirN_joint2[28] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -268, -8, 804, 26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), -804,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), -268, 5, 804, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 26), -804,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTFoxAnimAttackAirN_joint4[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -268, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 88, 2, 386, 21, -108, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), 88, -1, 386, -14, -108, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 0, -268, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimAttackAirN_joint5[174] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1888, -200, -1326, -259, -2070, 1276,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1471, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1585, -133, -794, 646,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1593, -23, -778, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1476, 274, -1632, 154, -633, -614,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2019, 283, -1283, 175, -2008, -696,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1283, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2043, 24, -2026, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), 2017, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2045, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), -1978, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1285, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), -1283, -1,
	ftAnimBlock(0, 23),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1980, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1875, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1944, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1282, 24, -1886, 226,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1334, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1603, -240, -1491, 374,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -646, -52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1472, 28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1480, -134,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1539, 34,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -710, -73,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1472, -298,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1494, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1578, 119,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1497, 54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1337, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1753, 134, -1833, -262,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1879, 20, -2048, -35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1327, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1888, 8, -1326, 1, -2070, -21,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimAttackAirN_joint7[70] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -1047,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1047, -588,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1176, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1202, 588,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 597,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 26), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -433, -381,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -769, -261,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -735, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -737, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -503, 265,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -136, 248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 7,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimAttackAirN_joint8[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 178, 268, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 268, 2, 357, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), 268, 0, 357, -2, 0, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 258, -4, 259, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), -137,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 178, 268, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTFoxAnimAttackAirN_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimAttackAirN_joint11[160] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 367, 205, 517, -245, -16, 389,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 573, -382, 272, -105, 373, -197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -396, -407, 306, 109, -412, -119,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 299, 270, 1061, 483,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 492, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 430, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 415, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 299, -2, 1102, 35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 1236, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 328, 3,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 411, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 430, -2,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1224, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1065, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 331, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 122, -22,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 418, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 96, -40,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1070, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 553, -77,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 106, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 471, -84,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 62, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 376, 129,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 472, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 246, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 342, -61, 506, 68, 32, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 348, 12, 514, 5, -1, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 367, 19, 517, 3, -16, -14,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimAttackAirN_joint12[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -7, -1015,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1023, -412,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -832, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1128, -172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1177, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -1120, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1127, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), -1027, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -964, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -618, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -622, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -254, 222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimAttackAirN_joint13[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_TRAX), 0, 272,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 536, 67,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 536,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 268, -9, 0, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), 268, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 26), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 20), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTFoxAnimAttackAirN_joint15[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, -804, 1608, 60,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimAttackAirN_joint16[168] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -349, -5, -7, 18, -218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -349, -300, -12, -214, -200, -339,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -601, 163, -434, -214, -660, -247,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -373, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -23, 137, -694, 347,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -325, -148, 33, 368,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -313, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -384, -11, 42, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), -357, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 47, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), 25, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -310, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 24), -331, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -344, 53, -330, -22, 17, -116,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -380, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -173, 23, -338, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -177, -28, -397, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -383, 4, -63, 35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -322, 70,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -59, 30,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -375, 9, -41, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 13, 82,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -97, 86,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -22, 70,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 52, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 150, 47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 46, -22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 28, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 28, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 97, -5, -4, 18, -9,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimAttackAirN_joint18[70] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 5, 638,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 644, 593,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1193, 238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1120, -596,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -560,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 25), 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 430, 344,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 688, 225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 711, -186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 498, -353,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimAttackAirN_joint20[192] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1625, 17, 1673, -322, -998, -858,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1608, 161, 1350, -51, -1856, -338,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1303, -107, 1571, 33, -1675, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1823, -215, 1418, -82, -1747, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1733, 43, 1406, 11, -1592, 77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1739, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1599, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1586, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1584, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), -1587, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1738, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -1727, -4,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1599, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 13), 1425, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1733, -40, 1406, -50, -1592, -54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2125, -59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 704, -275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1861, -237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2172, -218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2137, -324, -2299, -423,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2773, -269, -3020, -334,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2676, -56, 431, -243, -2968, -64,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -3072, -144,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 46, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3148, -180,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -3395, 78,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3174, -79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -3126, 6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 81, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -39, -29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3299, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3122, 3, -3042, 182,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -3184, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2934, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -2671, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3233, -49, -64, -25, -2606, 64,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimAttackAirN_joint21[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1600, 103, 1603, -177, 1116, 35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1214, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1216, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1704, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1599, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1633, 154, 1171, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1907, 155, 1241, 17, 1292, 57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1978, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 33), 1160, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1285, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 28), 1262, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2008, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 23), 1907, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1861, -55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1573, 36,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1259, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1348, -54,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1162, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1573, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1615, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1643, -38,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1289, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1117, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1600, -42, 1603, 29, 1116, 0,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimAttackAirN_joint23[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 626, 245,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1265, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1285, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 1276, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1279, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 848, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 769, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 646, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 626, -19,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimAttackAirN_joint24[144] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -14, -149, 124, -85, -91, -136,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 32, -88,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -419, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -164, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -18, 114,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -27, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -138, -113,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -191, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -379, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -343, -2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -189, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -191, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -44, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 57, 24,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -346, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -469, -8,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 83, 0, -194, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -19, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 94, 13,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -266, 30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -51, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -345, -12,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 75, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 82, 36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -232, 34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -98, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -351, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -130, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -14, 115, 124, 41, -91, 6,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimAttackAirN_joint25[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -126, -96,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 322, 212, 146,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 45), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTFoxAnimAttackAirN_joint26[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 402, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 64, -450,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 402, 3, 0, -18, 0, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 436, 4, -180, 18, -192, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 449, 202, 223,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 436, -180, -192,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 449, 202, 223,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 436, -180, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 449, -1, 202, 10, 223, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 402, 0, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
