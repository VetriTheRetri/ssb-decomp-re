/* AnimJoint data for relocData file 2079 (FTPikachuAnimThrown1) */
/* 1760 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimThrown1_joint2[18];
extern u16 dFTPikachuAnimThrown1_joint3[20];
extern u16 dFTPikachuAnimThrown1_joint4[46];
extern u16 dFTPikachuAnimThrown1_joint6[34];
extern u16 dFTPikachuAnimThrown1_joint7[132];
extern u16 dFTPikachuAnimThrown1_joint8[24];
extern u16 dFTPikachuAnimThrown1_joint9[46];
extern u16 dFTPikachuAnimThrown1_joint10[12];
extern u16 dFTPikachuAnimThrown1_joint11[18];
extern u16 dFTPikachuAnimThrown1_joint12[24];
extern u16 dFTPikachuAnimThrown1_joint14[34];
extern u16 dFTPikachuAnimThrown1_joint15[168];
extern u16 dFTPikachuAnimThrown1_joint17[80];
extern u16 dFTPikachuAnimThrown1_joint18[26];
extern u16 dFTPikachuAnimThrown1_joint20[16];
extern u16 dFTPikachuAnimThrown1_joint22[28];
extern u16 dFTPikachuAnimThrown1_joint23[26];
extern u16 dFTPikachuAnimThrown1_joint25[16];
extern u16 dFTPikachuAnimThrown1_joint26[26];
extern u16 dFTPikachuAnimThrown1_joint27[32];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTPikachuAnimThrown1_joints[] = {
	0x00000000, /* [0] NULL */
	(u32)dFTPikachuAnimThrown1_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimThrown1_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimThrown1_joint4, /* [3] joint 4 */
	(u32)dFTPikachuAnimThrown1_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTPikachuAnimThrown1_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimThrown1_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimThrown1_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimThrown1_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimThrown1_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimThrown1_joint12, /* [11] joint 12 */
	(u32)dFTPikachuAnimThrown1_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTPikachuAnimThrown1_joint15, /* [14] joint 15 */
	(u32)dFTPikachuAnimThrown1_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTPikachuAnimThrown1_joint18, /* [17] joint 18 */
	(u32)dFTPikachuAnimThrown1_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTPikachuAnimThrown1_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTPikachuAnimThrown1_joint23, /* [22] joint 23 */
	(u32)dFTPikachuAnimThrown1_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTPikachuAnimThrown1_joint26, /* [25] joint 26 */
	(u32)dFTPikachuAnimThrown1_joint27, /* [26] joint 27 */
};

/* Joint 2 */
u16 dFTPikachuAnimThrown1_joint2[18] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 636, 202, 263, 177,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), 0, 636, 263,
	ftAnimLoop(0x6800, -34),
};

/* Joint 3 */
u16 dFTPikachuAnimThrown1_joint3[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -81, -2, 0, -7, -209, -15, -111, -40,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), -81, 0, -209, -111,
	ftAnimLoop(0x6800, -38),
};

/* Joint 4 */
u16 dFTPikachuAnimThrown1_joint4[46] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -220, -59, 0, -4, 0, 2,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -326, -8, -42, 0, 28, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -325, 0, -1, 14, -1, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -333, 8, 132, 0, -69, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -220, 20, 0, -23, 0, 16,
	ftAnimLoop(0x6800, -88),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimThrown1_joint6[34] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 494, -6, -96, -24, 19, 48,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 492, -18, -101, 26, 29, 15,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 453, 0, -36, 3, 53, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 494, -96, 19,
	ftAnimLoop(0x6800, -66),
};

/* Joint 7 */
u16 dFTPikachuAnimThrown1_joint7[132] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 708, 259, -507, 42, -3185, -126,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -3729, -55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -297, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1293, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1325, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1256, -34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3772, -42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -4121, -198,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -425, -127,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -647, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1229, 54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1735, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4363, -238,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -5256, -156,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -651, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -642, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1892, 170,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2634, 195,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5403, -136,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -5900, -238,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2843, 254,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 3700, 198,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -612, 37, -6148, -197,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -524, 29, -6376, -53,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3862, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3925, 62, -507, 16, -6402, -25,
	ftAnimLoop(0x6800, -260),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPikachuAnimThrown1_joint8[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 15), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimThrown1_joint9[46] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -194, -46, 0, -36, 0, 12,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -276, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -363, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -148, 4, 0, 51, 0, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -225, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 251, 33,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, -48, 0, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), -194,
	ftAnimLoop(0x6800, -90),
};

/* Joint 10 */
u16 dFTPikachuAnimThrown1_joint10[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 24),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimThrown1_joint11[18] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -450, -20,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 254, 357, 37,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 12), -450,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 12), -450,
	ftAnimLoop(0x6800, -32),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTPikachuAnimThrown1_joint12[24] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -450, -33, 0, 20, 0, 14,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -450, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -450, 0, 0,
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimThrown1_joint14[34] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -503, -12, -83, -57, 101, 36,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), -505, 26, -94, -12, 108, 18,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -443, 1, -112, 7, 143, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -503, -83, 101,
	ftAnimLoop(0x6800, -66),
};

/* Joint 15 */
u16 dFTPikachuAnimThrown1_joint15[168] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -459, 20, 184, 34, 367, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 410, 133, 436, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -410, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -352, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -132, 157, 559, 111, 638, 110,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 605, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -36, 162, 657, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 192, 187, 799, 90,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 691, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 337, 109,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 470, -34,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 628, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 411, -27, 606, -29, 536, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 246, -474,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 547, -28, 556, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 549, -22, 452, -415,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -533, -562, 501, -248, -273, -488,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -546, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1013, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 51, -294,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -127, -22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -542, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -371, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1032, -9, -131, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -933, 192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -104, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 251, 222, -201, 294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -646, 208, 341, -40, 216, 258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -515, 94, 170, -76, 315, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -458, 57, 188, 17, 369, 54,
	ftAnimLoop(0x6800, -332),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPikachuAnimThrown1_joint17[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -159, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -321, -392,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -784, -223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -769, 338,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -108, 379,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -330,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -671, -294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -589, 335,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 289,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -10,
	ftAnimLoop(0x6800, -156),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTPikachuAnimThrown1_joint18[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1346, -7, -1489, 2, 1739, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), 1345, 0, -1489, 0, 1739, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1346, 0, -1489, 0, 1739, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTPikachuAnimThrown1_joint20[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 496, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 496, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 496, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 22 */
u16 dFTPikachuAnimThrown1_joint22[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), -1669, -4, -1708, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), 1361,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 23), -1669, 0, 1361, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 23), -1708,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1669, 0, 1361, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -1708,
	ftAnimLoop(0x6800, -52),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTPikachuAnimThrown1_joint23[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 119, 2, -5, -2, 120, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), 119, 0, -5, 0, 121, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 119, 0, -5, 0, 120, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTPikachuAnimThrown1_joint25[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 456, -14,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 456, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 456, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 26 */
u16 dFTPikachuAnimThrown1_joint26[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1487, -4, -1654, 1, 1281, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), 1486, 0, -1654, 0, 1281, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1487, 0, -1654, 0, 1281, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTPikachuAnimThrown1_joint27[32] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 143, -20, 0, -14, 0, 22,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, -180, -354,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 34, 127, 123,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 143, 22,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 0, 0,
	ftAnimLoop(0x6800, -50),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
