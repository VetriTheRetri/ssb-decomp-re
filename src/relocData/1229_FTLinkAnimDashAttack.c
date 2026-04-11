/* AnimJoint data for relocData file 1229 (FTLinkAnimDashAttack) */
/* 3376 bytes: 120-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimDashAttack_joint1[22];
extern u16 dFTLinkAnimDashAttack_joint2[48];
extern u16 dFTLinkAnimDashAttack_joint3[56];
extern u16 dFTLinkAnimDashAttack_joint5[50];
extern u16 dFTLinkAnimDashAttack_joint6[170];
extern u16 dFTLinkAnimDashAttack_joint7[76];
extern u16 dFTLinkAnimDashAttack_joint10[70];
extern u16 dFTLinkAnimDashAttack_joint11[154];
extern u16 dFTLinkAnimDashAttack_joint12[68];
extern u16 dFTLinkAnimDashAttack_joint13[40];
extern u16 dFTLinkAnimDashAttack_joint14[8];
extern u16 dFTLinkAnimDashAttack_joint17[42];
extern u16 dFTLinkAnimDashAttack_joint18[16];
extern u16 dFTLinkAnimDashAttack_joint19[18];
extern u16 dFTLinkAnimDashAttack_joint21[32];
extern u16 dFTLinkAnimDashAttack_joint22[120];
extern u16 dFTLinkAnimDashAttack_joint24[72];
extern u16 dFTLinkAnimDashAttack_joint26[128];
extern u16 dFTLinkAnimDashAttack_joint27[156];
extern u16 dFTLinkAnimDashAttack_joint29[282];

/* Joint pointer table (30 entries, 120 bytes) */
u32 dFTLinkAnimDashAttack_joints[] = {
	(u32)dFTLinkAnimDashAttack_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimDashAttack_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimDashAttack_joint3, /* [2] joint 3 */
	(u32)dFTLinkAnimDashAttack_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTLinkAnimDashAttack_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimDashAttack_joint7, /* [6] joint 7 */
	(u32)dFTLinkAnimDashAttack_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTLinkAnimDashAttack_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimDashAttack_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimDashAttack_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimDashAttack_joint14, /* [13] joint 14 */
	(u32)dFTLinkAnimDashAttack_joint17, /* [14] joint 17 */
	0x00000000, /* [15] NULL */
	0x00000000, /* [16] NULL */
	(u32)dFTLinkAnimDashAttack_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimDashAttack_joint19, /* [18] joint 19 */
	(u32)dFTLinkAnimDashAttack_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTLinkAnimDashAttack_joint22, /* [21] joint 22 */
	(u32)dFTLinkAnimDashAttack_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTLinkAnimDashAttack_joint26, /* [24] joint 26 */
	0x00000000, /* [25] NULL */
	(u32)dFTLinkAnimDashAttack_joint27, /* [26] joint 27 */
	(u32)dFTLinkAnimDashAttack_joint29, /* [27] joint 29 */
	0x00000000, /* [28] NULL */
	0xFFFF02E3, /* [29] END */
};

