/* AnimJoint data for relocData file 962 (FTSamusAnimTurnRun) */
/* 2512 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimTurnRun_joint1[16];
extern u16 dFTSamusAnimTurnRun_joint2[56];
extern u16 dFTSamusAnimTurnRun_joint3[8];
extern u16 dFTSamusAnimTurnRun_joint5[84];
extern u16 dFTSamusAnimTurnRun_joint6[104];
extern u16 dFTSamusAnimTurnRun_joint7[48];
extern u16 dFTSamusAnimTurnRun_joint8[8];
extern u16 dFTSamusAnimTurnRun_joint12[10];
extern u16 dFTSamusAnimTurnRun_joint13[96];
extern u16 dFTSamusAnimTurnRun_joint15[56];
extern u16 dFTSamusAnimTurnRun_joint16[126];
extern u16 dFTSamusAnimTurnRun_joint18[64];
extern u16 dFTSamusAnimTurnRun_joint20[142];
extern u16 dFTSamusAnimTurnRun_joint21[164];
extern u16 dFTSamusAnimTurnRun_joint23[68];
extern u16 dFTSamusAnimTurnRun_joint24[158];

/* Joint pointer table (24 entries, 96 bytes) */
AObjEvent32 * dFTSamusAnimTurnRun_joints[] = {
	(AObjEvent32 *)dFTSamusAnimTurnRun_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTSamusAnimTurnRun_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTSamusAnimTurnRun_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTSamusAnimTurnRun_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTSamusAnimTurnRun_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTSamusAnimTurnRun_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTSamusAnimTurnRun_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTSamusAnimTurnRun_joint12, /* [8] joint 12 */
	NULL, /* [9] NULL */
	NULL, /* [10] NULL */
	NULL, /* [11] NULL */
	(AObjEvent32 *)dFTSamusAnimTurnRun_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTSamusAnimTurnRun_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTSamusAnimTurnRun_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTSamusAnimTurnRun_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTSamusAnimTurnRun_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTSamusAnimTurnRun_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTSamusAnimTurnRun_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTSamusAnimTurnRun_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTSamusAnimTurnRun_joint1[16] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAZ), 0, 3098,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), 1511, 549,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 15), 1373, -868,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 6), 0, -2090,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimTurnRun_joint2[56] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAY), 0, 1739,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 527, 47,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 1804, 172,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 1804, -1197,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 1205, -598,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY, 6), 527, 1205,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 527, 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), 1205,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1608, 89,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 1205, 712,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 1740, -3,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 6), 1608,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 1804, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 2), 1739,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTSamusAnimTurnRun_joint3[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 89, 0, 0,
	ftAnimBlock(0, 26),
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTSamusAnimTurnRun_joint5[84] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 5, 33,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 44, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 37, 27, 0, -4, 0, -24,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 35, 219, -41,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 37, 29, 0, 0, 0, -47,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 35, 219, -41,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 70, 73, -1, -88, -53, 67,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 44, 804, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 92, 12, -66, -216, 50, 256,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 241, 0, -92,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 78, -80, -136, 63, 106, -14,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 476, 4, -25,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 0, 5, 33,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 44, 0, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimTurnRun_joint6[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1608, 7, -1517, 18, 1935, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1377, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1623, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 2234, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2225, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2223, -36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1377, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1484, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1626, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1662, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2146, -172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1640, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1571, -45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1448, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1450, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1506, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1725, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1725, -6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1511, 122,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1955, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1722, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1632, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1608, 24, -1517, -11, 1935, -19,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTSamusAnimTurnRun_joint7[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -539, -22,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -525, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -487, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -593, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -757, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -724, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -854, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -921, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -967, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -686, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -539, 146,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimTurnRun_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimBlock(0, 26),
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTSamusAnimTurnRun_joint12[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 26),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTSamusAnimTurnRun_joint13[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 3, -1, 92, 14, 32, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -155, 47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 107, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 45, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 41, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -34, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -86, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 304, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 74, 10, 328, 47,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 277, -1, 628, 5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -49, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 12, 28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 272, -5, 624, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 382, -216,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 143, -63,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 7, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -11, -2, 141, -174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3, 14, 92, -50, 32, -109,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTSamusAnimTurnRun_joint15[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -676, -36,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -918, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -903, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -921, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -956, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -544, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -506, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -560, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -517, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -593, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -751, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -760, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -676, 83,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTSamusAnimTurnRun_joint16[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1604, 40, 1642, -55, -1980, -246,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 1284, -210, 1702, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -2374, 234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1988, 209,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1940, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1023, -150, 1902, 112,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 980, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1918, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1934, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1945, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 998, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1011, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1907, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 1912, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1003, 135, 1922, -65, -1935, -41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1584, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1282, 224, -2029, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1451, 136, -1848, 234,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1318, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1608, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1610, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1629, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1466, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1947, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1604, -3, 1642, 13, -1980, -33,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTSamusAnimTurnRun_joint18[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1230, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1052, -225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 780, -200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 651, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 931, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 980, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 961, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 969, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 975, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 382, -391,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 324, 298,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 597, 249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1161, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1230, 68,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTSamusAnimTurnRun_joint20[142] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1641, -181, 1666, 17, -1382, 100,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1643, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1459, 3, -1281, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1647, 205, -1526, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1870, 56, 1406, -18, -1522, -194,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1860, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1760, -41, -1916, -319,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 1808, -5, -2202, 12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1880, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1842, 10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1800, -8, -2185, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 1813, 20, -2146, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1829, -126, 1880, 143, -2141, 125,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1268, -36, -1489, 298,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2128, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2012, -163,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1631, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1488, 168, -1298, 192,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1597, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1104, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1633, 3, -1258, -115,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1660, 6, -1366, -11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1604, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1618, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1641, 23, 1666, 6, -1382, -16,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTSamusAnimTurnRun_joint21[164] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1603, 31, -1609, 7, 1428, 78,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1517, 104,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1778, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1507, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1779, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1392, -72, 1852, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1717, -372, -1661, -170, 1455, -410,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1033, -364, -1732, -11, 1030, -227,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1682, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 989, -28, 999, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1029, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1024, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1702, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1751, -18,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1033, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1165, 200,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1770, 86, 1022, -54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 673, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1577, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1470, 165, -1537, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1496, -141, -1520, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1188, -58, -1409, -5, 766, 40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1583, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 716, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1379, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1496, 90,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1601, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1604, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1615, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 673, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 959, 377,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1603, 1, -1609, 6, 1428, 469,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTSamusAnimTurnRun_joint23[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 230, 13,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 244, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 660,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1321, 263,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 527, -385,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 549, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 560, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 590, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 958, 226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1043, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 501, -206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 393, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 679, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 725, -224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 230, -494,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTSamusAnimTurnRun_joint24[158] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1626, 82, -1690, -60, -1706, 351,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1699, 33, -1034, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1543, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1725, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1858, 1, -1684, -93, -1055, -508,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1722, 185, -1887, 111, -2051, -418,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1487, 128, -1462, 200, -1892, 82,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1901, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1466, 17, -1485, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1601, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1483, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1542, -16,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1902, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1745, -76,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1565, -52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1656, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1893, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1587, 60, -1877, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1479, 153, -1718, -180, -1612, 252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1279, -123, -2017, -106, -1372, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1726, -236, -1931, 86, -1510, -72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1593, -143,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1695, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1752, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1624, 18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1796, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1626, -1, -1690, 5, -1706, 89,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
