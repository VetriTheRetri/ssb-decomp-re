/* AnimJoint data for relocData file 1209 (FTLinkAnimItemThrowDash) */
/* 3472 bytes: 120-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimItemThrowDash_joint1[18];
extern u16 dFTLinkAnimItemThrowDash_joint2[34];
extern u16 dFTLinkAnimItemThrowDash_joint3[46];
extern u16 dFTLinkAnimItemThrowDash_joint5[38];
extern u16 dFTLinkAnimItemThrowDash_joint6[98];
extern u16 dFTLinkAnimItemThrowDash_joint7[40];
extern u16 dFTLinkAnimItemThrowDash_joint10[24];
extern u16 dFTLinkAnimItemThrowDash_joint11[224];
extern u16 dFTLinkAnimItemThrowDash_joint12[108];
extern u16 dFTLinkAnimItemThrowDash_joint13[40];
extern u16 dFTLinkAnimItemThrowDash_joint14[8];
extern u16 dFTLinkAnimItemThrowDash_joint17[24];
extern u16 dFTLinkAnimItemThrowDash_joint18[34];
extern u16 dFTLinkAnimItemThrowDash_joint19[26];
extern u16 dFTLinkAnimItemThrowDash_joint21[18];
extern u16 dFTLinkAnimItemThrowDash_joint22[180];
extern u16 dFTLinkAnimItemThrowDash_joint24[64];
extern u16 dFTLinkAnimItemThrowDash_joint26[170];
extern u16 dFTLinkAnimItemThrowDash_joint27[202];
extern u16 dFTLinkAnimItemThrowDash_joint29[64];
extern u16 dFTLinkAnimItemThrowDash_joint30[216];

/* Joint pointer table (30 entries, 120 bytes) */
u32 dFTLinkAnimItemThrowDash_joints[] = {
	(u32)dFTLinkAnimItemThrowDash_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimItemThrowDash_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimItemThrowDash_joint3, /* [2] joint 3 */
	(u32)dFTLinkAnimItemThrowDash_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTLinkAnimItemThrowDash_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimItemThrowDash_joint7, /* [6] joint 7 */
	(u32)dFTLinkAnimItemThrowDash_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTLinkAnimItemThrowDash_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimItemThrowDash_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimItemThrowDash_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimItemThrowDash_joint14, /* [13] joint 14 */
	(u32)dFTLinkAnimItemThrowDash_joint17, /* [14] joint 17 */
	0x00000000, /* [15] NULL */
	0x00000000, /* [16] NULL */
	(u32)dFTLinkAnimItemThrowDash_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimItemThrowDash_joint19, /* [18] joint 19 */
	(u32)dFTLinkAnimItemThrowDash_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTLinkAnimItemThrowDash_joint22, /* [21] joint 22 */
	(u32)dFTLinkAnimItemThrowDash_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTLinkAnimItemThrowDash_joint26, /* [24] joint 26 */
	0x00000000, /* [25] NULL */
	(u32)dFTLinkAnimItemThrowDash_joint27, /* [26] joint 27 */
	(u32)dFTLinkAnimItemThrowDash_joint29, /* [27] joint 29 */
	0x00000000, /* [28] NULL */
	(u32)dFTLinkAnimItemThrowDash_joint30, /* [29] joint 30 */
};

