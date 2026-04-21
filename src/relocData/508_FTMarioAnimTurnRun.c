/* AnimJoint data for relocData file 508 (FTMarioAnimTurnRun) */
/* 2800 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimTurnRun_joint1[12];
extern u16 dFTMarioAnimTurnRun_joint2[54];
extern u16 dFTMarioAnimTurnRun_joint3[46];
extern u16 dFTMarioAnimTurnRun_joint5[72];
extern u16 dFTMarioAnimTurnRun_joint6[142];
extern u16 dFTMarioAnimTurnRun_joint7[48];
extern u16 dFTMarioAnimTurnRun_joint8[24];
extern u16 dFTMarioAnimTurnRun_joint9[88];
extern u16 dFTMarioAnimTurnRun_joint11[60];
extern u16 dFTMarioAnimTurnRun_joint12[142];
extern u16 dFTMarioAnimTurnRun_joint13[54];
extern u16 dFTMarioAnimTurnRun_joint14[8];
extern u16 dFTMarioAnimTurnRun_joint16[10];
extern u16 dFTMarioAnimTurnRun_joint17[122];
extern u16 dFTMarioAnimTurnRun_joint19[48];
extern u16 dFTMarioAnimTurnRun_joint21[120];
extern u16 dFTMarioAnimTurnRun_joint22[118];
extern u16 dFTMarioAnimTurnRun_joint24[52];
extern u16 dFTMarioAnimTurnRun_joint25[130];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTMarioAnimTurnRun_joints[] = {
	(u32)dFTMarioAnimTurnRun_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimTurnRun_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimTurnRun_joint3, /* [2] joint 3 */
	(u32)dFTMarioAnimTurnRun_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTMarioAnimTurnRun_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimTurnRun_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimTurnRun_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimTurnRun_joint9, /* [8] joint 9 */
	(u32)dFTMarioAnimTurnRun_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTMarioAnimTurnRun_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimTurnRun_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimTurnRun_joint14, /* [13] joint 14 */
	(u32)dFTMarioAnimTurnRun_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTMarioAnimTurnRun_joint17, /* [16] joint 17 */
	(u32)dFTMarioAnimTurnRun_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTMarioAnimTurnRun_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTMarioAnimTurnRun_joint22, /* [21] joint 22 */
	(u32)dFTMarioAnimTurnRun_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTMarioAnimTurnRun_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTMarioAnimTurnRun_joint1[12] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 14), 792,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 8), 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimTurnRun_joint2[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 755, -67, -67, 34,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 223, 8, 433, -171, 0, 8,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 1,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 7), 412,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 223, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 6), 0, -4,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 354,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), 17, -7,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 433, 342, -2, 50,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), -228,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -1608, 755, 67,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTMarioAnimTurnRun_joint3[46] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -124, 1, -113, -37, 41, -4,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -71, 0, -790, -25, -95, -5,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -70, -790, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -71, 0, -790, 0, -95, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -124, -113, 41,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimTurnRun_joint5[72] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 407, -8, 234, 8, 78, 13,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 188, -8, 12, -8, 162, 3,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 188, -8, 12, -8, 162, 3,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 336, 212, -139, -214, -46, -292,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 779, 9, -582, 13, -649, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 407, -59, 78, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -62, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 234, 127,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 407, 234, 78,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTMarioAnimTurnRun_joint6[142] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1266, -42, -1305, -85, -1320, 93,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1035, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1095, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -1496, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1381, 127,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1059, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1055, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1220, 60, -1280, -67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1196, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1177, -35, -1082, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 1113, 9, -1087, 14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1169, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1148, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1135, -112, -1066, -43, -1174, 139,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1367, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 888, -144, -869, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 845, 9, -811, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 896, -75, -898, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1367, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1437, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 757, -365, -1289, 187, -823, 342,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 412, 220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 166, -438, -1061, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -118, -258, -1435, 315,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -349, -111, -430, 566, 228, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -342, 7, -303, 127, 288, 59,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimTurnRun_joint7[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -247, -172,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -446, 351,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -70, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -119, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -91, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -433,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -866, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -247, 619,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimTurnRun_joint8[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 0, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 0, -29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), -268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTMarioAnimTurnRun_joint9[88] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 188, 7, -68, 10, -36, 9,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 472, 10, 162, 8, 322, 13, 0, 0, 288, 0, 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 472, 0, 162, 0, 322, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, 288, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 0, 288, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 472, 162, 322,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 472, 0, 162, 0, 322, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), -1,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 188, -68, 0, 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 28, -57,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), -36,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTMarioAnimTurnRun_joint11[60] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -18,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -190, -42, 97,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 0, 0, 54, 0, -17, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -221, 139, -209,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, 54, -17,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -221, 139, -209,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 0, 54, 0, -17, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -221, 139, -209,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -221, 139, -209,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, 54, -18,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -190, -42, 97,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimTurnRun_joint12[142] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1389, 122, -2211, 74, -2168, 162,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1871, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1433, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1492, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1458, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1688, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1913, -39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1815, 101,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1455, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1247, -73,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1767, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 2048, 250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2382, 311, -1706, 22, -1417, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2671, -364, -1770, -151, -1586, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1653, -708, -2009, 34, -1652, -292,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1307, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1700, 199, -2171, -276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1609, -38, -2206, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1778, -94, -2006, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1349, 51, -1799, -22, -1933, 144,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1463, 190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1410, -48, -1822, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1252, 347, -1740, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2105, 68, -1975, -235, -1336, -352,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1389, -715, -2211, -236, -2168, -831,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimTurnRun_joint13[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -489, -189,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -828, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -727, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -464, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -495, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -727, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -749, 287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -153, 369,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 76,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -467,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -943, -244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -489, 454,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTMarioAnimTurnRun_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 0, 0,
	ftAnimBlock(0, 22),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTMarioAnimTurnRun_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 22),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTMarioAnimTurnRun_joint17[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 178, -178, -103, -59, -384, 44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -203, 66,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -416, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -34, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -5, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -44, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -131, 51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -111, 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -413, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -404, 60,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -37, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -43, 119,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -105, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 199, 170, -430, -247,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 149, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -310, 50, -600, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -304, 81, -573, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -147, 160, -620, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 141, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 48, 21, -576, 124,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 321, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -371, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -453, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 178, -142, -103, -244, -384, 69,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTMarioAnimTurnRun_joint19[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 112, -104,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 453, 387,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 781, 224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 588, -360,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 141, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 364, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 112, -251,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTMarioAnimTurnRun_joint21[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1374, 77, -1260, -143, 1877, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1416, 36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 2127, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1427, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1402, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1655, -7,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1452, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1410, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1653, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1604, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2122, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1748, -242,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1589, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1387, 44, -1399, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1740, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1579, -306, 1474, -299,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2012, -184, 1150, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1948, 68, 1360, 200,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1652, 329, 1652, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1662, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1629, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1766, -127, -1217, 195, 1508, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1374, -391, -1260, -43, 1877, 368,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTMarioAnimTurnRun_joint22[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -45, 0, 174, 55, 752, -146,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 183, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -210, -45, 44, -280,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -200, 76, -208, -189,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 118, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -249, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 110, -71,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -67, 18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 119, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 195, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -40, 15, -281, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -200, -48, -387, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 182, -44, -235, 6, -343, 192,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 383, 186,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -241, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 106, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 185, 78,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 255, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 369, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -287, 202, 344, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 28, -150, 164, 230, 541, 203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -45, -74, 174, 10, 752, 211,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTMarioAnimTurnRun_joint24[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 284, 203,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1079, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 980, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 769, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 844, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 660, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 574, -326,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -283,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 474, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 284, -190,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTMarioAnimTurnRun_joint25[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1670, 46, 1479, 47, -1759, -55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1505, -65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1964, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1907, 406,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2529, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2248, -306,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1916, -288, 1440, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1452, 39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1604, 52,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1979, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1767, 98,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1509, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1420, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1434, -42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1288, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1636, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1661, -39, -1677, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1528, 211, 1558, 1, -1945, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1590, -228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1665, 28, -1748, 177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1614, -113, -1589, 194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1254, 11, 1437, -22, -1359, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1613, 208, 1570, 20, -1772, -199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1670, 57, 1479, -91, -1759, 13,
	ftAnimEnd(),
	0x0000, 0x0000,
};
