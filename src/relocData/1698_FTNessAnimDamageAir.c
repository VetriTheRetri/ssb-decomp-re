/* AnimJoint data for relocData file 1698 (FTNessAnimDamageAir) */
/* 2208 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimDamageAir_joint1[32];
extern u16 dFTNessAnimDamageAir_joint2[40];
extern u16 dFTNessAnimDamageAir_joint4[52];
extern u16 dFTNessAnimDamageAir_joint5[100];
extern u16 dFTNessAnimDamageAir_joint6[30];
extern u16 dFTNessAnimDamageAir_joint7[10];
extern u16 dFTNessAnimDamageAir_joint8[52];
extern u16 dFTNessAnimDamageAir_joint10[10];
extern u16 dFTNessAnimDamageAir_joint11[98];
extern u16 dFTNessAnimDamageAir_joint12[36];
extern u16 dFTNessAnimDamageAir_joint13[38];
extern u16 dFTNessAnimDamageAir_joint15[10];
extern u16 dFTNessAnimDamageAir_joint16[76];
extern u16 dFTNessAnimDamageAir_joint18[40];
extern u16 dFTNessAnimDamageAir_joint19[90];
extern u16 dFTNessAnimDamageAir_joint21[38];
extern u16 dFTNessAnimDamageAir_joint22[94];
extern u16 dFTNessAnimDamageAir_joint24[46];
extern u16 dFTNessAnimDamageAir_joint25[160];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTNessAnimDamageAir_joints[] = {
	(u32)dFTNessAnimDamageAir_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimDamageAir_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimDamageAir_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTNessAnimDamageAir_joint5, /* [4] joint 5 */
	(u32)dFTNessAnimDamageAir_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimDamageAir_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimDamageAir_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimDamageAir_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTNessAnimDamageAir_joint11, /* [10] joint 11 */
	(u32)dFTNessAnimDamageAir_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimDamageAir_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimDamageAir_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTNessAnimDamageAir_joint16, /* [15] joint 16 */
	(u32)dFTNessAnimDamageAir_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTNessAnimDamageAir_joint19, /* [18] joint 19 */
	(u32)dFTNessAnimDamageAir_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTNessAnimDamageAir_joint22, /* [21] joint 22 */
	(u32)dFTNessAnimDamageAir_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTNessAnimDamageAir_joint25, /* [24] joint 25 */
	0xFFFF0211, /* [25] END */
};

