/* AnimJoint data for relocData file 1080 (FTSamusAnimAttackAirN) */
/* 2272 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimAttackAirN_joint1[20];
extern u16 dFTSamusAnimAttackAirN_joint2[8];
extern u16 dFTSamusAnimAttackAirN_joint4[58];
extern u16 dFTSamusAnimAttackAirN_joint5[122];
extern u16 dFTSamusAnimAttackAirN_joint6[64];
extern u16 dFTSamusAnimAttackAirN_joint7[26];
extern u16 dFTSamusAnimAttackAirN_joint8[10];
extern u16 dFTSamusAnimAttackAirN_joint9[20];
extern u16 dFTSamusAnimAttackAirN_joint11[8];
extern u16 dFTSamusAnimAttackAirN_joint12[126];
extern u16 dFTSamusAnimAttackAirN_joint14[64];
extern u16 dFTSamusAnimAttackAirN_joint15[152];
extern u16 dFTSamusAnimAttackAirN_joint17[48];
extern u16 dFTSamusAnimAttackAirN_joint19[80];
extern u16 dFTSamusAnimAttackAirN_joint20[118];
extern u16 dFTSamusAnimAttackAirN_joint22[166];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTSamusAnimAttackAirN_joints[] = {
	(u32)dFTSamusAnimAttackAirN_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimAttackAirN_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimAttackAirN_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimAttackAirN_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimAttackAirN_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimAttackAirN_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimAttackAirN_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimAttackAirN_joint9, /* [8] joint 9 */
	(u32)dFTSamusAnimAttackAirN_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimAttackAirN_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimAttackAirN_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimAttackAirN_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimAttackAirN_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimAttackAirN_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimAttackAirN_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimAttackAirN_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	0xFFFF0204, /* [22] END */
};

