/* AnimJoint data for relocData file 1015 (FTSamusAnimCatch) */
/* 4288 bytes: 132-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimCatch_joint1[48];
extern u16 dFTSamusAnimCatch_joint2[8];
extern u16 dFTSamusAnimCatch_joint4[110];
extern u16 dFTSamusAnimCatch_joint5[238];
extern u16 dFTSamusAnimCatch_joint6[110];
extern u16 dFTSamusAnimCatch_joint7[58];
extern u16 dFTSamusAnimCatch_joint8[20];
extern u16 dFTSamusAnimCatch_joint11[68];
extern u16 dFTSamusAnimCatch_joint12[260];
extern u16 dFTSamusAnimCatch_joint13[104];
extern u16 dFTSamusAnimCatch_joint20[86];
extern u16 dFTSamusAnimCatch_joint21[60];
extern u16 dFTSamusAnimCatch_joint23[60];
extern u16 dFTSamusAnimCatch_joint24[140];
extern u16 dFTSamusAnimCatch_joint26[68];
extern u16 dFTSamusAnimCatch_joint28[146];
extern u16 dFTSamusAnimCatch_joint29[190];
extern u16 dFTSamusAnimCatch_joint31[56];
extern u16 dFTSamusAnimCatch_joint32[248];

/* Joint pointer table (33 entries, 132 bytes) */
u32 dFTSamusAnimCatch_joints[] = {
	(u32)dFTSamusAnimCatch_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimCatch_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimCatch_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimCatch_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimCatch_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimCatch_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimCatch_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimCatch_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimCatch_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimCatch_joint13, /* [12] joint 13 */
	(u32)dFTSamusAnimCatch_joint20, /* [13] joint 20 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	0x00000000, /* [16] NULL */
	0x00000000, /* [17] NULL */
	0x00000000, /* [18] NULL */
	0x00000000, /* [19] NULL */
	(u32)dFTSamusAnimCatch_joint21, /* [20] joint 21 */
	(u32)dFTSamusAnimCatch_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTSamusAnimCatch_joint24, /* [23] joint 24 */
	(u32)dFTSamusAnimCatch_joint26, /* [24] joint 26 */
	0x00000000, /* [25] NULL */
	(u32)dFTSamusAnimCatch_joint28, /* [26] joint 28 */
	0x00000000, /* [27] NULL */
	(u32)dFTSamusAnimCatch_joint29, /* [28] joint 29 */
	(u32)dFTSamusAnimCatch_joint31, /* [29] joint 31 */
	0x00000000, /* [30] NULL */
	(u32)dFTSamusAnimCatch_joint32, /* [31] joint 32 */
	0xFFFF0414, /* [32] END */
};

