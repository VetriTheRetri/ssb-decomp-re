/* AnimJoint data for relocData file 673 (FTFoxAnimDamaged4) */
/* 2832 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimDamaged4_joint1[44];
extern u16 dFTFoxAnimDamaged4_joint2[36];
extern u16 dFTFoxAnimDamaged4_joint4[50];
extern u16 dFTFoxAnimDamaged4_joint5[138];
extern u16 dFTFoxAnimDamaged4_joint6[48];
extern u16 dFTFoxAnimDamaged4_joint7[10];
extern u16 dFTFoxAnimDamaged4_joint8[76];
extern u16 dFTFoxAnimDamaged4_joint10[10];
extern u16 dFTFoxAnimDamaged4_joint11[144];
extern u16 dFTFoxAnimDamaged4_joint12[68];
extern u16 dFTFoxAnimDamaged4_joint13[10];
extern u16 dFTFoxAnimDamaged4_joint15[10];
extern u16 dFTFoxAnimDamaged4_joint16[134];
extern u16 dFTFoxAnimDamaged4_joint18[56];
extern u16 dFTFoxAnimDamaged4_joint20[150];
extern u16 dFTFoxAnimDamaged4_joint21[94];
extern u16 dFTFoxAnimDamaged4_joint23[54];
extern u16 dFTFoxAnimDamaged4_joint24[138];
extern u16 dFTFoxAnimDamaged4_joint25[60];
extern u16 dFTFoxAnimDamaged4_joint26[34];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTFoxAnimDamaged4_joints[] = {
	(AObjEvent32 *)dFTFoxAnimDamaged4_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTFoxAnimDamaged4_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTFoxAnimDamaged4_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTFoxAnimDamaged4_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTFoxAnimDamaged4_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTFoxAnimDamaged4_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTFoxAnimDamaged4_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTFoxAnimDamaged4_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTFoxAnimDamaged4_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTFoxAnimDamaged4_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTFoxAnimDamaged4_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTFoxAnimDamaged4_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTFoxAnimDamaged4_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTFoxAnimDamaged4_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTFoxAnimDamaged4_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTFoxAnimDamaged4_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTFoxAnimDamaged4_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTFoxAnimDamaged4_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTFoxAnimDamaged4_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTFoxAnimDamaged4_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimDamaged4_joint1[44] = {
	ftAnimSetVal(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 48, 912, -20,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 48, 990, -43,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -89, 1012, -71,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -366, 966, -125,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -435, 932, -138,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -314, 956, -115,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 48, 757, -57,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 48, 912, -20,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimDamaged4_joint2[36] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, -1,
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -141, -338, -3,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 24), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 309, 28, 20,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 664, 341, 456,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 427, 55, 2,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -141, -338, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTFoxAnimDamaged4_joint4[50] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 309, 156, 81,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 124, 0, -361, 0, -28, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 307, -3, 159, 55, 83, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 82, -4, 247, -23, 256, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 246, 18, -197, -7, -145, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 156, 0, 81, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 309,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimDamaged4_joint5[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -109, 78, -165, -116, 258, -396,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -343, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -31, -193, -137, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -497, -230, 253, 203,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 269, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -491, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -469, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -118, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 256, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 266, 184,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -367, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -459, 29,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -131, -75,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1248, -129,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 483, 229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -407, 10, 726, 145,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -521, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 773, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1356, 267, 777, -400,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -713, 482, -649, 56, -28, -526,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 257, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -390, 208, -407, 170,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -308, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -307, 102,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -170, 18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -192, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -109, 83, -165, 4, 258, 1,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimDamaged4_joint6[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, -50,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -699, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -734, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -902, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -786, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -780, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -798, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -714, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -784, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -704, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 145,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTFoxAnimDamaged4_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimDamaged4_joint8[76] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), -113, -72,
	ftAnimSetValRate(FT_ANIM_ROTY), 136, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -41, 163, -48, -24, -127, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 213, 88, 87, -7, -20, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 134, 0, -63, -48, 42, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 208, 6, -400, -34, -40, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 198, -36, -404, 101, 1, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -10, -38, 207, 66, 28, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -105, -17, 126, -11, -106, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -72, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -113, 136,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTFoxAnimDamaged4_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimDamaged4_joint11[144] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 132, 38, 271, -74, 336, 117,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 449, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 171, 241, 197, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 615, 428, 121, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1027, 551, 495, 326, 191, 208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1718, 218, 774, 201, 866, 194,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 970, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1465, -94, 581, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1528, 18, 634, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1439, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 617, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 633, 57,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 973, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1529, 317, 1001, 144, 721, 354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2074, 270, 1263, 259, 1343, 345,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1743, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2069, -35, 1412, 37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1817, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1153, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1656, -70, 1013, -78,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1447, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1524, 321,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1859, -7, 1844, 222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1803, -59, 1364, -55, 1969, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1741, -61, 1336, -28, 1945, -24,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimDamaged4_joint12[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -594, -75,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -703, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -366, 351,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -308,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -623, -436,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -880, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -757, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -543, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -482, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -685, -197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -887, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -727, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 133,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimDamaged4_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 272, 0, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimDamaged4_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimDamaged4_joint16[134] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2013, 554, -1383, -157, 1580, -470,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1458, 204, -1541, -43, 1109, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1603, -111, -1471, 51, 1692, 355,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1514, 53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1167, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1768, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1688, -80,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1286, -67,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1456, 63,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1310, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1184, -115, 1214, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1365, -22, -1399, -158, 980, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1355, 135, -1501, -127, 906, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1658, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1093, 60, 942, -62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1378, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 781, -160,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 481, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1669, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1411, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1464, -96,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1829, -132,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 740, 253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1350, 209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2013, -184, -1383, 27, 1580, 229,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimDamaged4_joint18[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 357, 394,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 752, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -376,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 392, 262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 525, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 937, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 978, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 786, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 918, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 993, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 776, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 478, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 357, -120,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimDamaged4_joint20[150] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1655, 16, 1482, 61, 1550, -203,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1704, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1544, 126, 1347, 210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1734, 47, 1972, 420,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1572, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1623, -54, 2188, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1661, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1890, -159,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1866, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1537, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1581, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1871, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1727, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1645, 28, 1585, 64, 1691, 123,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1638, -209, 2032, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1711, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1550, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1300, -111, 1613, 18, 1632, -347,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1335, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1415, 110, 1587, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1635, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1521, 68,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1608, 19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1555, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1421, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1373, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1509, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1598, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1583, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1655, 47, 1482, -100, 1550, 41,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimDamaged4_joint21[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1253, -128, -1747, 124, -1475, -597,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1583, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1426, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2073, -200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1875, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1955, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1994, -39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -2275, -61,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1582, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1706, 14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1446, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1522, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1485, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1373, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1689, 17, -2300, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -1783, 18, -1621, 147,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1454, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1264, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1253, 11, -1747, 36, -1475, 146,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimDamaged4_joint23[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 336, -336,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -168,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 143, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 144, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 389, 188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 522, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 692, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 800, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 487, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 336, -150,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimDamaged4_joint24[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 16, -113, -102, 402, -229, 397,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -97, -36, 299, 15, 168, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -56, 3, -72, -171, -31, -92,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -14, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -260, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -44, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -21, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 262, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -3, -5,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -264, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -248, -18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 360, -5, -111, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 36, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -101, -59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -303, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -260, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -18, 26,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -48, -82, -359, -51,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -146, -26, -430, 38,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 19, 37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 45, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -171, -7, -385, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -162, 34, -321, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 16, -29, -102, 59, -229, 92,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimDamaged4_joint25[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 219, -77, 0, -10,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -126, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 113, 39, -99, -16, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 469, 15, 19, 11, -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 370, -49, 102, 13, -11, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 72, -147, 130, 30, -11, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -219, -18, 223, 22, 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, -24, 219, -77, 0, -10,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimDamaged4_joint26[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -122, 0, 0, 64, -450,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -35, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -107, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 312, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -435, -81,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), -178,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