/* Joint 1 */
u16 dFTLinkAnimItemThrowDash_joint1[18] = {
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 705,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 8), 829, 482,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 12), 1206, 341,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 20), 2195,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimItemThrowDash_joint2[34] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 857, 11,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 888, -77, 30, 259,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 779, -125, 271, 378,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 653, 10, 739, -139,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 809, 98, -128, -295,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 901, 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTLinkAnimItemThrowDash_joint3[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 100, -161, -131,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -140, -27, -365, -42, 91, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -67, 59, -415, 78, 124, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 277, 24, 187, 43, 40, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 277, -13, 187, 3, 40, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -107, 276, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimItemThrowDash_joint5[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 780, 464, 599,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 73, -13, -374, -30, -59, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 657, 25, 187, 33, 152, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 530, -13, 234, 0, 232, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 259, 166, 56,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimItemThrowDash_joint6[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1901, -136, -1144, 62, -1681, 141,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1145, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1707, 4, -1550, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1775, 52, -1758, -218,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2126, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1650, -59,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1207, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1035, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2085, 58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1670, 30,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1602, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), 1874, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1030, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), -1280, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1638, 31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), -1693, -2,
	ftAnimBlock(0, 22),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1880, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1887, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1888, 0, -1281, -1, -1694, -1,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTLinkAnimItemThrowDash_joint7[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -7, -256,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -472, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -388, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -321, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -283, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -486, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -503, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -501, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimItemThrowDash_joint10[24] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 23, 52, 229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 4, 0, 7, -1, 76, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 4, 7, 76,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 4, 7, 76,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTLinkAnimItemThrowDash_joint11[224] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1160, 71, 1339, -26, 1633, 71,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1165, -155,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -130, 548,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1803, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1771, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 972, -65, 2029, 415,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 494, 504, 1034, 91, 2603, 470,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 3228, 336,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 879, 437, 1155, 282,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1369, 272, 1598, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1424, 45, 1500, -78, 3643, 351,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 4083, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1622, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1459, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1229, -32,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4087, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 4086, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1200, -22, 1669, 54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 999, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 1854, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1861, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1751, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 917, -142, 1652, -305, 4072, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 714, 405, 1140, -329, 3840, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1727, 685, 994, 68, 4345, 53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1191, -238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1277, 81, 3947, -294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1157, -97, 3756, -302,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2909, -278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1082, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1259, 194,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1555, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1103, -53, 2785, -74,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1133, 201, 2964, 367,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1254, -296,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 635, -230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1487, -193, 3496, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 746, -432, 3041, -189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 622, -96, 501, -123, 3117, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 424, -16, 138, -31, 3170, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 416, -8, 123, -14, 3166, -4,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTLinkAnimItemThrowDash_joint12[108] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -884, -21,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -787, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -571, 213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -361, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -515, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -202, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -349, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -206, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -186, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -7, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -251, -210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -429, -309,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -871, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -695, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1113, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1182, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -922, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1070, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -927, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -831, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -707, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -627, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, 39,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimItemThrowDash_joint13[40] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -209, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 0, 0, -209, 0, 0, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 12, 37, -227, 0, 190, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 447, 0, -213, 1, 37, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -209, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTLinkAnimItemThrowDash_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimItemThrowDash_joint17[24] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -536, -339,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1697, -1, -536, 12, -339, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), 1654, -149, -275,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 1697, -536, -339,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTLinkAnimItemThrowDash_joint18[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -163, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -22, 465, 9, 0, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -181, -53, -90, -95, 94, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -373, 5, -205, -2, 171, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 28), 0, -163, 0,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTLinkAnimItemThrowDash_joint19[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -247, -199, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 92, 0, -199, 13, 0, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -242, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -91, -58,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 32), 0, -199, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLinkAnimItemThrowDash_joint21[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -21, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 35), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTLinkAnimItemThrowDash_joint22[180] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1654, -72, -1277, 17, 851, 153,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1373, -182, -1297, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1005, 247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1345, 318,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1738, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1217, -102, -1452, -125,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1279, 367,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1548, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1267, 14, 1397, -363,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1904, 282, -1518, -134, 1012, -218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1843, -97, -1536, -16, 960, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 941, -108,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -1628, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1710, -100,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1624, 51,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 801, -103,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 759, 26,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1672, 38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1702, -15,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 789, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 957, 66,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1689, 77, -1633, -74,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1929, 25, -1814, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1017, 44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1350, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1909, -44, -1794, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1366, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 1513, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1484, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1377, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1441, 91,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1689, 48,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1358, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1361, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1366, -11, -1364, -3, 1717, 28,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTLinkAnimItemThrowDash_joint24[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 581, 28,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 554, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 404, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 357, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 798, 252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 679, -246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 369, -182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 542, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 640, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 620, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 588, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 441, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 360, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 285, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, -35,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTLinkAnimItemThrowDash_joint26[170] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1183, 24, 1891, -36, 1875, -121,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1127, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1854, -156, 1754, -213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1578, -129, 1449, -180,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1624, 17, 1361, -49,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1135, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -963, -111, 1631, 169, 1295, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1358, -154, 1963, 147, 1651, 232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1271, 100, 1926, -34, 1759, 120,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1887, -52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1502, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1156, 99,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1063, -56,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1788, -80,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 1454, 84,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1122, -53, 1515, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 11), -1124, 24, 1723, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1101, -49, 1756, 124,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1295, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1973, 155, 1574, 120,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1608, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2067, 58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1794, -19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1219, 91,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1119, -46,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1535, -59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1557, 24,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1168, -46, 1780, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -1271, -15, 1770, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1279, -8, 1770, 0, 1573, 16,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTLinkAnimItemThrowDash_joint27[202] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1591, -37, 1447, -2, -1568, -129,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -1623, 156, 1437, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1697, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1948, -132,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1835, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1315, 254, 1337, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1115, 4, 1464, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1306, -312, 1417, -14, -1914, -84,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1935, 56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1473, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1739, -253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1813, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1401, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1891, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1418, 104,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1356, 39, 1509, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1013, 56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1331, -74,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1312, 102,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1002, -57,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -964, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -933, -57,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1239, -106,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 890, 44,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1035, -462, -1108, -474,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1858, -591, -1952, -626,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2218, -193, 1059, 155, -2361, -263,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1208, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -2213, 48, -2600, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2146, 78, -2746, -110,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2535, 209,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1476, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1105, -89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1327, 21,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2322, 188,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1748, 28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1423, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1340, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1337, 3, 1338, 11, -1733, 15,
	ftAnimEnd(),
};

/* Joint 29 */
u16 dFTLinkAnimItemThrowDash_joint29[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 677, 118,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 885, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 694, -273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 338, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 433, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 588, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 596, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 775, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 750, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 871, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 987, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1103, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1019, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 439, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, -14,
	ftAnimEnd(),
	0x0000,
};

/* Joint 30 */
u16 dFTLinkAnimItemThrowDash_joint30[216] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 589, 135, -1461, -19, -1410, -37,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1504, 92, -1470, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 724, 179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 947, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 754, -303, -1295, 223, -1382, 296,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -939, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 340, -47, -876, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 659, 469, -1245, -536,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1278, 319, -1254, -252, -1949, -400,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1654, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1298, 0, -2046, -78,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2254, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1280, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1187, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1017, -370, -1680, -31, -2204, 199,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1395, 290,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1454, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 446, -295,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 427, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 560, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1273, 77,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1195, -10,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 527, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 671, 166,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1426, 27, -1217, -33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1362, 52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1496, -119,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 856, 151,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 849, -71,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1296, 42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1651, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1625, -76,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1452, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 811, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1188, 29,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1463, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1530, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1205, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1184, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1668, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1676, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1180, -4, -1534, -3, -1678, -2,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
