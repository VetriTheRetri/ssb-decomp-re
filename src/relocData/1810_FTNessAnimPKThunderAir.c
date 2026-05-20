/* AnimJoint data for relocData file 1810 (FTNessAnimPKThunderAir) */
/* 1952 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimPKThunderAir_joint1[72];
extern u16 dFTNessAnimPKThunderAir_joint2[28];
extern u16 dFTNessAnimPKThunderAir_joint4[30];
extern u16 dFTNessAnimPKThunderAir_joint5[90];
extern u16 dFTNessAnimPKThunderAir_joint6[48];
extern u16 dFTNessAnimPKThunderAir_joint7[26];
extern u16 dFTNessAnimPKThunderAir_joint8[30];
extern u16 dFTNessAnimPKThunderAir_joint10[14];
extern u16 dFTNessAnimPKThunderAir_joint11[76];
extern u16 dFTNessAnimPKThunderAir_joint12[44];
extern u16 dFTNessAnimPKThunderAir_joint13[24];
extern u16 dFTNessAnimPKThunderAir_joint15[14];
extern u16 dFTNessAnimPKThunderAir_joint16[76];
extern u16 dFTNessAnimPKThunderAir_joint18[40];
extern u16 dFTNessAnimPKThunderAir_joint19[36];
extern u16 dFTNessAnimPKThunderAir_joint21[78];
extern u16 dFTNessAnimPKThunderAir_joint22[50];
extern u16 dFTNessAnimPKThunderAir_joint24[40];
extern u16 dFTNessAnimPKThunderAir_joint25[40];
extern u16 dFTNessAnimPKThunderAir_joint26[68];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTNessAnimPKThunderAir_joints[] = {
	(AObjEvent32 *)dFTNessAnimPKThunderAir_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTNessAnimPKThunderAir_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTNessAnimPKThunderAir_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTNessAnimPKThunderAir_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTNessAnimPKThunderAir_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTNessAnimPKThunderAir_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTNessAnimPKThunderAir_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTNessAnimPKThunderAir_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTNessAnimPKThunderAir_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTNessAnimPKThunderAir_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTNessAnimPKThunderAir_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTNessAnimPKThunderAir_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTNessAnimPKThunderAir_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTNessAnimPKThunderAir_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTNessAnimPKThunderAir_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTNessAnimPKThunderAir_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTNessAnimPKThunderAir_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTNessAnimPKThunderAir_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTNessAnimPKThunderAir_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTNessAnimPKThunderAir_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTNessAnimPKThunderAir_joint1[72] = {
	ftAnimSetValAfter(FT_ANIM_ROTX), 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -406, 0, 0, 0,
	ftAnimSetValBlock(FT_ANIM_TRAY), 242,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 10), -406, 0, 0, 0, 0, 4, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 1), 279,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 1), 244,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 1), 209,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 1), 243,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 1), 277,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 1), 243,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 1), 208,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 1), 243,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 1), 277,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 1), 242,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 6), -1, -5,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 21), 17, 8, 449, -22,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 46), -209, 0,
	ftAnimBlock0(0),
	ftAnimLoop(0x6800, -140),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNessAnimPKThunderAir_joint2[28] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 45), 14,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 24,
	ftAnimSetValRate(FT_ANIM_ROTX), -20, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), -20, 0, 0, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 88, 27,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 11), -21,
	ftAnimBlock0(0),
	ftAnimLoop(0x6800, -54),
};

/* Joint 4 */
u16 dFTNessAnimPKThunderAir_joint4[30] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 250, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 250, 0, 0, -22, 0, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 81, -33, -467, -40, -83, 16,
	ftAnimBlock0(0),
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimPKThunderAir_joint5[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 766, 70, -691, 15, -1200, -73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -676, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 837, 0, -1273, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 765, 67, -1203, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 972, -14, -430, 16, -1393, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 735, -107, -642, -93, -1180, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 757, -16, -617, 13, -1205, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 703, 90, -616, 108, -1152, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 939, -4, -401, -3, -1367, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 694, -76, -622, -113, -1141, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 786, 31, -627, -30, -1228, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 757, -29, -682, -54, -1190, 38,
	ftAnimLoop(0x6800, -176),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimPKThunderAir_joint6[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -408, 14,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -394, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -406, 192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -385, -174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -358, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -366, 179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -369, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -357, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -405, -48,
	ftAnimLoop(0x6800, -94),
};

/* Joint 7 */
u16 dFTNessAnimPKThunderAir_joint7[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -577, 1, 123, 33, -261, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -577, 4, 123, -6, -261, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -476, 12, -18, -2, 293, 11,
	ftAnimBlock0(0),
	ftAnimLoop(0x6800, -50),
};

/* Joint 8 */
u16 dFTNessAnimPKThunderAir_joint8[30] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 236, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 236, 0, 0, 19, 0, -8,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 16), -216,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 16), 229, 6, 499, 23,
	ftAnimBlock0(0),
	ftAnimLoop(0x6800, -58),
};

