/* AnimJoint data for relocData file 1003 (FTSamusAnimDownForwardD) */
/* 2624 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimDownForwardD_joint1[12];
extern u16 dFTSamusAnimDownForwardD_joint2[48];
extern u16 dFTSamusAnimDownForwardD_joint3[16];
extern u16 dFTSamusAnimDownForwardD_joint5[26];
extern u16 dFTSamusAnimDownForwardD_joint6[146];
extern u16 dFTSamusAnimDownForwardD_joint7[70];
extern u16 dFTSamusAnimDownForwardD_joint8[32];
extern u16 dFTSamusAnimDownForwardD_joint9[10];
extern u16 dFTSamusAnimDownForwardD_joint10[30];
extern u16 dFTSamusAnimDownForwardD_joint12[10];
extern u16 dFTSamusAnimDownForwardD_joint13[110];
extern u16 dFTSamusAnimDownForwardD_joint15[56];
extern u16 dFTSamusAnimDownForwardD_joint16[144];
extern u16 dFTSamusAnimDownForwardD_joint18[48];
extern u16 dFTSamusAnimDownForwardD_joint20[144];
extern u16 dFTSamusAnimDownForwardD_joint21[152];
extern u16 dFTSamusAnimDownForwardD_joint23[56];
extern u16 dFTSamusAnimDownForwardD_joint24[154];

/* Joint pointer table (24 entries, 96 bytes) */
AObjEvent32 * dFTSamusAnimDownForwardD_joints[] = {
	(AObjEvent32 *)dFTSamusAnimDownForwardD_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTSamusAnimDownForwardD_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTSamusAnimDownForwardD_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTSamusAnimDownForwardD_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTSamusAnimDownForwardD_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTSamusAnimDownForwardD_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTSamusAnimDownForwardD_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTSamusAnimDownForwardD_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTSamusAnimDownForwardD_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTSamusAnimDownForwardD_joint12, /* [10] joint 12 */
	NULL, /* [11] NULL */
	(AObjEvent32 *)dFTSamusAnimDownForwardD_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTSamusAnimDownForwardD_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTSamusAnimDownForwardD_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTSamusAnimDownForwardD_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTSamusAnimDownForwardD_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTSamusAnimDownForwardD_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTSamusAnimDownForwardD_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTSamusAnimDownForwardD_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTSamusAnimDownForwardD_joint1[12] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 28), 4200,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 8), 4200,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimDownForwardD_joint2[48] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 697, 268, -321, 23, 200, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 3395, 69, 0, -7, 0, 8,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 17, -6, 931, 40, -19, 40,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 10), 49, 15,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 10), 11, 275,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 17, -4, 931, 504, 19, -19,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 3216, 0, 0, 0, 1600, 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTSamusAnimDownForwardD_joint3[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 11), 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimDownForwardD_joint5[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -158, -45, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 402, 22, 0, 1, 0, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 402, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimDownForwardD_joint6[146] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2773, 99, -1873, 19, -2804, -216,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1699, 420,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2873, 83, -3021, -201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2939, -212, -3208, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2448, -273, -1012, 568, -2903, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2392, -11, -562, 230, -2877, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 3008, 293, -3328, -256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -551, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -422, 139,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3327, 245, -3618, -227,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -3968, -104,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 3366, -57,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -271, 148,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 140, 10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4117, -75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -4126, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3312, -52, 145, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 3027, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 179, 40,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4126, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -3989, 110,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3057, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 3681, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 207, 20, -3898, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 116, -4, -3452, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3693, 12, 114, -1, -3448, 4,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTSamusAnimDownForwardD_joint7[70] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -561, -107,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -866, -241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1151, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -726, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -745, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -873, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -756, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -387, 294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 193,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -254, -195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -390, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -741, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, 2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimDownForwardD_joint8[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 36), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -145, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 27, 425,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 705, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 309, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 32), 701,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTSamusAnimDownForwardD_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 86, 68, -29,
	ftAnimBlock(0, 36),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTSamusAnimDownForwardD_joint10[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 268, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 480, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 15), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 482, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 482, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 0, -22, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 11), 0, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimDownForwardD_joint12[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 36),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTSamusAnimDownForwardD_joint13[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 64, -13, -46, 9, -992, 84,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 180, 100, -447, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 127, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 254, 68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 25, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 271, 26, -300, 86,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -39, -36, -351, -46,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -19, -42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), -141, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -65, -16, -404, -58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 19, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -635, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -796, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -805, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 22, 3, -806, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 56, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -685, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -610, 73,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -221, 11,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -134, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -130, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 58, 1, -128, 1, -215, 5,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTSamusAnimDownForwardD_joint15[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -343, -181,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1218, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1272, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -535, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -343, 264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -308, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -394, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -595, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTSamusAnimDownForwardD_joint16[144] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 323, 11, -31, 13, -144, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 290, -59, -180, -127, -554, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 200, -36, -322, -79, -496, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -100, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 378, 16, -899, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 386, 0, -954, -46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -812, 124,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 76, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -56, 36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 55, 72,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -682, 92,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -800, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 37, 3, 130, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 42, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 440, -27,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -970, -125,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1051, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 99, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 81, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 319, -97,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 170, -19,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1065, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -408, 33,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 112, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -21, -11,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 145, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 95, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 87, -8, -27, -6, -389, 18,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTSamusAnimDownForwardD_joint18[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 182, 134,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 378, -214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 453, 216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 646, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1395, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1412, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1326, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1243, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 490, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, -11,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTSamusAnimDownForwardD_joint20[144] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2201, -163, -1502, 44, 2241, -53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1248, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -2256, 338, 1950, -356,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1687, 402, 1475, -352,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1324, 198,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1837, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1312, -53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1518, -105,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1597, 212,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1756, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1613, -64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1908, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1902, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1634, -6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1736, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1470, 15,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1645, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1726, -103,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1994, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1842, -51, -2027, 74,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1766, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1845, 145,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1561, 49,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1486, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1564, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1795, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1689, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1510, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), -1571, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1684, 4, -1579, -8, 1566, 1,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTSamusAnimDownForwardD_joint21[152] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 364, 10, 7, 12, -333, -107,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 95, -45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 464, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -675, -206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -853, -114,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -981, -50,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 35, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 126, -48,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 381, -85, -1033, -41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -979, 49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 94, -72,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 50, -86,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -34, 81,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -915, 130,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -423, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -12, -121,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -207, 55,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 34, 44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -435, -31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -583, 20,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 36, 34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 164, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -154, 48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 115, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -559, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -562, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -488, 81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -71, 39,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 159, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 218, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 226, 7, 160, -3, -49, 21,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTSamusAnimDownForwardD_joint23[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 787, 72,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 847, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 605, -219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 465, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 637, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1387, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1456, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1440, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1420, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 789, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 716, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 460, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 442, -18,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTSamusAnimDownForwardD_joint24[154] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1048, -4, -1231, 8, -1300, -34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1645, -206,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1284, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1044, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 855, 245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1536, 460,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1777, 170, -1858, -159,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1862, 169,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1732, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1373, -76,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -1986, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1624, 171,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1582, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1475, -191,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1602, 66,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1614, -34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -2097, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1666, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 1451, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1372, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1459, 177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1707, 203,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1813, -21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2117, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1870, 23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1970, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1805, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1795, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1752, -2,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1846, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1829, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1750, -1, -1802, 3, -1822, 7,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
