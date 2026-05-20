/* AnimJoint data for relocData file 1193 (FTLinkAnimCliffClimbQuick2) */
/* 2512 bytes: 120-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimCliffClimbQuick2_joint1[26];
extern u16 dFTLinkAnimCliffClimbQuick2_joint2[54];
extern u16 dFTLinkAnimCliffClimbQuick2_joint3[46];
extern u16 dFTLinkAnimCliffClimbQuick2_joint5[46];
extern u16 dFTLinkAnimCliffClimbQuick2_joint6[120];
extern u16 dFTLinkAnimCliffClimbQuick2_joint7[48];
extern u16 dFTLinkAnimCliffClimbQuick2_joint10[38];
extern u16 dFTLinkAnimCliffClimbQuick2_joint11[90];
extern u16 dFTLinkAnimCliffClimbQuick2_joint12[48];
extern u16 dFTLinkAnimCliffClimbQuick2_joint13[36];
extern u16 dFTLinkAnimCliffClimbQuick2_joint14[36];
extern u16 dFTLinkAnimCliffClimbQuick2_joint17[38];
extern u16 dFTLinkAnimCliffClimbQuick2_joint18[36];
extern u16 dFTLinkAnimCliffClimbQuick2_joint19[36];
extern u16 dFTLinkAnimCliffClimbQuick2_joint21[46];
extern u16 dFTLinkAnimCliffClimbQuick2_joint22[92];
extern u16 dFTLinkAnimCliffClimbQuick2_joint24[48];
extern u16 dFTLinkAnimCliffClimbQuick2_joint26[78];
extern u16 dFTLinkAnimCliffClimbQuick2_joint27[100];
extern u16 dFTLinkAnimCliffClimbQuick2_joint29[40];
extern u16 dFTLinkAnimCliffClimbQuick2_joint30[94];

/* Joint pointer table (30 entries, 120 bytes) */
AObjEvent32 * dFTLinkAnimCliffClimbQuick2_joints[] = {
	(AObjEvent32 *)dFTLinkAnimCliffClimbQuick2_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTLinkAnimCliffClimbQuick2_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLinkAnimCliffClimbQuick2_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTLinkAnimCliffClimbQuick2_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffClimbQuick2_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLinkAnimCliffClimbQuick2_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTLinkAnimCliffClimbQuick2_joint10, /* [7] joint 10 */
	NULL, /* [8] NULL */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffClimbQuick2_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLinkAnimCliffClimbQuick2_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLinkAnimCliffClimbQuick2_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLinkAnimCliffClimbQuick2_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTLinkAnimCliffClimbQuick2_joint17, /* [14] joint 17 */
	NULL, /* [15] NULL */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffClimbQuick2_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTLinkAnimCliffClimbQuick2_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTLinkAnimCliffClimbQuick2_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffClimbQuick2_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTLinkAnimCliffClimbQuick2_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffClimbQuick2_joint26, /* [24] joint 26 */
	NULL, /* [25] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffClimbQuick2_joint27, /* [26] joint 27 */
	(AObjEvent32 *)dFTLinkAnimCliffClimbQuick2_joint29, /* [27] joint 29 */
	NULL, /* [28] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffClimbQuick2_joint30, /* [29] joint 30 */
};

