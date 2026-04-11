/* AnimJoint data for relocData file 590 (FTMarioAnimItemThrowSmashU) */
/* 3072 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimItemThrowSmashU_joint1[70];
extern u16 dFTMarioAnimItemThrowSmashU_joint2[46];
extern u16 dFTMarioAnimItemThrowSmashU_joint4[50];
extern u16 dFTMarioAnimItemThrowSmashU_joint5[144];
extern u16 dFTMarioAnimItemThrowSmashU_joint6[50];
extern u16 dFTMarioAnimItemThrowSmashU_joint7[10];
extern u16 dFTMarioAnimItemThrowSmashU_joint8[50];
extern u16 dFTMarioAnimItemThrowSmashU_joint10[48];
extern u16 dFTMarioAnimItemThrowSmashU_joint11[188];
extern u16 dFTMarioAnimItemThrowSmashU_joint12[68];
extern u16 dFTMarioAnimItemThrowSmashU_joint13[34];
extern u16 dFTMarioAnimItemThrowSmashU_joint15[10];
extern u16 dFTMarioAnimItemThrowSmashU_joint16[144];
extern u16 dFTMarioAnimItemThrowSmashU_joint18[70];
extern u16 dFTMarioAnimItemThrowSmashU_joint20[148];
extern u16 dFTMarioAnimItemThrowSmashU_joint21[156];
extern u16 dFTMarioAnimItemThrowSmashU_joint23[202];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimItemThrowSmashU_joints[] = {
	(u32)dFTMarioAnimItemThrowSmashU_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimItemThrowSmashU_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimItemThrowSmashU_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimItemThrowSmashU_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimItemThrowSmashU_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimItemThrowSmashU_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimItemThrowSmashU_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimItemThrowSmashU_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimItemThrowSmashU_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimItemThrowSmashU_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimItemThrowSmashU_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimItemThrowSmashU_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimItemThrowSmashU_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimItemThrowSmashU_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimItemThrowSmashU_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimItemThrowSmashU_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimItemThrowSmashU_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	0xFFFF02BF, /* [23] END */
};