/* Joint 1 */
u16 dFTSamusAnimCatch_joint1[48] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1600, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 1600, -1, -236, -170,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), 1240, -238, -320, 217,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 1063, 0, 253, -1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 54), 1063, 0, 252, -1,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 8), 23, -114,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 8), 1063,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 1063, 238, 23, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 1600, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTSamusAnimCatch_joint2[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 100),
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTSamusAnimCatch_joint4[110] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -509, 0, -45, 0, 0, 0, 2, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), 0, 0, -509, 0, 0, 0, -45, 0, 0, 0, 2, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 284, 0, 405, 0, 213, 0, 40, 0, -6, 0, 58, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 54), 284, 0, 405, 0, 213, 0, 40, 0, -6, 0, 58, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 441, 9, -405, -50, -200, -25,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -35, -63, 4, 16, -3, 25,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -22, 6, 9, 3, 84, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 441, -24, -405, 22, -200, 11, -22, 10, 9, -4, 84, -37,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 0, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimCatch_joint5[238] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1130, -25, -1715, 210, 1386, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1217, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1086, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1309, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1256, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1364, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1190, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1093, -10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1073, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1153, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1364, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1273, 55,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1098, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1200, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1184, 53, 1249, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1166, -41, 1373, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1159, 15, -1267, -56, 1424, 83,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1255, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1188, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1620, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1620, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 52), 1621, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1255, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 52), -1255, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1188, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 50), -1189, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1188, 7, 1620, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1219, -118, 1486, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1251, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -926, -58,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1400, -185, 1598, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1591, 101, 1692, -202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1196, 311, 1194, -391,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1018, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1038, -71, 909, -160,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -963, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 873, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1263, -34,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1067, -52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1166, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -939, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1158, -109,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1197, -64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1343, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1095, 51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1134, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1272, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -1702, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1130, 4, -1715, -13, 1386, 43,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimCatch_joint6[110] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -703, -125,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -828, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -753, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -562, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -451, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -217, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -28, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -117, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -138, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -292, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -153, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -327, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -328, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 52), -328, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -327, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -404, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -607, -222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1170, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1161, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -1181, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1153, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -666, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -703, -36,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimCatch_joint7[58] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 701, -240,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 268, -300, -106, 0, 175, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), -9, 0, 16, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -201, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 17), -518, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 54), -518, 0, -9, 0, 16, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -293, 14, 46, 3, -23, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -293, 55, 46, -2, -23, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 701, 0, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTSamusAnimCatch_joint8[20] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 98, 60, -42,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 67, -17, -1474,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 74), 86, 68, -29,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 26), 98, 60, -42,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTSamusAnimCatch_joint11[68] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -51, 0, 506, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -51, 0, 506, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, -440, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 54), 0, 0, -440, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 22, 1, 220, 41, -12, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 22, 0, 220, -13, -12, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 13, -2, 59, -22, -26, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTSamusAnimCatch_joint12[260] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1650, -474, 1715, -372, 1409, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 968, -424,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1175, -411, 1385, -208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 827, 228, 991, -335,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1632, 526, 494, -262, 714, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1880, 153, 443, -47, 921, 137,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1967, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1029, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 400, -39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 345, 21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1972, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1737, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1015, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 891, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 898, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1737, 101, 381, 44, 1025, 247,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2218, 205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 435, -32, 1393, 357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 316, -176, 1739, 228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2350, 230, 81, -59, 1849, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2679, 431, 198, 110, 2050, 323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3212, 379, 303, 49, 2496, 298,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2647, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 3444, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 297, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 53), 294, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2646, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 51), 2645, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3447, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 50), 3444, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3437, 14, 296, 4, 2647, 45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 3387, -104,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 3291, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 244, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 218, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 283, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3261, -122,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 2949, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3282, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 3193, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 265, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 149, -45,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3198, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 3025, -12,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2942, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 3179, 63,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 102, -48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -100, -14,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3236, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3259, 22, -107, -6, 3017, -7,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTSamusAnimCatch_joint13[104] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -553, -332,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -885, -433,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1420, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -865, 249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -727, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -754, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -806, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -706, 228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -374, 350,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -183, -231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -467, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -384, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -382, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -382, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 48), -383, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -383, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -604, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -807, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1031, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1023, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -1013, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1004, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -575, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -553, 22,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTSamusAnimCatch_joint20[86] = {
	ftAnimSetValAfter(FT_ANIM_TRAY), 15,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -784, -601, -819,
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 472, 10, 163, 163, 163,
	ftAnimSetValT(FT_ANIM_SCAZ, 20), 163,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -835, 0, -626, 0, -778, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY, 19), 472, 10, 163, 163,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 15), 589, 11,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY, 1), 6144, 6144,
	ftAnimSetTargetRateBlock(FT_ANIM_SCAZ), 312,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY, 56), -835, -626, -778, 6144, 6144,
	ftAnimSetValBlockT(FT_ANIM_SCAZ, 14), 2441,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAZ, 20), 589, 11, 2441,
	ftAnimSetValT(FT_ANIM_TRAZ, 43), 11,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_SCAZ, 22), 824, 163,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_SCAZ, 21), 824, 163,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), -835, -626, -778,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY, 1), 163, 163,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY, 20), 163, 163,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 824, 11, 163, 163, 163,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTSamusAnimCatch_joint21[60] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 458, 13, 5,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 16, 16, 16,
	ftAnimSetValAfterT(FT_ANIM_ROTX, 18), -982,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 15), 16, 16, 16,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 4096, 4096,
	ftAnimBlock(0, 3),
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX, 1), 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX, 59), 352,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 57), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 16, 16, 16,
	ftAnimBlock(0, 2),
	ftAnimSetValAfterT(FT_ANIM_ROTX, 22), 0,
	ftAnimBlock(0, 4),
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 16, 16, 16,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 16, 16, 16,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTSamusAnimCatch_joint23[60] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 806, 17, 7, 16, 16, 16,
	ftAnimSetValAfterBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 695, 17, 1, 1228, 1228, 1228,
	ftAnimSetValAfterBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 13), 695, 17, 1, 1228, 1228, 1228,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 891, 28, -21, 4096, 4096, 4096,
	ftAnimSetValAfterBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 54), 891, 28, -21, 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 686, 19, 3,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 16, 16, 16,
	ftAnimSetValAfterBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 16, 16, 16,
	ftAnimSetValAfterBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 16, 16, 16,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTSamusAnimCatch_joint24[140] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 87, 12, -27, 2, -389, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 98, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 0, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -507, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -541, -34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -751, 16,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 114, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 124, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2, -2, -717, 45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 56), -10, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -630, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -630, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 43), -630, -2,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 124, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 46), 160, 7,
	ftAnimBlock(0, 38),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -8, 3, -636, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -762, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 144, -3,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 167, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 146, -16,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -756, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -430, 34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 136, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -25, -3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 131, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 89, -4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -401, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 87, -2, -27, -2, -389, 11,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTSamusAnimCatch_joint26[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 478, -63,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 293, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 293, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 672, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 719, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1061, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1076, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 1075, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1075, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 33), 1070, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1063, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 1064, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1059, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 548, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 498, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, -19,
	ftAnimEnd(),
	0x0000,
};

