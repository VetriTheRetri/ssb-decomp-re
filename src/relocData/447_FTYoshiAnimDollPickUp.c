/* AnimJoint data for relocData file 447 (FTYoshiAnimDollPickUp) */
/* 2144 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimDollPickUp_joint1[10];
extern u16 dFTYoshiAnimDollPickUp_joint2[46];
extern u16 dFTYoshiAnimDollPickUp_joint3[36];
extern u16 dFTYoshiAnimDollPickUp_joint4[14];
extern u16 dFTYoshiAnimDollPickUp_joint5[18];
extern u16 dFTYoshiAnimDollPickUp_joint7[10];
extern u16 dFTYoshiAnimDollPickUp_joint8[160];
extern u16 dFTYoshiAnimDollPickUp_joint9[102];
extern u16 dFTYoshiAnimDollPickUp_joint11[10];
extern u16 dFTYoshiAnimDollPickUp_joint12[104];
extern u16 dFTYoshiAnimDollPickUp_joint13[20];
extern u16 dFTYoshiAnimDollPickUp_joint15[10];
extern u16 dFTYoshiAnimDollPickUp_joint16[42];
extern u16 dFTYoshiAnimDollPickUp_joint18[40];
extern u16 dFTYoshiAnimDollPickUp_joint19[108];
extern u16 dFTYoshiAnimDollPickUp_joint21[54];
extern u16 dFTYoshiAnimDollPickUp_joint23[58];
extern u16 dFTYoshiAnimDollPickUp_joint24[96];
extern u16 dFTYoshiAnimDollPickUp_joint26[80];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTYoshiAnimDollPickUp_joints[] = {
	(u32)dFTYoshiAnimDollPickUp_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimDollPickUp_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimDollPickUp_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimDollPickUp_joint4, /* [3] joint 4 */
	(u32)dFTYoshiAnimDollPickUp_joint5, /* [4] joint 5 */
	(u32)dFTYoshiAnimDollPickUp_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTYoshiAnimDollPickUp_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimDollPickUp_joint9, /* [8] joint 9 */
	(u32)dFTYoshiAnimDollPickUp_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTYoshiAnimDollPickUp_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimDollPickUp_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimDollPickUp_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTYoshiAnimDollPickUp_joint16, /* [15] joint 16 */
	(u32)dFTYoshiAnimDollPickUp_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTYoshiAnimDollPickUp_joint19, /* [18] joint 19 */
	(u32)dFTYoshiAnimDollPickUp_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTYoshiAnimDollPickUp_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTYoshiAnimDollPickUp_joint24, /* [23] joint 24 */
	(u32)dFTYoshiAnimDollPickUp_joint26, /* [24] joint 26 */
	0x00000000, /* [25] NULL */
	0xFFFF0200, /* [26] END */
};

