/* AnimJoint data for relocData file 1705 (FTNessAnimClashingDuringPKTA) */
/* 2096 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimClashingDuringPKTA_joint1[46];
extern u16 dFTNessAnimClashingDuringPKTA_joint2[8];
extern u16 dFTNessAnimClashingDuringPKTA_joint4[20];
extern u16 dFTNessAnimClashingDuringPKTA_joint5[142];
extern u16 dFTNessAnimClashingDuringPKTA_joint6[48];
extern u16 dFTNessAnimClashingDuringPKTA_joint7[12];
extern u16 dFTNessAnimClashingDuringPKTA_joint8[20];
extern u16 dFTNessAnimClashingDuringPKTA_joint10[12];
extern u16 dFTNessAnimClashingDuringPKTA_joint11[108];
extern u16 dFTNessAnimClashingDuringPKTA_joint12[16];
extern u16 dFTNessAnimClashingDuringPKTA_joint13[40];
extern u16 dFTNessAnimClashingDuringPKTA_joint15[12];
extern u16 dFTNessAnimClashingDuringPKTA_joint16[78];
extern u16 dFTNessAnimClashingDuringPKTA_joint18[44];
extern u16 dFTNessAnimClashingDuringPKTA_joint19[114];
extern u16 dFTNessAnimClashingDuringPKTA_joint21[40];
extern u16 dFTNessAnimClashingDuringPKTA_joint22[76];
extern u16 dFTNessAnimClashingDuringPKTA_joint24[40];
extern u16 dFTNessAnimClashingDuringPKTA_joint25[80];
extern u16 dFTNessAnimClashingDuringPKTA_joint26[40];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTNessAnimClashingDuringPKTA_joints[] = {
	(AObjEvent32 *)dFTNessAnimClashingDuringPKTA_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTNessAnimClashingDuringPKTA_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTNessAnimClashingDuringPKTA_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTNessAnimClashingDuringPKTA_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTNessAnimClashingDuringPKTA_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTNessAnimClashingDuringPKTA_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTNessAnimClashingDuringPKTA_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTNessAnimClashingDuringPKTA_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTNessAnimClashingDuringPKTA_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTNessAnimClashingDuringPKTA_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTNessAnimClashingDuringPKTA_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTNessAnimClashingDuringPKTA_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTNessAnimClashingDuringPKTA_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTNessAnimClashingDuringPKTA_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTNessAnimClashingDuringPKTA_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTNessAnimClashingDuringPKTA_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTNessAnimClashingDuringPKTA_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTNessAnimClashingDuringPKTA_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTNessAnimClashingDuringPKTA_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTNessAnimClashingDuringPKTA_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTNessAnimClashingDuringPKTA_joint1[46] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -98, 537, 39, 199, -77,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -1787, -110,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 621, -157, -28, -260,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 261, -299, -256, 65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -3216, -98,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 96, 147, 86, 243,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 537, 126, 199, 51,
	ftAnimLoop(0x6800, -88),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNessAnimClashingDuringPKTA_joint2[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1206, 0, 0,
	ftAnimBlock(0, 29),
	ftAnimLoop(0x6800, -14),
};

/* Joint 4 */
u16 dFTNessAnimClashingDuringPKTA_joint4[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 206, -557, -225,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 255, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 206, -557, -225,
	ftAnimLoop(0x6800, -38),
};

/* Joint 5 */
u16 dFTNessAnimClashingDuringPKTA_joint5[142] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -60, -51, -585, -80, -209, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -763, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -111, 312, -180, -322,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 563, 636, -854, -602,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1161, 354, -601, 167, -1386, -242,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -243, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1273, 169, -1339, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -2110, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1842, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2000, 172,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2443, 6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -201, 44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -272, -51,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2435, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 2595, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2165, -55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2817, -113,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2785, 189, -318, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 3073, -172,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -464, -14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2915, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -2979, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2837, -158, -2828, 52,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 2989, 176, -3254, -203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -502, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -611, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3156, 167, -585, 26, -3426, -171,
	ftAnimLoop(0x6800, -280),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimClashingDuringPKTA_joint6[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -606, -16,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -314, 267,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 15), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -173, -262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -525, -242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -658, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -606, 52,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimClashingDuringPKTA_joint7[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 29),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimClashingDuringPKTA_joint8[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 246, -53, -16,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 222, 197, 88,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 246, -53, -16,
	ftAnimLoop(0x6800, -38),
};

