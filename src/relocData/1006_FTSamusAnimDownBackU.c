/* AnimJoint data for relocData file 1006 (FTSamusAnimDownBackU) */
/* 2448 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimDownBackU_joint1[22];
extern u16 dFTSamusAnimDownBackU_joint2[50];
extern u16 dFTSamusAnimDownBackU_joint3[16];
extern u16 dFTSamusAnimDownBackU_joint5[48];
extern u16 dFTSamusAnimDownBackU_joint6[156];
extern u16 dFTSamusAnimDownBackU_joint7[80];
extern u16 dFTSamusAnimDownBackU_joint8[32];
extern u16 dFTSamusAnimDownBackU_joint9[10];
extern u16 dFTSamusAnimDownBackU_joint10[28];
extern u16 dFTSamusAnimDownBackU_joint12[10];
extern u16 dFTSamusAnimDownBackU_joint13[186];
extern u16 dFTSamusAnimDownBackU_joint15[88];
extern u16 dFTSamusAnimDownBackU_joint16[86];
extern u16 dFTSamusAnimDownBackU_joint18[36];
extern u16 dFTSamusAnimDownBackU_joint20[90];
extern u16 dFTSamusAnimDownBackU_joint21[98];
extern u16 dFTSamusAnimDownBackU_joint23[36];
extern u16 dFTSamusAnimDownBackU_joint24[104];

/* Joint pointer table (24 entries, 96 bytes) */
AObjEvent32 * dFTSamusAnimDownBackU_joints[] = {
	(AObjEvent32 *)dFTSamusAnimDownBackU_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTSamusAnimDownBackU_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTSamusAnimDownBackU_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTSamusAnimDownBackU_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTSamusAnimDownBackU_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTSamusAnimDownBackU_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTSamusAnimDownBackU_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTSamusAnimDownBackU_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTSamusAnimDownBackU_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTSamusAnimDownBackU_joint12, /* [10] joint 12 */
	NULL, /* [11] NULL */
	(AObjEvent32 *)dFTSamusAnimDownBackU_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTSamusAnimDownBackU_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTSamusAnimDownBackU_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTSamusAnimDownBackU_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTSamusAnimDownBackU_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTSamusAnimDownBackU_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTSamusAnimDownBackU_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTSamusAnimDownBackU_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTSamusAnimDownBackU_joint1[22] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 5), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), -240, -560,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -2160,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 18), -4080, -320,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 8), -4200,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimDownBackU_joint2[50] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, -513, 17, 288, -23,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 187, 153,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 15), 17, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), -3216, -67,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 20), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 480, 329,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 600, 185,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 17, -6, 827, 381, -23, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), -3216, 0, 0, 1600, 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTSamusAnimDownBackU_joint3[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 25), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 11), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTSamusAnimDownBackU_joint5[48] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 6, -457, 156, -72, 0, -74,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 268, 35, 0, 23, -33, -32, 82, 59,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 0, 0, -102, 8, 113, -21,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 31), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 536, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 536, -25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimDownBackU_joint6[156] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 380, -47, 0, -58, -55, 53,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -389, -198, 316, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 166, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 33, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 268, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -575, -95, 419, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -216, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 334, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 280, 13, 325, -33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 310, 82,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 572, 327,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -178, -78,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -711, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 467, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 293, -436,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1027, 128, -405, -412,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 829, -147, -640, 217, -531, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 732, -48, -275, 195, -650, -77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 723, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -823, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -250, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -11, 31,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 720, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 484, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -837, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -360, 71,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -8, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 106, 10,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -296, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -251, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 476, -7, 114, 7, -231, 20,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTSamusAnimDownBackU_joint7[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -869, -62,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -947, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -738, 216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -238, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, -470,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -940, -276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1072, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -866, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -562, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -470, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -143, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -307, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -413, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -736, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimDownBackU_joint8[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 36), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -446, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -924, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 0, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 62, 63,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 701,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTSamusAnimDownBackU_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 86, 68, -29,
	ftAnimBlock(0, 36),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTSamusAnimDownBackU_joint10[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -134, 268, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 480, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 402, 3,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 25), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 31), 0, 0,
	ftAnimBlock(0, 20),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 11), 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimDownBackU_joint12[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 36),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTSamusAnimDownBackU_joint13[186] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1534, 45, 1450, -34, 1736, 38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1592, -83,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2011, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1285, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1082, -144,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1203, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1467, -125,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1277, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1949, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2021, -60,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1289, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1427, -90, 1921, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1094, -295, 1108, -248, 2011, -171,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 925, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 687, -426, 1577, -553,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 240, -84, 904, -360,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 518, 273, 958, 202, 855, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 838, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 786, 134, 1330, 145,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 787, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1249, -77,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1098, 84,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 789, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 863, 100,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1185, 90, 801, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1055, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1390, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1600, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1489, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1449, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1715, 25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 986, 145,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1608, 44,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1157, 88,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1361, 33,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1643, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1666, 23, 1737, 21, 1392, 31,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTSamusAnimDownBackU_joint15[88] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1037, 5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -674, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -514, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -506, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -445, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -328, 219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -699, -481,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -968, -199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1056, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -866, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -885, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -867, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -539, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -388, 266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -261, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -531, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -563, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -605, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, 9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTSamusAnimDownBackU_joint16[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -169, 41, -104, -35, -215, -94,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -260, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 299, 156, -579, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 437, 104, -559, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 206, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -1102, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -278, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), 30, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 26, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -38, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 187, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 65, 17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1089, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -913, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -804, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -399, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 87, 21, -27, 11, -389, 9,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTSamusAnimDownBackU_joint18[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 316, 194,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1245, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1304, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 1228, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1197, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 566, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 503, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, -24,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTSamusAnimDownBackU_joint20[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 83, -11, -117, 18, 338, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 161, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -242, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -24, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -89, -58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), -65, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 162, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 70, -7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -306, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -146, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -127, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -183, 29,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 61, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -5, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -61, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -67, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -150, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -53, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -75, -8, -28, -23, -41, 11,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTSamusAnimDownBackU_joint21[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -46, 10, -59, 27, -167, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 228, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -608, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -108, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -286, -164,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -323, 23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 213, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -5, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -654, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -977, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -979, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -364, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 27, 38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 183, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -299, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 198, 31,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -315, 68,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -57, 10,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 173, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 156, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 226, 27, 160, 4, -49, 8,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTSamusAnimDownBackU_joint23[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 755, 74,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1304, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1329, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 1264, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1225, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 524, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 465, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 442, -23,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTSamusAnimDownBackU_joint24[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 241, -24, -12, -18, 29, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 66, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -143, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -63, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -131, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 136, 54,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 14, -57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -508, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 184, 39, -116, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 282, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 27, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 32, 4, -526, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -392, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 95, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 102, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 106, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 286, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 217, -25,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -344, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -225, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 142, 36, 193, -24, -213, 11,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