/* Joint 1 */
u16 dFTMarioAnimItemThrowSmashU_joint1[70] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 223, -28, 0, 0, 0, 0, 540, -36, 0, 3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 8), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 0, 360, -289, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 360, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 360, 1724, 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 0, 1006, 206, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 223, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 0, 540, -233, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 0, 0, 540, 5, 0, 9,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimItemThrowSmashU_joint2[46] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -71, 5, -790, -1, -95, 7,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 14, -804, -2, 0, 19,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -804, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -804, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, -3, -804, 0, 0, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -71, -1, -790, 2, -95, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTMarioAnimItemThrowSmashU_joint4[50] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 208, -104, 258, -11, 110, -21,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, -41, 0, -51, 402, 58,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 402,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), 402, -226,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 11, 0, 14, -276, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 208, 2, 258, 2, 110, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTMarioAnimItemThrowSmashU_joint5[144] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1741, 221, -1308, 87, -1880, -172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1963, 332, -1220, 94, -2053, -236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2407, 411, -1119, 71, -2354, -307,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2785, 280, -1078, 12, -2667, -240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2967, 91, -1095, -8, -2835, -84,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2969, 1, -2835, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -1095,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2971, -275, -1095, 61, -2835, 239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2419, -470, -971, 44, -2356, 414,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2030, -210, -1006, -25, -2006, 188,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1068, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1999, -30, -1979, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1969, -20, -1953, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1924, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1853, -15,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1085, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1299, -23,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1926, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1968, -6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1840, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1806, -40,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1320, -4, -1973, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1741, -64, -1308, 12, -1880, 92,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTMarioAnimItemThrowSmashU_joint6[50] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -182, 85,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -96, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 48,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, -182,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimItemThrowSmashU_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTMarioAnimItemThrowSmashU_joint8[50] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 176,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 201, -42, -4, 26,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -428, -126, 0, 0, 0, -35,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -428, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), -428, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -366, 35, 0, 0, 0, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 201, 9, -4, 0, 176, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTMarioAnimItemThrowSmashU_joint10[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), -221, -209,
	ftAnimSetValRate(FT_ANIM_ROTY), 139, 33,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 44, 332, 38, 0, 41,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 332, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), 332, -164,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, -12, -160, -10, 0, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -221, -4, 139, 5, -209, -2,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimItemThrowSmashU_joint11[188] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2052, 64, 1056, 58, 1674, 77,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1138, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2116, 61, 1751, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2175, 196, 1807, 157,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2844, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1106, -9, 2066, 270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1119, 6, 2348, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2845, -1, 1119, 1, 2348, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1131, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2842, 193, 2343, 214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3231, 273, 2777, 320,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3388, 146, 1202, 91, 2983, 215,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 3389, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3525, 97, 1314, 132,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 3560, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1467, 93,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1490, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3411, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 3389, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3587, 46, 1467, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1364, -49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 3906, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3413, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 3517, 49,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1311, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3998, 163, 1181, -186, 3572, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4232, 460, 938, -134, 3801, 464,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 989, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4919, 470, 4502, 487,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 5174, 160, 4776, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5241, 45, 1046, 40, 4859, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5265, 13, 1069, 5, 4890, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5269, 3, 1056, -13, 4891, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimItemThrowSmashU_joint12[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -811, 528,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -282, 405,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 141,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -153, -267,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -544, -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -690, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -759, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -806, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTMarioAnimItemThrowSmashU_joint13[34] = {
	ftAnimSetValAfter(FT_ANIM_ROTY), 0,
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), 625,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 5), 1429,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 4), 1340,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 3), 580,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 12), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 12), 625,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTMarioAnimItemThrowSmashU_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimItemThrowSmashU_joint16[144] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -135, 33, -230, -16, 45, -78,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -20, 92,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -249, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -33, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -184, -152,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -441, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 83, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 179, 51, -201, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -187, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 187, 9, -452, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 197, -287, -466, 243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -387, -323, -112, 55, 34, 244,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -113, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -448, -24, 22, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -436, 18, 29, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -371, 46, 47, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -317, 96, -142, -75, 55, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -178, 98, -263, -68, -161, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -119, 48, -279, -9, -229, -52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -95, 66,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -235, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -75, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -89, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -126, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -29, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 22, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -135, -8, -230, 4, 45, 23,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimItemThrowSmashU_joint18[70] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 400, 114,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 515, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 702, 179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 991, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 993, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 994, -492,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -497,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 427, 269,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 538, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 587, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 550, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 419, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, -18,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTMarioAnimItemThrowSmashU_joint20[148] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1397, 3, 1661, 28, 1411, -53,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1393, -14, 1769, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1278, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1214, -49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1183, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1372, -11, 1829, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1369, -3, 1824, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1366, 121, 1817, -169, 1189, 317,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1613, 193, 1485, -172, 1819, 452,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1754, 66, 1471, -10, 2095, 129,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1457, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1745, -25, 2078, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1702, -63, 1995, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1618, -98, 1844, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1504, -80, 1674, -200,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1436, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1484, 14, 1443, -137,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1479, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1399, -33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1384, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1431, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1399, -3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1522, 46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1650, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1390, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1407, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1397, -1, 1661, 10, 1411, 4,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimItemThrowSmashU_joint21[156] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 200, -26, 187, 33, 35, -106,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 114, -70,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 290, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -71, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -240, -174,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -561, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 32, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -48, -39, 284, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -47, 2, 281, -3, -549, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -44, 240, 278, -108, -534, 289,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 432, 253, 64, -118, 28, 280,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 462, 4, 41, -11, 26, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 53, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 442, -24, 42, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 333, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 92, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 66, 66, 126, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 254, -56, 186, 69, -27, -90,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 192, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 204, 11, -54, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 28, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 187, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 196, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 200, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 30, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 33, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 187, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 186, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 201, 1, 186, 0, 38, 4,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimItemThrowSmashU_joint23[202] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 438, 121,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 559, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 749, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1044, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1043, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1042, -518,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -521,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 422, 260,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 528, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 528, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 498, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 445, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 433, -11,
	ftAnimEnd(),
	0x0000, 0x200E, 0x06A1, 0xFFF8, 0xFA16, 0x001C, 0xF8E3, 0xFFD2, 0x2805, 0x0003, 0xFA47, 0xFFF8, 0x2803, 0x0005, 0x06AB, 0x0000, 0x2009, 0x0002, 0xF869, 0xFFBA, 0x2009, 0x0001, 0xF828, 0xFFCB, 0x2809, 0x0002, 0xF7F8, 0xFFFA, 0x2005, 0x0001, 0xFA33, 0xFFEF, 0x2005, 0x0001, 0xFA24, 0xFFEF, 0x200F, 0x0001, 0x06AB, 0xFF98, 0xFA11, 0x004C, 0xF7F1, 0x0155, 0x200F, 0x0001, 0x05DA, 0xFF53, 0xFABD, 0x0033, 0xFAA3, 0x01DE, 0x200F, 0x0001, 0x054F, 0xFFCF, 0xFA79, 0xFFD7, 0xFBAE, 0x0076, 0x2805, 0x0003, 0xFA47, 0xFFD8, 0x200B, 0x0001, 0x0576, 0x0036, 0xFB90, 0xFFBF, 0x200B, 0x0001, 0x05BD, 0x0050, 0xFB2C, 0xFF7F, 0x2803, 0x0002, 0x0664, 0x0035, 0x2009, 0x0001, 0xFA8C, 0xFF55, 0x200D, 0x0001, 0xFA10, 0xFFCA, 0xF9D5, 0xFF2A, 0x2805, 0x0006, 0xF972, 0x0000, 0x200B, 0x0001, 0x0682, 0x0016, 0xF8DF, 0xFF68, 0x2803, 0x000A, 0x06A3, 0xFFFC, 0x2009, 0x0001, 0xF8A4, 0xFFD2, 0x2809, 0x0009, 0xF8DC, 0x000E, 0x0801, 0x0004, 0x2005, 0x0001, 0xF97A, 0x0011, 0x2005, 0x0004, 0xFA0A, 0x0016, 0x200F, 0x0001, 0x06A1, 0xFFFF, 0xFA16, 0x000C, 0xF8E4, 0x0008, 0x0000,
};
