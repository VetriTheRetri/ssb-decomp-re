/* AnimJoint data for relocData file 1793 (FTNessAnimDownSpecialStartAir) */
/* 2064 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimDownSpecialStartAir_joint1[20];
extern u16 dFTNessAnimDownSpecialStartAir_joint2[28];
extern u16 dFTNessAnimDownSpecialStartAir_joint4[10];
extern u16 dFTNessAnimDownSpecialStartAir_joint5[104];
extern u16 dFTNessAnimDownSpecialStartAir_joint6[24];
extern u16 dFTNessAnimDownSpecialStartAir_joint7[10];
extern u16 dFTNessAnimDownSpecialStartAir_joint8[42];
extern u16 dFTNessAnimDownSpecialStartAir_joint10[10];
extern u16 dFTNessAnimDownSpecialStartAir_joint11[108];
extern u16 dFTNessAnimDownSpecialStartAir_joint12[56];
extern u16 dFTNessAnimDownSpecialStartAir_joint13[36];
extern u16 dFTNessAnimDownSpecialStartAir_joint15[10];
extern u16 dFTNessAnimDownSpecialStartAir_joint16[94];
extern u16 dFTNessAnimDownSpecialStartAir_joint18[32];
extern u16 dFTNessAnimDownSpecialStartAir_joint19[68];
extern u16 dFTNessAnimDownSpecialStartAir_joint21[46];
extern u16 dFTNessAnimDownSpecialStartAir_joint22[88];
extern u16 dFTNessAnimDownSpecialStartAir_joint24[44];
extern u16 dFTNessAnimDownSpecialStartAir_joint25[94];
extern u16 dFTNessAnimDownSpecialStartAir_joint26[56];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTNessAnimDownSpecialStartAir_joints[] = {
	(u32)dFTNessAnimDownSpecialStartAir_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimDownSpecialStartAir_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimDownSpecialStartAir_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTNessAnimDownSpecialStartAir_joint5, /* [4] joint 5 */
	(u32)dFTNessAnimDownSpecialStartAir_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimDownSpecialStartAir_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimDownSpecialStartAir_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimDownSpecialStartAir_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTNessAnimDownSpecialStartAir_joint11, /* [10] joint 11 */
	(u32)dFTNessAnimDownSpecialStartAir_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimDownSpecialStartAir_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimDownSpecialStartAir_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTNessAnimDownSpecialStartAir_joint16, /* [15] joint 16 */
	(u32)dFTNessAnimDownSpecialStartAir_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTNessAnimDownSpecialStartAir_joint19, /* [18] joint 19 */
	(u32)dFTNessAnimDownSpecialStartAir_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTNessAnimDownSpecialStartAir_joint22, /* [21] joint 22 */
	(u32)dFTNessAnimDownSpecialStartAir_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTNessAnimDownSpecialStartAir_joint25, /* [24] joint 25 */
	(u32)dFTNessAnimDownSpecialStartAir_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTNessAnimDownSpecialStartAir_joint1[20] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 242,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 12), 242, -73,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 1), 122,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 2), 242,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTNessAnimDownSpecialStartAir_joint2[28] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 229, 70, -51,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 229, 70, -51,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 569, -602, -595,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 569, -602, -595,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTNessAnimDownSpecialStartAir_joint4[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 148, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 15),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimDownSpecialStartAir_joint5[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -192, 465, -659, 154, 3060, -486,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 272, 247, -505, 247, 2574, -333,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 301, -58, -164, 261, 2392, -116,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 79, 0, 2326, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 71, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 71, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 72, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 79, 0, 2326, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -111, -318, 2214, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 72, 181,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 663, -146,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -558, -285, 2167, 248,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -717, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 141, 9, 2711, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 682, 96, 2152, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 335, -270, -714, 17, 2507, 279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 141, -193, -682, 32, 2711, 203,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimDownSpecialStartAir_joint6[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -479, 221,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -9, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTNessAnimDownSpecialStartAir_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 268, 143, 0, 0,
	ftAnimBlock(0, 15),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimDownSpecialStartAir_joint8[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 194, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 160, 5, -21, -2, 108, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 247, -75, -21, 1, 108, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -440, -66, 688, 0, -403, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -466, 4, 688, 0, -403, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTNessAnimDownSpecialStartAir_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 15),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimDownSpecialStartAir_joint11[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2137, -9, 966, 151, 1742, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1556, -247,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1458, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2128, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1892, -212,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1687, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1254, -241,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1058, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1463, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1476, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1056, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1695, -2, 1478, 89, 1057, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1683, 247, 1655, -101, 1373, 293,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2190, 528, 1275, -498, 1644, 369,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2739, 58, 658, -414, 2113, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2308, -158, 447, -86, 1742, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2422, 215, 485, 105, 1817, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2739, 317, 658, 172, 2113, 295,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimDownSpecialStartAir_joint12[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -454, -254,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -880, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -675, 220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -439, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -421, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -390, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -395, -351,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1094, -338,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1073, 378,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -336, 536,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -336, -327,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTNessAnimDownSpecialStartAir_joint13[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -170, -63, 267,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -503, 142, 429,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -503, 142, 429,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -295, 414, 679,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -430, 58, -130,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), -430, 58, -130,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTNessAnimDownSpecialStartAir_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 15),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimDownSpecialStartAir_joint16[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1660, -11, -1253, -35, 933, -49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1397, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1885, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 764, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 775, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 791, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1392, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1379, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1903, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1628, 420,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 793, -170,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 170, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1188, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1078, 260, -1171, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1107, 14, -992, 65, 309, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1049, 15, -1040, -11, 242, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1075, -28, -1015, 24, 273, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1107, -31, -992, 23, 309, 35,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimDownSpecialStartAir_joint18[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 386, 35,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 442, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 445, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1102, 223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1197, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1225, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1197, -27,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTNessAnimDownSpecialStartAir_joint19[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1600, 54, 1573, -31, -1583, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1328, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1434, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1833, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1793, -42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1642, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1314, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1382, 155,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1426, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1571, 17,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1650, -13, 1585, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1617, -1, 1636, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1615, -1, 1634, -1, -1552, 18,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimDownSpecialStartAir_joint21[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -476, 178, 112,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -644, -18, 3, -19, 69, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -644, 75, 3, 57, 69, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -40, 104, 463, 89, 519, 103,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -225, 361, 483,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -40, 1, 463, 0, 519, 2,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimDownSpecialStartAir_joint22[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -45, 21, 433, -29, -797, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 167, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -799, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 293, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 296, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 297, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 165, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 166, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 165, -116, -796, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -208, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 413, 10, -743, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 318, -34, -448, 266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 344, 10, 50, 148, -211, 97,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 342, 2, 69, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -253, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -232, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 344, 2, 48, -20, -209, 22,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimDownSpecialStartAir_joint24[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 605, 73,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 719, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 599, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 437, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 423, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 513, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 511, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 611, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 561, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 506, -54,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTNessAnimDownSpecialStartAir_joint25[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -9, -14, -102, 7, -20, -53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -194, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -157, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -99, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 24, 115,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 139, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -193, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -194, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -193, -107, -157, 74, 138, -67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -143, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -410, 44, -8, 286,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -105, 255, 414, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 100, 84, 142, -152, -74, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -96, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 62, -9, 108, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 82, 18, 126, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 100, 18, 142, 16, -72, 23,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimDownSpecialStartAir_joint26[56] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -339, -256, -211,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -536, -21, -13, 26, 74, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -536, 21, -13, -12, 74, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -386, 131, -98, -149, 434, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -142, 65, -461, -174, 180, -69,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -255, -447, 296,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -142, -2, -461, -1, 180, -2,
	ftAnimEnd(),
	0x0000, 0x0000,
};