/* Joint 10 */
u16 dFTNessAnimClashingDuringPKTA_joint10[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 29),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimClashingDuringPKTA_joint11[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1857, -7, 1192, -27, 1128, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1457, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), -1983, -21, 1373, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1999, 2, 1281, -104,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 767, -66,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -2229, -290,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1497, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1209, -30,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 688, -87,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 567, 214,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2551, -271,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -2926, 72,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1176, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1096, 52,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2824, 159,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1919, 101,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 810, 216,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1089, 64,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1154, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1857, 62, 1192, 37, 1128, 38,
	ftAnimLoop(0x6800, -212),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimClashingDuringPKTA_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 28), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -9,
	ftAnimLoop(0x6800, -30),
};

/* Joint 13 */
u16 dFTNessAnimClashingDuringPKTA_joint13[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 90, 54, 126,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 90, 22, 54, -6, 126, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 399, -18, -32, -4, 213, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -172, -20, -12, 5, 660, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 90, 54, 126,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTNessAnimClashingDuringPKTA_joint15[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 29),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimClashingDuringPKTA_joint16[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -106, 3, -197, -4, -437, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -132, -40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -225, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -91, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 59, 147,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 585, -86,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -171, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -102, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -187, 36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -269, 11,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 480, -111,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -436, -4,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -255, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -201, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -106, -4, -197, 3, -437, 0,
	ftAnimLoop(0x6800, -152),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimClashingDuringPKTA_joint18[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 619, 20,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 874, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 781, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 264, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 214, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 642, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 706, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 690, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 640, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 619, -20,
	ftAnimLoop(0x6800, -86),
};

/* Joint 19 */
u16 dFTNessAnimClashingDuringPKTA_joint19[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 114, 1, 135, 11, 324, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 230, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 13, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -141, -174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -298, -124,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -149, 172,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 225, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 146, -21,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 79, 69,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 131, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 42, 175,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 95, -136,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 135, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 256, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 91, -43, -52, -138,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 81, 32, 15, 126,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 257, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 144, -17,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 109, 18, 141, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 116, -2, 303, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 114, -2, 135, -9, 324, 21,
	ftAnimLoop(0x6800, -224),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimClashingDuringPKTA_joint21[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -302, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 171, 80,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -28, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 829, 3, 0, 3, 0, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 226, -75,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 22, 142,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -302, 0, 0,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimClashingDuringPKTA_joint22[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1764, -3, 1455, -3, 1850, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 1654, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 1412, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 1194, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1199, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 1287, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1667, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1691, 40,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1408, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1446, 13,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1440, 152,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1814, 63,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1729, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1754, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1764, 9, 1455, 8, 1850, 35,
	ftAnimLoop(0x6800, -148),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimClashingDuringPKTA_joint24[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 529, 14,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 704, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 643, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 506, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 588, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 775, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 667, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 571, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 529, -42,
	ftAnimLoop(0x6800, -78),
};

/* Joint 25 */
u16 dFTNessAnimClashingDuringPKTA_joint25[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -155, 9, -139, -5, 320, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 75, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), -162, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -200, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -277, -51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 197, 110,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 46, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -81, -44,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 285, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -153, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -99, 68,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 303, 33,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -124, -34, -156, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -156, -2, -141, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -155, 0, -139, 2, 320, 17,
	ftAnimLoop(0x6800, -156),
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimClashingDuringPKTA_joint26[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 363, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 103, -45, -15, -2, -26, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -269, -21, -31, 0, -53, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -198, 42, -15, 2, -26, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 363, 0, 0,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};
