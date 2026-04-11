/* AnimJoint data for relocData file 2091 (FTPikachuAnimGettingThundered) */
/* 1728 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimGettingThundered_joint1[32];
extern u16 dFTPikachuAnimGettingThundered_joint2[40];
extern u16 dFTPikachuAnimGettingThundered_joint3[20];
extern u16 dFTPikachuAnimGettingThundered_joint5[24];
extern u16 dFTPikachuAnimGettingThundered_joint6[62];
extern u16 dFTPikachuAnimGettingThundered_joint7[28];
extern u16 dFTPikachuAnimGettingThundered_joint8[40];
extern u16 dFTPikachuAnimGettingThundered_joint9[14];
extern u16 dFTPikachuAnimGettingThundered_joint10[36];
extern u16 dFTPikachuAnimGettingThundered_joint11[40];
extern u16 dFTPikachuAnimGettingThundered_joint13[24];
extern u16 dFTPikachuAnimGettingThundered_joint14[64];
extern u16 dFTPikachuAnimGettingThundered_joint16[16];
extern u16 dFTPikachuAnimGettingThundered_joint17[62];
extern u16 dFTPikachuAnimGettingThundered_joint19[28];
extern u16 dFTPikachuAnimGettingThundered_joint21[72];
extern u16 dFTPikachuAnimGettingThundered_joint22[62];
extern u16 dFTPikachuAnimGettingThundered_joint24[36];
extern u16 dFTPikachuAnimGettingThundered_joint25[112];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTPikachuAnimGettingThundered_joints[] = {
	(u32)dFTPikachuAnimGettingThundered_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimGettingThundered_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimGettingThundered_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimGettingThundered_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPikachuAnimGettingThundered_joint6, /* [5] joint 6 */
	(u32)dFTPikachuAnimGettingThundered_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimGettingThundered_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimGettingThundered_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimGettingThundered_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimGettingThundered_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimGettingThundered_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPikachuAnimGettingThundered_joint14, /* [13] joint 14 */
	(u32)dFTPikachuAnimGettingThundered_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPikachuAnimGettingThundered_joint17, /* [16] joint 17 */
	(u32)dFTPikachuAnimGettingThundered_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPikachuAnimGettingThundered_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPikachuAnimGettingThundered_joint22, /* [21] joint 22 */
	(u32)dFTPikachuAnimGettingThundered_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTPikachuAnimGettingThundered_joint25, /* [24] joint 25 */
	0xFFFF0196, /* [25] END */
};

/* Joint 1 */
u16 dFTPikachuAnimGettingThundered_joint1[32] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -26, 33, -28,
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 108,
	ftAnimSetValRate(FT_ANIM_TRAY), 802, -240,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 6), 108,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 2), 597,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 2), 802,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 2), 597,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 2), 108, -142,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 2), 802,
	ftAnimLoop(0x6800, -62),
};

/* Joint 2 */
u16 dFTPikachuAnimGettingThundered_joint2[40] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 6, 0, 245, -23, 43, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 6, 127, 41,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 6, 43,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 2), 245,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 6, 127, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 6, 20, 43, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 2), 245,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimGettingThundered_joint3[20] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRate(FT_ANIM_ROTX), -199, -10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), -199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -199, -26,
	ftAnimLoop(0x6800, -36),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPikachuAnimGettingThundered_joint5[24] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 518, 78, 175,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 518, 78, 175,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 518, -41, 78, -12, 175, 1,
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimGettingThundered_joint6[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1167, 210, -318, -36, 2120, -225,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -350, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1516, -9, 1709, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1359, -174, 1918, 205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1167, 0, 2120, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1359, 174, 1918, -205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1516, 1, -356, 1, 1709, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1362, -174, -347, 19, 1917, 205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1167, -195, -318, 29, 2120, 202,
	ftAnimLoop(0x6800, -120),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimGettingThundered_joint7[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -87, 77,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -87, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -87, -77,
	ftAnimLoop(0x6800, -54),
};

/* Joint 8 */
u16 dFTPikachuAnimGettingThundered_joint8[40] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -81, 28, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 108, 1, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), -81,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 108, 1, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), -81,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimGettingThundered_joint9[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	_FT_ANIM_CMD(11, 0, 1), 24,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimGettingThundered_joint10[36] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 67, 4, -177, 0, 306, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 88, -179, 309,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 67, -177, 306,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 88, -179, 309,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 67, -34, -177, 37, 306, -10,
	ftAnimLoop(0x6800, -70),
};

