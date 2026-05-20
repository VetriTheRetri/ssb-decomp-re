/* AnimJoint data for relocData file 1521 (FTCaptainAnimTurnRun) */
/* 2736 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimTurnRun_joint1[18];
extern u16 dFTCaptainAnimTurnRun_joint2[46];
extern u16 dFTCaptainAnimTurnRun_joint3[62];
extern u16 dFTCaptainAnimTurnRun_joint5[68];
extern u16 dFTCaptainAnimTurnRun_joint6[136];
extern u16 dFTCaptainAnimTurnRun_joint7[68];
extern u16 dFTCaptainAnimTurnRun_joint8[34];
extern u16 dFTCaptainAnimTurnRun_joint9[8];
extern u16 dFTCaptainAnimTurnRun_joint11[48];
extern u16 dFTCaptainAnimTurnRun_joint12[116];
extern u16 dFTCaptainAnimTurnRun_joint13[48];
extern u16 dFTCaptainAnimTurnRun_joint14[36];
extern u16 dFTCaptainAnimTurnRun_joint17[10];
extern u16 dFTCaptainAnimTurnRun_joint18[126];
extern u16 dFTCaptainAnimTurnRun_joint20[32];
extern u16 dFTCaptainAnimTurnRun_joint22[132];
extern u16 dFTCaptainAnimTurnRun_joint23[134];
extern u16 dFTCaptainAnimTurnRun_joint25[52];
extern u16 dFTCaptainAnimTurnRun_joint26[142];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTCaptainAnimTurnRun_joints[] = {
	(AObjEvent32 *)dFTCaptainAnimTurnRun_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTCaptainAnimTurnRun_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTCaptainAnimTurnRun_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTCaptainAnimTurnRun_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTCaptainAnimTurnRun_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTCaptainAnimTurnRun_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTCaptainAnimTurnRun_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTCaptainAnimTurnRun_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTCaptainAnimTurnRun_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTCaptainAnimTurnRun_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTCaptainAnimTurnRun_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTCaptainAnimTurnRun_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTCaptainAnimTurnRun_joint17, /* [14] joint 17 */
	NULL, /* [15] NULL */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTCaptainAnimTurnRun_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTCaptainAnimTurnRun_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTCaptainAnimTurnRun_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTCaptainAnimTurnRun_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTCaptainAnimTurnRun_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTCaptainAnimTurnRun_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTCaptainAnimTurnRun_joint1[18] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 7), 1088, 394,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 14), 1323, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 7), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTCaptainAnimTurnRun_joint2[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY), 0, 0, 1253,
	ftAnimSetValRate(FT_ANIM_ROTY), 0, 5,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -39, 0, 262, 0, -29, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 8), 1090, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), 1090,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 5), -39, 0, 262, 0, -29, 0, 1090, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 329, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY, 12), 0, 0, 1253,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTCaptainAnimTurnRun_joint3[62] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 393, 148, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 26, 63,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 758, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 161, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 185, 90,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1806, 0, 1891, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 836, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1806, 0, 836, 0, 1891, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 1588, -1, 455, -71, 1678, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1582, 0, 153, 0, 1679, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 2001, 148, 1617,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimTurnRun_joint5[68] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 258, -50, -312, -20, 65, 9,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1, -72, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 194, 0, -340, 0, 121, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 257, 0, -284, 0, -39, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 257, 0, -284, 0, -39, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 159, 0, -8, 27, -49, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 338, 38, 56, 0, 56, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 487, -6, -139, -43, 11, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 258, -19, -312, -9, 65, 9,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimTurnRun_joint6[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1408, -89, -1420, 108, 827, 170,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1327, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1497, -195, 997, 334,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1800, -173, 1496, 365,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1770, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1729, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1697, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2031, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1825, -63,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -2202, 33,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1392, -59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1481, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2073, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 2203, 45,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2138, 75,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1782, 163,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2243, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2068, -258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1497, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1485, 20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1603, 142, 1732, -262,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1269, -126,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1407, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1472, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1442, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1127, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 870, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1408, -1, -1420, 21, 827, -42,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTCaptainAnimTurnRun_joint7[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -848, -140,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1017, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -714, 297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -423, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -436, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -631, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -556, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -345, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -445, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -816, -226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1021, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -807, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -798, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -902, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -856, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -848, 8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTCaptainAnimTurnRun_joint8[34] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 38, 0, -4, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -478, -16, 138, 12, -281, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -233, 30, 202, -5, -222, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 11), 38, 0, -4, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 11), 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTCaptainAnimTurnRun_joint9[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 187, -62, 8,
	ftAnimBlock(0, 28),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTCaptainAnimTurnRun_joint11[48] = {
	ftAnimSetValRate(FT_ANIM_ROTY), 163, -4,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), -617, -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -413, 109, 94, -116, -124, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -202, 22, -278, 0, 223, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -148, 0, 173, 0, -85, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -148, 0, 173, 0, -85, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 163, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), -617, -188,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTCaptainAnimTurnRun_joint12[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1725, 22, 1206, -21, -1427, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1218, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1682, -138, -1609, -270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1470, -146, -1971, -261,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2119, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1406, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1251, 33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1340, -52,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2123, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -2173, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1391, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1372, 67,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2136, 68,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1676, 61,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1290, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1226, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1446, 65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1722, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1635, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1431, 8,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1216, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1209, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1725, 2, 1206, -2, -1427, 4,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTCaptainAnimTurnRun_joint13[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -419, -127,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -660, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -747, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -777, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -952, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -948, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -612, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -570, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -429, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -419, 9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTCaptainAnimTurnRun_joint14[36] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 379, 0, -20, 0, 98, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, -3, -29, 3, -144, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 328, 15, 21, 0, -170, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 379, 0, -20, 0, 98, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimTurnRun_joint17[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	ftAnimBlock(0, 28),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTCaptainAnimTurnRun_joint18[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1774, 31, -1546, 79, 1535, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1805, 109, -1467, -41, 1571, -197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1994, -104, -1630, -72, 1140, -317,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1611, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1595, -254, 936, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1484, -56, 1122, 82,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1083, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1484, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1606, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1368, 56,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1068, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1029, -31,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1489, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 1807, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1318, 33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1628, -11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1006, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1396, 87,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1632, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1537, 31,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1808, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1810, 1, 1480, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1811, 1, -1510, 26, 1529, 48,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTCaptainAnimTurnRun_joint20[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 293, 270,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 966, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 986, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 1009, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 998, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 421, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 302, -118,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTCaptainAnimTurnRun_joint22[132] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -82, -73, -81, 64, -38, -399,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -59, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -155, -128, -438, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -338, 77, -348, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 211, -40, -50, -264, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 83, 42, -159, -44, -431, -85,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -437, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 111, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -129, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 24, -6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -432, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -423, 13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 101, -26, -17, -80,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -92, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -160, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -87, 74,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -114, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -74, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -79, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -410, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -453, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -468, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -282, 186,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -90, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -135, -45, -94, 19, -42, 239,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTCaptainAnimTurnRun_joint23[134] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 28, -38, 157, 32, -1083, 156,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 317, 202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -9, -102, -926, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -176, -34, -970, 225,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 140, 316,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -79, 317, 594, 133,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 592, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 458, 258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 437, -34, 157, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 259, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 389, -44, 584, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 276, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 190, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 121, -62, 237, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 275, -57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 132, -18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 237, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 145, 58,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 209, -72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -649, -232,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 212, 57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 196, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 108, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 76, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -868, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1010, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 78, 2, 182, -13, -1056, -46,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTCaptainAnimTurnRun_joint25[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1180, 20,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1200, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 967, -297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 265, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 311, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 399, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 411, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 396, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 509, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1191, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1184, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1177, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTCaptainAnimTurnRun_joint26[142] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 79, 34, 106, -30, 168, -79,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 153, 107, -40, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 89, -246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -324, -130,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 38, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 328, 114, -8, -87,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 453, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -215, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -170, 56, 8, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -37, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 310, 49,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 471, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 103, -132,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -442, -46,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 349, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 118, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -24, -91,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 348, 28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -453, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -226, 53,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 355, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 30, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 67, -54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 99, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -156, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 125, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 33, 3, 122, 23, 153, 27,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
