/* AnimJoint data for relocData file 1838 (FTYoshiAnimDamaged1) */
/* 1776 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimDamaged1_joint1[14];
extern u16 dFTYoshiAnimDamaged1_joint2[72];
extern u16 dFTYoshiAnimDamaged1_joint3[72];
extern u16 dFTYoshiAnimDamaged1_joint4[98];
extern u16 dFTYoshiAnimDamaged1_joint6[22];
extern u16 dFTYoshiAnimDamaged1_joint7[40];
extern u16 dFTYoshiAnimDamaged1_joint10[24];
extern u16 dFTYoshiAnimDamaged1_joint11[84];
extern u16 dFTYoshiAnimDamaged1_joint12[40];
extern u16 dFTYoshiAnimDamaged1_joint13[10];
extern u16 dFTYoshiAnimDamaged1_joint14[12];
extern u16 dFTYoshiAnimDamaged1_joint15[58];
extern u16 dFTYoshiAnimDamaged1_joint17[46];
extern u16 dFTYoshiAnimDamaged1_joint18[42];
extern u16 dFTYoshiAnimDamaged1_joint20[28];
extern u16 dFTYoshiAnimDamaged1_joint22[46];
extern u16 dFTYoshiAnimDamaged1_joint23[58];
extern u16 dFTYoshiAnimDamaged1_joint25[28];
extern u16 dFTYoshiAnimDamaged1_joint26[42];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTYoshiAnimDamaged1_joints[] = {
	(AObjEvent32 *)dFTYoshiAnimDamaged1_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTYoshiAnimDamaged1_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTYoshiAnimDamaged1_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTYoshiAnimDamaged1_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTYoshiAnimDamaged1_joint6, /* [4] joint 6 */
	NULL, /* [5] NULL */
	(AObjEvent32 *)dFTYoshiAnimDamaged1_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTYoshiAnimDamaged1_joint10, /* [7] joint 10 */
	NULL, /* [8] NULL */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTYoshiAnimDamaged1_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTYoshiAnimDamaged1_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTYoshiAnimDamaged1_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTYoshiAnimDamaged1_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTYoshiAnimDamaged1_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTYoshiAnimDamaged1_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTYoshiAnimDamaged1_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTYoshiAnimDamaged1_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTYoshiAnimDamaged1_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTYoshiAnimDamaged1_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTYoshiAnimDamaged1_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTYoshiAnimDamaged1_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTYoshiAnimDamaged1_joint1[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 672, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTYoshiAnimDamaged1_joint2[72] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -228, -54, -132, -9, 9, 0, -23, 40, -71, -267,
	ftAnimSetValBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 6), -54, -161,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX, 7), -304, 13, -142, 8, 7, -10,
	ftAnimSetValT(FT_ANIM_ROTZ, 12), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), -133, -53,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), -146, 29,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -86, 175, -17, 430,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX, 2), -175, 149, -103, 14, 1, -12,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 3), -89,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAZ, 3), 0, 1, 0, 0, 20, -135,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 0, 511,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 30, 48,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTYoshiAnimDamaged1_joint3[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 91, -53, 58, -5, 20, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 32, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -6, -5, 59, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -18, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 64, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 9, -51, 131, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 133, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -18, 13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 42, 136,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 94, -90, 77, -61,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 21, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, -12, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 47, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 16, 17,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTYoshiAnimDamaged1_joint4[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4, 35, -213, -64, 16, -90, 4096, -2863, 4096, 307, 4096, -1227,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAZ, 4), 337, 25, -381, 12, 2635, 331, 3470, 533,
	ftAnimSetValRateT(FT_ANIM_SCAY, 5), 4096, -342,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -279, -186,
	ftAnimSetValRateBlock(FT_ANIM_ROTZ), -328, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -204, 102,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -343, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 234, -114,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 1), 4114, 719, 4096, 253,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 4), 4096, -749, 4096, -316,
	ftAnimSetValRateBlockT(FT_ANIM_SCAY, 1), 3401, -575,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -9, 69,
	ftAnimSetValRateT(FT_ANIM_SCAY, 3), 4096, 1661,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -16, 66,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 0, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 0, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 84, -12,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTYoshiAnimDamaged1_joint6[22] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 268, 103,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 496, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 464, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 0, -209,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 5), 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimDamaged1_joint7[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1888, 24, -1389, -14, 1392, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1966, -70, -1391, -77, 1464, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2033, -28, -1494, -96, 1595, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1794, 51, -1492, 45, 1424, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1742, 51, -1446, 46, 1256, -167,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTYoshiAnimDamaged1_joint10[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1110, 96,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -847, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -910, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -866, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -748, 118,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimDamaged1_joint11[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 15, 70, 286, 1, -685, 127,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 387, 204, -296, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 418, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 557, 88,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 572, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 598, 118, -101, 111,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -176, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 27, -94,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 482, -218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 135, -223, -66, 67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -105, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 35, -62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -59, -40,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -56, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -123, -44, -137, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -145, -21, -103, -43, -219, -81,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimDamaged1_joint12[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -996, -62,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1118, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1113, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1189, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -907, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -818, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -958, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -996, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1002, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTYoshiAnimDamaged1_joint13[10] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -21, 227, 37,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTYoshiAnimDamaged1_joint14[12] = {
	ftAnimSetVal(FT_ANIM_ROTX), -536,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -893, 0, 0, 156, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 12), -536,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimDamaged1_joint15[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 93, 88, -115, -57, -21, -83,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -159, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -62, -182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -120, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 6, 91,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 0, 72,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 36, -51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -190, 67,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 29, -31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 0, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 0, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTYoshiAnimDamaged1_joint17[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 122, 52, 0, -125, 0, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 80, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -147, -3, -59, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -76, 44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -38, 9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -208, -36,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 0, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -153, 44, 0, 19,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTYoshiAnimDamaged1_joint18[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1608, -29, -1607, 25, 1668, 59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1687, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1592, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1682, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1642, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1484, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1668, 36, 1578, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1614, 54, -1613, -21, 1604, 26,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimDamaged1_joint20[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 481, -63,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 508, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 580, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 571, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 341, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 261, -79,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTYoshiAnimDamaged1_joint22[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1647, -16, -126, 22, -472, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -4, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1597, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -389, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -387, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -306, 70,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -3, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -29, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1614, 17, -83, -53, -263, 42,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimDamaged1_joint23[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 13, 97, -11, 51, -31, 97,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 217, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 197, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 53, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -253, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 226, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 16, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 99, -73,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 21, -25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -172, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -21, 0, -16, -154, 17,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimDamaged1_joint25[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 421, -81,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 399, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 499, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 642, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 445, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, -66,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTYoshiAnimDamaged1_joint26[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1628, 17, 73, -60, -237, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 1693, 16, 40, 3, -292, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1681, -22, -1, -49, -354, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1623, -19, -78, -15, -271, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1609, -14, -89, -10, -228, 42,
	ftAnimEnd(),
	0x0000, 0x0000,
};
