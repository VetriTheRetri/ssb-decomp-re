/* AnimJoint data for relocData file 1102 (FTSamusAnimFireFlowerShootAir) */
/* 2080 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimFireFlowerShootAir_joint1[30];
extern u16 dFTSamusAnimFireFlowerShootAir_joint2[34];
extern u16 dFTSamusAnimFireFlowerShootAir_joint4[70];
extern u16 dFTSamusAnimFireFlowerShootAir_joint5[134];
extern u16 dFTSamusAnimFireFlowerShootAir_joint6[38];
extern u16 dFTSamusAnimFireFlowerShootAir_joint7[26];
extern u16 dFTSamusAnimFireFlowerShootAir_joint8[38];
extern u16 dFTSamusAnimFireFlowerShootAir_joint11[26];
extern u16 dFTSamusAnimFireFlowerShootAir_joint12[76];
extern u16 dFTSamusAnimFireFlowerShootAir_joint14[30];
extern u16 dFTSamusAnimFireFlowerShootAir_joint15[114];
extern u16 dFTSamusAnimFireFlowerShootAir_joint17[52];
extern u16 dFTSamusAnimFireFlowerShootAir_joint19[110];
extern u16 dFTSamusAnimFireFlowerShootAir_joint20[88];
extern u16 dFTSamusAnimFireFlowerShootAir_joint22[32];
extern u16 dFTSamusAnimFireFlowerShootAir_joint23[96];

/* Joint pointer table (23 entries, 92 bytes) */
AObjEvent32 * dFTSamusAnimFireFlowerShootAir_joints[] = {
	(AObjEvent32 *)dFTSamusAnimFireFlowerShootAir_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTSamusAnimFireFlowerShootAir_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTSamusAnimFireFlowerShootAir_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTSamusAnimFireFlowerShootAir_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTSamusAnimFireFlowerShootAir_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTSamusAnimFireFlowerShootAir_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTSamusAnimFireFlowerShootAir_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTSamusAnimFireFlowerShootAir_joint11, /* [8] joint 11 */
	NULL, /* [9] NULL */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTSamusAnimFireFlowerShootAir_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTSamusAnimFireFlowerShootAir_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTSamusAnimFireFlowerShootAir_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTSamusAnimFireFlowerShootAir_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTSamusAnimFireFlowerShootAir_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTSamusAnimFireFlowerShootAir_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTSamusAnimFireFlowerShootAir_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTSamusAnimFireFlowerShootAir_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTSamusAnimFireFlowerShootAir_joint1[30] = {
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -4, 1300, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -296, 1223, -251,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -296, 1223, -251,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -296, 1217, -394,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -227, 1306, -303,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -4, 1300, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimFireFlowerShootAir_joint2[34] = {
	ftAnimSetValAfter(FT_ANIM_ROTX), 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 4), -268,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 5), -268,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 11), -268,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 10), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 10), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTSamusAnimFireFlowerShootAir_joint4[70] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -21, 56,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 240, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -37, -33, 0, 18, -64, -107,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 10, -314, -113,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 5), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 5), -37, 0, -64, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 10, -314, -113,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -37, 0, -64,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -211, -137, 160,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -37, 14, 0, -8, -64, 48,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 10, -314, -113,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, -21, 56,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 240, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTSamusAnimFireFlowerShootAir_joint5[134] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1490, -80, -1452, 3, 1878, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1845, -243, -1612, -152, 2105, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2168, -161, -1794, -90, 1949, -77,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 3), -1794,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1949, -66,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), -2168,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -2168,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -2174, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -1794,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1794, 226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1340, 202, 1816, -63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1856, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1389, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1438, -48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1758, -37,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1870, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1775, -101,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2168, 88, -1794, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1471, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1751, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1662, 83,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1501, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1439, 21, 1669, -106,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1440, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1562, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1638, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1796, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1490, 11, -1452, -11, 1878, 82,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimFireFlowerShootAir_joint6[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1072, -31,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 8), -1077,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1077, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -1093, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1077, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -937, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -843, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1035, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1072, -37,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTSamusAnimFireFlowerShootAir_joint7[26] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 701, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -16, 38, -96,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -16, 38, -96,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -16, 38, -96,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 701, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimFireFlowerShootAir_joint8[38] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 67, 441, -17, 329, -1474, 422,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 98, 60, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 555, 54, -703, -76, -2166, -76,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 555, -703, -2166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 555, -23, -703, 32, -2166, 32,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 67, -17, -1474,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimFireFlowerShootAir_joint11[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 28, 14, 259, 25, 82, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 146, -1, 259, -9, 82, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimFireFlowerShootAir_joint12[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -275, 286, 111, -183, -68, 164,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 262, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 142, 110, -80, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 232, 79, -40, 45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 301, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 301, 262,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 17), -26, -84, 78, -41,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 11), -87, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -81, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 8, 82,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -124, -124, 27, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -275, -150, 111, 103, -68, -96,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimFireFlowerShootAir_joint14[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -985, -45,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), -932,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -932,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -1013, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1028, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1008, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -985, 22,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimFireFlowerShootAir_joint15[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1576, 90, 1659, -21, -2174, -75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -2186, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -1300, -48, 1789, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1354, -55, 1849, 54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1447, 105,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1908, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2228, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1251, 94, -2380, -81,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1279, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2391, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -2411, -8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1291, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1474, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1910, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1681, -27,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2407, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2278, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1516, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1557, -17,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2263, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1662, -11, -2222, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1576, -19, 1659, -2, -2174, 47,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimFireFlowerShootAir_joint17[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1329, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 822, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 720, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 720, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 536, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 510, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 507, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 773, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 845, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1240, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1308, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1329, 21,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimFireFlowerShootAir_joint19[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1573, -46, 1586, -91, -1559, 58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1414, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -1816, 28, 1328, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1786, 26, 1347, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1769, -116,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1442, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1384, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1463, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1979, -103, -1322, 74,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1293, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1973, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1966, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1815, 51,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1292, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1632, -106,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1454, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1564, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1767, 45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1575, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1731, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1462, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1507, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1573, 1, 1586, 21, -1559, -52,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimFireFlowerShootAir_joint20[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, 67, 1569, -21, 1016, -41,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 1707, 42, 1197, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 1756, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1690, -64,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1569, 42,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1746, 0, 1183, -64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1043, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 1575, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1669, 45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1699, 12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1018, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 986, 29,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1711, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 1625, -16,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1568, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1567, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1608, -17, 1569, 2, 1016, 30,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimFireFlowerShootAir_joint22[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1100, 4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 943, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 939, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 938, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 975, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1097, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1100, 3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTSamusAnimFireFlowerShootAir_joint23[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1537, -78, 1544, -40, 1667, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1393, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1356, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 1392, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1465, 64,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1563, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1376, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1591, 20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1322, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1488, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1458, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1439, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1422, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 1511, 22,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1611, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 1686, -14,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1493, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 1537, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1537, 26, 1544, 6, 1667, -19,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
