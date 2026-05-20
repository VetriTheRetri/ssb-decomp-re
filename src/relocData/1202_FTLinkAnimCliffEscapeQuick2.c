/* AnimJoint data for relocData file 1202 (FTLinkAnimCliffEscapeQuick2) */
/* 2768 bytes: 120-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimCliffEscapeQuick2_joint1[16];
extern u16 dFTLinkAnimCliffEscapeQuick2_joint2[52];
extern u16 dFTLinkAnimCliffEscapeQuick2_joint3[60];
extern u16 dFTLinkAnimCliffEscapeQuick2_joint5[82];
extern u16 dFTLinkAnimCliffEscapeQuick2_joint6[140];
extern u16 dFTLinkAnimCliffEscapeQuick2_joint7[54];
extern u16 dFTLinkAnimCliffEscapeQuick2_joint10[34];
extern u16 dFTLinkAnimCliffEscapeQuick2_joint11[140];
extern u16 dFTLinkAnimCliffEscapeQuick2_joint12[64];
extern u16 dFTLinkAnimCliffEscapeQuick2_joint13[26];
extern u16 dFTLinkAnimCliffEscapeQuick2_joint14[18];
extern u16 dFTLinkAnimCliffEscapeQuick2_joint17[26];
extern u16 dFTLinkAnimCliffEscapeQuick2_joint18[26];
extern u16 dFTLinkAnimCliffEscapeQuick2_joint19[18];
extern u16 dFTLinkAnimCliffEscapeQuick2_joint21[34];
extern u16 dFTLinkAnimCliffEscapeQuick2_joint22[118];
extern u16 dFTLinkAnimCliffEscapeQuick2_joint24[52];
extern u16 dFTLinkAnimCliffEscapeQuick2_joint26[78];
extern u16 dFTLinkAnimCliffEscapeQuick2_joint27[134];
extern u16 dFTLinkAnimCliffEscapeQuick2_joint29[60];
extern u16 dFTLinkAnimCliffEscapeQuick2_joint30[92];

/* Joint pointer table (30 entries, 120 bytes) */
AObjEvent32 * dFTLinkAnimCliffEscapeQuick2_joints[] = {
	(AObjEvent32 *)dFTLinkAnimCliffEscapeQuick2_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTLinkAnimCliffEscapeQuick2_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLinkAnimCliffEscapeQuick2_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTLinkAnimCliffEscapeQuick2_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffEscapeQuick2_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLinkAnimCliffEscapeQuick2_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTLinkAnimCliffEscapeQuick2_joint10, /* [7] joint 10 */
	NULL, /* [8] NULL */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffEscapeQuick2_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLinkAnimCliffEscapeQuick2_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLinkAnimCliffEscapeQuick2_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLinkAnimCliffEscapeQuick2_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTLinkAnimCliffEscapeQuick2_joint17, /* [14] joint 17 */
	NULL, /* [15] NULL */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffEscapeQuick2_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTLinkAnimCliffEscapeQuick2_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTLinkAnimCliffEscapeQuick2_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffEscapeQuick2_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTLinkAnimCliffEscapeQuick2_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffEscapeQuick2_joint26, /* [24] joint 26 */
	NULL, /* [25] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffEscapeQuick2_joint27, /* [26] joint 27 */
	(AObjEvent32 *)dFTLinkAnimCliffEscapeQuick2_joint29, /* [27] joint 29 */
	NULL, /* [28] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffEscapeQuick2_joint30, /* [29] joint 30 */
};