/* Joint 1 */
u16 dFTLinkAnimDashAttack_joint1[22] = {
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 1206,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 15), 1246, 476,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 201,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 15), 1488, 178,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 494,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 16), 2821,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimDashAttack_joint2[48] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 857, 11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 838, -134, 95, 105,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 756, -309, 90, 338,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 644, -43, 307, 249,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -18,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 22), 842, -64,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 14), 625, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 8), 491, 92,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 901, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTLinkAnimDashAttack_joint3[56] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 100, -161, -131,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 42, -10, -232, -12, -62, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 19, 0, -259, -1, -36, 1,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), -259, 0, -36, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), 19, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 19, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -3, 16, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -107, 276, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTLinkAnimDashAttack_joint5[50] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 780, 464, 599,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 864, -33, 351, -26, 622, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 515, -14, 255, -3, 29, -24,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), 514, 2, 256, 7, 29, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 576, -16, 474, -5, 451, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 259, 166, 56,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimDashAttack_joint6[170] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1905, -123, -1146, 34, 1531, 141,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 1250, -100, 1981, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -1267, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1419, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1161, 226, -1575, 133, 1871, -385,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1703, -94, -1153, -150, 1210, -705,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 973, -365, -1876, -361, 460, -375,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 972, 0, -1876, 0, 459, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -1876, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 972, 0, 459, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 19), 972, 0, 459, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 973, 64, -1876, -19, 460, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1101, 453, -1916, 236, 558, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1879, 516, -1402, 426, 720, 42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -875, 198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2134, 58, 644, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1997, 131, 822, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2396, 181, -666, 190, 462, -139,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -366, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2360, 0, 543, 50,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 3208, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 540, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -385, -25, 499, -75,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -390, 37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -47, -73,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3368, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3464, 64, -347, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3497, 32, -326, 20, -86, -38,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTLinkAnimDashAttack_joint7[76] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -181,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -848, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1005, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1033, 380,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -244, 394,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -244, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -244, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -244, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -244, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -667, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -766, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -765, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -625, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -569, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -644, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -617, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -537, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, 37,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimDashAttack_joint10[70] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 23, 52, 229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 103, -27, 369, 17, 72, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -169, 90, 174, -502, 750, 197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 285, 19, -634, -35, 467, -12,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 285, 0, -634, 0, 467, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -8, 20, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 285, 0, -634, 0, 467, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -8, 20, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 150, -17, -56, 40, 522, -24,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 4, 7, 76,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimDashAttack_joint11[154] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2056, 3, 1339, 4, 1633, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 2045, -14, 1367, 39, 1563, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2026, -165, 1425, 141, 1558, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1713, -358, 1651, 146, 1313, -391,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1310, -202, 1718, 33, 775, -269,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1716, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1308, 0, 774, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1308, 0, 774, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 19), 1310, 0, 775, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1716, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 15), 1718, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1310, 20, 1718, -23, 775, 44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1385, -174,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1688, 264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 936, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1003, 103,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1459, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1210, -124,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1048, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1997, 254,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 2069, -41,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1543, 81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1617, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1014, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1472, 24,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1589, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2036, -22, 1567, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2024, -11, 1484, 12, 1557, -9,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTLinkAnimDashAttack_joint12[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -884, 29,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -675, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -678, -226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1025, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -512, 256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -512, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), -512, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -512, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1077, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1015, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -482, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -519, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -634, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -603, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, 15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimDashAttack_joint13[40] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 52, -209, 55, 0, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 421, 26, 232, 27, 300, 18,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 421, 232, 300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 421, -17, 232, -18, 300, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 0, -209, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTLinkAnimDashAttack_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 46),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimDashAttack_joint17[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -385, -339,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 1354, -13, 102, 19, 672, 40,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), 1354, 0, 102, 0, 672, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 10, -19, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 1457, 21, -356, -40, 174, -63,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1697, -536, -339,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimDashAttack_joint18[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -163, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -19, -90, -39,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), 0, -163, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTLinkAnimDashAttack_joint19[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -247, -199, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -250, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -89, -39,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), 0, -199, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLinkAnimDashAttack_joint21[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -21,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 72, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -17, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -191, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 70, 13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 7), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTLinkAnimDashAttack_joint22[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 45, -68, -330, -1, -756, 109,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -116, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), -368, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -647, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -485, 83,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -498, -25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -108, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -55, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -531, -47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -790, -35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 50, 82,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 99, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -798, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -711, 25,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 95, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 63, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 59, 3, -689, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 152, -51, -709, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -366, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -337, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 97, -54, -356, -15, -635, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -237, -7, -248, 8, 96, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -242, -4, -244, 4, 108, 12,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTLinkAnimDashAttack_joint24[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 581, -136,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 445, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 240, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 269, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 294, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 402, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 671, 212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 827, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 809, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 837, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 878, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1139, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1177, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 409, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 333, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 273, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, -24,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTLinkAnimDashAttack_joint26[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 425, 16, -282, -7, 267, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 500, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -130, 68, 236, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -63, 55, 222, -81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -24, -41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 190, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 481, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 488, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -37, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -87, -49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -491, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 479, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 375, 8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 189, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 110, 2,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -490, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -501, 35,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 383, 6, 109, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -157, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 327, 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -460, 45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -48, 23,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -160, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 329, 1, -161, 0, -34, 13,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTLinkAnimDashAttack_joint27[156] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 17, 0, 161, 4, 40, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -64, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 251, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 18, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -59, -55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -4, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -92, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 11, 30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 116, 83,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 297, 100,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 47, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 125, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 421, 65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 450, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 253, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 292, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 464, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 598, 14,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 128, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 119, -34,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 607, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 584, -19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 293, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 154, -13,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 560, -85,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 145, -107,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 91, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 262, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 139, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 269, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 45, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -131, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, 7, 269, 0, -125, 6,
	ftAnimEnd(),
};

/* Joint 29 */
u16 dFTLinkAnimDashAttack_joint29[282] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 677, -23,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 688, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 772, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 801, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 659, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 466, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 399, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 198, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 455, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 583, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 445, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, -20,
	ftAnimEnd(),
	0x0000, 0x200E, 0xF5BD, 0xFFFC, 0xFA4B, 0xFFFD, 0x070E, 0x000C, 0x2809, 0x0005, 0x06D4, 0xFF9E, 0x2805, 0x0009, 0xF981, 0xFFF9, 0x2003, 0x0004, 0xF59F, 0x000B, 0x2003, 0x0001, 0xF5BB, 0x0057, 0x200B, 0x0001, 0xF64E, 0x0150, 0x0651, 0xFEC8, 0x200B, 0x0001, 0xF85C, 0x0113, 0x0463, 0xFEDD, 0x200B, 0x0001, 0xF876, 0x000D, 0x040B, 0xFFDE, 0x2809, 0x0005, 0x04E1, 0x0029, 0x2003, 0x0001, 0xF877, 0x0000, 0x2803, 0x0009, 0xF973, 0x0047, 0x2005, 0x0001, 0xF979, 0xFFF8, 0x2805, 0x000B, 0xF8E3, 0x0013, 0x0801, 0x0003, 0x2009, 0x0001, 0x0512, 0x003A, 0x2809, 0x0008, 0x0851, 0x0037, 0x0801, 0x0004, 0x2003, 0x0001, 0xF9BC, 0x0044, 0x2803, 0x0007, 0xFB14, 0x0026, 0x0801, 0x0002, 0x2005, 0x0001, 0xF8F7, 0x0011, 0x2805, 0x0008, 0xF91E, 0xFFF6, 0x2009, 0x0001, 0x087F, 0x0026, 0x2809, 0x0006, 0x08C9, 0x0000, 0x0801, 0x0003, 0x2003, 0x0001, 0xFB35, 0x0018, 0x2803, 0x0005, 0xFA86, 0xFF66, 0x0801, 0x0002, 0x2009, 0x0001, 0x08C4, 0xFFE2, 0x2809, 0x0002, 0x0800, 0xFF0F, 0x2005, 0x0001, 0xF906, 0xFFDE, 0x2805, 0x0002, 0xF8B6, 0x0018, 0x0801, 0x0001, 0x200B, 0x0001, 0xF9BC, 0xFF37, 0x06A9, 0xFE96, 0x2803, 0x0002, 0xF8AA, 0xFFDB, 0x200D, 0x0001, 0xF90A, 0x004E, 0x052B, 0xFED9, 0x2805, 0x0007, 0xF9D2, 0x0011, 0x2009, 0x0001, 0x0459, 0xFF76, 0x2809, 0x0004, 0x0453, 0x003B, 0x2003, 0x0001, 0xF8A8, 0xFFF7, 0x2003, 0x0002, 0xF881, 0xFFEA, 0x2003, 0x0001, 0xF869, 0x0073, 0x200B, 0x0001, 0xF968, 0xFFE8, 0x0498, 0x0049, 0x2809, 0x0005, 0x05F1, 0x001F, 0x2003, 0x0001, 0xF839, 0xFF52, 0x2007, 0x0001, 0xF80B, 0xFFDE, 0xF9E3, 0x000E, 0x2805, 0x0003, 0xFA00, 0x0004, 0x2003, 0x0001, 0xF7F5, 0xFFF3, 0x2003, 0x0002, 0xF7FE, 0x000D, 0x200F, 0x0001, 0xF80C, 0x000E, 0xFA02, 0x0002, 0x0602, 0x0011, 0x0000,
};