/* Joint 28 */
u16 dFTSamusAnimCatch_joint28[146] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -75, -9, -28, -7, -41, 74,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 17), -110, -12, 7, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 146, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 155, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 72, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 50, -41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -409, -22,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -118, -3, -4, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), -14, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 47), -115, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -409, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 53), -409, 3,
	ftAnimBlock(0, 20),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -14, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 40), -50, -8,
	ftAnimBlock(0, 23),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -115, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -221, -13,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -402, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -210, 1,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -59, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -64, 12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -210, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -96, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -233, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -77, 3,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -53, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -29, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -70, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -49, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -75, 1, -28, 1, -41, 8,
	ftAnimEnd(),
};

/* Joint 29 */
u16 dFTSamusAnimCatch_joint29[190] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 223, 21, 162, 26, -54, -64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 179, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -422, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 260, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 195, -48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 134, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 168, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 266, 19,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 124, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 101, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -443, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -332, 104,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 288, 40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 310, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 131, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 75, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 256, -44, -210, 115,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -55, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 213, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 79, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 54), 80, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -55, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 48), -55, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 213, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 49), 216, 3,
	ftAnimBlock(0, 47),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 78, -2, -62, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -277, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 122, 30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 220, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 200, 1,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -275, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -116, 31,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 199, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 166, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 152, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 217, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -85, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -63, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 223, 5, 162, -3, -54, 8,
	ftAnimEnd(),
};

/* Joint 31 */
u16 dFTSamusAnimCatch_joint31[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 453, 50,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 700, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 740, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 986, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 954, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 873, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 873, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 43), 873, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 879, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 746, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 669, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 473, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 453, -20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 32 */
u16 dFTSamusAnimCatch_joint32[248] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 145, -35, 193, -33, -214, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 77, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -336, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 137, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 201, 46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 217, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 81, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 81, 5,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 214, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 158, -33,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 87, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -147, -153, 112, 20, -381, -50,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 444, 79, -452, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -220, -62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -356, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 490, 23, -426, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -427, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 489, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 489, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 47), 490, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -356, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 46), -355, -4,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -427, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 41), -427, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -362, -10, 488, -15, -429, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -333, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 245, -2, -513, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 250, 7, -512, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -401, 37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 235, -14,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -327, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 60, 50,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -362, 39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -224, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 221, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 195, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 101, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 140, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 145, 4, 193, -2, -214, 9,
	ftAnimEnd(),
	0x500E, 0x0000, 0x0648, 0x0000, 0x4040, 0xFFA0, 0x10A0, 0xFF1A, 0x0386, 0x2841, 0x0014, 0xFFAC, 0x0000, 0x10A1, 0x0014, 0xFF1A, 0x0486, 0x2841, 0x000E, 0xFF9D, 0xFFFD, 0x10A1, 0x000E, 0xFFF1, 0x1155, 0x2841, 0x0014, 0xFF9D, 0xFFF8, 0x10A1, 0x0014, 0xFFF1, 0x1155, 0x2841, 0x0015, 0xFF73, 0x0000, 0x10A1, 0x0015, 0xFEFB, 0x049E, 0x4041, 0x0019, 0xFFA0, 0x10A1, 0x0019, 0xFF1A, 0x0386, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
