/* AnimJoint data for relocData file 398 (FTSamusAnimDollFall) */
/* 3504 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimDollFall_joint1[46];
extern u16 dFTSamusAnimDollFall_joint2[58];
extern u16 dFTSamusAnimDollFall_joint3[70];
extern u16 dFTSamusAnimDollFall_joint5[76];
extern u16 dFTSamusAnimDollFall_joint6[222];
extern u16 dFTSamusAnimDollFall_joint7[92];
extern u16 dFTSamusAnimDollFall_joint9[10];
extern u16 dFTSamusAnimDollFall_joint10[10];
extern u16 dFTSamusAnimDollFall_joint12[10];
extern u16 dFTSamusAnimDollFall_joint13[262];
extern u16 dFTSamusAnimDollFall_joint15[84];
extern u16 dFTSamusAnimDollFall_joint16[204];
extern u16 dFTSamusAnimDollFall_joint18[68];
extern u16 dFTSamusAnimDollFall_joint20[66];
extern u16 dFTSamusAnimDollFall_joint21[192];
extern u16 dFTSamusAnimDollFall_joint23[234];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTSamusAnimDollFall_joints[] = {
	(u32)dFTSamusAnimDollFall_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimDollFall_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimDollFall_joint3, /* [2] joint 3 */
	(u32)dFTSamusAnimDollFall_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTSamusAnimDollFall_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimDollFall_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimDollFall_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTSamusAnimDollFall_joint10, /* [9] joint 10 */
	(u32)dFTSamusAnimDollFall_joint12, /* [10] joint 12 */
	0x00000000, /* [11] NULL */
	(u32)dFTSamusAnimDollFall_joint13, /* [12] joint 13 */
	(u32)dFTSamusAnimDollFall_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTSamusAnimDollFall_joint16, /* [15] joint 16 */
	(u32)dFTSamusAnimDollFall_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTSamusAnimDollFall_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTSamusAnimDollFall_joint21, /* [20] joint 21 */
	(u32)dFTSamusAnimDollFall_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	0xFFFF0316, /* [23] END */
};

