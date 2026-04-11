/* AnimJoint data for relocData file 555 (FTMarioAnimTech) */
/* 2384 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimTech_joint1[50];
extern u16 dFTMarioAnimTech_joint2[30];
extern u16 dFTMarioAnimTech_joint4[30];
extern u16 dFTMarioAnimTech_joint5[124];
extern u16 dFTMarioAnimTech_joint6[64];
extern u16 dFTMarioAnimTech_joint7[12];
extern u16 dFTMarioAnimTech_joint8[38];
extern u16 dFTMarioAnimTech_joint10[10];
extern u16 dFTMarioAnimTech_joint11[140];
extern u16 dFTMarioAnimTech_joint12[62];
extern u16 dFTMarioAnimTech_joint13[22];
extern u16 dFTMarioAnimTech_joint15[10];
extern u16 dFTMarioAnimTech_joint16[100];
extern u16 dFTMarioAnimTech_joint18[62];
extern u16 dFTMarioAnimTech_joint20[110];
extern u16 dFTMarioAnimTech_joint21[112];
extern u16 dFTMarioAnimTech_joint23[168];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimTech_joints[] = {
	(u32)dFTMarioAnimTech_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimTech_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimTech_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimTech_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimTech_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimTech_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimTech_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimTech_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimTech_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimTech_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimTech_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimTech_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimTech_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimTech_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimTech_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimTech_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimTech_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	0xFFFF021B, /* [23] END */
};

/* Joint 1 */
u16 dFTMarioAnimTech_joint1[50] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY), -1796, 0, 780,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 5), -1796,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 0, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), 660,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 780, 680,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 1920,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 223,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 15), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 223, 10,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 1080, -224,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 10), 360, -666,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY, 6), 0, 223, 540,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTMarioAnimTech_joint2[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -3, 0, -39, 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -71, -3, -790, -37, -95, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -71, -790, -95,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTMarioAnimTech_joint4[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 20, 0, 17, 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 404, 9, 358, 12, -86, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 208, 258, 110,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimTech_joint5[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2424, -1, -1557, 142, -3019, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 2459, 102,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -3320, -197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1210, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1151, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1537, -220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1593, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1328, 126,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2582, 126,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 3444, 309,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1275, 47, -3526, -197,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1142, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -4088, -64,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3775, 286,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 4503, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1115, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1227, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4139, -35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -4674, -124,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1206, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1297, -18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4608, 99,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 4944, 26,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4794, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -5068, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4958, 14, -1308, -11, -5097, -29,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimTech_joint6[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, -237,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -539, -174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 265,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -196, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -53, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -553, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -602, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -216, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, 34,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTMarioAnimTech_joint7[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -1072,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 143, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 26), -625,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTMarioAnimTech_joint8[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -375, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -375, 21, 0, 3, 0, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 47, 42, 75, -2, 276, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 346, 25, -43, -13, 92, -16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 201, -4, 176,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTMarioAnimTech_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -221, 139, -209, 0, 54, -17,
	ftAnimBlock(0, 26),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimTech_joint11[140] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 738, 5, 1557, -193, 181, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 194, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 754, 4, 1231, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 760, -90, 1588, 174,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 394, -130, 1505, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 184, -47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -329, -39,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 311, -78, 1410, -87,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 102, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1067, -80,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -344, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -360, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 112, -225, -350, -234,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -903, -442, -1334, -367,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 980, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1208, 104,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1234, -279, -1565, -204,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2073, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1399, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1305, 89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1319, -101,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2072, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1824, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1208, -109, -1712, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1249, 117, 1100, -75, -1606, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1164, 84, 1056, -44, -1542, 64,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimTech_joint12[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, -410,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -707, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -706, 349,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 353,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 8), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -711, -206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -761, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -43, -284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -569, -358,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -813, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, 2,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimTech_joint13[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 1072,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 1251, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1302, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 687, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 625, -4,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTMarioAnimTech_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 26),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimTech_joint16[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1473, 32, -1377, 15, -1563, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 1448, -100, -1417, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1529, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1440, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1374, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1367, -51, -1483, -46, -1466, -49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1408, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 1255, -8, -1667, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1247, 24, -1680, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 1678, 123, -1381, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1432, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1431, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1641, -185,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1594, 47,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1784, 25, -1376, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1366, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1535, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1491, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1473, -17, -1377, -11, -1563, 31,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimTech_joint18[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 400, 94,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 729, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 701, -300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 128, -346,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, 380,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 769, 271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 943, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 858, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 465, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, -64,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTMarioAnimTech_joint20[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -212, -24, -11, -3, -156, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 57, 69,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 159, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -432, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -534, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -521, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -237, 212,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -21, 21,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 129, 71,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 366, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1, 18, 193, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -49, -116,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 98, -106,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 399, -54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 117, -207,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -162, -82,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -260, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -7, -85, -156, -215,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -15, 7, -187, 47,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -234, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -218, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -212, 5, -11, 4, -156, 31,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimTech_joint21[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 200, -24, 187, 14, 35, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 159, 71, 189, -69, 273, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 223, 26, 101, -19, 489, 130,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 226, 5, 270, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 647, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 680, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 230, -32, 290, 9, 697, -69,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 184, 36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 126, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 540, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 290, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 219, -10, 264, -135,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -144, -147,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -42, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 203, 58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 201, -20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -276, -64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1, 54,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 180, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 200, 19, 187, -14, 35, 34,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimTech_joint23[168] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 438, 79,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 781, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 501, -386,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -247,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 488, 393,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 795, 268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1025, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 997, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 504, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, -65,
	ftAnimEnd(),
	0x200E, 0x06A1, 0x0001, 0xFA16, 0x0005, 0x0573, 0xFFF9, 0x280D, 0x0008, 0xF943, 0xFFA8, 0x06AA, 0x0091, 0x2003, 0x0004, 0x06FA, 0x0048, 0x2003, 0x0001, 0x0754, 0x0008, 0x2003, 0x0003, 0x06E6, 0x001A, 0x200F, 0x0001, 0x0708, 0x0026, 0xF8EE, 0xFFBB, 0x0741, 0x008C, 0x2809, 0x0004, 0x0808, 0xFFA4, 0x2805, 0x0007, 0xF933, 0x0054, 0x2003, 0x0003, 0x0793, 0xFFE0, 0x2003, 0x0001, 0x0725, 0xFF98, 0x2803, 0x0006, 0x06B5, 0x002C, 0x2009, 0x0001, 0x07A1, 0xFF95, 0x2809, 0x0003, 0x0658, 0xFF44, 0x0801, 0x0002, 0x2005, 0x0001, 0xF987, 0x0046, 0x2805, 0x0006, 0xFA03, 0x000F, 0x2009, 0x0001, 0x054F, 0xFF33, 0x2809, 0x0007, 0x0554, 0x002F, 0x0801, 0x0001, 0x2003, 0x0001, 0x06EB, 0x001B, 0x2803, 0x0005, 0x06A6, 0xFFF7, 0x0801, 0x0003, 0x2005, 0x0001, 0xFA0E, 0x0008, 0x2005, 0x0001, 0xFA14, 0x0003, 0x200F, 0x0001, 0x06A1, 0xFFFB, 0xFA16, 0x0001, 0x0573, 0x001E, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
