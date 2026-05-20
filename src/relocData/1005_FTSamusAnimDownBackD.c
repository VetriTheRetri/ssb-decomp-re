/* AnimJoint data for relocData file 1005 (FTSamusAnimDownBackD) */
/* 2512 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimDownBackD_joint1[12];
extern u16 dFTSamusAnimDownBackD_joint2[66];
extern u16 dFTSamusAnimDownBackD_joint3[12];
extern u16 dFTSamusAnimDownBackD_joint5[44];
extern u16 dFTSamusAnimDownBackD_joint6[146];
extern u16 dFTSamusAnimDownBackD_joint7[64];
extern u16 dFTSamusAnimDownBackD_joint8[70];
extern u16 dFTSamusAnimDownBackD_joint9[10];
extern u16 dFTSamusAnimDownBackD_joint10[32];
extern u16 dFTSamusAnimDownBackD_joint12[10];
extern u16 dFTSamusAnimDownBackD_joint13[136];
extern u16 dFTSamusAnimDownBackD_joint15[64];
extern u16 dFTSamusAnimDownBackD_joint16[110];
extern u16 dFTSamusAnimDownBackD_joint18[40];
extern u16 dFTSamusAnimDownBackD_joint20[120];
extern u16 dFTSamusAnimDownBackD_joint21[102];
extern u16 dFTSamusAnimDownBackD_joint23[40];
extern u16 dFTSamusAnimDownBackD_joint24[130];

/* Joint pointer table (24 entries, 96 bytes) */
AObjEvent32 * dFTSamusAnimDownBackD_joints[] = {
	(AObjEvent32 *)dFTSamusAnimDownBackD_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTSamusAnimDownBackD_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTSamusAnimDownBackD_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTSamusAnimDownBackD_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTSamusAnimDownBackD_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTSamusAnimDownBackD_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTSamusAnimDownBackD_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTSamusAnimDownBackD_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTSamusAnimDownBackD_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTSamusAnimDownBackD_joint12, /* [10] joint 12 */
	NULL, /* [11] NULL */
	(AObjEvent32 *)dFTSamusAnimDownBackD_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTSamusAnimDownBackD_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTSamusAnimDownBackD_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTSamusAnimDownBackD_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTSamusAnimDownBackD_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTSamusAnimDownBackD_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTSamusAnimDownBackD_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTSamusAnimDownBackD_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTSamusAnimDownBackD_joint1[12] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 28), -4200,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 8), -4200,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimDownBackD_joint2[66] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 697, 268, -321, 23, 200, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 536, -140, 0, -10, 0, 12, 17, -4, 724, 171, -23, 1,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 413, -150,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -2814, -121,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 5), 17, -23,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 10), 17, -23,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 8), 480, 227,
	ftAnimSetValRateT(FT_ANIM_TRAY, 7), 840, 497,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 5), 17, -8, -23, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), -3216, 0, 0, 0, 1600, 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTSamusAnimDownBackD_joint3[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 36), 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimDownBackD_joint5[44] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -158, -45, 44, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 187, 22, 0, 1, 0, -1, 1, 0, -8, -6, 63, 43,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 402, -8, 0, 0, -20, 3, 134, -24,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 0, 0, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimDownBackD_joint6[146] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -443, -534, -1873, 155, 411, 425,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1326, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -977, -273, 837, 254,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -991, -22, 921, 79,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 950, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1263, -33,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1455, -62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1486, -15,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 948, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 837, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1493, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1414, 63,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1295, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1307, 61,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1348, 60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1221, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 729, -110,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 584, 112,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1246, 49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1406, -34,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1201, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1658, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 713, 132,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1339, 28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1418, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1159, 31,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1694, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1718, -14, 1359, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1132, 27, -1722, -3, 1377, 17,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTSamusAnimDownBackD_joint7[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -561, -88,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -440, 341,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -60, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -226, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -612, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -679, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -440, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -367, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1042, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -996, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -743, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimDownBackD_joint8[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 851, 427, 126, -23, 41, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 855, 12, -47, -222, 61, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 876, -150, -318, -134, -280, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 554, -291, -316, 6, -281, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 293, -167, -306, -19, -272, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 219, -32, -356, -19, -129, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 195, 16, -364, 11, -29, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 28), 701, 0, 0,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTSamusAnimDownBackD_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 86, 68, -29,
	ftAnimBlock(0, 36),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTSamusAnimDownBackD_joint10[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX), 268, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 480, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 15), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 36), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 187, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 402,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), 187, -19, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 0, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimDownBackD_joint12[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 36),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTSamusAnimDownBackD_joint13[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1673, -16, 1655, -26, 616, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 1495, -12, 1438, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 684, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 653, 51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 848, 51,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1465, -39, 1437, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1441, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1095, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 892, 36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 879, -43,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1470, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1355, 83,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1116, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 881, -83,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 830, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 622, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 793, 51, 541, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1150, 141, 875, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1267, 98, 1445, 87, 969, 67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1609, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1628, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 980, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1077, 87,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1342, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1622, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1705, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1666, 37, 1737, 31, 1392, 50,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTSamusAnimDownBackD_joint15[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -343, -8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -145, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -253, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -351, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -636, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -661, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -648, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -617, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -428, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -196, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -338, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -426, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -573, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, -22,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTSamusAnimDownBackD_joint16[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1285, -8, -1576, -84, 1463, -135,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 755, -313,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -1409, -191, -1703, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1676, -116, -1364, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1643, 11, -1477, -86, 445, -245,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 210, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1653, -4, -1538, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1551, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -1475, -6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 251, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 406, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 370, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 252, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1561, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -1564, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1483, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -1551, 25,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 259, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 886, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 979, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1204, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1521, 30, -1581, -16, 1218, 13,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTSamusAnimDownBackD_joint18[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 182, 270,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1196, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1218, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 1023, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 990, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 700, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 621, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 498, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, -20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTSamusAnimDownBackD_joint20[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -592, -231, -106, 3, 632, -58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 333, -343,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 88, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -823, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -585, 408,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -6, 238, -113, -340,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -414, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -108, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -313, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -352, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -230, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 95, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), 65, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -412, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -266, 44,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -227, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -30, -4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -222, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -79, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -111, -26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -50, 13,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -35, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -60, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 48, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 3, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -75, -15, -28, -32, -41, 8,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTSamusAnimDownBackD_joint21[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 364, -7, 7, 35, -333, -63,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 220, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 222, -131, -838, -293,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 58, -132, -1153, -233,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1346, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -130, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 182, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 91, -2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1333, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -967, 29,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -125, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 46, 30,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -936, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -311, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 89, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 155, 2,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 76, 29, -240, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 198, 29, -63, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 226, 27, 160, 5, -49, 13,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTSamusAnimDownBackD_joint23[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 787, 83,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1241, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1225, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 1190, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1180, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 680, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 594, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 463, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 442, -21,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTSamusAnimDownBackD_joint24[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2168, -13, 1985, 5, -1300, -35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1658, -217,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1896, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -2117, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1861, 267,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1446, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1884, -172,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2004, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1810, -59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1421, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1389, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1617, -21,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2005, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -2070, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1640, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1680, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1388, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1293, 14,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1671, 48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1445, 10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2062, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1832, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1305, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1390, 23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1438, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1460, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1466, -5, 1414, 24, -1822, 10,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