/* Joint 1 */
u16 dFTYoshiAnimDollPickUp_joint1[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 100),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTYoshiAnimDollPickUp_joint2[46] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 0,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 404, 668, 890,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 5), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 404, 668, 890,
	ftAnimSetValRateT(FT_ANIM_TRAY, 95), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 55), -315, -7, 1049, 4, 33, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), -212, 5, 1051, 4, 81, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -111, -2, 1218, -3, 188, 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTYoshiAnimDollPickUp_joint3[36] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -655, 0, 0, 68, -992, -305,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 68, -18, -992, -1, -305, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -655, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 95), -655, 0, 0, 0, 0, 0, -156, -12, -1006, 0, -275, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTYoshiAnimDollPickUp_joint4[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 568,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 100), 568, 3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTYoshiAnimDollPickUp_joint5[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 67, -611, 841,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 600, 329,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 100), 112, 0, -909, 2, 487, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTYoshiAnimDollPickUp_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 47, 120,
	ftAnimBlock(0, 100),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimDollPickUp_joint8[160] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1700, 0, 1676, 0, 1815, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 43), 1697, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 44), -1689, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 1793, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1776, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 1719, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1698, -5, 1710, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1868, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), 1701, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1701, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), -1865, -33,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1865, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 1927, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1945, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1865, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1715, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1864, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1897, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1866, 48,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1890, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1754, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1868, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 1761, -5,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1816, 26, 1695, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -1808, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1649, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1573, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1322, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1298, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1842, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1758, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1902, 12,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1882, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1966, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2077, -110, 1913, 10, 1927, 84,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTYoshiAnimDollPickUp_joint9[102] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -684, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 28), -264, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -222, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -262, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -335, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -660, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -628, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -190, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -8, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -203, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -274, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -168, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimDollPickUp_joint11[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 172, 0, 0,
	ftAnimBlock(0, 100),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimDollPickUp_joint12[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1398, 0, 1223, 0, 1621, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 55), -1379, -9, 1232, -5, 1649, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1387, -4, 1229, -2, 1638, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 1425, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), -1363, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 1844, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1868, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 1580, -44,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1419, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 1381, 16,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1387, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -1420, 33,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1538, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1668, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1388, 31, 1730, 59,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1286, 49, 1886, 48,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1394, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1404, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1228, 57, 1407, 2, 1933, 47,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTYoshiAnimDollPickUp_joint13[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -8, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 61), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 37), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimDollPickUp_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 172, 0, 0,
	ftAnimBlock(0, 100),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTYoshiAnimDollPickUp_joint16[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 3, 0, 0, 0, 215, -240,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 150), 0, 0, 215, -2, -240, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -26, 167, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 65), 3, -2, 0, -2, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -234, -51, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 3, 33, 0, 2, 0, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTYoshiAnimDollPickUp_joint18[40] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 47, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ), -342, -87, 15, -263,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 150), 0, 0, 47, 0, -263, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -209, 342, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 85), -342, -1, -87, -4, 15, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -342, 25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -87, 15,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTYoshiAnimDollPickUp_joint19[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 35, 0, 65, 0, 659, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 61), -9, -2, 63, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 55), 677, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 675, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), 839, -9,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -13, -5, 58, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -154, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), -45, 2,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 827, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 541, -122,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -134, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -73, -3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 411, -104,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 211, 36,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -43, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -58, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 269, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 589, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 649, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 811, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -76, -3, -61, -2, 860, 48,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTYoshiAnimDollPickUp_joint21[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 75), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 307, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 326, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 300, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 260, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTYoshiAnimDollPickUp_joint23[58] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 1436, 0, -188, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), 549,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 99), -190, 0, 555, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 53), 1408, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1416, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), 1241, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1193, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), 1264, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1314, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 1420, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1368, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1107, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1026, -81, -190, 0, 555, 0,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTYoshiAnimDollPickUp_joint24[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 65, -1, 202, 0, 567, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 56), 358, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 61), 201, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 50), 604, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 602, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), 680, 13,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 359, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), 340, -20,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 201, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), 165, 5,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 691, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), 604, 26,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 320, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 99, -19,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 169, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 121, -1,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 627, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 679, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 79, -19, 120, 0, 704, 24,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTYoshiAnimDollPickUp_joint26[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 31), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 47), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 0,
	ftAnimEnd(),
	0x0000, 0x200E, 0x0638, 0x0000, 0xFF8E, 0x0000, 0x0346, 0x0000, 0x280D, 0x0063, 0xFF6E, 0x0000, 0x0344, 0x0000, 0x2003, 0x0038, 0x050D, 0x0000, 0x2003, 0x0001, 0x0510, 0x0000, 0x2003, 0x0018, 0x04D0, 0x0016, 0x2003, 0x0001, 0x04E8, 0x0017, 0x2003, 0x0011, 0x0573, 0x0005, 0x200F, 0x0001, 0x057D, 0x0009, 0xFF6F, 0x0000, 0x0344, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
