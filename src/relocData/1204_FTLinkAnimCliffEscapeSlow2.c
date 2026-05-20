/* AnimJoint data for relocData file 1204 (FTLinkAnimCliffEscapeSlow2) */
/* 3504 bytes: 120-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimCliffEscapeSlow2_joint1[12];
extern u16 dFTLinkAnimCliffEscapeSlow2_joint2[120];
extern u16 dFTLinkAnimCliffEscapeSlow2_joint3[46];
extern u16 dFTLinkAnimCliffEscapeSlow2_joint5[64];
extern u16 dFTLinkAnimCliffEscapeSlow2_joint6[142];
extern u16 dFTLinkAnimCliffEscapeSlow2_joint7[56];
extern u16 dFTLinkAnimCliffEscapeSlow2_joint10[46];
extern u16 dFTLinkAnimCliffEscapeSlow2_joint11[148];
extern u16 dFTLinkAnimCliffEscapeSlow2_joint12[64];
extern u16 dFTLinkAnimCliffEscapeSlow2_joint13[38];
extern u16 dFTLinkAnimCliffEscapeSlow2_joint14[14];
extern u16 dFTLinkAnimCliffEscapeSlow2_joint17[38];
extern u16 dFTLinkAnimCliffEscapeSlow2_joint18[30];
extern u16 dFTLinkAnimCliffEscapeSlow2_joint19[38];
extern u16 dFTLinkAnimCliffEscapeSlow2_joint21[30];
extern u16 dFTLinkAnimCliffEscapeSlow2_joint22[192];
extern u16 dFTLinkAnimCliffEscapeSlow2_joint24[72];
extern u16 dFTLinkAnimCliffEscapeSlow2_joint26[156];
extern u16 dFTLinkAnimCliffEscapeSlow2_joint27[190];
extern u16 dFTLinkAnimCliffEscapeSlow2_joint29[64];
extern u16 dFTLinkAnimCliffEscapeSlow2_joint30[132];

/* Joint pointer table (30 entries, 120 bytes) */
AObjEvent32 * dFTLinkAnimCliffEscapeSlow2_joints[] = {
	(AObjEvent32 *)dFTLinkAnimCliffEscapeSlow2_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTLinkAnimCliffEscapeSlow2_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLinkAnimCliffEscapeSlow2_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTLinkAnimCliffEscapeSlow2_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffEscapeSlow2_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLinkAnimCliffEscapeSlow2_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTLinkAnimCliffEscapeSlow2_joint10, /* [7] joint 10 */
	NULL, /* [8] NULL */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffEscapeSlow2_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLinkAnimCliffEscapeSlow2_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLinkAnimCliffEscapeSlow2_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLinkAnimCliffEscapeSlow2_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTLinkAnimCliffEscapeSlow2_joint17, /* [14] joint 17 */
	NULL, /* [15] NULL */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffEscapeSlow2_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTLinkAnimCliffEscapeSlow2_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTLinkAnimCliffEscapeSlow2_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffEscapeSlow2_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTLinkAnimCliffEscapeSlow2_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffEscapeSlow2_joint26, /* [24] joint 26 */
	NULL, /* [25] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffEscapeSlow2_joint27, /* [26] joint 27 */
	(AObjEvent32 *)dFTLinkAnimCliffEscapeSlow2_joint29, /* [27] joint 29 */
	NULL, /* [28] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffEscapeSlow2_joint30, /* [29] joint 30 */
};