/* Joint 1 */
u16 dFTNessAnimDamageAir_joint1[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 242,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 2), -204, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 0, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -184, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 17), -184, 8, -204, 74,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 5), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTNessAnimDamageAir_joint2[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 324, -209, -144, 0, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 256, 160, -322, -63, 122, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 321, 3, -336, 0, 65, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 321, -14, -336, 5, 65, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 1, -209, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTNessAnimDamageAir_joint4[52] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 148, -188, 0, -260, 0, -231,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -110, -63, -174, -199, -266, -208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, 7, -399, -12, -417, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 21, 1, -399, 15, -417, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 42, 25, -108, 79, -109, 83,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 148, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimDamageAir_joint5[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1934, -343, -964, 880, 1589, 728,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2277, 212, -84, 313, 2317, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1509, 403, -338, -122, 1284, -528,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -319, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1470, 33, 1260, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1441, 24, 1243, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 14), -1491, -19, 1274, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -313, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 13), -320, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1508, -164, -338, -125, 1284, 243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1820, -468, -570, -24, 1760, 600,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2445, -478, -386, 88, 2484, 378,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -545, -125, 2576, 339,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2778, -234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2915, -382,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3542, -627, -643, -98, 3197, 620,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimDamageAir_joint6[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -539, 530,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 265,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -138, -265,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -539, -401,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimDamageAir_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 268, 143, 0, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimDamageAir_joint8[52] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 194, 130, 0, 43, 0, -156,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 435, 160, -62, -3, -189, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 516, 4, -6, 3, -163, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 516, -16, -6, 0, -163, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 194, 0, 0, 1, 0, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 194, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTNessAnimDamageAir_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimDamageAir_joint11[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2182, -21, 968, -432, 1786, 64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 353, -93,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1967, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2160, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2387, 116,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2397, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 350, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 365, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1967, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 1950, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2399, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 2387, 1,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 358, -77, 1964, 88,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2319, 130,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 111, 284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2384, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2343, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2767, 547, 2390, 383,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3438, 511, 561, 264, 3086, 502,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3790, 352, 639, 78, 3395, 309,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimDamageAir_joint12[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -433, 433,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -54, -346,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -703, -189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -433, 270,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTNessAnimDamageAir_joint13[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -170, -63, 267,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 114, 14, 10, 3, 523, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 114, -6, 10, -1, 523, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -6, -56, -17, -14, 742, -51,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -170, -63, 267,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTNessAnimDamageAir_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimDamageAir_joint16[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1575, 1, -1248, -36, 908, -59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1291, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 1591, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 851, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 848, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 867, 43,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1291, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1248, 5,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1583, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1589, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 944, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 836, 19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1612, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1593, -18, 880, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1575, -17, -1248, 0, 908, 28,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimDamageAir_joint18[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 439, -431,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 390, 245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 499, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 474, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 439, -34,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTNessAnimDamageAir_joint19[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -12, -310, 34, -188, -7, 692,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -324, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -322, -17, 685, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -46, 145, 247, -231,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -25, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -327, -3, 221, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -324, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 200, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 252, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -29, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -46, 53,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 247, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 9, 27, -286, 84, 379, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -7, -7, 6, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 246, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -12, -4, 34, 28, -7, -7,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimDamageAir_joint21[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -476, 178, 112,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -625, -35, 127, -36, -115, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -546, 4, 105, -1, -58, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), -546, 3, 105, 3, -58, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -476, 178, 112,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimDamageAir_joint22[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -59, 201, 442, -132, -799, -183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 142, 318, 309, -205, -982, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 577, 230, 31, -141, -612, 185,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 16, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 602, 28, -611, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 634, 35, -607, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 824, -123,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -614, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 11, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 35, 13,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 694, -123,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -22, -69,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 56, 96, -579, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 335, 96, -764, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 420, 53, -776, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -59, -37, 442, 22, -799, -22,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimDamageAir_joint24[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 614, -123,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 490, -307,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -241,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 420, 310,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 620, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 665, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 614, -51,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTNessAnimDamageAir_joint25[160] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 7, -534, -104, -72, -32, 646,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -527, -148, -176, 5, 614, 260,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -288, 123, -92, 35, 487, -61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 520, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -272, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -278, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -284, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -434, 66,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 530, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 571, -51,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -304, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -157, 70,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -363, 62, 523, -41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 380, -200,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -121, 104,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -92, 54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -83, -24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 83, -211,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -75, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -17, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7, 24, -104, -21, -32, 43,
	ftAnimEnd(),
	0x400E, 0xFEAD, 0xFF00, 0xFF2D, 0x48E0, 0xFF82, 0xFFAE, 0xFFF4, 0x200F, 0x0001, 0xFDED, 0xFFDF, 0x001C, 0x00D8, 0xFDB2, 0xFFDE, 0x200F, 0x0001, 0xFE6A, 0x0006, 0x00B1, 0x0008, 0xFEE7, 0x0011, 0x200F, 0x0011, 0xFE6A, 0x0002, 0x00B1, 0xFFFE, 0xFEE7, 0xFFFC, 0x200F, 0x0002, 0xFE93, 0x000D, 0x007D, 0xFFAA, 0xFE8B, 0x000D, 0x380F, 0x0003, 0xFEAD, 0xFF00, 0xFF2D, 0x0000,
};
