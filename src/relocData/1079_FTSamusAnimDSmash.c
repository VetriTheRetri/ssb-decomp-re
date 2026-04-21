/* AnimJoint data for relocData file 1079 (FTSamusAnimDSmash) */
/* 3632 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimDSmash_joint1[64];
extern u16 dFTSamusAnimDSmash_joint2[86];
extern u16 dFTSamusAnimDSmash_joint4[58];
extern u16 dFTSamusAnimDSmash_joint5[172];
extern u16 dFTSamusAnimDSmash_joint6[72];
extern u16 dFTSamusAnimDSmash_joint7[82];
extern u16 dFTSamusAnimDSmash_joint8[10];
extern u16 dFTSamusAnimDSmash_joint11[18];
extern u16 dFTSamusAnimDSmash_joint12[170];
extern u16 dFTSamusAnimDSmash_joint14[52];
extern u16 dFTSamusAnimDSmash_joint15[196];
extern u16 dFTSamusAnimDSmash_joint17[40];
extern u16 dFTSamusAnimDSmash_joint19[190];
extern u16 dFTSamusAnimDSmash_joint20[200];
extern u16 dFTSamusAnimDSmash_joint22[106];
extern u16 dFTSamusAnimDSmash_joint23[254];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTSamusAnimDSmash_joints[] = {
	(u32)dFTSamusAnimDSmash_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimDSmash_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimDSmash_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimDSmash_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimDSmash_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimDSmash_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimDSmash_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimDSmash_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimDSmash_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimDSmash_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimDSmash_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimDSmash_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimDSmash_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimDSmash_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimDSmash_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTSamusAnimDSmash_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTSamusAnimDSmash_joint1[64] = {
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 1600, 0,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 8), 156, -151,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 4), 726,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 4), 726,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 99, 726, 118,
	ftAnimSetValT(FT_ANIM_TRAY, 9), 726,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 4), 23, 203,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), -512,
	ftAnimSetValRateT(FT_ANIM_TRAX, 11), -229, -47,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -26,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 21), -173, 24,
	ftAnimBlock(0, 5),
	ftAnimSetValT(FT_ANIM_TRAY, 30), 1600,
	ftAnimBlock(0, 6),
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 15), 163,
	ftAnimBlock(0, 10),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 247,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), 0, 225,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 9), 0, -205,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 9), 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimDSmash_joint2[86] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValRate(FT_ANIM_ROTY), 0, 91,
	ftAnimSetValBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 3), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 402, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -714, 7, -893, -25,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), -58,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 51,
	ftAnimSetValT(FT_ANIM_ROTY, 11), -402,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -281, -552,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 174, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 338, 127, -439, -31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1003, -57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1353, 62,
	ftAnimBlock(0, 4),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 66, 64,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1228, -51,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1947, -3,
	ftAnimBlock(0, 5),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), -1608, -5,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 16), 1608, 1608,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTSamusAnimDSmash_joint4[58] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 52,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 14, 0, 6, 37, 42, -78,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 120, -32, 81, 10,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 2,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, -2, 37, -1, -78, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 19, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -259, -2, 85, -1, 20, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 42), 0, 0, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimDSmash_joint5[172] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1135, -63, -1698, 366, 1364, -113,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1226, -68, 1204, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1332, 226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1244, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1336, 47, -1252, -168, 1502, 239,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1855, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1132, -5, -1582, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1346, -250, -1333, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1633, -152, -1282, 30, 1941, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1482, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1651, 4, 1788, -77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1711, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1786, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1960, -51,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1530, -45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -1246, 40,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1688, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -1372, 13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1909, -49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 1644, 32,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1208, 36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1084, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1362, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1566, -50,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1677, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1390, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1615, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1318, 71,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1145, -75,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1652, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1247, 61, 1340, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1143, 6, 1322, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1136, 7, -1680, -27, 1359, 36,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimDSmash_joint6[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -747, -130,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -878, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -796, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -897, 398,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -492, -384,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -769, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -672, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -714, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -1076, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1063, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -778, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -712, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -847, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -813, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -736, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -759, -23,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimDSmash_joint7[82] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 701, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -179, -302, 0, 0, 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -509, -29, -419, -279, 40, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -238, 788, -558, -86, 247, -332,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1067, 628, -592, 60, -625, -363,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1017, 9, -438, 27, -480, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 1173, -24, -293, 21, -745, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 526, -57, 0, 5, 0, 16,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 79, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -250, 44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 701,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimDSmash_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimDSmash_joint11[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), -268, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 32), -268, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTSamusAnimDSmash_joint12[170] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1534, -70, 1757, -71, -1846, 48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1810, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1604, -149, 1686, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1834, -196, 1421, -247,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2233, -89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1197, 31,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1965, -149,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -2226, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2310, -53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -2330, 1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1229, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1370, -3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2217, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2092, 132,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1361, -61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 927, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2329, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2019, 85,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1910, 136,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -1603, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 917, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 1046, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1936, 75,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -1898, -16,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1623, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -1870, -13,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1915, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -2017, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1062, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1530, 148,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1972, 94, -1871, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1642, 145, -1838, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1682, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1537, 105, 1754, 72, -1849, -10,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimDSmash_joint14[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -559, -70,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -969, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -964, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -881, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -893, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1062, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1044, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -630, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -629, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -619, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -577, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -559, 18,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimDSmash_joint15[196] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 117, -141, -24, -29, 2828, -182,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -321, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -164, -128, 2541, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -281, 9, 2490, -155,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 275, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 2114, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -123, 158, 2145, 51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2215, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 16, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 317, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 306, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 529, 203, 2175, 82,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 662, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1, -72, 2379, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -128, -49, 2459, 47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2336, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -98, 47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -127, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 590, -67,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 511, 23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2197, -83,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2234, 24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 523, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 380, -44,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -204, -40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -66, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 393, -4, 2258, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 2439, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 281, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 267, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -219, -6,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -63, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -31, 12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2476, 39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 2804, -17,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -218, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 30, 98,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2787, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2796, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 112, 81, -24, 7, 2824, 28,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimDSmash_joint17[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 464, 290,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1351, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1354, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 1347, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1346, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 883, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 857, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 535, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 472, -63,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimDSmash_joint19[190] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -101, 138, -48, -99, -26, -70,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -111, 83, -475, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 144, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 262, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 62, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 20, 69, -446, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 64, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -444, 24,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 97, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -252, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 20, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -151, -89, -431, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -518, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -158, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -164, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -213, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -152, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -191, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -50, 64, -12, 92,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -17, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -63, -21, -518, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -608, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -66, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 5, 9, 0, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -168, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -11, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 11, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 36, -30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -356, 8,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -138, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -28, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 10, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 182, -8,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 8, 42, -342, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -8, -41, -75, 50,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 155, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -23, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -97, -73, -45, -37, -31, 44,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimDSmash_joint20[200] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 257, -202, 167, 26, -58, -333,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -264, -43, -877, -302,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 116, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -11, -52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 139, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -201, 78, -1247, -206,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -108, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1290, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 135, -8, -1409, -54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 119, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -127, 95, -1398, 385,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 83, 141, -637, 406,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 156, 31, -585, 78,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 36, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -479, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -407, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -539, -61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -273, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 190, 56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 196, 40,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 80, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 104, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -270, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -150, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 252, 16, -165, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 173, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -209, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -219, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -282, -86,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 95, -11, 187, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -101, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 165, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -431, -123,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -690, -27,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -122, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 186, 43,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -713, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -233, 134,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 161, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 184, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 245, 58, 171, -13, -81, 151,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimDSmash_joint22[106] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 459, 359,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1325, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1355, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1409, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1275, -704,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -635,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 285, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 398, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 228, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 98, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 149, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, 34,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 223, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 647, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 653, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 632, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 582, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, -104,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTSamusAnimDSmash_joint23[254] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 122, -27, 160, -12, -224, -50,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -124, -164, -309, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 111, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 310, 80,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 12, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -319, -104, -126, 113,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -269, -26, -31, 106,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 105, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -80, -180, -327, -71, 169, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -254, -338, -412, 188, 351, 378,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -758, -136, 48, 202, 925, 229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -527, 157, -7, -57, 810, -182,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -296, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -66, -61, 560, -225,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -136, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 440, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -169, 73,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -172, 51,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -132, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -221, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -99, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -267, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 446, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 334, -51,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -289, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -46, 21,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -167, 50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -149, -24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 270, -59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1, -97,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -25, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -44, -23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -68, -62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -152, 73,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -160, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -36, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -63, 70,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -80, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -72, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -33, -22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -138, -85,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 91, 117,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -72, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -189, -30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -49, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 89, 50,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 196, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 121, 31, 176, -19, -220, -30,
	ftAnimEnd(),
	0x0000, 0x0000,
};
