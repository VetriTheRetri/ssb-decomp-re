/* AnimJoint data for relocData file 1870 (FTYoshiAnimTech) */
/* 1792 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimTech_joint1[58];
extern u16 dFTYoshiAnimTech_joint2[16];
extern u16 dFTYoshiAnimTech_joint3[28];
extern u16 dFTYoshiAnimTech_joint6[28];
extern u16 dFTYoshiAnimTech_joint7[96];
extern u16 dFTYoshiAnimTech_joint8[40];
extern u16 dFTYoshiAnimTech_joint10[16];
extern u16 dFTYoshiAnimTech_joint11[96];
extern u16 dFTYoshiAnimTech_joint12[40];
extern u16 dFTYoshiAnimTech_joint13[16];
extern u16 dFTYoshiAnimTech_joint14[10];
extern u16 dFTYoshiAnimTech_joint15[30];
extern u16 dFTYoshiAnimTech_joint17[36];
extern u16 dFTYoshiAnimTech_joint18[58];
extern u16 dFTYoshiAnimTech_joint20[52];
extern u16 dFTYoshiAnimTech_joint22[50];
extern u16 dFTYoshiAnimTech_joint23[58];
extern u16 dFTYoshiAnimTech_joint25[52];
extern u16 dFTYoshiAnimTech_joint26[64];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTYoshiAnimTech_joints[] = {
	(AObjEvent32 *)dFTYoshiAnimTech_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTYoshiAnimTech_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTYoshiAnimTech_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTYoshiAnimTech_joint6, /* [3] joint 6 */
	NULL, /* [4] NULL */
	NULL, /* [5] NULL */
	(AObjEvent32 *)dFTYoshiAnimTech_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTYoshiAnimTech_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTYoshiAnimTech_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTYoshiAnimTech_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTYoshiAnimTech_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTYoshiAnimTech_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTYoshiAnimTech_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTYoshiAnimTech_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTYoshiAnimTech_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTYoshiAnimTech_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTYoshiAnimTech_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTYoshiAnimTech_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTYoshiAnimTech_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTYoshiAnimTech_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTYoshiAnimTech_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTYoshiAnimTech_joint1[58] = {
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAY), 721, 68, 850, -315,
	ftAnimSetValBlock(FT_ANIM_TRAZ), -356,
	ftAnimSetValRateT(FT_ANIM_TRAY, 6), 923, 635,
	ftAnimSetValT(FT_ANIM_TRAZ, 26), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 893,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 474, -110,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 5), 1440,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -114, -21,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 8), 480,
	ftAnimBlock(0, 7),
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 0, 20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 7), 672, 371,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTYoshiAnimTech_joint2[16] = {
	ftAnimSetVal(FT_ANIM_ROTY), 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 30, 20,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 19), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -89, -17,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTYoshiAnimTech_joint3[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -183, -84,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -355, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 353, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 165, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 136, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 16, -35,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTYoshiAnimTech_joint6[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -3, -13,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -36, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 62, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 81, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 190, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 78, -16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTYoshiAnimTech_joint7[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1714, -35, -1419, 2, 1162, 67,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), -1887, -52, -1429, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1196, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1199, 41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1417, -107,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1946, -63, -1415, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1169, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -2020, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1919, 52, 1266, -73,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -2005, 2, 1507, 51,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1241, -80,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1474, 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1992, 17, 1544, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -1759, 38, 1331, -62,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1471, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1471, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1722, 37, -1475, -4, 1264, -67,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimTech_joint8[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -506, -123,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -645, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -650, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1073, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1009, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -969, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -931, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -832, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -772, 59,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTYoshiAnimTech_joint10[16] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -62, -188, -632,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimTech_joint11[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1512, 38, -1778, -3, 1163, 77,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), -1336, 52, -1778, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1284, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1335, 52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1413, -112,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1277, 64, -1792, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -2041, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1204, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1305, -50, 1260, -72,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1208, 1, 1514, 57,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1972, 79,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1658, 18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1216, -18, 1558, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -1688, -70, 1450, -52,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1638, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1565, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1748, -59, -1511, 54, 1395, -54,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimTech_joint12[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -507, -139,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -792, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -887, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1084, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1019, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -992, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -973, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1058, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1009, 49,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTYoshiAnimTech_joint13[16] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -54, -60, -668,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTYoshiAnimTech_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -536, -893, 0, 0, 156, 0,
	ftAnimBlock(0, 26),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimTech_joint15[30] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 198, 0, 0,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 4), 218,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 7), -90,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -324, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -380, 0, 4,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -190, 0, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTYoshiAnimTech_joint17[36] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 158, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 163, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -41, 0, 1,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -118, 0, 2,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -248, 0, 3,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -353, 0, 4,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -153, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimTech_joint18[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1554, -3, 1645, 0, 2258, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 25), -1614, 0, 1605, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 2193, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2074, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1558, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1407, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1475, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1374, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1196, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1225, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1465, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1614, 0, 1603, -1, 1579, 114,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimTech_joint20[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 313, 76,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 567, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 620, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 624, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 582, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 263, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 839, 187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 926, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 645, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 511, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 301, -209,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTYoshiAnimTech_joint22[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -30, -3, -1557, 0, 1997, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 25), 2, 2, -1544, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1605, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1421, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1659, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1534, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1203, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1193, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1257, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 6, 3, -1526, 17, 1329, 72,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimTech_joint23[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1652, 3, 1578, 0, 2259, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 25), -1610, 1, 1607, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 2196, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2076, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1561, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1413, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1475, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1374, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1196, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1220, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1357, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1608, 2, 1608, 0, 1437, 80,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimTech_joint25[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 333, 59,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 467, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 483, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 576, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 392, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 355, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 552, 242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 839, 187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 926, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 692, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 576, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 405, -170,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTYoshiAnimTech_joint26[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1618, 1, 26, -1, 379, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 25), 1607, 1, -67, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 217, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 164, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -273, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -248, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 50, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -74, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -402, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -405, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -306, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1609, 1, -87, -19, -239, 67,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
