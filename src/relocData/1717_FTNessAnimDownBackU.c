/* AnimJoint data for relocData file 1717 (FTNessAnimDownBackU) */
/* 2608 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimDownBackU_joint1[24];
extern u16 dFTNessAnimDownBackU_joint2[58];
extern u16 dFTNessAnimDownBackU_joint3[20];
extern u16 dFTNessAnimDownBackU_joint5[32];
extern u16 dFTNessAnimDownBackU_joint6[112];
extern u16 dFTNessAnimDownBackU_joint7[38];
extern u16 dFTNessAnimDownBackU_joint8[10];
extern u16 dFTNessAnimDownBackU_joint9[32];
extern u16 dFTNessAnimDownBackU_joint11[16];
extern u16 dFTNessAnimDownBackU_joint12[120];
extern u16 dFTNessAnimDownBackU_joint13[32];
extern u16 dFTNessAnimDownBackU_joint14[94];
extern u16 dFTNessAnimDownBackU_joint16[10];
extern u16 dFTNessAnimDownBackU_joint17[112];
extern u16 dFTNessAnimDownBackU_joint19[48];
extern u16 dFTNessAnimDownBackU_joint20[104];
extern u16 dFTNessAnimDownBackU_joint22[70];
extern u16 dFTNessAnimDownBackU_joint23[108];
extern u16 dFTNessAnimDownBackU_joint25[40];
extern u16 dFTNessAnimDownBackU_joint26[170];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTNessAnimDownBackU_joints[] = {
	(u32)dFTNessAnimDownBackU_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimDownBackU_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimDownBackU_joint3, /* [2] joint 3 */
	(u32)dFTNessAnimDownBackU_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTNessAnimDownBackU_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimDownBackU_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimDownBackU_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimDownBackU_joint9, /* [8] joint 9 */
	(u32)dFTNessAnimDownBackU_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTNessAnimDownBackU_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimDownBackU_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimDownBackU_joint14, /* [13] joint 14 */
	(u32)dFTNessAnimDownBackU_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTNessAnimDownBackU_joint17, /* [16] joint 17 */
	(u32)dFTNessAnimDownBackU_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTNessAnimDownBackU_joint20, /* [19] joint 20 */
	(u32)dFTNessAnimDownBackU_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTNessAnimDownBackU_joint23, /* [22] joint 23 */
	(u32)dFTNessAnimDownBackU_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTNessAnimDownBackU_joint26, /* [25] joint 26 */
	0xFFFF026C, /* [26] END */
};

