/* AnimJoint data for relocData file 1701 (FTNessAnimDamageFlyX2) */
/* 2672 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimDamageFlyX2_joint1[40];
extern u16 dFTNessAnimDamageFlyX2_joint2[38];
extern u16 dFTNessAnimDamageFlyX2_joint4[36];
extern u16 dFTNessAnimDamageFlyX2_joint5[130];
extern u16 dFTNessAnimDamageFlyX2_joint6[34];
extern u16 dFTNessAnimDamageFlyX2_joint7[10];
extern u16 dFTNessAnimDamageFlyX2_joint8[44];
extern u16 dFTNessAnimDamageFlyX2_joint10[10];
extern u16 dFTNessAnimDamageFlyX2_joint11[158];
extern u16 dFTNessAnimDamageFlyX2_joint12[54];
extern u16 dFTNessAnimDamageFlyX2_joint13[54];
extern u16 dFTNessAnimDamageFlyX2_joint15[16];
extern u16 dFTNessAnimDamageFlyX2_joint16[124];
extern u16 dFTNessAnimDamageFlyX2_joint18[54];
extern u16 dFTNessAnimDamageFlyX2_joint19[112];
extern u16 dFTNessAnimDamageFlyX2_joint21[46];
extern u16 dFTNessAnimDamageFlyX2_joint22[116];
extern u16 dFTNessAnimDamageFlyX2_joint24[54];
extern u16 dFTNessAnimDamageFlyX2_joint25[154];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTNessAnimDamageFlyX2_joints[] = {
	(u32)dFTNessAnimDamageFlyX2_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimDamageFlyX2_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimDamageFlyX2_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTNessAnimDamageFlyX2_joint5, /* [4] joint 5 */
	(u32)dFTNessAnimDamageFlyX2_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimDamageFlyX2_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimDamageFlyX2_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimDamageFlyX2_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTNessAnimDamageFlyX2_joint11, /* [10] joint 11 */
	(u32)dFTNessAnimDamageFlyX2_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimDamageFlyX2_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimDamageFlyX2_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTNessAnimDamageFlyX2_joint16, /* [15] joint 16 */
	(u32)dFTNessAnimDamageFlyX2_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTNessAnimDamageFlyX2_joint19, /* [18] joint 19 */
	(u32)dFTNessAnimDamageFlyX2_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTNessAnimDamageFlyX2_joint22, /* [21] joint 22 */
	(u32)dFTNessAnimDamageFlyX2_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTNessAnimDamageFlyX2_joint25, /* [24] joint 25 */
	0xFFFF0289, /* [25] END */
};

