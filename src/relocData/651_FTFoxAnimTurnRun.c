/* AnimJoint data for relocData file 651 (FTFoxAnimTurnRun) */
/* 2480 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimTurnRun_joint1[18];
extern u16 dFTFoxAnimTurnRun_joint2[18];
extern u16 dFTFoxAnimTurnRun_joint3[10];
extern u16 dFTFoxAnimTurnRun_joint5[42];
extern u16 dFTFoxAnimTurnRun_joint6[120];
extern u16 dFTFoxAnimTurnRun_joint8[40];
extern u16 dFTFoxAnimTurnRun_joint9[78];
extern u16 dFTFoxAnimTurnRun_joint11[8];
extern u16 dFTFoxAnimTurnRun_joint12[94];
extern u16 dFTFoxAnimTurnRun_joint13[48];
extern u16 dFTFoxAnimTurnRun_joint14[20];
extern u16 dFTFoxAnimTurnRun_joint16[10];
extern u16 dFTFoxAnimTurnRun_joint17[128];
extern u16 dFTFoxAnimTurnRun_joint19[56];
extern u16 dFTFoxAnimTurnRun_joint21[134];
extern u16 dFTFoxAnimTurnRun_joint22[116];
extern u16 dFTFoxAnimTurnRun_joint24[62];
extern u16 dFTFoxAnimTurnRun_joint25[128];
extern u16 dFTFoxAnimTurnRun_joint26[30];
extern u16 dFTFoxAnimTurnRun_joint27[26];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTFoxAnimTurnRun_joints[] = {
	(u32)dFTFoxAnimTurnRun_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimTurnRun_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimTurnRun_joint3, /* [2] joint 3 */
	(u32)dFTFoxAnimTurnRun_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTFoxAnimTurnRun_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimTurnRun_joint8, /* [6] joint 8 */
	0x00000000, /* [7] NULL */
	(u32)dFTFoxAnimTurnRun_joint9, /* [8] joint 9 */
	(u32)dFTFoxAnimTurnRun_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTFoxAnimTurnRun_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimTurnRun_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimTurnRun_joint14, /* [13] joint 14 */
	(u32)dFTFoxAnimTurnRun_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTFoxAnimTurnRun_joint17, /* [16] joint 17 */
	(u32)dFTFoxAnimTurnRun_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTFoxAnimTurnRun_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTFoxAnimTurnRun_joint22, /* [21] joint 22 */
	(u32)dFTFoxAnimTurnRun_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTFoxAnimTurnRun_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimTurnRun_joint26, /* [25] joint 26 */
	(u32)dFTFoxAnimTurnRun_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTFoxAnimTurnRun_joint1[18] = {
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 2560,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), 1200, 1287,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 10), 2400,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 7), 0, -2560,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimTurnRun_joint2[18] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 780,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 7), 540, -107,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 6), 600, 144,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 7), 780,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTFoxAnimTurnRun_joint3[10] = {
	ftAnimSetVal(FT_ANIM_ROTY), -268,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTZ), 357, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 20), -1876,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTFoxAnimTurnRun_joint5[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 320, 201, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 7, -48, 371, -30, -429, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 4, 0, -57, 0, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 52, 14, -201, 0, 181, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 144, 40, 0, 60, -1, -54,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 320, 201, -181,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimTurnRun_joint6[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1324, -2, -1325, 0, -1205, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1271, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1366, -87, -1124, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1498, -91, -994, 34,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1647, -139, -1307, -283,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1287, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1184, 56, -1829, -55, -1621, -141,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1598, 97, -1561, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1400, 236,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1748, 25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1563, 12, -1554, 48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1333, 42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1584, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1707, -75,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1402, -55,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1285, 53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1045, 24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1342, -63, -1579, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1215, 56, -1466, 120,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1053, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1324, 109, -1325, 141, -1205, -152,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimTurnRun_joint8[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -155, -297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, -332,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -773, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -787, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -729, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -657, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -411, 349,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 403,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTFoxAnimTurnRun_joint9[78] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -536,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 178, 78,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -536, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 95, -46,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -428, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 24, -51,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -267, -87,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -178, -61,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -262, -62,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 23, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), -345, -61,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), -425, -56,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -496, -41,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -7, 39,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 1), -536,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTFoxAnimTurnRun_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTFoxAnimTurnRun_joint12[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1305, -12, 1346, -26, -1167, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1465, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1392, 96, -1100, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1503, 111, -1000, 90,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -828, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 1665, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1605, -30, 1566, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -1469, 28, 1566, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -864, -127,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1278, -85,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1468, 3, 1508, -43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1302, 47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1394, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1254, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1032, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1070, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1279, -1, -1120, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1305, -26, 1346, -47, -1167, -47,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimTurnRun_joint13[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -73, 65,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -211, -207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -678, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -536, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -701, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -572, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -589, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -180, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -73, 107,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTFoxAnimTurnRun_joint14[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 446,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 446, 44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 893,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 446, -44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 7), 446,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimTurnRun_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTFoxAnimTurnRun_joint17[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1698, 88, 1823, 36, 656, -154,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1781, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1610, -55, 501, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1808, -151, 737, 167,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1806, 165, 712, -120,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1898, 71,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1951, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1583, 215, 596, -54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 768, 95,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1489, -191,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2057, 110,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 2143, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 878, 155,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1267, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1716, -158,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1726, 39,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2034, -104,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1692, 86,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1007, -216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1699, 34, 833, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1705, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 953, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 874, -211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1799, 65, 530, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1698, 6, 1823, 23, 656, 125,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTFoxAnimTurnRun_joint19[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 107, 618,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 725, 403,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 914, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 902, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 963, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 772, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 782, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 818, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 959, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 930, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 997, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 962, -445,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 107, -854,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTFoxAnimTurnRun_joint21[134] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 70, 53, -99, 111, 67, -385,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 123, 132, 11, 199, -317, -246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 335, 63, 298, 171, -424, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -35, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 93, -169, -321, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -87, -190, -309, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -432, 54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -250, -26,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -37, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -82, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -312, 134,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 127, 37,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -277, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -342, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -222, -127,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -485, 42,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 163, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 325, 48, -498, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 259, -133, -358, 117, -418, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -116, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 58, -112, -512, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 34, 8, -527, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 74, 18, -260, 297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 70, -4, -99, 16, 67, 328,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTFoxAnimTurnRun_joint22[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1446, 42, 1383, -116, 1767, 147,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1252, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1596, 102, 1889, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1694, -136, 1806, -345,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1322, -170, 1198, -405,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1354, 111, 1425, 142, 995, -139,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 888, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1439, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1682, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1748, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1747, 25,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 838, -40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1162, 406,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1785, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1586, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1546, 102,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1578, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1701, 325,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1860, 53,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1504, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1590, -69, 1428, -60, 1921, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1446, -143, 1383, -44, 1767, -153,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTFoxAnimTurnRun_joint24[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 305, -305,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -152,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 355,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 710, 509,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1137, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1141, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1066, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1028, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 854, -504,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 19, -427,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 305, 305,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTFoxAnimTurnRun_joint25[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1681, 197, -1712, -14, -1291, 235,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1787, -101,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1557, -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1003, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1066, -280,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1922, -111, -1564, -434,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1921, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1936, -353,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1884, -247, -2271, -215,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2017, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1756, 104, -2367, -53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -2009, -48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2160, 55,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1798, 170,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1691, -54,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2055, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1929, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2122, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2017, 515,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1771, 231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1229, 363, -2128, 46, -1250, 555,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -958, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1043, -184, -1835, 210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1598, -318, -1707, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1681, -82, -1712, -5, -1291, -333,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimTurnRun_joint26[30] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -442, 268, 0,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -126, -96,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 291, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -272, -277, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -442, 268, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 27 */
u16 dFTFoxAnimTurnRun_joint27[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -178, 53, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 126, 1, 319, -16, -115, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -153, -35, -245, -30, 81, 13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -178, 53, 0,
	ftAnimEnd(),
};
