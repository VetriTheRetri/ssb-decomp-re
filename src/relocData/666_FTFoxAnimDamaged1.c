/* AnimJoint data for relocData file 666 (FTFoxAnimDamaged1) */
/* 2032 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimDamaged1_joint1[40];
extern u16 dFTFoxAnimDamaged1_joint2[68];
extern u16 dFTFoxAnimDamaged1_joint4[46];
extern u16 dFTFoxAnimDamaged1_joint5[80];
extern u16 dFTFoxAnimDamaged1_joint6[32];
extern u16 dFTFoxAnimDamaged1_joint7[10];
extern u16 dFTFoxAnimDamaged1_joint8[68];
extern u16 dFTFoxAnimDamaged1_joint10[10];
extern u16 dFTFoxAnimDamaged1_joint11[76];
extern u16 dFTFoxAnimDamaged1_joint12[32];
extern u16 dFTFoxAnimDamaged1_joint13[58];
extern u16 dFTFoxAnimDamaged1_joint15[10];
extern u16 dFTFoxAnimDamaged1_joint16[68];
extern u16 dFTFoxAnimDamaged1_joint18[34];
extern u16 dFTFoxAnimDamaged1_joint20[86];
extern u16 dFTFoxAnimDamaged1_joint21[62];
extern u16 dFTFoxAnimDamaged1_joint23[36];
extern u16 dFTFoxAnimDamaged1_joint24[70];
extern u16 dFTFoxAnimDamaged1_joint25[46];
extern u16 dFTFoxAnimDamaged1_joint26[32];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimDamaged1_joints[] = {
	(u32)dFTFoxAnimDamaged1_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimDamaged1_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimDamaged1_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimDamaged1_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimDamaged1_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimDamaged1_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimDamaged1_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimDamaged1_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimDamaged1_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimDamaged1_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimDamaged1_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimDamaged1_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimDamaged1_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimDamaged1_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimDamaged1_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimDamaged1_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimDamaged1_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimDamaged1_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimDamaged1_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimDamaged1_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimDamaged1_joint1[40] = {
	ftAnimSetVal(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 48, 912, -20,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 48, 912,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 1), -275,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 1), -225,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 48, 912, -151,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 34, 822, -126,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 41, 867, 1,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 48, 912, -20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTFoxAnimDamaged1_joint2[68] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -141, -338, -3, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 30, -35, -338, -15, -3, -2, 0, 109, 0, -137, 0, -301,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -212, -39, -370, -100, -9, -1, 27, 75, -34, -95, -75, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -223, 8, -490, 2, -14, 0, 61, -21, -77, 27, -103, 60,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -141, 18, -338, 33, -3, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -141, -338, -3,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTFoxAnimDamaged1_joint4[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 309, 156, 81,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 321, -184, 419, -239, 202, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -59, -39, -322, -66, 127, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 32, 68, -69, 58, 67, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 505, 77, 157, 62, 81, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 309, 156, 81,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimDamaged1_joint5[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1498, 40, -1442, -64, 1867, -242,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 1774, 74, -1598, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1624, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1640, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1597, 60,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1827, 29, -1615, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1715, -126, -1357, -56,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1686, 73,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1719, -42,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1528, -149, -1528, -134,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1370, 40, -1589, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1660, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1829, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1498, 128, -1442, 146, 1867, 38,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimDamaged1_joint6[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, 101,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -518, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -693, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -868, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -896, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -798, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 239,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTFoxAnimDamaged1_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimDamaged1_joint8[68] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), -113, -72,
	ftAnimSetValRate(FT_ANIM_ROTY), 136, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 206, 120, 491, -126, -11, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 127, 28, -117, -420, -39, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 264, 1, -349, -75, -34, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 134, -10, -531, 8, -5, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 205, -83, -302, 215, 35, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -91, -88, 50, 121, -9, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -72, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -113, 136,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTFoxAnimDamaged1_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 63, -18,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimDamaged1_joint11[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 132, -76, 271, -287, 336, -252,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 136, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -15, -102, 84, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 67, 101, 66, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 176, -65, 279, 86,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 212, 56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 90, -97,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 116, -37, 347, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 195, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 218, -273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -28, 27, -196, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 145, 80, 198, 266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 132, -12, 271, 76, 336, 138,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimDamaged1_joint12[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -594, -118,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -713, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -650, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -900, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -745, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -857, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 262,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimDamaged1_joint13[58] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -64, 0, -15, 0, 33,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 272, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 142, 0, 0, 0, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 354, 62, 3, 15, -12, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 492, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 75, 59, -107, -77,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 139, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -134, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 0, 33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 0, -64, 0, -15,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimDamaged1_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimDamaged1_joint16[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -405, -434, -223, 46, -26, -194,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -257, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -840, 21, -221, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -363, 283, 49, 168,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 118, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -234, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -213, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -337, -86,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -252, -5, 104, -75,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -264, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -253, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -107, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -405, -67, -223, 41, -26, 80,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimDamaged1_joint18[34] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 354, -354,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -177,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 556, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 525, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, -171,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimDamaged1_joint20[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 46, 314, 125, 313, -56, 532,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 361, -25, 439, -40, 475, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3, -216, 45, -282, 173, -183,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 203, 42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -210, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -115, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -139, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -9, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 243, 37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 170, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -199, 37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 99, 33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 30, -106,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -146, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 42, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 41, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 46, 5, 125, 26, -56, 90,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimDamaged1_joint21[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 355, -463, 137, -210, 134, -391,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -108, -170, -72, -78, -256, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 14, 103, -20, 40, -10, 127,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 291, -4, 178, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -4, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -15, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -58, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -66, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 281, 31, 177, -20, 80, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 355, 73, 137, -39, 134, 54,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimDamaged1_joint23[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 332, 209,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 541, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 535, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 597, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 582, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 704, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 493, -186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, -161,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimDamaged1_joint24[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 16, -122, -102, 380, -226, -26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -327, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -106, -9, 278, 230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3, 41, 359, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -73, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 123, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 71, -39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 0, -62,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -66, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -53, 50,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -385, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 39, 35, -310, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 16, -23, -102, -102, -226, 83,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimDamaged1_joint25[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 219, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -126, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 254, 126, 285, -79, 36, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 253, -6, 60, -9, 241, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 224, -52, 240, 24, 195, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -126, -35, 235, -3, 8, -31,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 219, 0,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimDamaged1_joint26[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -122, 0, 0, 64, -450,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 91, 194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 405, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 357, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -321, -148,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), -178,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
