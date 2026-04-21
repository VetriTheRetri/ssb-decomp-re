/* AnimJoint data for relocData file 714 (FTFoxAnimThrown3) */
/* 1296 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimThrown3_joint2[14];
extern u16 dFTFoxAnimThrown3_joint3[10];
extern u16 dFTFoxAnimThrown3_joint5[12];
extern u16 dFTFoxAnimThrown3_joint6[44];
extern u16 dFTFoxAnimThrown3_joint7[16];
extern u16 dFTFoxAnimThrown3_joint8[10];
extern u16 dFTFoxAnimThrown3_joint9[16];
extern u16 dFTFoxAnimThrown3_joint11[10];
extern u16 dFTFoxAnimThrown3_joint12[70];
extern u16 dFTFoxAnimThrown3_joint13[30];
extern u16 dFTFoxAnimThrown3_joint14[10];
extern u16 dFTFoxAnimThrown3_joint16[10];
extern u16 dFTFoxAnimThrown3_joint17[52];
extern u16 dFTFoxAnimThrown3_joint19[38];
extern u16 dFTFoxAnimThrown3_joint21[58];
extern u16 dFTFoxAnimThrown3_joint22[52];
extern u16 dFTFoxAnimThrown3_joint24[40];
extern u16 dFTFoxAnimThrown3_joint25[56];
extern u16 dFTFoxAnimThrown3_joint26[22];
extern u16 dFTFoxAnimThrown3_joint27[24];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTFoxAnimThrown3_joints[] = {
	0x00000000, /* [0] NULL */
	(u32)dFTFoxAnimThrown3_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimThrown3_joint3, /* [2] joint 3 */
	(u32)dFTFoxAnimThrown3_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTFoxAnimThrown3_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimThrown3_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimThrown3_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimThrown3_joint9, /* [8] joint 9 */
	(u32)dFTFoxAnimThrown3_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTFoxAnimThrown3_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimThrown3_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimThrown3_joint14, /* [13] joint 14 */
	(u32)dFTFoxAnimThrown3_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTFoxAnimThrown3_joint17, /* [16] joint 17 */
	(u32)dFTFoxAnimThrown3_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTFoxAnimThrown3_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTFoxAnimThrown3_joint22, /* [21] joint 22 */
	(u32)dFTFoxAnimThrown3_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTFoxAnimThrown3_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimThrown3_joint26, /* [25] joint 26 */
	(u32)dFTFoxAnimThrown3_joint27, /* [26] joint 27 */
};

/* Joint 2 */
u16 dFTFoxAnimThrown3_joint2[14] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), -240, -240,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, -360,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, -360,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTFoxAnimThrown3_joint3[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 178, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimThrown3_joint5[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 178,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimThrown3_joint6[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1756, 14, -1390, 0, -1190, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1636, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1380, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1468, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1468, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1638, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1636, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1561, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1492, 68, -1398, -17, -1793, -154,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimThrown3_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTFoxAnimThrown3_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTFoxAnimThrown3_joint9[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -357,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 336, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), -357,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), -178,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTFoxAnimThrown3_joint11[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimThrown3_joint12[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 147, 99, 218, 10, 418, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 247, 472, 228, 183, 587, 454,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1093, 716, 585, 6, 1327, 780,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1681, 243, 240, -228, 2148, 358,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1580, -75, 128, -118, 2043, -79,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -87, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1428, -58, 2234, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1382, 18, 2307, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1465, 61, 2143, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1505, 39, -74, 12, 2012, -131,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimThrown3_joint13[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -7, -455,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -462, -423,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -855, 227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 427,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTFoxAnimThrown3_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 272, 0, 0,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimThrown3_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTFoxAnimThrown3_joint17[52] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1635, -1, 1604, 4, -1373, -124,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1644, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1600, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1952, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1934, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1844, 203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1526, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1639, -8, -1445, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1662, -64, -1699, -236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1767, -105, 1602, 2, -1917, -217,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTFoxAnimThrown3_joint19[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 227, 167,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 574, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 414, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 265, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 296, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -148,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 5,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimThrown3_joint21[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1561, 0, -1616, 0, 1497, -78,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -1571, -13, -1624, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1386, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1482, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1562, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1443, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1471, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1579, 5, -1620, -7, 1493, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1560, 57, -1640, -36, 1713, 287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1463, 96, -1693, -52, 2067, 354,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTFoxAnimThrown3_joint22[52] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1581, 1, -1605, -3, -1373, -124,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1573, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1601, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1952, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1934, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1844, 203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1526, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1577, 8, -1445, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1555, 63, -1702, -236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1451, 104, -1603, -1, -1917, -214,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTFoxAnimThrown3_joint24[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 227, 167,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 574, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 414, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 265, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 296, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTFoxAnimThrown3_joint25[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -64, 0, 14, 0, -110, -78,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -66, 20, 11, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -221, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -124, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -44, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -164, -45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 102, 287,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -50, -1, 18, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -70, -50, -4, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -151, -81, -64, -59, 459, 356,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimThrown3_joint26[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -178, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -126, -96,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -431, -56,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 560, -401,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -747, 0, 0,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTFoxAnimThrown3_joint27[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 64, -450,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 0, -34,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), 491,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -343, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
