/* AnimJoint data for relocData file 698 (FTFoxAnimTech) */
/* 3088 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimTech_joint1[34];
extern u16 dFTFoxAnimTech_joint2[22];
extern u16 dFTFoxAnimTech_joint4[46];
extern u16 dFTFoxAnimTech_joint5[156];
extern u16 dFTFoxAnimTech_joint7[70];
extern u16 dFTFoxAnimTech_joint10[46];
extern u16 dFTFoxAnimTech_joint11[168];
extern u16 dFTFoxAnimTech_joint12[78];
extern u16 dFTFoxAnimTech_joint13[112];
extern u16 dFTFoxAnimTech_joint15[10];
extern u16 dFTFoxAnimTech_joint16[148];
extern u16 dFTFoxAnimTech_joint18[62];
extern u16 dFTFoxAnimTech_joint20[130];
extern u16 dFTFoxAnimTech_joint21[130];
extern u16 dFTFoxAnimTech_joint23[62];
extern u16 dFTFoxAnimTech_joint24[124];
extern u16 dFTFoxAnimTech_joint25[54];
extern u16 dFTFoxAnimTech_joint26[40];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTFoxAnimTech_joints[] = {
	(AObjEvent32 *)dFTFoxAnimTech_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTFoxAnimTech_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTFoxAnimTech_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTFoxAnimTech_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTFoxAnimTech_joint7, /* [5] joint 7 */
	NULL, /* [6] NULL */
	(AObjEvent32 *)dFTFoxAnimTech_joint10, /* [7] joint 10 */
	NULL, /* [8] NULL */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTFoxAnimTech_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTFoxAnimTech_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTFoxAnimTech_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTFoxAnimTech_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTFoxAnimTech_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTFoxAnimTech_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTFoxAnimTech_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTFoxAnimTech_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTFoxAnimTech_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTFoxAnimTech_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTFoxAnimTech_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTFoxAnimTech_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimTech_joint1[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAY), 1608, 840,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 48, -20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY, 5), 1608, 720,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 1920,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -132,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 187, -76,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 1380, -32,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 10), 660, -233,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY, 6), 0, 912,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTFoxAnimTech_joint2[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -3555,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -141, -3, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), -3555,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 441,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 15), -338, 72,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), -338,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTFoxAnimTech_joint4[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 309, 156, 81,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 309, -38, 156, -36, 81, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, -30, -134, -29, 0, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 31, -134, 24, 0, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 375, 28, 156, 26, 81, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 309, 156, 81,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimTech_joint5[156] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -964, -57, 1668, 111, 3050, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1308, -104, 2012, -10, 3365, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1399, 215, 1963, -180, 3497, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -877, 749, 1650, -242, 3310, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 99, 326, 1478, -117, 3434, 110,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -945, -389, 3783, 261,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1415, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1544, 84,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1583, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1004, -21, 4054, 151,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -974, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 4001, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4054, 89,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 4367, 211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1767, 188,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1975, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -982, -82,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1530, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4603, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1769, -96, 4539, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1802, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4545, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 4623, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1525, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1643, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1811, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1787, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4655, 128,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 5033, 101,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1701, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1718, -16, 1774, -13, 5084, 50,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimTech_joint7[70] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -194,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -691, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -757, 269,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -152, 378,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -388, -283,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -453, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -575, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -651, 360,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -100, 325,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -298, -247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -495, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, -62,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTFoxAnimTech_joint10[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -616, 136, -72,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -723, 61, 136, 0, -72, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 72, 134, 0, 0, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 8, 134, 0, 0, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 107, -10, 136, 0, -72, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -113, 136, -72,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimTech_joint11[168] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1211, 20, 1633, 5, 3073, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1658, -63,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1300, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 3064, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3057, 93,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 3392, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1521, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1350, -258, 1429, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 783, -719, 1218, -49, 3175, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -87, -385, 1329, 5, 3306, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 12, 448, 1228, -36, 2952, 337,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 809, 392, 1256, 274, 3981, 626,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 796, -15, 1778, 360, 4205, 132,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1994, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 4205, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 779, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 785, 10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1986, -108,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1650, -89,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4261, 71,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 4550, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 818, 96, 1600, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1503, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1526, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1476, -42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1326, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1474, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1588, 117,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4606, 160,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 5090, 145,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1703, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1741, 37, 1336, 9, 5162, 72,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimTech_joint12[78] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -619, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -372, 306,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -852, -461,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -929, 273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -304, 464,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -304, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -377, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -7, 118,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -531, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, -63,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimTech_joint13[112] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 272, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -268, -156, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -312, -44, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -357, -22, 0, 44, 0, 44,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 89, 89, 89, 67,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -357, 89, 178, -44, 134, -67,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -178, 379, -44, -134,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 402, 357, 178, -178, -134, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 536, 163, -357, -104, 268, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 893, -22, -134, 44, 134, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 446, -134, -178, -11, 89, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 357, -55, -178, 11, 89, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, -29, -89, 14, -134, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimTech_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 26),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimTech_joint16[148] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2018, 10, -1499, 36, 1743, -52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1986, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1373, -15, 1519, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1430, -18, 1566, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1392, -64, 1672, 190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1955, -93,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2339, -135,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1539, -106, 1934, 181,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1921, -64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1746, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2445, -56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -2565, -28,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1851, -70,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1631, -18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2590, -22, -1752, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2500, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1701, 217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1310, 343, 1631, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2281, 507, -1013, 122, 1419, -435,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1485, 375, -1064, -103, 759, -257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1529, -98, -1220, -71, 904, 134,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1954, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1207, 1, 1027, 139,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1358, -40, 1541, 65,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1994, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2014, -19, -1385, -27, 1581, 39,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimTech_joint18[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 432, 36,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 345, -237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 122, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -58,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 625, 428,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 863, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 950, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 942, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 434, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, -80,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimTech_joint20[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 51, 0, 125, -9, -56, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 364, 145,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -14, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -64, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -62, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -174, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -141, 47, 510, 125,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 176, 98,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 692, -14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 36, 73,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -14, -246,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 253, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 81, -206,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 673, -64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 213, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -184, -24, -343, -233,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -499, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 33, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 81, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -31, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 152, -81, -225, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 51, -11, -274, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 49, 53, 129, 56, -280, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 26, -12, 130, -11, -94, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 19, -6, 125, -4, -56, 38,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimTech_joint21[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 197, -22, 312, -1, 215, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 163, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 287, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 457, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 543, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 75, -28, 469, -198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 105, 222, 274, -115, 147, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 520, 284, 55, -148, 115, -64,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 668, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -22, -60, 18, -47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -319, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 328, -62,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 639, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 298, -73,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -273, 70,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 89, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 233, -92,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -29, 68,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 218, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 314, 43,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 166, 42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 148, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 38, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 101, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 355, 41, 137, -11, 134, 33,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimTech_joint23[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 584, -20,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 364, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 243, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 319, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 533, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -266,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 547, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 676, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 713, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 563, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 411, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, -79,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTFoxAnimTech_joint24[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1654, -14, -1505, 4, -1835, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1744, -150,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1740, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1509, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1466, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1271, -254,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 958, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1223, 178, -1912, -152,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -2126, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1314, 55, -1812, -67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1875, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1449, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1550, 79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1365, -89,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2050, 102, -2002, -122,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1641, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2134, 83,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1293, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1610, 35,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1680, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1548, 46,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2058, 83,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1879, 66,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1639, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1651, 12, -1505, 42, -1835, 44,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimTech_joint25[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -178, 223, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -126, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 536, -19, -185, -102, 187, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -336, -66, -595, -1, 374, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -256, 54, -209, 48, 197, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 204, -8, -107, 49, 150, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -327, -25, 184, 40, 16, -18,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 219, 0,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimTech_joint26[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -404, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 64, -450,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -565, 50, -372, -9, 457, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 614, 55, -195, 13, 124, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 441, -132, -130, 12, 12, -20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -178, -122, 0,
	ftAnimEnd(),
	0x0000, 0x0000,
};