/* Joint 1 */
u16 dFTLinkAnimCliffEscapeSlow2_joint1[12] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 1, 0, 767,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 54), 0, 3600,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimCliffEscapeSlow2_joint2[120] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 6,
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -314, 274, 81, -687, -214, 74,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -5, 511, 163, -126, -32, 291,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), 5, 22, -32, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 174,
	ftAnimSetValRateT(FT_ANIM_ROTX, 31), 6433, 69,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 2), 163,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 5, -1, 279, 33, -32, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 4, -2, 187, -2, -32, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 3, -3, 277, 127, -32, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 1, -4, 299, -105, -33, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -2, -5, 146, -3, -33, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -5, 6, 294, 13, -33, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 5, 67, 163, 0, -32, 6,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 236,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 20), 6433,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 86, -2, 371, 295, -24, 13,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), 0, 901, 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTLinkAnimCliffEscapeSlow2_joint3[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 37, 114, -32, 77, -336, 54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 804, 66,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 1280, 502,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 1797, 895, 1027,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 1280, 0, 804, 0, 502, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -55, -21, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 922, -69, 756, -26, 569, -25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -107, 276, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimCliffEscapeSlow2_joint5[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 679, -44, 209, 6, 307, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 55, -135, 195, -41, -131, -61,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 0, 15,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), 0, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -353, 21, 0, -9, 0, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 300, 71, -136, -7, 17, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 502, -2, -91, 21, 98, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 259, 166, 56,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTLinkAnimCliffEscapeSlow2_joint6[142] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1776, 36, -1449, -10, 1465, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), -1355, 34, -1578, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1263, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1252, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), 1050, 14,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1320, 35, -1584, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -849, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 15), -1639, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1618, 60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -849, 54,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1071, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1209, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -872, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -961, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1229, -234, 1477, 228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1429, 245, -824, 13, 1666, -258,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1036, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -738, 412, 959, -426,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -629, -30, 833, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -664, -30, 869, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -954, -69, 1176, 70,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1014, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1266, -21,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1022, -64, 1244, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -1300, -30, 1491, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1328, -27, -1281, -15, 1522, 31,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTLinkAnimCliffEscapeSlow2_joint7[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1004, 52,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -632, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -613, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), -390, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -425, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -907, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -851, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -211, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -118, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -372, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -426, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -504, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimCliffEscapeSlow2_joint10[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 590, -19, -109, 8, -316, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 164, -41, 151, 15, 203, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -401, -2, 273, -10, -430, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 92, -6, -107, -31, 318, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -506, -3, -234, 4, 144, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 4, 7, 76,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTLinkAnimCliffEscapeSlow2_joint11[148] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1812, 19, -1584, 11, -2634, 89,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1711, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -2101, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -1615, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1638, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1641, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1693, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -1654, 29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2096, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -2101, 51,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1642, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1584, 4,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2024, 91,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1442, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1626, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -2141, -7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1596, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1867, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1431, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -1183, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2132, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -1619, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1869, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1753, -11,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1622, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1650, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1183, 0, -1756, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -1189, -3, -1730, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1192, -2, -1732, -1, -1659, -9,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTLinkAnimCliffEscapeSlow2_joint12[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -528, -129,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -953, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -870, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -712, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -711, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -857, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -927, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -574, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -580, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -545, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -477, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -410, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -504, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -566, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, -21,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimCliffEscapeSlow2_joint13[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -261, 14, 49, -17, 311, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -7, 10, -248, -12, 99, -8,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -7, 0, -248, 0, 99, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 1, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 0, -209, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTLinkAnimCliffEscapeSlow2_joint14[14] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 2, -804, 0, 804, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 54), 937, -804, 670,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimCliffEscapeSlow2_joint17[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1780, 1, -360, 0, -1330, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 1602, -7, -34, 13, -230, 45,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 1602, 0, -34, 0, -230, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2, -15, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 1697, -536, -339,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTLinkAnimCliffEscapeSlow2_joint18[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -78, 7, -15, 1, 68, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 2, 0, -5, 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), 0, 0, -204, -3, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 0, -163, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTLinkAnimCliffEscapeSlow2_joint19[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -122, 11, -137, 12, 95, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -1, 0, -7, 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), -161, -1, -377, -1, 238, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -49, 8, -53, 8, 60, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, -199, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimCliffEscapeSlow2_joint21[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -179, 16, -260, 23, 55, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 5, 0, 7, 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), 0, 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTLinkAnimCliffEscapeSlow2_joint22[192] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 204, -39, -177, 60, -256, -159,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -467, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 165, -305, -117, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -405, -597, -336, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1029, -127, -260, 50, -172, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -661, 525, -235, 134, -200, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 20, 348, 9, 123, -116, 55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 30, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 35, 13, 11, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 27), 28, -7, 10, 0,
	ftAnimBlock(0, 17),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 30, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 12, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 11, -42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -373, -53,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 20, -25, 9, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -248, -83, -316, -199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -290, 117, -512, -73, -422, -148,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -200, 195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -13, 225, -670, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 160, 116, -717, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 283, 68,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -443, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -72, 101,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 135, 21,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 381, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 395, -90, 107, -96, -385, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -229, -39, -331, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 201, -168,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -197, -36,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -255, -19, -250, 85,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -250, 9, 82, 46,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -229, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -242, -12, -244, 6, 108, 26,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTLinkAnimCliffEscapeSlow2_joint24[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 469, 143,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 603, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 534, -172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 258, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 217, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 170, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 258, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1201, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1254, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 658, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 614, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 282, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, -33,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTLinkAnimCliffEscapeSlow2_joint26[156] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2081, 20, -1646, 16, -1594, 53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1324, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 34), -1562, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2102, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2429, 325,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2752, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2673, -299,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2153, -264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2143, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 27), 1716, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1324, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 27), -1324, -6,
	ftAnimBlock(0, 26),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1707, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2412, 675,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1552, 16, -1337, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1851, -152,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1142, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3249, 546,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3504, 295,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3840, 373,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 5093, 114,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1999, -124,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2009, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1152, -56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1391, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 5097, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 5071, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1898, 77,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1649, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1409, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1445, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 5114, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 5154, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5154, 0, -1446, 0, -1643, 6,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTLinkAnimCliffEscapeSlow2_joint27[190] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1147, 119, 1540, -253, 778, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1267, -138, 1287, -326, 634, -355,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 871, 69, 887, -326, 67, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1943, 77, 1394, 435,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 633, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1254, 463,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1558, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1560, -195, 1490, 66,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 1592, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1552, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1548, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), 1560, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1561, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), 1560, 0,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1592, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 1600, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1600, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1490, -74,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1560, 125, 1559, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1812, 449, 1429, -224, 1391, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2460, 490, 1110, -248, 1635, 270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2793, -162, 932, -209, 1931, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2135, -189, 690, -186, 1276, -170,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 432, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2413, 165, 1589, 206,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1898, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2466, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 3166, 109,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2047, 155,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 3070, 38,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 409, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 285, -24,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3264, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 3469, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3487, 18, 269, -15, 3091, 21,
	ftAnimEnd(),
};

/* Joint 29 */
u16 dFTLinkAnimCliffEscapeSlow2_joint29[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 971, 38,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 653, -355,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 223, -252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 147, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 5, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 454, 252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 727, 244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 936, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 890, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 450, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, -25,
	ftAnimEnd(),
	0x0000,
};

/* Joint 30 */
u16 dFTLinkAnimCliffEscapeSlow2_joint30[132] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -644, -310, -102, -3, 354, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 33), 343, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 34), -127, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1352, -313,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1582, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1039, 521,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -539, 261,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -515, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -482, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 24), -483, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -491, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -756, -363,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 343, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 2, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -117, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 43, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1265, -233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1223, 381,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -502, 519,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -115, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -108, 18, -26, -42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -206, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -441, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 66, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -67, -12,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -180, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -76, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -427, 13, -74, -6, -69, 6,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
