/* AnimJoint data for relocData file 674 (FTFoxAnimDamaged5) */
/* 2880 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimDamaged5_joint1[92];
extern u16 dFTFoxAnimDamaged5_joint2[52];
extern u16 dFTFoxAnimDamaged5_joint4[70];
extern u16 dFTFoxAnimDamaged5_joint5[106];
extern u16 dFTFoxAnimDamaged5_joint6[60];
extern u16 dFTFoxAnimDamaged5_joint7[10];
extern u16 dFTFoxAnimDamaged5_joint8[72];
extern u16 dFTFoxAnimDamaged5_joint10[10];
extern u16 dFTFoxAnimDamaged5_joint11[106];
extern u16 dFTFoxAnimDamaged5_joint12[56];
extern u16 dFTFoxAnimDamaged5_joint13[14];
extern u16 dFTFoxAnimDamaged5_joint15[10];
extern u16 dFTFoxAnimDamaged5_joint16[110];
extern u16 dFTFoxAnimDamaged5_joint18[66];
extern u16 dFTFoxAnimDamaged5_joint20[120];
extern u16 dFTFoxAnimDamaged5_joint21[128];
extern u16 dFTFoxAnimDamaged5_joint23[68];
extern u16 dFTFoxAnimDamaged5_joint24[98];
extern u16 dFTFoxAnimDamaged5_joint25[90];
extern u16 dFTFoxAnimDamaged5_joint26[50];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimDamaged5_joints[] = {
	(u32)dFTFoxAnimDamaged5_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimDamaged5_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimDamaged5_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimDamaged5_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimDamaged5_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimDamaged5_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimDamaged5_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimDamaged5_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimDamaged5_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimDamaged5_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimDamaged5_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimDamaged5_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimDamaged5_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimDamaged5_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimDamaged5_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimDamaged5_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimDamaged5_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimDamaged5_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimDamaged5_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimDamaged5_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimDamaged5_joint1[92] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 48, 912, -20,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), 48, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY, 1), 0, 248, 912, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY, 1), 279, 366, 935, 383,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 625, 30, 48, 1, 1008, 105, -20, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), 943, 6,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 51, 1, 1107, 51, -42, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 52, -1, 1130, 71, -22, 153,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 49, -52, 1188, -170, 131, 22,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, 959, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1331, 565,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1974, 303,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2393, 423,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2832, 335,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3088, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3216, 319,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimDamaged5_joint2[52] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, -1,
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -141, -338, -3,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -141, -338, -3,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 34, 83, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -72, 70, -171, 169, -2, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 3, 0, 8, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), 2, 5, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTFoxAnimDamaged5_joint4[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 309, 156, 81,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 636, -37, 156, -55, -195, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 196, -58, -8, -11, -5, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -235, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -10, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -69, 80, -8, -3, -5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 329, 318, -36, -32, -5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 568, -100, -73, -39, -4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -171, -94, -232, -32, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, -268, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimDamaged5_joint5[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -109, -631, -165, -31, 258, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -741, -570, -197, -637, 217, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1251, -32, -1441, -595, 554, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -805, 223, -1388, 28, 357, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -804, -2, -1384, 4, 356, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -1048, -22, -1387, -16, 577, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1075, -63, -1408, 48, 607, 94,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1175, 94,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1541, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1257, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1278, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1330, 13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1255, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1308, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1447, 88, 1186, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1341, 16, 1139, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1331, 10, -1323, 7, 1151, 11,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimDamaged5_joint6[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, -154,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -713, 275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 352,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -296, -238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -476, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -634, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -510, 208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -7, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTFoxAnimDamaged5_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimDamaged5_joint8[72] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), -113, -72,
	ftAnimSetValRate(FT_ANIM_ROTY), 136, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -77, -21, 453, 57, -91, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -157, -117, 251, -203, -45, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -312, -15, 47, -19, -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -358, 15, -6, -2, 4, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -21, 58, 0, 7, -31, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 167, 177, 61, 26, -32, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 510, 1, 80, 34, -28, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 178, 268, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTFoxAnimDamaged5_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimDamaged5_joint11[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1475, -143, 1336, 54, -1271, -698,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1490, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1618, -57, -1970, -452,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1591, -246, -2176, -337,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2111, -274, -2644, -241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2141, -25, 1476, -11, -2659, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -2031, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 1421, 13, -2551, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1434, -26, -2501, 89,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1946, 220,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1212, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1998, 38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1526, 197,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1695, 206,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1536, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1346, 129, 1232, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -1309, 12, 1093, -54,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1674, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1240, 68, 1090, -2, -1624, 50,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimDamaged5_joint12[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -594, 114,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -480, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -470, 240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -304, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -403, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -563, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -339, 278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimDamaged5_joint13[14] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 272, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), 255, -2, -54,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimDamaged5_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimDamaged5_joint16[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1203, -8, -1383, -186, 1580, 245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1353, 235, -1700, -26, 1982, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1665, 173, -1623, 40, 1693, -152,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1618, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1730, 27, 1664, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1754, 21, 1657, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1758, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 1654, -16,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1619, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1657, 2,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1770, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1686, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1703, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1732, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1624, -33, -1651, 29, 1496, -298,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 1596, 13, -1602, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1134, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1421, 246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1627, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1608, 12, -1603, 0, 1629, 2,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimDamaged5_joint18[66] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 357, -88,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 269, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 12), 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 81, 194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 389, 224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 709, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 786, 187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1101, -342,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, -547,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -5,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTFoxAnimDamaged5_joint20[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1655, -60, -1734, 25, 1550, -231,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1742, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1594, 8, 1319, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1672, 2, 1807, 334,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1604, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2023, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1578, 89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1552, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1594, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 1611, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2035, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 1656, -47,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1552, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1594, -35,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1614, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1653, 63,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1624, -1, 1608, -73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1510, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1453, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1759, 13, 1754, 311,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1627, -45, 2193, 72,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1535, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1591, -35, -1543, -7, 2221, 28,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimDamaged5_joint21[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 354, -714, 138, -196, 132, -316,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -359, -281, -57, 36, -183, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -208, 243, 210, 60, 500, 244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 127, 183, 63, -75, 306, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 158, 27, 59, -2, 301, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 1, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 272, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 341, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 359, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 284, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 291, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 268, -32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -16, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -46, -78, 284, -23, 224, -209,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -637, -276,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 92, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -174, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2, 36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -702, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -586, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2, 2, 57, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2, -5, 20, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -7, -9, 5, -14, -492, 94,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimDamaged5_joint23[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 336, 736,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1073, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -533,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 5, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 294, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 372, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 636, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 742, 230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1097, 204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1152, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1061, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 830, -217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 626, -204,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimDamaged5_joint24[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 16, -6, -102, 2, -229, -160,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -78, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -100, 88, -390, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 75, 78, 90, 370,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 371, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 50, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 45, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -54, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 379, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 316, -11,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -78, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -67, 58,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 304, -77,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -72, -142,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -9, 16, -46, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -3, -4, 105, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -122, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -103, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -14, -11, 124, 18, -91, 11,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimDamaged5_joint25[90] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 219, -77, 0, -10,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -126, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 417, -92, 219, -2, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -278, -215, 213, -2, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -228, 17, 211, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -66, 17, 211, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 84, 47, 208, -2, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 364, -14, 187, -12, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 40, -451, 170, -21, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -538, -111, 144, -38, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -294, 134, 55, -36, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTFoxAnimDamaged5_joint26[50] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), -178, -122,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 64, -450,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 16, 13, -122, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -125, 18, -119, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 20), 446, -10, -10, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -354, -306, -4, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -777, 189, 0, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 402, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