/* Joint 1 */
u16 dFTSamusAnimAttackAirN_joint1[20] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 1300,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), -4, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 2), 1578,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 1300, -79,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 26), 1300,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 20), 1300,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTSamusAnimAttackAirN_joint2[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTSamusAnimAttackAirN_joint4[58] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 240, 0, 0, 0, -21, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -261, 2, 0, 106, 0, 33, 5, 87, -3, 47, -80, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 251, 18, 426, 15, 134, 4, 43, 10, 2, 1, 49, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 26), 251, 0, 426, -9, 134, -2, 43, -7, 2, -4, 49, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 240, 0, 0, 0, -21, 56,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimAttackAirN_joint5[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1620, -82, -1588, 79, -1542, -322,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1537, 20, -1508, 42, -1864, -695,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1661, 59, -1502, 43, -2932, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1662, 0, -1340, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1813, 764,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1402, 211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1657, -3, -1342, -1, -1389, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), 1658, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 38), -1444, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1379, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), -1396, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1662, -8, -1402, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1517, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1235, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1200, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -1420, -43,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1507, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 1626, -4,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1462, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1575, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1462, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1537, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1620, -5, -1588, -12, -1542, -5,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimAttackAirN_joint6[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1046, -240,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1286, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -960, 225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -834, 477,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 414,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), -5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -63, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -260, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -743, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -814, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -1047, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1046, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimAttackAirN_joint7[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 536,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 424, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 0, -17,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 29), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -357, 26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 11), 536,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimAttackAirN_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTSamusAnimAttackAirN_joint9[20] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 73, -487, -147,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), 73, -487, -147,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimAttackAirN_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTSamusAnimAttackAirN_joint12[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1884, 135, 1496, 73, -1676, -354,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1565, 183,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1476, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2031, -559,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2795, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1381, -113, -1745, 691,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1792, -205, 1308, -84, -1413, 166,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1308, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1792, 0, -1413, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), -1792, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1413, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), -1413, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1308, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), 1308, 2,
	ftAnimBlock(0, 22),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1413, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1802, 29, 1314, -13, -1429, 53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1697, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 1453, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1305, 92,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1175, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1675, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -1879, -7,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1189, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -1633, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1884, -4, 1496, 42, -1676, -43,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimAttackAirN_joint14[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -985, -443,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1429, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1128, 249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -930, 561,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 462,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), -5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -268, -205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -944, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -977, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1009, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -985, 24,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimAttackAirN_joint15[152] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1576, -147, -1557, 143, 1042, 289,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -977, 275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1723, -216, 1331, 336,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2010, -86, 1715, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1897, 52, 1339, -489,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1904, 0, -669, 155, 735, -306,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), -1852, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -665, 3, 726, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -662, 3, 718, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), -646, -1, 687, 2,
	ftAnimBlock(0, 19),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1853, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1862, -8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -648, -33, 689, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -907, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1876, -51, 748, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1965, 219, 878, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1436, 151, 388, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1663, -126, 651, 162,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 751, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1689, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -1579, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -946, -37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1344, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 782, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1039, 5,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1407, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1545, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1576, 3, -1557, -11, 1042, 2,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimAttackAirN_joint17[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1329, -87,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1241, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1111, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1336, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1346, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), 1346, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1346, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 1287, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1294, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1318, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1329, 10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimAttackAirN_joint19[80] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), -1573, 34, 1657, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), -1630,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 49), 1657, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1539, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1858, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1228, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1631, -200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1628, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1625, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 23), -1614, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1616, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1445, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1291, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1369, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1404, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -1670, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1692, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1640, 54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), -1573, 66,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 1657,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTSamusAnimAttackAirN_joint20[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -71, 38, 6, -592, 152,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -54, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 45, 63, -439, 177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 166, -8, -237, -462,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 27, -107, -1364, -410,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 98, 76, -48, -37, -1059, 152,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 98, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -48, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -1059,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1059, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), -1059, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 98, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 41), 7, -6,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 20), -48, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -48, 11, -1059, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 40, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1132, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1103, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -857, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -846, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -670, 69,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -2, 38, -1, -592, 78,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimAttackAirN_joint22[166] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1100, 56,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1157, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1127, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1263, -561,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -629,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 281, 209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 423, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 643, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 674, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 1092, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1100, 8,
	ftAnimEnd(),
	0x200E, 0x0601, 0x0047, 0x0608, 0x0022, 0xF9F3, 0xFF97, 0x2809, 0x0002, 0xF924, 0xFF9F, 0x4005, 0x0005, 0x06AB, 0x2003, 0x0001, 0x0649, 0x0018, 0x2003, 0x0001, 0x0633, 0x0010, 0x200B, 0x0001, 0x066A, 0x0010, 0xF8C8, 0xFFFE, 0x200B, 0x0001, 0x0654, 0xFFF6, 0xF91E, 0x002B, 0x2803, 0x0010, 0x0654, 0x0000, 0x2009, 0x0001, 0xF91E, 0x0000, 0x4009, 0x0018, 0xF91E, 0x3805, 0x0001, 0x06AB, 0x2805, 0x0018, 0x06AB, 0xFFFA, 0x0801, 0x000E, 0x3803, 0x0001, 0x0654, 0x2803, 0x000A, 0x0631, 0xFFEA, 0x0801, 0x0008, 0x2009, 0x0001, 0xF91E, 0x0008, 0x2809, 0x0013, 0xF9ED, 0x0006, 0x2005, 0x0001, 0x069E, 0xFFF4, 0x2805, 0x0012, 0x060C, 0xFFFC, 0x2003, 0x0001, 0x0628, 0xFFFE, 0x2003, 0x0009, 0x0633, 0xFFEA, 0x2003, 0x0001, 0x061D, 0xFFEC, 0x2003, 0x0007, 0x05FD, 0x0004, 0x200F, 0x0001, 0x0601, 0x0004, 0x0608, 0xFFFC, 0xF9F3, 0x0006, 0x0000,
};
