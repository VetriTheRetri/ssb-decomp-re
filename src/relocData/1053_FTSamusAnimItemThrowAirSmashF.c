/* AnimJoint data for relocData file 1053 (FTSamusAnimItemThrowAirSmashF) */
/* 1936 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimItemThrowAirSmashF_joint1[20];
extern u16 dFTSamusAnimItemThrowAirSmashF_joint2[34];
extern u16 dFTSamusAnimItemThrowAirSmashF_joint4[44];
extern u16 dFTSamusAnimItemThrowAirSmashF_joint5[114];
extern u16 dFTSamusAnimItemThrowAirSmashF_joint6[52];
extern u16 dFTSamusAnimItemThrowAirSmashF_joint7[26];
extern u16 dFTSamusAnimItemThrowAirSmashF_joint8[16];
extern u16 dFTSamusAnimItemThrowAirSmashF_joint11[26];
extern u16 dFTSamusAnimItemThrowAirSmashF_joint12[72];
extern u16 dFTSamusAnimItemThrowAirSmashF_joint14[44];
extern u16 dFTSamusAnimItemThrowAirSmashF_joint15[130];
extern u16 dFTSamusAnimItemThrowAirSmashF_joint17[68];
extern u16 dFTSamusAnimItemThrowAirSmashF_joint19[66];
extern u16 dFTSamusAnimItemThrowAirSmashF_joint20[80];
extern u16 dFTSamusAnimItemThrowAirSmashF_joint22[128];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTSamusAnimItemThrowAirSmashF_joints[] = {
	(u32)dFTSamusAnimItemThrowAirSmashF_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimItemThrowAirSmashF_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimItemThrowAirSmashF_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimItemThrowAirSmashF_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimItemThrowAirSmashF_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimItemThrowAirSmashF_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimItemThrowAirSmashF_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimItemThrowAirSmashF_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimItemThrowAirSmashF_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimItemThrowAirSmashF_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimItemThrowAirSmashF_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimItemThrowAirSmashF_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimItemThrowAirSmashF_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimItemThrowAirSmashF_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimItemThrowAirSmashF_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	0xFFFF01C6, /* [22] END */
};

/* 4-byte alignment padding */
static u32 dFTSamusAnimItemThrowAirSmashF_pad[1] = { 0 };

/* Joint 1 */
u16 dFTSamusAnimItemThrowAirSmashF_joint1[20] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), -4, 1300,
	ftAnimSetValAfterT(FT_ANIM_TRAX | FT_ANIM_TRAY, 24), -4, 1300,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), 0, -244,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), -183,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 18), 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimItemThrowAirSmashF_joint2[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 1, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterT(FT_ANIM_ROTY, 24), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 269, 64, 89, -20,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), -5, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 267, -4, -80, -85,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 49, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 1, -51,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 18), 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTSamusAnimItemThrowAirSmashF_joint4[44] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 240, 0, 0, 0, -21, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -14, 11, 211, -33, 236, -25, -38, -35, 2, -28, 26, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 309, 12, -198, -10, -152, -11, -26, 15, -42, -9, 80, 12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 18), 240, 0, 0, 0, -21, 56,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimItemThrowAirSmashF_joint5[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 11, -90, -19, -73, 77, 122,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -141, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -78, -271, 199, 226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -531, -433, 529, 231,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1198, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 661, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -243, -724, 854, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -852, 347, -1590, -572, 545, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -504, 154, -1387, 84, 1027, 218,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1471, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -542, -37, 982, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1017, -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 965, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1157, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1514, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1516, -52,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1225, -179, 1301, 127,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -1592, -8, 1678, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1580, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -1593, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1597, -4, -1589, 3, 1685, 7,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimItemThrowAirSmashF_joint6[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1015, -132,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 24), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1237, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1004, 224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -788, 324,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -356, 305,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -177, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -276, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -435, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -505, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -1011, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1015, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimItemThrowAirSmashF_joint7[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 536, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -406, -318, -89, 40, 674, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1376, 47, 241, 4, -268, -33,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 536, 0, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTSamusAnimItemThrowAirSmashF_joint8[16] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), 67, -17, -1474, 98, 60, -42,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimItemThrowAirSmashF_joint11[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX, 24), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -102, 54, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 327, 5, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTSamusAnimItemThrowAirSmashF_joint12[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1332, 55, 1496, -40, 1540, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1591, 58, 1240, -104, 1373, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1627, 133, 1149, -3, 1359, 162,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1448, 114, 1958, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1858, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1891, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1523, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1462, 10, 1965, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 1497, -2, 1544, -8,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1492, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 1336, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1332, -3, 1496, -1, 1540, -4,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimItemThrowAirSmashF_joint14[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -985, -24,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 24), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -925, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -868, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1111, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1244, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1239, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1228, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -989, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -985, 3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimItemThrowAirSmashF_joint15[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1576, 19, -1557, -18, 1042, 167,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -1691, -111, -1401, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1464, 252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1715, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1734, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1403, -285,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 964, -231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1829, -43, -1316, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1724, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1382, 20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 700, -152,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 656, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1800, -48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1764, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1339, 26, 630, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 757, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1487, -39,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1763, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1541, -18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 745, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 988, 51,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1519, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1551, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1562, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1578, -6, 1031, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1576, 2, -1557, -5, 1042, 10,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimItemThrowAirSmashF_joint17[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1329, -177,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 24), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1151, -296,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 736, -465,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 11, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 299, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 240, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 238, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 195, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 238, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1058, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1126, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1251, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1329, 77,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimItemThrowAirSmashF_joint19[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 34, -77, 21, 0, 48, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), 21, 0, 48, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -108, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 34, -226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -562, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -184, 241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -8, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 0, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -20, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 115, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 10, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 17, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 33, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 34, 1, 21, 0, 48, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimItemThrowAirSmashF_joint20[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -4, 38, 4, -592, 202,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 53, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 60, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -389, 275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -41, 248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 78, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -255, -353,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -866, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 29, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 4, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -905, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1015, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -952, 55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -694, 89,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 60, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 43, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -4, 38, -5, -592, 102,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimItemThrowAirSmashF_joint22[128] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1100, -48,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 24), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1051, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 798, -236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 578, -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 262, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 615, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 474, -274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 66, -235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 403, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 497, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1065, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1100, 34,
	ftAnimEnd(),
	0x0000, 0x200E, 0xFFBA, 0x0016, 0x0040, 0x0000, 0x003B, 0x0000, 0x280D, 0x0017, 0x0040, 0x0000, 0x003B, 0x0000, 0x2003, 0x0003, 0xFFD8, 0xFFDE, 0x2003, 0x0001, 0xFF9D, 0x007C, 0x2003, 0x0001, 0x00D0, 0x02B4, 0x2003, 0x0001, 0x0505, 0xFFCE, 0x2003, 0x0001, 0x006A, 0xFD79, 0x2003, 0x0001, 0xFFF8, 0xFFBF, 0x2003, 0x0007, 0x0011, 0xFFDD, 0x2003, 0x0001, 0xFFE3, 0xFFCC, 0x2003, 0x0007, 0xFFA2, 0x0019, 0x200F, 0x0001, 0xFFBA, 0x0017, 0x0040, 0x0000, 0x003B, 0x0000, 0x0000, 0x0000, 0x0000,
};