/* Joint 10 */
u16 dFTNessAnimPKThunderAir_joint10[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 24,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimPKThunderAir_joint11[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -384, -314, 998, -3, -847, -318,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1016, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -698, -264, -1166, -264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -912, 257, -1377, 260,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -183, 10, -646, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -891, -254, -1366, -265,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -693, 19, -1176, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -851, 229, -1332, 233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -234, 10, -708, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -831, -234, -1310, -235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -703, 220, -1179, 227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -390, 312, 1004, -11, -855, 324,
	ftAnimLoop(0x6800, -148),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimPKThunderAir_joint12[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -653, -97,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -777, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -616, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -747, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -703, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -700, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -545, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -680, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -683, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -650, 32,
	ftAnimLoop(0x6800, -86),
};

/* Joint 13 */
u16 dFTNessAnimPKThunderAir_joint13[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 574, -4, -137, -26, -268, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 574, 0, -137, 14, -268, 25,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 573, 161, 264,
	ftAnimBlock0(0),
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTNessAnimPKThunderAir_joint15[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	_FT_ANIM_CMD(11, 0, 1), 24,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimPKThunderAir_joint16[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, -82, -401, 6, -645, 98,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2, 85,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -397, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -546, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -647, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 89, 0, -748, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -78, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -648, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -550, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 0, 83, -645, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 88, -1, -749, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3, -85, -644, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -83, 0, -548, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2, 80, -407, -9, -648, -100,
	ftAnimLoop(0x6800, -148),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimPKThunderAir_joint18[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1014, -92,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 922, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1012, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1014, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 925, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1095, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1012, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 924, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1014, 89,
	ftAnimLoop(0x6800, -78),
};

/* Joint 19 */
u16 dFTNessAnimPKThunderAir_joint19[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 150, 13, 232, -5, 51, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), 170, 1, 231, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 78, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 55, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 80, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 162, -7, 238, 7, 58, -21,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimPKThunderAir_joint21[78] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -336, 0, 129, -1, 76, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -171, 4, 145, 3, 125, 9,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 145, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -326, -139,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), -451,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), -326,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), -171,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -1,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 145, -3, 125, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -330,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), -458,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), -337,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), -171,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -336, 0, 129, -4, 76, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -496, -15, 103, -3, 61, 6,
	ftAnimBlock0(0),
	ftAnimLoop(0x6800, -152),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimPKThunderAir_joint22[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1292, 42, 1217, 20, 1257, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1251, 43, 1185, 18, 1291, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1208, 12, 1207, -8, 1342, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1199, 48, 1153, 25, 1338, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1153, 15, 1181, -5, 1387, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1168, -14, 1141, -39, 1364, -22,
	ftAnimLoop(0x6800, -96),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimPKThunderAir_joint24[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1099, -92,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1006, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1097, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1100, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1013, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1186, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1100, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1012, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1098, 86,
	ftAnimLoop(0x6800, -78),
};

/* Joint 25 */
u16 dFTNessAnimPKThunderAir_joint25[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1805, -16, 1781, 17, 1549, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), -1898, 3, 1859, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1534, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1584, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1562, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1619, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1890, 7, 1854, -5, 1584, -35,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimPKThunderAir_joint26[68] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -126, -82, -12,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -207, 6, -174, 1, -150, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -174, 7, -150, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -373, -1,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), -210,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), -367,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), -219,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), -370,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), -207,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), -370,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), -213,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), -370,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), -207,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -338, -37, -50, 1, -124, -9,
	ftAnimBlock0(0),
	ftAnimLoop(0x6800, -120),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