/* Joint 1 */
u16 dFTNessAnimDownBackU_joint1[24] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 10), -120, -160,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -800,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), -1020, -1984,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 10), -3840, -419,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 11), -4200,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTNessAnimDownBackU_joint2[58] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, -513, 5, 245, -8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 240, -4,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 15), 5, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), -3216, -67,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 240, 480,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 840, 384,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 10), 5, -8, -8, -7,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 720, -442,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 286, -91,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), -3216, 0, -16, 537, -28,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTNessAnimDownBackU_joint3[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 28, -360, 8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTNessAnimDownBackU_joint5[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 6, -457, 156,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 268, 35,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 31), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 536, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 536, -25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 11), 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimDownBackU_joint6[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -132, -2, -1051, -5, -550, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), -600, -139, -1054, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -449, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -285, 161,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 476, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -733, -117, -1070, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -838, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -1599, -2,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 518, 41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 973, 204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -852, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1140, -144,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1599, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1265, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1321, -226, -1167, 61, 1218, 296,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1363, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1929, -73, 2029, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1971, -32, 2077, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -2007, -12, 2042, -22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1353, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2018, -11, -1347, 6, 2024, -18,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimDownBackU_joint7[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 25), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -405, -343,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -686, -239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -823, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -669, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -533, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, 59,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimDownBackU_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 36),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTNessAnimDownBackU_joint9[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY), -134, 0, 0, 288,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 36), 300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 402, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), -10, 0,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 364, -3, -32, 4,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimDownBackU_joint11[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 54, -18,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 36), 0, 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTNessAnimDownBackU_joint12[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1578, -6, 312, 13, 1179, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1540, 219,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 541, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 1918, 224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2165, 240,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2516, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1777, 206,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 2346, 53,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 463, -81,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 93, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2483, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 2382, -7,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2398, 47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 2442, -77,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 118, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 4, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2361, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 2634, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2368, -42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 2867, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 187, 141,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 577, -10,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2718, 66, 2984, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 2789, 17, 3086, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2801, 11, 569, -7, 3097, 11,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimDownBackU_joint13[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -356, -257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -514, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -577, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 18,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTNessAnimDownBackU_joint14[94] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -268, -1072, 714,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -283, 14, -406, 250, 267, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -210, 0, -69, 203, 190, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -402, -54, 0, 27, 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -647, 25, 152, 15, 223, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -18, 68, 227, 21, 20, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 394, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 35, 2, -10, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 27, 7, 29, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 265, 0, 384, -9, 367, 228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 189, -24, 375, -136, 486, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 143, -8, -300, -29, 862, -32,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 90, 54, 126,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimDownBackU_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 36),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTNessAnimDownBackU_joint17[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1989, -38, -1518, -47, -2006, -75,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1749, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1452, 124, -2069, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1307, 106, -1846, 179,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -2191, -86,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1422, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1659, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 1698, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1676, -23, -2266, -62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -2543, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 1474, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1440, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -1312, 4,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2578, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -2319, 120,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1477, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1265, -30,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2194, 101,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1931, 34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1309, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1327, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1242, -22, -1328, 0, -1906, 24,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTNessAnimDownBackU_joint19[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 294, 229,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1024, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1037, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1084, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1041, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 989, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 980, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 962, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 863, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 426, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 396, -30,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTNessAnimDownBackU_joint20[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -132, 19, -207, 27, 575, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 133, 12, 124, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 222, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 213, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 22, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 145, 9, 67, -57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 29, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -147, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 54, 31, -80, 72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 84, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 126, -47,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -16, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 11, -14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 83, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -109, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 82, -34, -173, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 17, -10, 31, 16,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 3, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -3, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5, -11, 12, 16, 26, -5,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimDownBackU_joint22[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -385, 9, -67,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 292, 35, 116, 32, 260, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -33, -79, 334, 22, 103, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -262, -56, 275, -32, -100, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -431, -32, 105, -20, -164, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -682, -5, 10, 6, -351, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -492, 74, 174, 48, -223, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -312, 53, 254, -21, -120, 27,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -66, 0, 0,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTNessAnimDownBackU_joint23[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 38, -121, 659, -25, -1076, -53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -200, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 203, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1034, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -804, 202,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -552, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -135, 56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -21, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 186, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 125, -2,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -571, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -443, 61,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -11, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -128, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -383, 52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -67, 51,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 125, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 159, -19,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -38, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -205, -6,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 143, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -127, 1, 136, -6, -210, -5,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTNessAnimDownBackU_joint25[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 570, 74,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 916, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 925, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 1026, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 982, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 974, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 939, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 427, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 407, -20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTNessAnimDownBackU_joint26[170] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1555, -102, -1553, 10, -1710, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1906, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -1870, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1452, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1673, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 1760, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1742, -16, -1905, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -2056, -62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 1866, 18,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1928, -53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1937, 71,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2116, -51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1932, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1881, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1775, -12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1869, 55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1638, 9,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1759, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1704, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1870, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1827, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1684, -19, -1633, 5, -1810, 16,
	ftAnimEnd(),
	0x400E, 0xFE99, 0xFE73, 0xFEDF, 0x48E0, 0xFF82, 0xFFAE, 0xFFF4, 0x200F, 0x0002, 0xFE5F, 0xFFD8, 0xFED1, 0x004D, 0xFF49, 0x0052, 0x200F, 0x0001, 0xFE20, 0x0000, 0xFF5B, 0x0016, 0xFFD6, 0x0009, 0x200F, 0x0002, 0xFF3E, 0x001A, 0xFF6D, 0x0000, 0xFFE0, 0x0008, 0x200F, 0x0009, 0xFF41, 0x0018, 0xFF5C, 0x0007, 0x0034, 0xFFFE, 0x200F, 0x000B, 0x0127, 0x0021, 0xFFFE, 0x000B, 0xFFB6, 0xFFF9, 0x200F, 0x0004, 0x0139, 0xFFEB, 0x000A, 0x0000, 0xFFC9, 0x0007, 0x380F, 0x0007, 0x0038, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
