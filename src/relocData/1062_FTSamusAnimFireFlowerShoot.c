/* AnimJoint data for relocData file 1062 (FTSamusAnimFireFlowerShoot) */
/* 2784 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimFireFlowerShoot_joint1[30];
extern u16 dFTSamusAnimFireFlowerShoot_joint2[40];
extern u16 dFTSamusAnimFireFlowerShoot_joint4[60];
extern u16 dFTSamusAnimFireFlowerShoot_joint5[186];
extern u16 dFTSamusAnimFireFlowerShoot_joint6[84];
extern u16 dFTSamusAnimFireFlowerShoot_joint7[26];
extern u16 dFTSamusAnimFireFlowerShoot_joint8[44];
extern u16 dFTSamusAnimFireFlowerShoot_joint11[46];
extern u16 dFTSamusAnimFireFlowerShoot_joint12[114];
extern u16 dFTSamusAnimFireFlowerShoot_joint14[48];
extern u16 dFTSamusAnimFireFlowerShoot_joint15[156];
extern u16 dFTSamusAnimFireFlowerShoot_joint17[46];
extern u16 dFTSamusAnimFireFlowerShoot_joint19[128];
extern u16 dFTSamusAnimFireFlowerShoot_joint20[166];
extern u16 dFTSamusAnimFireFlowerShoot_joint22[172];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTSamusAnimFireFlowerShoot_joints[] = {
	(u32)dFTSamusAnimFireFlowerShoot_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimFireFlowerShoot_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimFireFlowerShoot_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimFireFlowerShoot_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimFireFlowerShoot_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimFireFlowerShoot_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimFireFlowerShoot_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimFireFlowerShoot_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimFireFlowerShoot_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimFireFlowerShoot_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimFireFlowerShoot_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimFireFlowerShoot_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimFireFlowerShoot_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimFireFlowerShoot_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimFireFlowerShoot_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	0xFFFF027C, /* [22] END */
};