/* Joint 1 */
u16 dFTLinkAnimCliffClimbQuick2_joint1[26] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRate(FT_ANIM_TRAY), 0, 1,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 18), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 590,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), 960, 512,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 10), 960,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimCliffClimbQuick2_joint2[54] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 374, 691, -401, 585,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 655, 1988, -227, 998,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 872, 1276, -151, 621,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 974, 448, -72, 1115,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 984, -81, 126, -177,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 954, -433, -116, -511,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 767, -520, -129, 270,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 628, 107, 52, 103,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 901, 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTLinkAnimCliffClimbQuick2_joint3[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -117, 166, -48, 4, 0, -6,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 5), -61,
	_FT_ANIM_CMD(11, FT_ANIM_ROTZ, 1), 2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 1669, 322, 0, 32,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 3109, 95, 276, 18, 0, 4,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 3319, 276, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 3109, 276, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTLinkAnimCliffClimbQuick2_joint5[46] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), 513, -63,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -184, 12, 0, 5, 0, 1,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 600, 88, 39, 33, 13, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 259, -18, 166, 25, 56, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 505, 166, 56,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 259, 166, 56,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTLinkAnimCliffClimbQuick2_joint6[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 162, 33, 6, -22, -632, -86,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1478, -634,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -71, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 196, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 311, 421,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1039, 530,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1371, 174, -2237, -395,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1387, 119, -174, -158, -2268, -94,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -536, -186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1610, 338, -2426, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2065, 495, -2611, -249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2600, -8, -761, -246, -2925, 189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2048, -212, -1029, -350, -2232, 285,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2174, 85, -1462, -230, -2354, -46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 2144, -120,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1749, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1456, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1393, 64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1263, -10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2022, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1934, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1888, -46, -1281, -18, -1694, 54,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTLinkAnimCliffClimbQuick2_joint7[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -7, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -493, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -371, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -623, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -308, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -442, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -530, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -577, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, 76,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimCliffClimbQuick2_joint10[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 690, -9, -126, 1, -32, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 590, -68, -109, 13, -316, 10,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 4, -83, 7, 16, 76, 56,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 4, 7, 76,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 4, 7, 76,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimCliffClimbQuick2_joint11[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1771, 346, 1119, 83, 1351, 98,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1130, -126,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2330, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1449, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1344, -55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1394, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 949, -100,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1285, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2237, -73,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 2021, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1567, 107,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1564, 13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1410, 99,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1406, 26,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1584, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1552, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1437, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 1508, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2024, 2, 1484, -23, 1557, 5,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTLinkAnimCliffClimbQuick2_joint12[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1045, 169,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -558, 368,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -139, 275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -323, -251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -618, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -635, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -484, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -449, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -525, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, -62,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimCliffClimbQuick2_joint13[36] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -261, 49, 311,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -261, 26, 49, -25, 311, -31,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 37, -209, -37, 0, -44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, -209, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, -209, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTLinkAnimCliffClimbQuick2_joint14[36] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 804, 13, -804, 0, 804, -13,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 937, 19, -804, 0, 670, -19,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 937, -804, 670,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 937, -804, 670,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimCliffClimbQuick2_joint17[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1569, 72, -22, -6, -1296, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 2291, 12, -90, -51, -1120, 95,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1697, -84, -536, -63, -339, 111,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1697, -536, -339,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 1697, -536, -339,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimCliffClimbQuick2_joint18[36] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 0, -16, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, -163, -23, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, -163, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, -163, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTLinkAnimCliffClimbQuick2_joint19[36] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 0, -19, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, -199, -28, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, -199, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, -199, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimCliffClimbQuick2_joint21[46] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), 0, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -26, 0, 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -215, 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 113, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 240, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTLinkAnimCliffClimbQuick2_joint22[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 130, -92, -216, 76, -670, 285,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -46, -2, -131, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -182, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -37, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -566, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -51, -48, -204, -66, -451, 219,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -125, 80,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -310, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -127, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -233, -122,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -408, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 17, 136,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 112, -44,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -327, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -270, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 59, -58, -358, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -213, -33, 45, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -242, -28, -244, 26, 108, 63,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTLinkAnimCliffClimbQuick2_joint24[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1064, -192,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 613, -260,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 351, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 577, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 662, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 785, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 668, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 853, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 814, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 342, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, -92,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTLinkAnimCliffClimbQuick2_joint26[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 531, 346, -63, 35, -57, 241,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 337, -80,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -134, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 933, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 531, -236,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 589, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 219, -143,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -167, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -215, -62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -174, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 474, -117,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 353, -17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -179, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -39, 9,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -165, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 329, -23, -161, 3, -34, 5,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTLinkAnimCliffClimbQuick2_joint27[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1719, 62, -1690, 16, -2315, 250,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1418, 114,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1785, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1689, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1728, -68,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1836, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1293, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1479, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1854, -62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1933, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1832, -90,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2350, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1507, -81,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1703, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1856, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1930, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1667, 41, -2311, 51,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -1358, 29, -1789, 69,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1917, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1897, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1337, 21, -1878, 19, -1733, 56,
	ftAnimEnd(),
};

/* Joint 29 */
u16 dFTLinkAnimCliffClimbQuick2_joint29[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1087, -164,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 687, -255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 412, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 427, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 423, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 995, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 969, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 495, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, -70,
	ftAnimEnd(),
	0x0000,
};

/* Joint 30 */
u16 dFTLinkAnimCliffClimbQuick2_joint30[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -283, -151, 151, -26, -49, 221,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 244, -75,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -62, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -687, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -848, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -410, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 153, -98,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -207, -128,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -77, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 6, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -274, 44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -323, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -308, -46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -81, 21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -324, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -460, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -7, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -69, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -427, 32, -74, -4, -69, 11,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
