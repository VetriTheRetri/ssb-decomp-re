/* AnimJoint data for relocData file 1697 (FTNessAnimDamaged6) */
/* 2016 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimDamaged6_joint1[20];
extern u16 dFTNessAnimDamaged6_joint2[48];
extern u16 dFTNessAnimDamaged6_joint4[52];
extern u16 dFTNessAnimDamaged6_joint5[78];
extern u16 dFTNessAnimDamaged6_joint6[36];
extern u16 dFTNessAnimDamaged6_joint7[10];
extern u16 dFTNessAnimDamaged6_joint8[52];
extern u16 dFTNessAnimDamaged6_joint10[10];
extern u16 dFTNessAnimDamaged6_joint11[86];
extern u16 dFTNessAnimDamaged6_joint12[40];
extern u16 dFTNessAnimDamaged6_joint13[28];
extern u16 dFTNessAnimDamaged6_joint15[10];
extern u16 dFTNessAnimDamaged6_joint16[82];
extern u16 dFTNessAnimDamaged6_joint18[44];
extern u16 dFTNessAnimDamaged6_joint19[90];
extern u16 dFTNessAnimDamaged6_joint21[38];
extern u16 dFTNessAnimDamaged6_joint22[70];
extern u16 dFTNessAnimDamaged6_joint24[42];
extern u16 dFTNessAnimDamaged6_joint25[84];
extern u16 dFTNessAnimDamaged6_joint26[36];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTNessAnimDamaged6_joints[] = {
	(AObjEvent32 *)dFTNessAnimDamaged6_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTNessAnimDamaged6_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTNessAnimDamaged6_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTNessAnimDamaged6_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTNessAnimDamaged6_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTNessAnimDamaged6_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTNessAnimDamaged6_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTNessAnimDamaged6_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTNessAnimDamaged6_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTNessAnimDamaged6_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTNessAnimDamaged6_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTNessAnimDamaged6_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTNessAnimDamaged6_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTNessAnimDamaged6_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTNessAnimDamaged6_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTNessAnimDamaged6_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTNessAnimDamaged6_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTNessAnimDamaged6_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTNessAnimDamaged6_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTNessAnimDamaged6_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTNessAnimDamaged6_joint1[20] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 0, 242,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), -216, -216,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), -216, 192,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 4), 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNessAnimDamaged6_joint2[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 324, -209, -144, 0, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -384, -155, 0, -34, 0, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -466, -11, -313, -44, 73, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -466, 50, -313, 8, 73, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -110, 116, -255, 25, 32, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 1, -209, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTNessAnimDamaged6_joint4[52] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 148, -188, 0, -260, 0, -231,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 97, 31, 0, -25, 0, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 242, 20, -76, -10, -110, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 242, 2, -76, 6, -110, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 256, -23, -33, 19, -49, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 148, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimDamaged6_joint5[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1934, -76, -964, 675, 1589, 773,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2011, 129, -288, 323, 2362, 229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1674, -109, -317, -110, 2048, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2229, -306, -509, -100, 2424, 211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2288, -22, -519, -6, 2472, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -494, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -2227, -128, 2421, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2458, -481, 2592, 429,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3189, -540, 3280, 364,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3539, -176, -465, -74, 3322, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3542, -3, -643, -178, 3197, -125,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimDamaged6_joint6[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -539, 530,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 265,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -375,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -759, -387,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -783, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -539, 244,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTNessAnimDamaged6_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 268, 143, 0, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimDamaged6_joint8[52] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 194, 130, 0, 43, 0, -156,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 435, 79, 0, -17, 0, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 432, 0, -52, -7, -49, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 432, -2, -52, 4, -49, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 412, -59, -23, 13, -21, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 194, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTNessAnimDamaged6_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimDamaged6_joint11[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 573, 164, 639, 665, 178, 628,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 737, -202, 1305, 322, 806, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 168, -326, 1285, -176, 425, -333,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 35, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 84, -107, 952, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -46, -88, 931, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 952, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -26, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 84, 355, 139, 348,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1308, 441,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 684, 564, 935, 86,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1180, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1212, 604,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1892, 484, 1614, 239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2182, 290, 968, -212, 1786, 172,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimDamaged6_joint12[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -433, 423,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -162, -310,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -620, -284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -731, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -433, 298,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTNessAnimDamaged6_joint13[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -170, -63, 267,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -170, -10, -63, 11, 267, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -278, 54, 380,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -170, -63, 267,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTNessAnimDamaged6_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimDamaged6_joint16[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1575, -187, -1248, -251, 908, 752,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1388, -27, -1499, -28, 1660, 243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1519, 164, -1305, 192, 1396, -288,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1173, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1718, 10, 1083, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1541, -73, 1304, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1570, -16, 1321, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1538, 74, 1355, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1851, 38, 788, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1795, -91, -1203, -25, 730, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1668, -109, -1224, -22, 813, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1575, -92, -1248, -23, 908, 95,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimDamaged6_joint18[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 439, -439,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 315, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 298, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 795, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 642, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 439, -203,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTNessAnimDamaged6_joint19[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1620, -18, -1643, 25, 1601, 408,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1638, 108, -1618, 99, 2009, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1403, 16, -1443, 64, 1803, -60,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1484, 3, 2055, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1604, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1586, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1604, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1483, 5, 2073, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1453, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 2046, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1888, -127,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1719, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1805, -92,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1648, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1504, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1612, -69, 1542, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1620, 28, -1643, -31, 1601, 58,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimDamaged6_joint21[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -476, 178, 112,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 281, 111, 0, -31, 0, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -141, -60, 83, 11, 375, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -141, -37, 83, 10, 375, -29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -476, 178, 112,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimDamaged6_joint22[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -59, 90, 442, -170, -799, 349,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 31, 20, 272, -58, -449, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -19, 30, 326, 57, -445, 59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 388, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 195, 48, -185, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 187, -9, -178, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 91, -128, -331, -231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -82, -132, 446, 43, -629, -229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -115, 56, 465, -16, -807, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -59, 55, 442, -23, -799, 7,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimDamaged6_joint24[42] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 614, -160,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 453, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 507, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 7, -113,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 7, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 235, 257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 668, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 658, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 614, -44,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTNessAnimDamaged6_joint25[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 7, -131, -104, -150, -32, 586,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -307, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -123, -22, 553, 189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -36, 117, 346, -147,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 116, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -196, 55, 258, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -144, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 372, 57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 348, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 123, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 42, -68,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 258, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 236, -154,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -26, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 40, 17, -17, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7, -33, -104, 40, -32, -14,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimDamaged6_joint26[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -339, -256, -211,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -63, 92, -134, 40, -221, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -63, -134, -221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -63, -30, -134, -13, -221, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -339, -256, -211,
	ftAnimEnd(),
	0x0000,
};
