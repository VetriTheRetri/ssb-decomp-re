/* AnimJoint data for relocData file 785 (FTFoxAnimFireFoxStartAerial) */
/* 1344 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimFireFoxStartAerial_joint1[8];
extern u16 dFTFoxAnimFireFoxStartAerial_joint2[10];
extern u16 dFTFoxAnimFireFoxStartAerial_joint3[14];
extern u16 dFTFoxAnimFireFoxStartAerial_joint5[18];
extern u16 dFTFoxAnimFireFoxStartAerial_joint6[70];
extern u16 dFTFoxAnimFireFoxStartAerial_joint7[30];
extern u16 dFTFoxAnimFireFoxStartAerial_joint8[10];
extern u16 dFTFoxAnimFireFoxStartAerial_joint9[18];
extern u16 dFTFoxAnimFireFoxStartAerial_joint11[10];
extern u16 dFTFoxAnimFireFoxStartAerial_joint12[72];
extern u16 dFTFoxAnimFireFoxStartAerial_joint13[36];
extern u16 dFTFoxAnimFireFoxStartAerial_joint14[16];
extern u16 dFTFoxAnimFireFoxStartAerial_joint16[10];
extern u16 dFTFoxAnimFireFoxStartAerial_joint17[50];
extern u16 dFTFoxAnimFireFoxStartAerial_joint19[36];
extern u16 dFTFoxAnimFireFoxStartAerial_joint21[54];
extern u16 dFTFoxAnimFireFoxStartAerial_joint22[46];
extern u16 dFTFoxAnimFireFoxStartAerial_joint24[24];
extern u16 dFTFoxAnimFireFoxStartAerial_joint25[38];
extern u16 dFTFoxAnimFireFoxStartAerial_joint26[20];
extern u16 dFTFoxAnimFireFoxStartAerial_joint27[28];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTFoxAnimFireFoxStartAerial_joints[] = {
	(u32)dFTFoxAnimFireFoxStartAerial_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimFireFoxStartAerial_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimFireFoxStartAerial_joint3, /* [2] joint 3 */
	(u32)dFTFoxAnimFireFoxStartAerial_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTFoxAnimFireFoxStartAerial_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimFireFoxStartAerial_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimFireFoxStartAerial_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimFireFoxStartAerial_joint9, /* [8] joint 9 */
	(u32)dFTFoxAnimFireFoxStartAerial_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTFoxAnimFireFoxStartAerial_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimFireFoxStartAerial_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimFireFoxStartAerial_joint14, /* [13] joint 14 */
	(u32)dFTFoxAnimFireFoxStartAerial_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTFoxAnimFireFoxStartAerial_joint17, /* [16] joint 17 */
	(u32)dFTFoxAnimFireFoxStartAerial_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTFoxAnimFireFoxStartAerial_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTFoxAnimFireFoxStartAerial_joint22, /* [21] joint 22 */
	(u32)dFTFoxAnimFireFoxStartAerial_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTFoxAnimFireFoxStartAerial_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimFireFoxStartAerial_joint26, /* [25] joint 26 */
	(u32)dFTFoxAnimFireFoxStartAerial_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTFoxAnimFireFoxStartAerial_joint1[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTFoxAnimFireFoxStartAerial_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 960, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTFoxAnimFireFoxStartAerial_joint3[14] = {
	ftAnimSetVal(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 8), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTFoxAnimFireFoxStartAerial_joint5[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 446, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -178, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTFoxAnimFireFoxStartAerial_joint6[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 279, 119, -282, 60, -461, -77,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -654, -136,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -249, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 398, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 649, 193,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 804, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, -61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -267, 825,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -227, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 707, -435, -465, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -66, -700, -336, 265, 874, 465,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -692, -377, 66, 100, 662, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -822, -129, -135, -202, 722, 59,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimFireFoxStartAerial_joint7[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -247, -336,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -673, -316,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -881, -209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1092, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -742, 275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -501, 240,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimFireFoxStartAerial_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTFoxAnimFireFoxStartAerial_joint9[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 178, 268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 336, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 178, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -178, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTFoxAnimFireFoxStartAerial_joint11[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimFireFoxStartAerial_joint12[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1240, 111, 1090, 294, -1624, 253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1128, -159, 1385, 95, -1370, 260,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1558, -598, 1281, -89, -1103, -349,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2325, -426, 1206, 46, -2070, -640,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2412, -6, 1374, -27, -2385, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2338, -337, 1151, -525, -2060, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3088, -100, 322, -615, -2386, -247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2538, 346, -80, -99, -2556, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2394, 144, 124, 204, -2495, 61,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimFireFoxStartAerial_joint13[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -7, -500,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -508, -502,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1012, -255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -890, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1065, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1122, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -797, 301,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -520, 277,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTFoxAnimFireFoxStartAerial_joint14[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 272, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 1072,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTFoxAnimFireFoxStartAerial_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTFoxAnimFireFoxStartAerial_joint17[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1608, 0, -1603, -1, -1589, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -1621, -10, -1568, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1739, -258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2133, -261,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1896, 360,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1643, -65, -1481, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1751, -59, -1483, 4, -1443, 250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1762, -11, -1473, 10, -1395, 47,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTFoxAnimFireFoxStartAerial_joint19[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 5, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 91, 336,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 677, 347,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 787, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 799, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 658, -399,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -326,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTFoxAnimFireFoxStartAerial_joint21[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -16, 7, -64, -10, 610, -53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 58, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -106, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 283, -328,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -99, -221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -159, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -221, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 59, 39, -207, 200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 137, 16, -163, -27, 179, 267,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 92, -44, -162, 1, 327, 147,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTFoxAnimFireFoxStartAerial_joint22[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1600, 2, 1603, 2, -2100, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 1621, 10, 1568, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -2261, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2164, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1643, 64, 1481, -42, -1896, 359,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1750, 60, 1483, -3, -1446, 251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1763, 12, 1474, -9, -1393, 52,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTFoxAnimFireFoxStartAerial_joint24[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 626, 30,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 799, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 658, -397,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -329,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTFoxAnimFireFoxStartAerial_joint25[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1594, -2, 1484, 3, 1516, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 1496, -38, 1473, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1387, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1401, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1424, -3, 1416, -25, 1786, 269,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1489, 65, 1421, 5, 1940, 153,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimFireFoxStartAerial_joint26[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -217, 33,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), 268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 268, 73, 0, -24,
	ftAnimEnd(),
	0x0000,
};

/* Joint 27 */
u16 dFTFoxAnimFireFoxStartAerial_joint27[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 402, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 560, -161, -79, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -564, -112, -47, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 0, 244, 0, 5,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
