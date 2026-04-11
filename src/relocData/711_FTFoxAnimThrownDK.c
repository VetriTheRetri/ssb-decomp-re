/* AnimJoint data for relocData file 711 (FTFoxAnimThrownDK) */
/* 1792 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimThrownDK_joint2[12];
extern u16 dFTFoxAnimThrownDK_joint3[16];
extern u16 dFTFoxAnimThrownDK_joint5[14];
extern u16 dFTFoxAnimThrownDK_joint6[84];
extern u16 dFTFoxAnimThrownDK_joint7[16];
extern u16 dFTFoxAnimThrownDK_joint8[12];
extern u16 dFTFoxAnimThrownDK_joint9[34];
extern u16 dFTFoxAnimThrownDK_joint11[12];
extern u16 dFTFoxAnimThrownDK_joint12[80];
extern u16 dFTFoxAnimThrownDK_joint13[16];
extern u16 dFTFoxAnimThrownDK_joint14[12];
extern u16 dFTFoxAnimThrownDK_joint16[12];
extern u16 dFTFoxAnimThrownDK_joint17[92];
extern u16 dFTFoxAnimThrownDK_joint19[48];
extern u16 dFTFoxAnimThrownDK_joint21[86];
extern u16 dFTFoxAnimThrownDK_joint22[100];
extern u16 dFTFoxAnimThrownDK_joint24[56];
extern u16 dFTFoxAnimThrownDK_joint25[96];
extern u16 dFTFoxAnimThrownDK_joint26[44];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTFoxAnimThrownDK_joints[] = {
	0x00000000, /* [0] NULL */
	(u32)dFTFoxAnimThrownDK_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimThrownDK_joint3, /* [2] joint 3 */
	(u32)dFTFoxAnimThrownDK_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTFoxAnimThrownDK_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimThrownDK_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimThrownDK_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimThrownDK_joint9, /* [8] joint 9 */
	(u32)dFTFoxAnimThrownDK_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTFoxAnimThrownDK_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimThrownDK_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimThrownDK_joint14, /* [13] joint 14 */
	(u32)dFTFoxAnimThrownDK_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTFoxAnimThrownDK_joint17, /* [16] joint 17 */
	(u32)dFTFoxAnimThrownDK_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTFoxAnimThrownDK_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTFoxAnimThrownDK_joint22, /* [21] joint 22 */
	(u32)dFTFoxAnimThrownDK_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTFoxAnimThrownDK_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimThrownDK_joint26, /* [25] joint 26 */
	0xFFFF01B1, /* [26] END */
};

/* Joint 2 */
u16 dFTFoxAnimThrownDK_joint2[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 1608, 0, 0, 240,
	ftAnimBlock(0, 30),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTFoxAnimThrownDK_joint3[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 15), -178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 15), 178,
	ftAnimLoop(0x6800, -30),
};

/* Joint 5 */
u16 dFTFoxAnimThrownDK_joint5[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -357,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), -178, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 15), 357,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 15), -357,
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimThrownDK_joint6[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 22, 0, -1446, -2, 405, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1385, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 309, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -35, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -113, -71,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 50, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1355, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1478, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 363, 44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 66, -12,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 134, 79,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 402, 8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 55, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 24, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1467, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1449, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, -3, -1446, 2, 409, 7,
	ftAnimLoop(0x6800, -164),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimThrownDK_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -7, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), -7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 7,
	ftAnimLoop(0x6800, -30),
};

/* Joint 8 */
u16 dFTFoxAnimThrownDK_joint8[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 30),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTFoxAnimThrownDK_joint9[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 89, 178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 336, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 0, -23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 268,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 240, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), -178,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 15), 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 0, 23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), 178,
	ftAnimLoop(0x6800, -66),
};

/* Joint 11 */
u16 dFTFoxAnimThrownDK_joint11[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 30),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimThrownDK_joint12[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1196, 12, 298, -5, -1871, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 141, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -1214, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 1541, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1552, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 1299, -59,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 151, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 222, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1206, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -1643, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1721, -71,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1861, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 253, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 293, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1245, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1209, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1196, -12, 298, 5, -1871, -9,
	ftAnimLoop(0x6800, -156),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimThrownDK_joint13[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 14 */
u16 dFTFoxAnimThrownDK_joint14[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 272, 0, 0,
	ftAnimBlock(0, 30),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimThrownDK_joint16[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 30),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTFoxAnimThrownDK_joint17[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1621, -3, -1515, -1, -1440, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 1458, -11, -1440, 7, -1892, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1443, -24, -1438, -10, -1865, 56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1300, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1541, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1809, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1838, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1888, 37,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1299, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1610, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1566, 18, -1838, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1516, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1898, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1814, 101,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1479, 66,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1516, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1621, 10, -1515, 0, -1440, 38,
	ftAnimLoop(0x6800, -180),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTFoxAnimThrownDK_joint19[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 442, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 431, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 279, -212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 384, 289,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 584, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 485, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 442, -43,
	ftAnimLoop(0x6800, -94),
};

/* Joint 21 */
u16 dFTFoxAnimThrownDK_joint21[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1771, -7, 1489, 0, 1577, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1730, 42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 1600, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 1548, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1595, 37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 1800, -7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1770, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1524, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1605, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1709, 1,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1787, -65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1486, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1503, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1481, 10,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1721, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1751, 25, 1544, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1771, 20, 1489, 7, 1577, 32,
	ftAnimLoop(0x6800, -168),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTFoxAnimThrownDK_joint22[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1819, 1, 1426, 7, 1333, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1549, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 1631, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1425, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1319, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1825, 1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1574, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1504, -2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1799, -35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1339, 46,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1646, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 1830, -9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1500, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1457, -19,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1395, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1334, -1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1440, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1822, -4, 1430, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1820, -2, 1427, -2, 1335, 1,
	ftAnimLoop(0x6800, -196),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTFoxAnimThrownDK_joint24[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 5, -5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 5, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 426, 294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 594, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 389, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 421, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 216, -194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 5, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -5,
	ftAnimLoop(0x6800, -110),
};

/* Joint 25 */
u16 dFTFoxAnimThrownDK_joint25[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -27, -3, 176, 2, 179, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -84, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 96, -66, 18, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 35, -43, -59, -82,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -74, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -54, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -119, -23, -19, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -103, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -140, 8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -102, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 172, 9,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -64, 44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 155, 45,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -127, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -30, 5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 164, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 178, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -27, 3, 177, 4, 182, 3,
	ftAnimLoop(0x6800, -188),
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimThrownDK_joint26[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -625,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), -999,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), -625,
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
	0x2802, 0x0059, 0x0055, 0x480C, 0x0000, 0x0000, 0x2003, 0x0004, 0x016D, 0x000E, 0x2003, 0x0009, 0x0119, 0xFFCD, 0x2003, 0x0005, 0xFEA1, 0xFFC7, 0x2003, 0x0007, 0xFE69, 0x0024, 0x2003, 0x0005, 0x0059, 0x0055, 0x6800, 0xFFCA, 0x0000, 0x0000,
};