/* Joint 1 */
u16 dFTNessAnimDamageFlyX2_joint1[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 537, -28,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, -16,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 17), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 597, 28, -268, -112,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 597, -1, -268, 103,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 592, -40, 28, 312,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 537, 39, 199, -77,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNessAnimDamageFlyX2_joint2[38] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 28, -360, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 296, 15, 0, 21, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 296, -35, 0, 2, 0, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -519, -125,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 49, 323,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1206, -86,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTNessAnimDamageFlyX2_joint4[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 88,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 296, 12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 204, -3, 0, -19, 0, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 206, 57, -557, -56, -225, -45,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTNessAnimDamageFlyX2_joint5[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2018, 768, -1347, 71, 2024, -1259,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1114, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1250, 367, 764, -619,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1283, -35, 784, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1749, -186, 1218, 196,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1083, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1386, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1947, -186, 1429, 207,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -2288, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 2355, 127,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1396, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1218, 29,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2339, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2539, -436,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3212, -501,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -3700, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2498, 136,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2805, 104,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3680, 34, -1174, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3631, -174, -1062, 262, 2938, 380,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4028, 108, -649, 226, 3567, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3414, 375, -608, 31, 3124, -280,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3277, 137, -585, 23, 3007, -117,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimDamageFlyX2_joint6[34] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -473, 473,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 232,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -317,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -644, -318,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -645, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -606, 39,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimDamageFlyX2_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 29),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimDamageFlyX2_joint8[44] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -10, 0, 364, 0, -32, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 10, 17, 0, -21, 0, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 291, -28, 0, -3, 0, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -559, -3, -68, -4, 104, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 246, 60, -53, 12, -16, -27,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTNessAnimDamageFlyX2_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 29),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimDamageFlyX2_joint11[158] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2801, -130, 569, -214, 3097, -746,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2671, -32, 354, -98, 2351, -386,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2736, 57, 373, 16, 2323, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 2779, -60, 466, 32, 2123, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2695, -17, 502, 113, 2024, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 848, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2745, 356, 2085, 356,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3408, 211, 2737, 194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3167, -110, 966, 118, 2474, -132,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1321, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3187, 33, 2472, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 3350, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 2583, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2720, 53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2675, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3341, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 3606, 70,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2691, 28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 3203, 127,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1260, -58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1059, -56,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3705, 216, 3365, 283,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 4391, 248, 4160, 267,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1007, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1174, 53,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4534, 92, 4304, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4576, 41, 1192, 17, 4345, 40,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimDamageFlyX2_joint12[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, 558,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 274,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -391, -272,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -553, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -316, 252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 153,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTNessAnimDamageFlyX2_joint13[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 90, 54, 126,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 103, 0, 21, -12, 297, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 93, -28, -48, -1, 642, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -356, -57, -2, 5, 410, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -543, 57, 10, 6, 344, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -124, 63, 23, 4, 282, -21,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 90, 54, 126,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTNessAnimDamageFlyX2_joint15[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 893,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -935, 681, 75, 68, 30,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 975,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 28), 893,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTNessAnimDamageFlyX2_joint16[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -365, 538, -279, 365, -297, -800,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 172, 288, 85, 180, -1098, -398,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 211, 35, 81, -12, -1094, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -259, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -207, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -910, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -907, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -638, 84,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -283, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -85, 116,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -537, 113,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -36, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -251, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -172, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 35, 115,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 112, -208,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 69, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -275, -274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -260, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -209, 123, -166, -179,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -224, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -13, 79, -589, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -51, -46, -585, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -106, -55, -197, 27, -437, 148,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimDamageFlyX2_joint18[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 396, 174,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 571, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 528, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 211, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 12), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 878, 297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 977, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 768, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 619, -148,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTNessAnimDamageFlyX2_joint19[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 5, -25, 12, -223, 26, 284,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -211, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -211, -109, 310, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -207, 4, 336, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 5, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 519, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 530, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 508, -29,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -150, 94,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 222, 13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 24, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -6, 84,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 172, -48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 122, 22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 468, -186,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -75, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 168, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -3, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 69, 61, 37, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 69, 58, 115, 32, 244, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 114, 44, 135, 19, 324, 79,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimDamageFlyX2_joint21[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -259, 442, -102,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -849, -24, 4, -12, -161, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -678, 39, 230, 2, -152, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 49, 35, 66, -5, -190, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -321, -70, 176, -13, 11, 38,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -302, 0, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimDamageFlyX2_joint22[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -127, 210, 136, -38, -210, -514,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 168, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 83, 113, -725, -274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 98, 15, -760, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -754, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 121, -24,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 182, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 304, 16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -771, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -823, -5,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 83, -57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -293, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 318, -21, -827, -94,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 3, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1011, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1044, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -227, 258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -291, 37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 109, 55,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 27, 37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 156, 11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 35, 234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 155, 46, 153, -3, 241, 206,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimDamageFlyX2_joint24[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 407, 40,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 123, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -57,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 319, 240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 488, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 737, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 710, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 630, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 529, -101,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTNessAnimDamageFlyX2_joint25[154] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 76, -207, 25, -88, -202, 500,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -176, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -86, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 298, 288,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 375, 75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 651, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -224, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1, 10,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 618, -31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 486, -19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -51, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -35, -30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 6, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 186, 59,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 464, -79,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 286, -26,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 234, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -142, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 274, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 288, 25,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -148, -3, -74, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -148, -3, -115, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -155, -6, -139, -23, 320, 32,
	ftAnimEnd(),
	0x400E, 0xFF74, 0x011B, 0xFF4A, 0x48E0, 0xFF82, 0xFFAE, 0xFFF4, 0x200F, 0x0001, 0xFE44, 0xFFE5, 0x00E7, 0xFFEA, 0xFF65, 0x0000, 0x200F, 0x0010, 0xFDA1, 0xFFFA, 0xFF98, 0xFFFA, 0xFF44, 0x0001, 0x200F, 0x0007, 0xFDA9, 0x0050, 0x0055, 0x0008, 0xFF8F, 0x000F, 0x380F, 0x0005, 0x016B, 0x0000, 0x0000, 0x0000,
};