/* Joint 1 */
u16 dFTSamusAnimDollFall_joint1[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 205, -106, -698, 334, -168, 82, 204, -40, 7821, -9732, -345, 321,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, -2, 0, 8, 0, 2, 194, -81, 5377, -3128, -325, 138,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 79), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 19), 0, -19, 0, -544, 0, 33,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 60), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimDollFall_joint2[58] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 889, -35, 303, -9, 813, 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 183, -8, 27, -3, 541, -3, 0, 0, 2051, 2, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 19), 402, -1326,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 79), 183, 27, 541,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 19), 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 1453,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 60), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 20), 1750, -6,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 15), 288, -1904,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 25), 288,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTSamusAnimDollFall_joint3[70] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -87, 19, 242, -38, 227, -41,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), -61, 6, 144, -26, 40, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -666, -58, 466, 14, 125, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -1104, -3, 274, -17, -126, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -724, 27, 211, -13, -509, -91,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 35), -403, 5, 62, -2, -1565, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -61, 144, 40,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 50), -61, 144, 40,
	ftAnimBlock(0, 25),
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), -403, 62, -1565,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTSamusAnimDollFall_joint5[76] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 256, 0, 468, -65, -14, 55,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 19), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 556, 0, 0, -1, 0, 26, -95, 5, 221, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 537, -2,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 0, 0, 0, 18, 0, -115,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 14), -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -24, 0, 13, 0, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 35), -331, -5, 205, 3, -80, -1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 0, -38, -5, -141, -18,
	ftAnimSetValT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 50), -38, -141,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 50), 0,
	ftAnimBlock(0, 25),
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), -331, 205, -80,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimDollFall_joint6[222] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1268, 5, -2034, 29, -135, -47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1154, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1377, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -99, 31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -96, 188,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1187, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1433, -318, -1158, 104, 243, 420,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1151, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1824, -169, 744, 242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1772, 77, 727, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1669, 209, -1128, 5, 655, -138,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -536, 249,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1133, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 449, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 502, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -419, 80, 518, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -274, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 510, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 450, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -103, -514, -1091, -19, 245, -300,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1204, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1303, -585, -150, -197,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -118, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1274, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -990, 52,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1207, -1, -74, 44,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 27), -1530, 18, -320, 10,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -946, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 16), -1017, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1023, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -806, 94,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1501, 42, -301, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -1193, -19, -55, 10,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -714, 74,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 8), -638,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1218, -18, -40, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -1231, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), -30, 0,
	ftAnimBlock(0, 7),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -638,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -638, 0,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1231, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), -30, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -638, -1231,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTSamusAnimDollFall_joint7[92] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -375, -278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -836, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -999, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -480, 256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -313, 240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 156,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -5, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -62, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -270, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -333, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -862, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -861, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -538, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -521, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -689, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -688, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -356, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -356, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -356, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -356,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTSamusAnimDollFall_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 424, 0, 0,
	ftAnimBlock(0, 80),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTSamusAnimDollFall_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 480, 0,
	ftAnimBlock(0, 80),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimDollFall_joint12[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 80),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTSamusAnimDollFall_joint13[262] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -879, 156, 511, -47, -1668, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -723, 409, 464, -38, -1591, 278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -60, 443, 435, -205, -1112, 286,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1014, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 204, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 53, -282,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -129, -112,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -194, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1081, -75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1086, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 234, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 181, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -221, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -384, -11,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1080, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1044, 105,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 172, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 40, -117, -845, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -62, 363, -376, 301, -690, 404,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 767, 425, 218, 323, -37, 334,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 787, 18, 271, 50, -22, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 965, 57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 763, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 184, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1042, 142, 263, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1251, 383, 475, 385,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1808, 444, 771, -8, 1035, 447,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 544, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 2289, 2, 1534, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2283, -11, 1537, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1467, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 2178, 63,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 549, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 720, 21,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1496, 49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1741, 283,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2263, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2455, 300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2865, 384, 730, -16, 2133, 368,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 172, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 3381, 115, 2627, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3455, 55, 2705, 65,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 9), 3448,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 12), 2819,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 172, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 13), 172,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 12), 3448,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 2819,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 2819,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 172, 0, 2819, 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTSamusAnimDollFall_joint15[84] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -5, 5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -567, -333,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 116,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -5, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -295, -252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -504, -283,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -862, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -807, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -553, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -536, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -709, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -759, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -648, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -489, 79,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), -489,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -489,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), -489,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -489, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTSamusAnimDollFall_joint16[204] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 38, -103, 502, -11, 2910, -141,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 300, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -42, 85, 2761, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 106, 141, 2905, 149,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 255, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 3055, -20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 193, -87,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -374, -31,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 250, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 184, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3034, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 3021, 14,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -407, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 171, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 191, 68, 3019, -109,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 472, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 2646, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2535, -96,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 2080, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 510, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 112, -13,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 219, 44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), 340, 22,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2060, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 2387, 53,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 98, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 9, 26,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2446, 67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2636, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 365, 25,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 10), 241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 51, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 199, 40, 2886, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 133, -44, 2759, -102,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 6), 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2681, -63,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 12), 2578,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 173,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 16), 173,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 241,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 15), 241,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 2578,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), 2578,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 173, 0, 241, 0, 2578, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTSamusAnimDollFall_joint18[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 234, 250,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 806, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 765, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 404, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 321, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 493, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 515, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 26), 632, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 586, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 312, -221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 170, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 273, 84,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), 398,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 398,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 11), 398,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 398, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimDollFall_joint20[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 668, 45, -34, 0, 373, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 79), -34, 373,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 1237, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1309, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 2153, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2250, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2242, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2384, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 2865, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2895, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 19), 3565, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3602, 34,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 7), 3375,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 19), 3375,
	ftAnimBlock(0, 18),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -34, 0, 373, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTSamusAnimDollFall_joint21[192] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1987, 11, 1101, 54, -1975, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1544, 39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 1695, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1910, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1873, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -1898, 21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1504, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -1176, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1175, -45, 1746, -33, -1870, 81,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1553, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1266, -22, -1736, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1221, 46, -1946, -154,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1107, -54, -2232, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1530, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1061, -6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1213, -384, -2268, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -1684, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1876, -498,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2210, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -2190, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2122, 78,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1479, 35,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1059, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 1232, -2,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1445, 29, -1654, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -1298, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -1484, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1229, 20, -1479, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1345, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1305, -74, -1519, -164,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1461, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1807, -222,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 5), -2051,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1374, 111,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 2), -1238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1450, 52,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 5), 1450,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 19), -1238,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 18), -2051,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 15), 1450,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTSamusAnimDollFall_joint23[234] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 249, 154,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 670, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 683, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 386, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 271, -191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 169, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 4, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 31), 4, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 413, 311,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 628, 156,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 709,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 18), 709,
	ftAnimEnd(),
	0x0000, 0x2802, 0x0939, 0xFFB2, 0x380C, 0x06E0, 0x0845, 0x2805, 0x0014, 0x06DB, 0xFFF7, 0x2809, 0x001A, 0x084D, 0x0004, 0x2003, 0x0008, 0x0765, 0xFFC3, 0x2003, 0x0001, 0x0720, 0xFFB6, 0x2003, 0x0008, 0x0576, 0x0001, 0x2003, 0x0001, 0x057C, 0x000B, 0x2003, 0x0001, 0x058D, 0x0057, 0x2003, 0x0001, 0x062B, 0x001B, 0x2007, 0x0001, 0x05C3, 0xFF9C, 0x06CD, 0xFFEC, 0x2805, 0x0005, 0x04DC, 0xFF17, 0x2003, 0x0001, 0x0561, 0xFF64, 0x2003, 0x0001, 0x048A, 0xFD64, 0x2003, 0x0001, 0x0029, 0xFCCE, 0x2003, 0x0002, 0xFDBD, 0xFF78, 0x200F, 0x0001, 0xFD17, 0xFF2C, 0x03E2, 0xFF2B, 0x0853, 0x0020, 0x2805, 0x0007, 0x02AB, 0x0007, 0x200B, 0x0001, 0xFC14, 0xFF79, 0x088E, 0xFFFF, 0x200B, 0x0001, 0xFC08, 0x001E, 0x0851, 0xFFEB, 0x2809, 0x0006, 0x091F, 0x0050, 0x2003, 0x0005, 0xFD67, 0x0043, 0x2007, 0x0001, 0xFDAD, 0x004A, 0x02B4, 0x000A, 0x2803, 0x0007, 0x003C, 0xFFFA, 0x2805, 0x0009, 0x019C, 0xFFBC, 0x2009, 0x0001, 0x0980, 0x007B, 0x2009, 0x0005, 0x0CD7, 0x0059, 0x2009, 0x0001, 0x0D1D, 0x003A, 0x4009, 0x000F, 0x0DD0, 0x2003, 0x0001, 0x002A, 0xFFEA, 0x2803, 0x000C, 0x00E4, 0xFFFF, 0x0801, 0x0001, 0x2005, 0x0001, 0x0159, 0xFFC0, 0x4005, 0x0017, 0x0032, 0x0801, 0x000A, 0x2003, 0x0001, 0x00D1, 0xFFD8, 0x4003, 0x0005, 0xFFAD, 0x0801, 0x0001, 0x4009, 0x0017, 0x0DD0, 0x0801, 0x0004, 0x4003, 0x0013, 0xFFAD, 0x0801, 0x0007, 0x3805, 0x000C, 0x0032, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