/* Joint 11 */
u16 dFTPikachuAnimGettingThundered_joint11[40] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 59, 30, 211, 0, -316, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 213, 213, -320,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 211, -316,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), 59,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 213, 213, -320,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 211, -38, -316, 5,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), 59,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPikachuAnimGettingThundered_joint13[24] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -519, 43, 183,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -519, 43, 183,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -519, 25, 43, -12, 183, -9,
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimGettingThundered_joint14[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 646, -274, 1224, 32, 475, -163,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1253, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 205, 11, 199, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 394, 220, 325, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 646, 0, 1224, 0, 475, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1254, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 394, -220, 325, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 206, -1, 203, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 390, 220, 323, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 646, 256, 1224, -29, 475, 151,
	ftAnimLoop(0x6800, -124),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPikachuAnimGettingThundered_joint16[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 10,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPikachuAnimGettingThundered_joint17[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1877, 44, 1937, 35, 1087, 72,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1781, -110, 2014, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1284, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1292, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1648, 1, 1996, -1, 1358, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1875, 58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1968, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1293, -33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1185, -102,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1902, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1877, -25, 1937, -30, 1087, -98,
	ftAnimLoop(0x6800, -120),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPikachuAnimGettingThundered_joint19[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 625, 49,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 523, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 336, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 653, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 638, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 625, -13,
	ftAnimLoop(0x6800, -54),
};

/* Joint 21 */
u16 dFTPikachuAnimGettingThundered_joint21[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -325, -144, 282, -67, 355, -259,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -527, 29, -116, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 214, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 67, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 264, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -410, 132, 27, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -263, 0, 245, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -410, -132, 173, -95, 30, -177,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -460, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 73, 16, -110, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 206, 104, 118, 232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -325, 135, 282, 75, 355, 236,
	ftAnimLoop(0x6800, -140),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimGettingThundered_joint22[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1766, -94, 1251, 48, 1179, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1905, 47, 1341, -18, 955, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1766, 144, 1262, -49, 1139, 191,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1299, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1615, 0, 1338, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1768, -146, 1140, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1908, -38, 962, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1846, 70, 1064, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1766, 79, 1251, -48, 1179, 114,
	ftAnimLoop(0x6800, -120),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTPikachuAnimGettingThundered_joint24[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 769, 108,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 949, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 821, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 673, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 821, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 949, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 848, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 769, -79,
	ftAnimLoop(0x6800, -70),
};

/* Joint 25 */
u16 dFTPikachuAnimGettingThundered_joint25[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1221, -30, -1377, -46, 1880, -147,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1480, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1253, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1733, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1526, -70,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1685, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1470, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1429, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1578, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1510, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1734, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1221, 31, -1377, 52, 1880, 145,
	ftAnimLoop(0x6800, -116),
	ftAnimEnd(),
	0x48E0, 0xFFFF, 0xFF4C, 0xFE9E, 0x5500, 0x1000, 0x1000, 0x280E, 0x001F, 0xFFF0, 0x0022, 0x0000, 0x0035, 0x0000, 0x1200, 0x1666, 0x1A01, 0x0004, 0x1666, 0x380F, 0x0002, 0xFF26, 0x0023, 0x0036, 0x380F, 0x0002, 0x001F, 0x0022, 0x0035, 0x1A01, 0x0004, 0x1666, 0x380F, 0x0002, 0xFF26, 0x0023, 0x0036, 0x200F, 0x0002, 0x001F, 0x0001, 0x0022, 0x0007, 0x0035, 0x0010, 0x6800, 0xFFA4, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