/* Joint 1 */
u16 dFTLinkAnimCliffEscapeQuick2_joint1[16] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 1, 0, 1892,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 28), 3600, 188,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 28), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTLinkAnimCliffEscapeQuick2_joint2[52] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 395, 117, -447, 582,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 597, 310, -17, 321,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 864, 53, 39, 36,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 676, -731, 37, -15,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 133, -501, 23, -23,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 175, 207, 14, -22,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 263, 808, 9, -16,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 901, 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTLinkAnimCliffEscapeQuick2_joint3[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -117, 178, -48, 4, 0, -6,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 3), -42,
	_FT_ANIM_CMD(11, FT_ANIM_ROTZ, 1), 2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 495, 184, -38, 9,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 804, 61, 0, 7, 0, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 804, 32,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1033, 84,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 22), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 1495, 114, 0, 15,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 14), 3109, 276,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTLinkAnimCliffEscapeQuick2_joint5[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 513, -69, 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -4, -1,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 483, -127,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -125, -121, 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -125, 109,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 651, 77,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 651, 0, 0, 2,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), -15, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 580, 8, 96, 12, 33, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 747, -51, 139, 11, 47, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 259, 166, 56,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTLinkAnimCliffEscapeQuick2_joint6[140] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 10, 0, -6, -8, -584, -220,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1252, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 90, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -35, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -39, -61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -580, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1235, 31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1314, 12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 154, 73,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 671, 222,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -744, -190,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1214, -258,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1278, 140,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -770, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1478, -113,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1210, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 932, 215,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1731, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -782, -71,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1636, -156,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1169, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1340, -5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1850, 96,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1861, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1770, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1636, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1279, 48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1235, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1643, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1884, 22, -1269, -33, -1684, -40,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTLinkAnimCliffEscapeQuick2_joint7[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -474, -402,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -805, -211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1026, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1127, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -225, 234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -276, -221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -450, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -541, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -520, 20,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTLinkAnimCliffEscapeQuick2_joint10[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 690, -28, -126, 0, -32, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 119, -33, -107, 6, 319, 5,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -153, -7, 26, 7, 92, -15,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 4, 7, 76,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTLinkAnimCliffEscapeQuick2_joint11[140] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -408, 22, 173, 0, -859, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 82, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 410, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1131, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1240, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1254, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1127, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1228, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1205, 41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1041, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 60, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 187, 310,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 542, 82, -829, 392,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 683, 376, 574, -111, -255, 457,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 880, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 319, -271, 85, 245,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -57, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 234, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 615, -230, 453, 129,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 139, -63,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 341, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 10, 57,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 140, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -5, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 381, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 418, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 79, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 416, -1, 122, 42, -49, -43,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTLinkAnimCliffEscapeQuick2_joint12[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -728, 39,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -367, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -250, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -7, -265,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -537, -340,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -730, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -771, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1172, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1140, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -404, 227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -199, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -508, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -596, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -605, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -588, 17,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimCliffEscapeQuick2_joint13[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -261, 14, 49, -7, 311, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 62, 8, -130, -8, 158, -10,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2,
	ftAnimBlock(0, 16),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 0, -209, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTLinkAnimCliffEscapeQuick2_joint14[18] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 3, -804, 0, 804, -3,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 937, -804, 670,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2,
	ftAnimBlock(0, 28),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimCliffEscapeQuick2_joint17[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1569, 2, -22, 46, -1296, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 1605, 4, 588, -17, -1015, 31,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2,
	ftAnimBlock(0, 6),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), 1697, -536, -339,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTLinkAnimCliffEscapeQuick2_joint18[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0, -2, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 27), 0, 0, -83, -5, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2,
	ftAnimBlock(0, 25),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, -163, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTLinkAnimCliffEscapeQuick2_joint19[18] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0, -5, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 0, -199, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2,
	ftAnimBlock(0, 28),
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimCliffEscapeQuick2_joint21[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 7, 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -202, -8, 0, 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -211, 8, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTLinkAnimCliffEscapeQuick2_joint22[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1452, -156, -1369, 33, -2441, 293,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1808, 23, -1487, 17, -1603, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1777, 31, -1461, 20, -1681, -76,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 11), -1526, -11, -1368, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -2198, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2249, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1873, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1538, 125, -1322, -16, -1733, -68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1523, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -845, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2009, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2005, 50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1805, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1434, 115,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1234, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -850, -110,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1503, -162,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1296, -26, -1832, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1316, -37, -1604, 106,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1650, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1775, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1847, -72, -1361, -44, -1505, 99,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTLinkAnimCliffEscapeQuick2_joint24[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1014, -118,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 417, -223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 233, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 545, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 660, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1277, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1257, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1428, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1472, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 753, -257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 485, -245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 262, -223,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTLinkAnimCliffEscapeQuick2_joint26[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 384, 95, -77, 12, -289, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), -283, -37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), -238, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 463, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 470, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 455, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 523, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1000, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 973, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 488, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 587, -184, -318, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -223, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 119, -225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 136, 55, -219, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 331, 50, -73, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 331, 0, -163, 59, -35, 37,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTLinkAnimCliffEscapeQuick2_joint27[134] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -82, 64, 88, 32, -866, 230,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 46, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -177, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -96, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -175, -78,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -707, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 28, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -46, 90,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -695, 85,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2, 234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -179, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -60, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 61, 91,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 229, -34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 46, 1, 212, -81,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -154, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -160, -319,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -427, -245,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -806, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -267, -109,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -374, 128,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 205, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 371, -23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -183, 203, -611, 199,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 204, 118, -215, 139,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 318, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 269, 64, 271, -47, -127, 88,
	ftAnimEnd(),
};

/* Joint 29 */
u16 dFTLinkAnimCliffEscapeQuick2_joint29[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 885, -48,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 665, -206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 423, -207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 295, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 423, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1186, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1178, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 729, -307,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 404, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 723, 230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 864, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 831, -217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 581, -201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 429, -152,
	ftAnimEnd(),
	0x0000,
};

/* Joint 30 */
u16 dFTLinkAnimCliffEscapeQuick2_joint30[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -237, -16, 125, -14, -286, 45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -33, 54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -58, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -430, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -412, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -430, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -590, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -560, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -577, 8, 21, 53,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -447, 30, 152, 27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -80, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -62, -13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -454, 41, 173, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -373, -43, -148, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -450, -27, -160, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -429, 12, -113, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -426, 2, -73, -11, -71, 42,
	ftAnimEnd(),
};
