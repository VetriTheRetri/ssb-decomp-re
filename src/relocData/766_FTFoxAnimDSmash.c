/* AnimJoint data for relocData file 766 (FTFoxAnimDSmash) */
/* 3952 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimDSmash_joint1[24];
extern u16 dFTFoxAnimDSmash_joint2[28];
extern u16 dFTFoxAnimDSmash_joint4[60];
extern u16 dFTFoxAnimDSmash_joint5[234];
extern u16 dFTFoxAnimDSmash_joint6[96];
extern u16 dFTFoxAnimDSmash_joint7[10];
extern u16 dFTFoxAnimDSmash_joint8[58];
extern u16 dFTFoxAnimDSmash_joint10[10];
extern u16 dFTFoxAnimDSmash_joint11[190];
extern u16 dFTFoxAnimDSmash_joint12[80];
extern u16 dFTFoxAnimDSmash_joint13[38];
extern u16 dFTFoxAnimDSmash_joint15[8];
extern u16 dFTFoxAnimDSmash_joint16[228];
extern u16 dFTFoxAnimDSmash_joint18[70];
extern u16 dFTFoxAnimDSmash_joint20[162];
extern u16 dFTFoxAnimDSmash_joint21[230];
extern u16 dFTFoxAnimDSmash_joint23[80];
extern u16 dFTFoxAnimDSmash_joint24[210];
extern u16 dFTFoxAnimDSmash_joint25[46];
extern u16 dFTFoxAnimDSmash_joint26[62];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimDSmash_joints[] = {
	(u32)dFTFoxAnimDSmash_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimDSmash_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimDSmash_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimDSmash_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimDSmash_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimDSmash_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimDSmash_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimDSmash_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimDSmash_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimDSmash_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimDSmash_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimDSmash_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimDSmash_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimDSmash_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimDSmash_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimDSmash_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimDSmash_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimDSmash_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimDSmash_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimDSmash_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimDSmash_joint1[24] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 912,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 48, -20,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), 1440,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), 300,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 14), 300,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 540,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 25), 912,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimDSmash_joint2[28] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -141, -338, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 5, -536, -7, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 0, -3, -536, -29, 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), -297,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), -141, -3555, -3,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTFoxAnimDSmash_joint4[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 309, 156, 81,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 357, 18, 536, 18, 0, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 536, -1, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 446,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 446,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 178, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 178, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 502, -7, 7, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 268,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 469, -9, 14, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 309, 156, 81,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimDSmash_joint5[234] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1718, -44, -1442, 15, 1867, 117,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -1772, 148, -1273, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 2165, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1939, -256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1598, 69, -1249, 31, 1653, -108,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1648, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1371, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1722, 37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1535, -91,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1653, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1597, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1412, -62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1403, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1380, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1339, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1592, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1589, -241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1402, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1535, 456,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2053, -393, -1263, -84, 2315, 544,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2628, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2377, -188, -1507, -216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2429, -58, -1696, -202,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2539, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1912, 489, 2539, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -717, 822, 2732, 75,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -76, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2469, 39, 2691, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -2453, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 2654, 21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1, 72,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 6, -41,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2452, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -2511, -62,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -35, -41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -330, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2679, 35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 3182, 215,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2599, -126,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -3218, -83,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3396, 164,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 3489, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -254, 68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -164, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3282, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3316, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3326, -10, -165, -1, 3475, -13,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimDSmash_joint6[96] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, -76,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -629, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -455, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -566, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -569, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -196, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -196, -415,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -837, -358,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -913, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1180, -311,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1537, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1300, 301,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -689, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -582, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -358, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -886, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -919, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -592, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 33,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTFoxAnimDSmash_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimDSmash_joint8[58] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -113, 136, -72,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -178, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -89, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -89, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 9, 2, -4, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 89,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 15), 89,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 23, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 23, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -113, 136, -72,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTFoxAnimDSmash_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimDSmash_joint11[190] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1475, 45, 1336, -33, -1271, 61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1239, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1360, -109, -1153, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1509, -125, -1350, -187,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1604, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1306, 16, -1528, -69,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1298, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1488, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1704, -85,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1330, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1369, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1621, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1695, 24,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1790, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1801, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1801, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1638, 272, -1619, 462,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1150, 406, 1319, 68, -876, 490,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -639, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -825, 134, 1507, 146,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1280, -195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1611, 99,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1636, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -611, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -849, -30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1441, -113,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1570, -9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1641, 5, -877, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -1119, -53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 1418, -46,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1579, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), -1463, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1451, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1470, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1172, -50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1257, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1375, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1346, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1475, -5, 1336, -10, -1271, -14,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimDSmash_joint12[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -594, -27,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -626, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -538, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -628, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -571, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -137, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -275, -445,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -899, -272,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -820, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -875, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -893, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -804, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), -696, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -648, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -610, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimDSmash_joint13[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 272, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 268, 16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 268, -4, 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 178, -6, -89, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 178, -6, -89, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 20), 0, 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimDSmash_joint15[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, -804, 1608, 60,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimDSmash_joint16[228] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -405, -30, -223, 177, -26, 162,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4095, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -496, -77, 115, -101,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -127, -286,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4095, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 6553, 5324, 5324,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -592, 187, -41, -428,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -120, 285, -548, -205, -742, -395,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -22, 37, -539, 3, -831, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -802, -6,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -37, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -541, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -540, -32,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -807, -4,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -799, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -45, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -169, -11,
	ftAnimBlock(0, 9),
	ftAnimSetValT(FT_ANIM_SCAX, 5), 4095,
	ftAnimSetValT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 30), 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -775, 43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -605, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -189, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -108, 154,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -725, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 68, 54, -550, 45, -909, -65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -58, -63,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -132, 5,
	ftAnimSetValT(FT_ANIM_SCAX, 25), 4095,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -856, 59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -553, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -125, -68,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -254, -16,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -130, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 27, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -238, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -127, -29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -553, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -31, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -6, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -224, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -172, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -206, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -252, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -402, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -405, -3, -223, 1, -26, 4,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimDSmash_joint18[70] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 354, -348,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 453, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 77, -223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 974, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1019, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 693, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 665, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 360, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, -6,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTFoxAnimDSmash_joint20[162] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1561, 2, -1734, 32, 1552, 173,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1701, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1548, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1881, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1975, -231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1418, -350,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1675, 30, 1273, 85,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1741, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1552, -16, 1588, 220,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -1537, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1715, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1648, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1670, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1657, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1664, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1630, -75,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1712, 45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1576, -9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1494, -105,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1270, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1555, 17, -1608, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1598, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -1455, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1461, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1425, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1649, 3, 1286, 28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1502, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -1565, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1636, -52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1735, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1444, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1562, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1494, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1549, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1561, 0, -1734, 1, 1552, 2,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimDSmash_joint21[230] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1253, -73, 1470, 130, -1473, 34,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4095, 4096, 4095,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1533, -61,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4095, 4096, 4095,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1625, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1326, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1621, -250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1827, 18, -1563, 26,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 6553, 5324, 5324,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1583, 239, 1468, -313, -1480, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1347, 350, 997, -232, -1394, 332,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -881, 254, 1004, 34, -816, 300,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1145, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -837, 31, -793, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -811, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -818, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -855, -12,
	ftAnimBlock(0, 2),
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 5), 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAY, 30), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -875, -77, 1145, -48, -840, -100,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1095, 248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1010, -423, -1012, -498,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1722, -300, -1838, -483,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1610, 126, 1545, 309, -1980, -133,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1817, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1468, 117, -2104, -47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1741, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1597, -25,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 25), 4095, 4095,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1833, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1581, -21,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1763, -35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1846, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1614, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1295, 19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1564, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1471, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1805, 40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -1478, 8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1279, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -1253, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1253, 0, 1470, 0, -1473, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTFoxAnimDSmash_joint23[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 332, -326,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 484, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 180, -242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 255, 494,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 994, 461,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1100, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1032, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 870, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 829, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 341, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, -9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimDSmash_joint24[210] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 16, -72, -102, 19, -226, 314,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 127, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -25, 53, 387, 204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 50, -76, 496, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -177, -133, 27, -346,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -216, 22, 72, -27, -195, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -47, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -2, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 37, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 172, 45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 76, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -40, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -21, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 106, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 98, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 112, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 5, -246,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -22, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 180, 255, -369, -363,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 488, 25, 11, 58, -720, -201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 231, -267, 114, 34, -772, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -46, -261, 80, 22, -624, 43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 141, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -291, -128, -684, -59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -580, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -303, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -111, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 94, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 23, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 88, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 69, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -538, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -247, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -117, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 10, 29,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 78, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -101, -2,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 34, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 19, -4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -102, 0, -232, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 16, -2, -102, 0, -226, 5,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimDSmash_joint25[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 219, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -126, -96,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 219, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -609, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 592, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -37, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -341, -67, 219, 17, 0, -43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1192, 13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 516, -744,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), 0, 219, 0,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimDSmash_joint26[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -178, -122, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 64, -450,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), -122, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 319, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -446, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 257, 216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 420, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 418, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 244, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 96, -48, -122, 45, 0, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -334, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 417, 53,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), -178, -122, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