/* Joint 1 */
u16 dFTSamusAnimFireFlowerShoot_joint1[30] = {
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 1600, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -296, 1223, -251,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -296, 1223, -251,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -296, 1217, -394,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -296, 1217, -394,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), 0, 1600, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimFireFlowerShoot_joint2[40] = {
	ftAnimSetValAfter(FT_ANIM_ROTX), 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 4), -268,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 5), -268,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 11), -268,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 10), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 10), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTSamusAnimFireFlowerShoot_joint4[60] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -37, -33, 0, 0, -64, -57,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 10, -314, -113,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -37, 0, -64,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 10, -314, -113,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), -37, 14, 0, 0, -64, 24,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -211, -137, 160,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 10, -314, -113,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimFireFlowerShoot_joint5[186] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1132, -80, -1722, 49, 1377, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1212, -117, -1673, 71, 1350, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1367, -293, -1579, -30, 1626, 312,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2168, -183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1733, -107, 1976, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1794, -30, 1949, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1794, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1949, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2168, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -2187, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1794, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1794, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1794, 226, 1949, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1340, 222, 1816, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1349, -16, 1825, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -1690, -53, 1957, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2195, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -2182, 12,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1742, -51, 1957, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1738, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2168, 53, 1949, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1613, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1965, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1878, -108,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1605, 133,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1403, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1735, -158,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1305, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1468, 133,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1206, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1401, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1504, -72,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1260, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1172, 37, -1587, -108, 1278, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1132, 39, -1722, -134, 1377, 99,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimFireFlowerShoot_joint6[84] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -739, 24,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -714, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1013, -226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1167, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1077, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1078, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1078, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1078, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1077, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1023, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1026, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1056, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1055, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1105, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1125, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -937, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -821, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -681, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -702, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, -37,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimFireFlowerShoot_joint7[26] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 701, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -16, 38, -96,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -16, 38, -96,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -16, 38, -96,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 701, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimFireFlowerShoot_joint8[44] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 67, 159, -17, -253, -1474, -283,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 98, 60, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 555, 0, -703, 0, -2166, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 555, 0, -703, 0, -2166, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 555, 0, -703, 0, -2166, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 67, -150, -17, 216, -1474, 191,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimFireFlowerShoot_joint11[46] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 28, 3, 259, 28, 82, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 28, 19,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 259, 82,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 146, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 259, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 146, -7, 259, -12, 82, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTSamusAnimFireFlowerShoot_joint12[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1666, 78, 1737, 29, 1392, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1744, 53, 1766, -15, 1467, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1773, 48, 1706, -72, 1632, 165,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1910, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1622, -54, 1797, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1597, -12, 1871, 36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1598, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1910, 0, 1871, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 1910, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1871, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 1871, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1598, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1597, 2,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1910, -12, 1871, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1774, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1403, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1603, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1761, -16,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1761, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1713, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1666, -46, 1737, -24, 1392, -10,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimFireFlowerShoot_joint14[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -595, -113,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -708, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -877, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -932, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -933, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -940, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -944, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -738, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -669, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -616, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, 21,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimFireFlowerShoot_joint15[156] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1521, 11, 1635, 51, -1998, -74,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2202, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -1440, 50, 1809, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1380, 27, 1867, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -1388, -3, 1872, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2201, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 3), -2199,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1390, -1, 1874, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1874, -35,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -1391,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1390, 55, -2199, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1280, 55, 1804, -34, -2163, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1805, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1280, 0, -2164, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1283, 0, -2164, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1805, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1806, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1282, -71, 1806, 45, -2164, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1425, -124, 1896, 76, -2210, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1531, -93, 1960, 50, -2213, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2130, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1612, -38, 1998, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1607, 7, 1953, -45,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), -1527, 6, 1657, -23,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2112, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -2025, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1521, 6, 1635, -21, -1998, 27,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimFireFlowerShoot_joint17[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 478, 98,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 727, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 724, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 719,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 720, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 630, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 630, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 639, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 641, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 509, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, -30,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTSamusAnimFireFlowerShoot_joint19[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -75, -49, -28, -11, -41, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -52, -1,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 8), -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -282, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -370, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -372, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -370, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -362, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -53, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -361, -58, -44, -48, -53, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -479, -59, -140, -48, 63, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -480, 0, -140, 0, 62, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -482, 0, -139, 0, 62, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -482, 76, -139, 62, 62, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -329, 128, -14, 103, 26, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -226, 86, 66, 65, 13, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -43, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -155, 35, 116, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -154, 0, 95, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), -84, 9, -28, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -75, 8, -28, 0, -41, 1,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimFireFlowerShoot_joint20[166] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1385, -39, 1445, -13, 1554, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1547, -76, 1461, 34, 1474, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1630, -41, 1505, 22, 1482, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1505, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1482, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1630, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1630, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1630, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1505, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1505, -28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1630, 41, 1482, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1547, 41, 1448, -27, 1389, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1451, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1548, -1, 1389, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1554, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1423, 21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1453, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1456, 14,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1553, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1629, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1485, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1517, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1659, 5, 1447, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1578, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1468, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1493, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1438, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1542, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1400, 16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1479, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1535, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1385, 15, 1445, 6, 1554, 18,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimFireFlowerShoot_joint22[172] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 453, 120,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 789, 26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 789,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 789, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 789, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 870, 40,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 870,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 870,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 870, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 748, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 728, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 495, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 453, -42,
	ftAnimEnd(),
	0x200E, 0xFA49, 0xFFF8, 0xF8F6, 0x0026, 0x0571, 0xFF9F, 0x2803, 0x0008, 0xFA34, 0x0000, 0x200D, 0x0003, 0xF929, 0xFFEE, 0x0466, 0xFFAE, 0x200D, 0x0001, 0xF90A, 0xFFF1, 0x0413, 0xFFD7, 0x2805, 0x0004, 0xF90A, 0x0000, 0x2009, 0x0001, 0x0413, 0x0000, 0x2009, 0x0001, 0x0413, 0x0000, 0x2809, 0x000A, 0x041C, 0x0000, 0x0801, 0x0002, 0x2007, 0x0001, 0xFA34, 0xFFF1, 0xF90A, 0x0037, 0x2007, 0x0001, 0xFA16, 0xFFF1, 0xF979, 0x0036, 0x2007, 0x0001, 0xFA16, 0x0000, 0xF978, 0xFFFF, 0x2803, 0x0008, 0xFA2D, 0x000C, 0x2005, 0x0005, 0xF970, 0x0000, 0x200D, 0x0001, 0xF970, 0xFFE8, 0x041C, 0x000A, 0x2805, 0x0003, 0xF8F3, 0xFFFA, 0x2809, 0x0007, 0x04C6, 0x001A, 0x0801, 0x0002, 0x2003, 0x0001, 0xFA39, 0x0007, 0x2803, 0x0009, 0xFA45, 0x0003, 0x2005, 0x0001, 0xF907, 0x0013, 0x2805, 0x0008, 0xF906, 0xFFF2, 0x0801, 0x0003, 0x2009, 0x0001, 0x04E0, 0x001A, 0x2009, 0x0004, 0x0551, 0x001E, 0x200F, 0x0001, 0xFA49, 0x0003, 0xF8F6, 0xFFF1, 0x0571, 0x001F, 0x0000, 0x0000, 0x0000,
};
