/* AnimJoint data for relocData file 1002 (FTSamusAnimTechB) */
/* 2880 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimTechB_joint1[18];
extern u16 dFTSamusAnimTechB_joint2[106];
extern u16 dFTSamusAnimTechB_joint3[28];
extern u16 dFTSamusAnimTechB_joint5[62];
extern u16 dFTSamusAnimTechB_joint6[146];
extern u16 dFTSamusAnimTechB_joint7[80];
extern u16 dFTSamusAnimTechB_joint8[62];
extern u16 dFTSamusAnimTechB_joint9[10];
extern u16 dFTSamusAnimTechB_joint10[52];
extern u16 dFTSamusAnimTechB_joint12[10];
extern u16 dFTSamusAnimTechB_joint13[172];
extern u16 dFTSamusAnimTechB_joint15[80];
extern u16 dFTSamusAnimTechB_joint16[104];
extern u16 dFTSamusAnimTechB_joint18[56];
extern u16 dFTSamusAnimTechB_joint20[98];
extern u16 dFTSamusAnimTechB_joint21[126];
extern u16 dFTSamusAnimTechB_joint23[48];
extern u16 dFTSamusAnimTechB_joint24[134];

/* Joint pointer table (24 entries, 96 bytes) */
AObjEvent32 * dFTSamusAnimTechB_joints[] = {
	(AObjEvent32 *)dFTSamusAnimTechB_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTSamusAnimTechB_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTSamusAnimTechB_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTSamusAnimTechB_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTSamusAnimTechB_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTSamusAnimTechB_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTSamusAnimTechB_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTSamusAnimTechB_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTSamusAnimTechB_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTSamusAnimTechB_joint12, /* [10] joint 12 */
	NULL, /* [11] NULL */
	(AObjEvent32 *)dFTSamusAnimTechB_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTSamusAnimTechB_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTSamusAnimTechB_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTSamusAnimTechB_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTSamusAnimTechB_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTSamusAnimTechB_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTSamusAnimTechB_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTSamusAnimTechB_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTSamusAnimTechB_joint1[18] = {
	ftAnimSetVal(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 6), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -3520,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 24), -4800,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 10), -4800,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTSamusAnimTechB_joint2[106] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 8230,
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 715, 1440, -1364, 0, -267,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 8230, -155,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -39, 1515, 154,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 715, 1440, -1364, 0, -267,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 5227, -874, 17, 22, 412, -880, -23, -30,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 780, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2010, -714,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), 17, -23,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 12), 17, -23,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 420, -1469,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 412, 959,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1206, -321,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 780, -225,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 300, -979,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 412, 720,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -2814, -95,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 660, 341,
	ftAnimSetValRateT(FT_ANIM_TRAY, 7), 840, 417,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 5), 17, -8, -23, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), -3216, 0, 1600, 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTSamusAnimTechB_joint3[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 21), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTSamusAnimTechB_joint5[62] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -241, 402, 268, -99, -26, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -241, 42, 402, -40, 268, -26, -99, 79, -26, 21, -68, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 187, 53, 0, -50, 0, -33, 0, 99, 0, 26, 0, 68,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 187, 0, 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 26), 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 187, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 402, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 11), 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimTechB_joint6[146] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1468, 9, -1273, -2, 310, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1264, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1481, 8, 258, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1468, -49, 310, 214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1580, -29, 687, 314,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1527, 90, -1329, -93, 938, 184,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1072, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -1326, -1564,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1326, -1564,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1425, 44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1516, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1072, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1142, 1,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1379, 47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1252, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1140, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 693, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1568, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1390, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1304, -14, -1317, -23, 506, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1483, -42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1435, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 713, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 870, 142,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1346, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1503, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1167, 40,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1480, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -1667, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1132, 35, -1722, -55, 1377, 31,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTSamusAnimTechB_joint7[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -40, 40,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -5, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -40, -267,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -539, -360,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -760, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -546, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -546, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -546, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -546, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -942, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -998, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -577, 248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -272, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -545, -211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -695, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -839, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -861, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -801, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, 62,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimTechB_joint8[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -89, -679,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 804, -54, -89, 8, -679, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 263, -47, 0, 11, 0, 84,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 568,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 263,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 568,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 263,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 568, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 419, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 12), 701,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTSamusAnimTechB_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTSamusAnimTechB_joint10[52] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 480, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX, 6), 0, 40, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX, 4), 402, 50, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX, 4), 402, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX, 5), 402, -10, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 21), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), 187, -19, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 0, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimTechB_joint12[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTSamusAnimTechB_joint13[172] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1102, 12, 961, -6, 1156, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 961, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 1144, -30, 1208, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1102, 163, 1156, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1471, 134, 905, 5, 1511, 110,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1233, 249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1371, -172, 1376, -210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1125, -153, 1089, -193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1064, -30, 1470, 118, 990, -49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 990, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 8), 1064,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1470, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1470, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1270, -39,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 990, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1200, 38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1064, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1175, -111,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1238, -47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 797, -152,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1233, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1609, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1047, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 912, 9, 652, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 913, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1065, 138,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1628, 39,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 983, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 980, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1077, 87,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1342, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1622, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1705, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1666, 37, 1737, 31, 1392, 50,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimTechB_joint15[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -775, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -771, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -563, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -563, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -563, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -563, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -954, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -879, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -644, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -603, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -413, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -196, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -338, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -426, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -573, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, -22,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTSamusAnimTechB_joint16[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1521, 19, -1581, -17, 1218, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1432, -53, -1681, 75, 1008, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1489, -42, -1614, 38, 1088, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1605, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -1551, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 423, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 431, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 398, -45,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1604, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), -1565, -13,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1545, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -1569, 14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 353, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 250, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 259, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 938, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1026, 81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1202, 28,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1550, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1521, 29, -1581, -15, 1218, 16,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTSamusAnimTechB_joint18[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 478, 137,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1055, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1154, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 752, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 862, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1303, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1301, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 1069, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1028, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 779, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 701, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 499, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, -20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTSamusAnimTechB_joint20[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -78, -20, 17, 0, 217, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 217, -49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), 84, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -341, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -487, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -257, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -123, 78,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -73, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 141, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -402, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -402, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -303, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -74, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 27), -60, -12,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -255, 46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -66, -31,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 90, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 3, -28,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -96, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -49, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -75, -15, -28, -31, -41, 7,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTSamusAnimTechB_joint21[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 226, -24, 160, 15, -49, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 149, 81,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 205, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -226, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -123, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 226, 1, -49, -64,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -47, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -253, -241,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1214, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 160, -71,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -6, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -57, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -101, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1204, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -979, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 159, 13,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -955, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -779, 120,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -102, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 200, 27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -662, 112,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -65, 26,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 169, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 156, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 226, 26, 160, 4, -49, 16,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTSamusAnimTechB_joint23[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 442, 82,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 796, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 846, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 442, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 725, 285,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1280, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1281, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 1137, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1092, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 465, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 442, -22,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTSamusAnimTechB_joint24[134] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1435, 23, 1520, 0, -1633, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1867, -136,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1608, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1271, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1223, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1435, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1351, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1304, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1475, -125,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1555, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2010, -71,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2010, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 1608,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1482, -55,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), -1556, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -2010,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1638, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -2062, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1431, -47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1287, 15,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1656, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1479, 14,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2055, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1832, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1302, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1392, 20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1468, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1463, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1466, -2, 1414, 22, -1822, 10,
	ftAnimEnd(),
	0x0000, 0x0000,
};
