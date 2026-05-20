/* AnimJoint data for relocData file 1560 (FTCaptainAnimTechF) */
/* 4384 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimTechF_joint1[18];
extern u16 dFTCaptainAnimTechF_joint2[126];
extern u16 dFTCaptainAnimTechF_joint3[54];
extern u16 dFTCaptainAnimTechF_joint5[72];
extern u16 dFTCaptainAnimTechF_joint6[218];
extern u16 dFTCaptainAnimTechF_joint7[124];
extern u16 dFTCaptainAnimTechF_joint8[58];
extern u16 dFTCaptainAnimTechF_joint9[32];
extern u16 dFTCaptainAnimTechF_joint11[8];
extern u16 dFTCaptainAnimTechF_joint12[224];
extern u16 dFTCaptainAnimTechF_joint13[104];
extern u16 dFTCaptainAnimTechF_joint14[34];
extern u16 dFTCaptainAnimTechF_joint15[10];
extern u16 dFTCaptainAnimTechF_joint17[32];
extern u16 dFTCaptainAnimTechF_joint18[214];
extern u16 dFTCaptainAnimTechF_joint20[84];
extern u16 dFTCaptainAnimTechF_joint22[200];
extern u16 dFTCaptainAnimTechF_joint23[208];
extern u16 dFTCaptainAnimTechF_joint25[104];
extern u16 dFTCaptainAnimTechF_joint26[216];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTCaptainAnimTechF_joints[] = {
	(AObjEvent32 *)dFTCaptainAnimTechF_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTCaptainAnimTechF_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTCaptainAnimTechF_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTCaptainAnimTechF_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTCaptainAnimTechF_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTCaptainAnimTechF_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTCaptainAnimTechF_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTCaptainAnimTechF_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTCaptainAnimTechF_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTCaptainAnimTechF_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTCaptainAnimTechF_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTCaptainAnimTechF_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTCaptainAnimTechF_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTCaptainAnimTechF_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTCaptainAnimTechF_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTCaptainAnimTechF_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTCaptainAnimTechF_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTCaptainAnimTechF_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTCaptainAnimTechF_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTCaptainAnimTechF_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTCaptainAnimTechF_joint1[18] = {
	ftAnimSetVal(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 6), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 4000,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 24), 4800,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 10), 4800,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTCaptainAnimTechF_joint2[126] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -4637,
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 715, 1440, -448, 0, -267,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -4637, 21,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -39, 1350, -240,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 715, 1440, 34, -16, -108,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAZ, 4), -4423, 826, 43, 57, -28, -37,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 1235, -2399,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 240, -821,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 720, 1255,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1206, 714,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), 43, -28,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), 43, -1, -28, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 627, -1920,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 240, -133,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 2010, 294,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 42, -3, 717, 706, -27, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 41, 2, 708, -937, -27, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 43, 18, 268, -1294, -28, -3,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 113,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 10), 3216,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 10), 69, -16, -33, 10,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 6), 676, 553,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 969, 516,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 3216, 0, 1600, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTCaptainAnimTechF_joint3[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 19), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 0, 0, 1, 0, -23, 0, 2,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 21), 4, -76, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 5, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 107, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTCaptainAnimTechF_joint5[72] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -241, 402, 268, -99, -26, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -241, 78, 402, -40, 268, -26, -99, 79, -26, -29, -68, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 538, 0, 0, 0, 0, 0, 0, 99, -63, -24, -62, 17,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -50, 9, -50, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX, 4), 538, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX, 26), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 538, 0, -52, 5, -52, 30,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 21), -31, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 536, -16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 11), 189,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimTechF_joint6[218] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1610, 67, -1262, 0, 522, -113,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1270, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1471, 9, 273, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1472, 0, 270, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1529, -84, 391, 218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1641, -14, -1285, -35, 712, 238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1404, 119, -1424, -89, 946, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1319, 46, -1521, -49, 1086, 49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1316, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1522, -1, 1046, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1524, 0, 1082, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1537, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1311, -1, 1046, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1318, 1, 1083, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1308, -1, 1047, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1322, 1, 1082, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1305, 0, 1052, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1323, -6, 1064, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1078, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1318, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -1339, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1061, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 956, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1551, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1614, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1667, -22, 874, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1653, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 905, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 932, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 974, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1647, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1611, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1336, -4, -1596, 50, 983, 69,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1357, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1510, 50, 1113, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1495, 6, 1149, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1566, -39, 1106, -32,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1355, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1355, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1363, -7, -1612, -45, 1070, -36,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTCaptainAnimTechF_joint7[124] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -409, 195,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -61, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 30,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, -306,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -612, -335,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -852, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -933, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -969, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -912, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -971, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -912, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -971, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -915, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -967, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -926, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -937, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -972, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -772, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -662, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -437, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -245, 218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 122,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -298, -231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -463, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -747, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -768, -21,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTCaptainAnimTechF_joint8[58] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -89, -679,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 804, -68, -89, 8, -679, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 115, -86, 0, 11, 0, 84,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 4), 115,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 5), 115,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, -4, 0, -18,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 7), -272,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -51,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -781, -89, -388,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTCaptainAnimTechF_joint9[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 0, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 268, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 268, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 223, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -187, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 11), 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTCaptainAnimTechF_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTCaptainAnimTechF_joint12[224] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -680, -27, 678, -50, -608, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -708, -6, 627, -21, -635, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -693, 14, 635, 5, -614, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -685, -2, -601, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 639, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 638, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -680, -181, 678, 119, -608, -207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1048, -396, 878, 120, -1017, -456,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1473, -438, 918, 206, -1521, -515,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1926, -246, 1290, 343, -2047, -267,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1967, -17, 1606, 155, -2055, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1960, -3, 1601, -7, -2067, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1600, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1974, 1, -2113, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1958, 3, -2119, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1967, -2, -2055, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1970, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2055, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1594, -2, -2109, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1616, 5, -2091, 36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1952, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1973, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1606, -34, -2053, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2097, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1546, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1974, -1, 1503, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -2050, -21, 1376, 8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2111, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -2163, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2073, 13, 1390, -20, -2191, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1969, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1334, -42, -2090, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1306, -18, -1989, 103,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 1457, 21, -1173, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1912, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -1734, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1739, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1748, -8, 1476, 19, -1119, 53,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTCaptainAnimTechF_joint13[104] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -117, 117,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -117, -318,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -641, -442,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1001, -219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1081, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -945, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -861, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -894, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -945, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -867, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -855, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -873, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -935, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -810, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -763, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -468, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -359, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -540, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -671, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -961, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -906, 54,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTCaptainAnimTechF_joint14[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, 275, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -373, -55, 317, 4, 146, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -285, 34, 317, -5, 160, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 139, 18, 241, -1, 402, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 270, 275, 62,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTCaptainAnimTechF_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimTechF_joint17[32] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 0, -1, -9, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 9), -268,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), -124, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 31), 0, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 21), -53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 0, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTCaptainAnimTechF_joint18[214] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 110, 3, -1, 1, -520, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 110, -23, -1, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -476, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -520, -85,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -825, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 86, -14, -23, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 104, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -7, 17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1021, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 137, 11, -1164, -92,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 119, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4, -1, -1207, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -10, 4, -1205, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 123, 9, 14, 1, -1256, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -25, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 137, -2, -1164, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 117, -10, -1112, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 116, 14, -1196, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -25, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -11, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 144, 11, 32, 2, -1247, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 102, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -6, -27, -1165, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -22, -8, -1117, 34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1073, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 6, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 92, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 103, 12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1060, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1003, 23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 15, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 87, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -978, 41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -802, 59,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 112, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 179, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -743, 57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -473, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 86, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 64, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 187, 8, 65, 0, -463, 10,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTCaptainAnimTechF_joint20[84] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 748, -16,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 669, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 654, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 748, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 896, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1373, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1369, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1345, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1373, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1335, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1332, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1329, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1383, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1298, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1260, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 965, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 919, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 482, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 444, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 428, -15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTCaptainAnimTechF_joint22[200] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -117, 0, -14, 0, 119, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -117, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -5, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 154, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 119, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -102, 4, -22, -120,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -191, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 19, 18, -121, -78,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 26, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -180, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -223, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 41, 5, -179, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 26, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -171, -8, -209, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -209, -5, -195, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -181, 23, -223, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -173, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 39, 5, -162, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 33, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -201, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -189, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -236, -4, -224, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -118, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -183, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -144, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -96, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 35, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 12, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -101, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2, 27,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -97, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -140, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7, -14, 30, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -39, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 3, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 76, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -138, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -121, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -40, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -36, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -123, -1, -41, -4, 81, 5,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTCaptainAnimTechF_joint23[208] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 155, 10, 189, 1, -110, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 204, -33, 194, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -29, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -49, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 155, -73, 189, -16, -110, -123,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -6, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 161, -52, -295, -226,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1063, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 84, -69,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 14, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 6, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 52, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 65, 4, 34, 5, -1129, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 53, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 25, 0, -1125, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 35, -5, -1170, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 11, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1063, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1024, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1096, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 11, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 33, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 61, 0, -1146, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -77, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 14, -5, -1064, 58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 26, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1030, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1036, 56,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 12, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 59, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -131, -44, -943, 122,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -640, 137,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -60, 30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 120, 55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 226, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -516, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -339, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 214, -12, -320, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 110, -3, -78, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -29, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 156, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 163, 7, 109, 0, -71, 7,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTCaptainAnimTechF_joint25[104] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 648, -19,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 547, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 527, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 648, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 877, 234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1280, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1348, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1316, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1304, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1316, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1348, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1300, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1291, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1279, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1341, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1351, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1368, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1406, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1351, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1116, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1070, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 630, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 578, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 542, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 528, -14,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTCaptainAnimTechF_joint26[216] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1927, -2, -1769, 3, 1541, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1798, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 1929, 0, 1540, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1927, -35, 1541, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1421, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1857, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1678, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1536, -132, -1838, -48, 1377, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1414, -77, -1894, -30, 1347, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1380, -30, -1900, 1, 1393, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1869, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1353, -14, 1363, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1352, 30, 1371, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1414, 54, -1894, -7, 1347, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1864, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1461, 0, 1419, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1413, -31, 1386, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1398, -31, 1405, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1350, 7, 1349, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1413, 52, -1895, -22, 1346, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1363, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1895, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1455, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1526, 54,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1338, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1125, -24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1595, 72,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1742, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1897, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1922, -10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1728, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1699, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1102, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1162, 23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1695, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1747, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1933, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1977, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1185, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1323, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1764, 16, -1973, 3, 1328, 5,
	ftAnimEnd(),
};
