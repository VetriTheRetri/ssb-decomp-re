/* AnimJoint data for relocData file 1942 (FTYoshiAnimExitPipe) */
/* 1712 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimExitPipe_joint1[14];
extern u16 dFTYoshiAnimExitPipe_joint2[36];
extern u16 dFTYoshiAnimExitPipe_joint3[18];
extern u16 dFTYoshiAnimExitPipe_joint4[36];
extern u16 dFTYoshiAnimExitPipe_joint6[14];
extern u16 dFTYoshiAnimExitPipe_joint7[126];
extern u16 dFTYoshiAnimExitPipe_joint8[18];
extern u16 dFTYoshiAnimExitPipe_joint10[16];
extern u16 dFTYoshiAnimExitPipe_joint11[138];
extern u16 dFTYoshiAnimExitPipe_joint12[30];
extern u16 dFTYoshiAnimExitPipe_joint13[14];
extern u16 dFTYoshiAnimExitPipe_joint14[12];
extern u16 dFTYoshiAnimExitPipe_joint15[18];
extern u16 dFTYoshiAnimExitPipe_joint17[16];
extern u16 dFTYoshiAnimExitPipe_joint18[50];
extern u16 dFTYoshiAnimExitPipe_joint20[38];
extern u16 dFTYoshiAnimExitPipe_joint22[60];
extern u16 dFTYoshiAnimExitPipe_joint23[50];
extern u16 dFTYoshiAnimExitPipe_joint25[44];
extern u16 dFTYoshiAnimExitPipe_joint26[56];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTYoshiAnimExitPipe_joints[] = {
	(u32)dFTYoshiAnimExitPipe_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimExitPipe_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimExitPipe_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimExitPipe_joint4, /* [3] joint 4 */
	(u32)dFTYoshiAnimExitPipe_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTYoshiAnimExitPipe_joint7, /* [6] joint 7 */
	(u32)dFTYoshiAnimExitPipe_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimExitPipe_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTYoshiAnimExitPipe_joint11, /* [10] joint 11 */
	(u32)dFTYoshiAnimExitPipe_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimExitPipe_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimExitPipe_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimExitPipe_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimExitPipe_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTYoshiAnimExitPipe_joint18, /* [17] joint 18 */
	(u32)dFTYoshiAnimExitPipe_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTYoshiAnimExitPipe_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTYoshiAnimExitPipe_joint23, /* [22] joint 23 */
	(u32)dFTYoshiAnimExitPipe_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTYoshiAnimExitPipe_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTYoshiAnimExitPipe_joint1[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal(FT_ANIM_TRAY), -1730,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 40), 672,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTYoshiAnimExitPipe_joint2[36] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 30, 5, 20, 3,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 72), 30,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY, 1), 32,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 72), 20, -4,
	_FT_ANIM_CMD(11, FT_ANIM_TRAZ, 1), 32,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), -357, 36,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 30), -357, 8, 36, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 0, 9, -89, -3,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTYoshiAnimExitPipe_joint3[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 172,
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -250,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 30), -229, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 16, 6,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTYoshiAnimExitPipe_joint4[36] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -14, -1, 415, -23, 413, 10,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 52), -14, 1, 415, 23, 413, -10,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 22,
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 532,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 30), 532, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 78, -15,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 600, 329,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTYoshiAnimExitPipe_joint6[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 455,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 30), 455, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTYoshiAnimExitPipe_joint7[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1477, 33, -1422, 53, 571, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1448, -38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 36), 571, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -1282, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1374, -69,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1210, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1479, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1401, -39,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1282, -82,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1373, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1448, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1398, -41,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1284, 80,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1374, -68,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1448, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1398, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1422, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -1210, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1284, -82,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1374, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1448, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1514, -153,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1288, 77,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1285, -138,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 588, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 739, 311,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1717, -203, -1475, -190, 1256, 516,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimExitPipe_joint8[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 38), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -382,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -764, -764,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTYoshiAnimExitPipe_joint10[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -625,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 30), -625,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -625, 62,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTYoshiAnimExitPipe_joint11[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1736, -34, -1795, -52, 576, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1764, 37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 35), 574, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -1934, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1843, 69,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -2004, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1737, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1813, 41,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1934, 80,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1843, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1764, 37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1813, 40,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1932, -81,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1842, 69,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1766, 37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1816, 40,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -1794,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -2006, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1932, 81,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1843, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1764, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1848, 29,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1928, -77,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1818, 245,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 571, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 627, 188,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1799, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1580, 23, 962, 380,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1753, -172, -1505, 313, 1389, 426,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTYoshiAnimExitPipe_joint12[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -8, 8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 25), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -433, -496,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1002, -569,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTYoshiAnimExitPipe_joint13[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -625,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 30), -625, 15,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTYoshiAnimExitPipe_joint14[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -536, -893, 0, 0, 156, 0,
	_FT_ANIM_CMD(11, 0, 1), 32,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimExitPipe_joint15[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), -190,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 60), 89,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 32,
	ftAnimBlock(0, 28),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), -190, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTYoshiAnimExitPipe_joint17[16] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), -153, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 72), -153, -1,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 32,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimExitPipe_joint18[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -1, 0, 476, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 39), -6, 0, 3, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 514, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 524, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 226, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 176, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -148, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -166, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -123, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5, 0, 5, 1, -3, 119,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimExitPipe_joint20[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 21), 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 402, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 513, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 782, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 728, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 510, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 262, -248,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTYoshiAnimExitPipe_joint22[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 26, 0, 1571, 0, -1678, 60,
	ftAnimSetValRateT(FT_ANIM_ROTX, 35), -7, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 38), 1677, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), -1699, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1729, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -2038, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2064, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -1986, 89,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -7, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 3, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1686, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 6, 2, 1692, 5, -1871, 114,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimExitPipe_joint23[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -2, 0, 518, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 39), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 557, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 560, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 543, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 23, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -39, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -257, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 0, 0, -154, 102,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimExitPipe_joint25[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 6, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 46, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 329, 206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 686, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 733, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 720, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 594, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, -215,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTYoshiAnimExitPipe_joint26[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 32, -1, 1571, 0, -1709, 65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 36), -9, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 38), 1680, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), -1760, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1808, -84,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -1998, 57,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -8, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1691, 8, -1933, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 2, 1697, 6, -1836, 96,
	ftAnimEnd(),
	0x0000, 0x0000,
};
