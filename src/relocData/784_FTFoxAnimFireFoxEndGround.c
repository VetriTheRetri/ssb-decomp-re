/* AnimJoint data for relocData file 784 (FTFoxAnimFireFoxEndGround) */
/* 2736 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimFireFoxEndGround_joint1[54];
extern u16 dFTFoxAnimFireFoxEndGround_joint2[14];
extern u16 dFTFoxAnimFireFoxEndGround_joint4[14];
extern u16 dFTFoxAnimFireFoxEndGround_joint5[182];
extern u16 dFTFoxAnimFireFoxEndGround_joint6[90];
extern u16 dFTFoxAnimFireFoxEndGround_joint7[18];
extern u16 dFTFoxAnimFireFoxEndGround_joint8[24];
extern u16 dFTFoxAnimFireFoxEndGround_joint10[14];
extern u16 dFTFoxAnimFireFoxEndGround_joint11[140];
extern u16 dFTFoxAnimFireFoxEndGround_joint12[64];
extern u16 dFTFoxAnimFireFoxEndGround_joint13[16];
extern u16 dFTFoxAnimFireFoxEndGround_joint15[10];
extern u16 dFTFoxAnimFireFoxEndGround_joint16[112];
extern u16 dFTFoxAnimFireFoxEndGround_joint18[52];
extern u16 dFTFoxAnimFireFoxEndGround_joint20[110];
extern u16 dFTFoxAnimFireFoxEndGround_joint21[108];
extern u16 dFTFoxAnimFireFoxEndGround_joint23[56];
extern u16 dFTFoxAnimFireFoxEndGround_joint24[142];
extern u16 dFTFoxAnimFireFoxEndGround_joint25[50];
extern u16 dFTFoxAnimFireFoxEndGround_joint26[46];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimFireFoxEndGround_joints[] = {
	(u32)dFTFoxAnimFireFoxEndGround_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimFireFoxEndGround_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimFireFoxEndGround_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimFireFoxEndGround_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimFireFoxEndGround_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimFireFoxEndGround_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimFireFoxEndGround_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimFireFoxEndGround_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimFireFoxEndGround_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimFireFoxEndGround_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimFireFoxEndGround_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimFireFoxEndGround_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimFireFoxEndGround_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimFireFoxEndGround_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimFireFoxEndGround_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimFireFoxEndGround_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimFireFoxEndGround_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimFireFoxEndGround_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimFireFoxEndGround_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimFireFoxEndGround_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimFireFoxEndGround_joint1[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 912, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 8), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1608, 142,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 912,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), 1080,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 21), 48, -20,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 720, -1066,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 3216, 89,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 480, -1279,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 2), 240,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), 240,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 11), 912,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 3216,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTFoxAnimFireFoxEndGround_joint2[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), -141, -338, -3,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTFoxAnimFireFoxEndGround_joint4[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 523, -129, -24,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), 309, 156, 81,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimFireFoxEndGround_joint5[182] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 701, -23, -267, 1, -645, 69,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -575, -70,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 516, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -193, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -6, 56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -149, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -645, -102,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1346, -288,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 551, 96, -200, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -179, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 961, -57,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1602, -166,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1089, 457,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -186, -208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 784, -247, -595, -172,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 68, -266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -532, 57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -141, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -559, 408,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -152, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -66, -79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -105, 39,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 51, 130,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 119, 98,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -78, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 40, 206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 306, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -211, -38, 447, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -51, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 305, 106, 299, -70,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 404, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 137, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 16, -98,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -119, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 285, -39,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -75, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -150, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -109, 9, -165, -15, 258, -26,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimFireFoxEndGround_joint6[90] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -783, 47,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -492, 364,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -282,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -571, -246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -492, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -721, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -725, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -837, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -758, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -692, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -799, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -734, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -448, 188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -382, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -414, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -601, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -577, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 19,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimFireFoxEndGround_joint7[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 269, 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValT(FT_ANIM_ROTY, 65), 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 36,
	ftAnimBlock(0, 29),
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTFoxAnimFireFoxEndGround_joint8[24] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 85, 87, -97,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 105, 1, -88, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 11), 245,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), -113, 136, -72,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTFoxAnimFireFoxEndGround_joint10[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 62, -18,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 36,
	ftAnimBlock(0, 29),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTFoxAnimFireFoxEndGround_joint11[140] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1482, 7, 1442, -18, 1704, 44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1360, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1665, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 2027, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2229, 154,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2265, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1342, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1292, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1679, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1620, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2270, -77,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1832, -217,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1470, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1391, -123, 1675, -238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1222, -107, 1405, 11, 1355, -172,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1319, 342, 1108, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1331, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1538, 461,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1863, 286, 1206, 124, 2254, 452,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1835, -42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2299, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1356, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1344, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1333, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1807, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1733, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2247, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1939, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1741, 7, 1336, 2, 1945, 5,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimFireFoxEndGround_joint12[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -536, -76,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1036, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -983, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1094, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -958, 179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -734, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -656, 202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -329, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -511, -276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1177, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1141, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -964, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -949, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -596, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimFireFoxEndGround_joint13[16] = {
	ftAnimSetVal(FT_ANIM_ROTX), 89,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 5), 714,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 12), 357,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 12), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTFoxAnimFireFoxEndGround_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 29),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimFireFoxEndGround_joint16[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1626, -2, -1587, 0, -1007, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1494, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 1445, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1120, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1310, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1268, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1334, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1746, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1494, -11, -1700, 77,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1691, -140,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1383, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1452, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1633, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1865, -168,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -2102, 150,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1373, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1233, -38,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1498, -131,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1220, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1933, 159,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1677, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1290, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1354, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1202, -17, -1385, -31, -1635, 41,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimFireFoxEndGround_joint18[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 5, -5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 220, 330,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 661, 327,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 968, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1036, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1069, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1102, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 958, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1003, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 540, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 414, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, -60,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimFireFoxEndGround_joint20[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -16, -2, 20, 4, 556, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 52, 42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 73, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 325, -238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 59, -162,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 248, 14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 75, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -107, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 196, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 42, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 171, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -20, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -17, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -123, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 66, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 50, 51,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -106, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 34, -7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 97, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 124, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 28, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 38, 9, -79, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 46, 8, 125, 1, -56, 23,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimFireFoxEndGround_joint21[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1720, 5, -1624, 8, -2084, 67,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 1657, 43, -1585, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1766, 259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1499, 197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1626, -196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1821, -141,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1832, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1701, 24, -1605, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1723, 112,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1653, -47,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1824, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1817, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1966, -112,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1946, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1846, 98,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1901, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1692, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1752, 6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1885, 73,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1511, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1912, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1956, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1963, 7, -1746, 6, -1473, 37,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimFireFoxEndGround_joint23[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1168, 54,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1129, -185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 896, -205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 861, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1040, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1243, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1142, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1132, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1159, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1135, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1004, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 397, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, -65,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimFireFoxEndGround_joint24[142] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -143, -26, 82, 2, -259, -119,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -188, 60, 207, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -379, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -644, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -626, 228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -79, 78, 289, 37, -188, 390,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -199, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 331, 51, 244, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 390, 52, 87, -137,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -95, 50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 370, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -227, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -79, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 69, 98,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -223, -81,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -110, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -453, -105,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -294, -83,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -613, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 330, -66,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 26, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -524, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -219, 52,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -16, -39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -101, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -171, 55, -556, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 25, -1, -260, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 16, -9, -102, -1, -226, 33,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimFireFoxEndGround_joint25[50] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -126, -96,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -196, -18, 13, 3, 21, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -575, -27, 82, 8, 14, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -639, -38, 142, 8, 8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -926, -125, 157, 7, 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1267, 84, 178, 5, 4, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 219, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTFoxAnimFireFoxEndGround_joint26[46] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 64, -450,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, -22, 0, -2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), -444, -29, -41, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -472, 45, -78, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -35, 96, -87, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 8, -113, -100, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -601, -23, -107, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -178, -122,
	ftAnimEnd(),
};
