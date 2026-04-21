/* AnimJoint data for relocData file 1884 (FTYoshiAnimThrown2) */
/* 2448 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimThrown2_joint2[24];
extern u16 dFTYoshiAnimThrown2_joint3[42];
extern u16 dFTYoshiAnimThrown2_joint4[24];
extern u16 dFTYoshiAnimThrown2_joint5[14];
extern u16 dFTYoshiAnimThrown2_joint7[24];
extern u16 dFTYoshiAnimThrown2_joint8[200];
extern u16 dFTYoshiAnimThrown2_joint11[64];
extern u16 dFTYoshiAnimThrown2_joint12[206];
extern u16 dFTYoshiAnimThrown2_joint13[64];
extern u16 dFTYoshiAnimThrown2_joint14[14];
extern u16 dFTYoshiAnimThrown2_joint15[12];
extern u16 dFTYoshiAnimThrown2_joint16[54];
extern u16 dFTYoshiAnimThrown2_joint18[54];
extern u16 dFTYoshiAnimThrown2_joint19[98];
extern u16 dFTYoshiAnimThrown2_joint21[48];
extern u16 dFTYoshiAnimThrown2_joint23[44];
extern u16 dFTYoshiAnimThrown2_joint24[68];
extern u16 dFTYoshiAnimThrown2_joint26[56];
extern u16 dFTYoshiAnimThrown2_joint27[60];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTYoshiAnimThrown2_joints[] = {
	0x00000000, /* [0] NULL */
	(u32)dFTYoshiAnimThrown2_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimThrown2_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimThrown2_joint4, /* [3] joint 4 */
	(u32)dFTYoshiAnimThrown2_joint5, /* [4] joint 5 */
	(u32)dFTYoshiAnimThrown2_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTYoshiAnimThrown2_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimThrown2_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTYoshiAnimThrown2_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimThrown2_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimThrown2_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimThrown2_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimThrown2_joint16, /* [15] joint 16 */
	(u32)dFTYoshiAnimThrown2_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTYoshiAnimThrown2_joint19, /* [18] joint 19 */
	(u32)dFTYoshiAnimThrown2_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTYoshiAnimThrown2_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTYoshiAnimThrown2_joint24, /* [23] joint 24 */
	(u32)dFTYoshiAnimThrown2_joint26, /* [24] joint 26 */
	0x00000000, /* [25] NULL */
	(u32)dFTYoshiAnimThrown2_joint27, /* [26] joint 27 */
};

/* Joint 2 */
u16 dFTYoshiAnimThrown2_joint2[24] = {
	ftAnimSetValBlock(FT_ANIM_TRAY), -168,
	ftAnimSetValT(FT_ANIM_TRAY, 45), -168,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY, 1), 5,
	ftAnimSetValRate(FT_ANIM_TRAX), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ), 0, 0, 0, -240,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 20), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 20), 0,
	ftAnimLoop(0x6800, -46),
};

/* Joint 3 */
u16 dFTYoshiAnimThrown2_joint3[42] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ), -223, 3, 0, 7, 30, 2, 20, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 30, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), -178, 89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 0, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), -223,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 30, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), -178, -89,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), -223, 0,
	ftAnimLoop(0x6800, -80),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTYoshiAnimThrown2_joint4[24] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -268, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 172,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), -208,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), -268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), -208,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), -268,
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTYoshiAnimThrown2_joint5[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -402,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 600, 329,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 40), -402, 10,
	ftAnimLoop(0x6800, -26),
};

/* Joint 7 */
u16 dFTYoshiAnimThrown2_joint7[24] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 48, 120,
	ftAnimSetValRate(FT_ANIM_ROTX), 402, -33,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 402,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 402,
	ftAnimLoop(0x6800, -46),
};

/* Joint 8 */
u16 dFTYoshiAnimThrown2_joint8[200] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -75, -327, -1055, 148, 2590, 323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -403, 159, -907, 228, 2913, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 243, 264, -599, 244, 2243, -288,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -410, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 125, -66, 2335, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 110, -6, 2322, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 123, 56, 2336, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 222, -310, -580, -243, 2262, 334,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -496, -149, -896, -237, 3005, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -75, 244, -1055, -141, 2590, -245,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1055, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 10, 6, 2487, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 6, -8, 2492, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -7, -43, 2514, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -75, -244, 2590, 245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -496, 149, -896, 237, 3005, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 222, 310, -580, 243, 2262, -334,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 123, -56, -410, 130, 2336, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -580, -243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 110, -5, 2321, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 123, 56, 2336, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 222, -310, 2262, 334,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -496, -149, -896, -237, 3005, 164,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1361, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -75, 244, 2590, -245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 10, 6, 2487, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 6, -8, 2492, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -37, -39, 2550, 45,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1371, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -1111, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -75, -38, -1055, 55, 2590, 40,
	ftAnimLoop(0x6800, -396),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTYoshiAnimThrown2_joint11[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -873, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -714, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -570, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -878, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -873, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -528, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -636, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -705, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -565, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -878, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -873, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -554, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -693, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -860, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -873, -13,
	ftAnimLoop(0x6800, -126),
};

/* Joint 12 */
u16 dFTYoshiAnimThrown2_joint12[206] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 79, -62, 1052, 100, 2591, -67,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -11, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1052, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 2485, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2482, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 3030, 638,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 8, 45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 525, 653,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 895, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1200, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1386, 479, 3868, 454,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1484, 54, 3939, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1496, 4, 1289, 59, 3923, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1031, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1484, -54, 3939, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1386, -479, 3868, -454,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 525, -653, 895, 10, 3030, -638,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1177, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 79, -258, 2591, -258,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -11, -8, 2482, -13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1271, 76,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1052, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -8, 7, 2485, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 8, 45, 2512, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 79, 258, 2591, 258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 525, 653, 895, -10, 3030, 638,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1200, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1386, 479, 3868, 454,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1484, 54, 3939, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1496, 4, 1289, 59, 3923, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 932, -257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1496, -12, 3928, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1467, -147, 3932, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1201, 162, 3695, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1793, 243, 637, -187, 4304, 252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1688, -104, 556, -81, 4200, -104,
	ftAnimLoop(0x6800, -408),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTYoshiAnimThrown2_joint13[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -873, 27,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -551, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -492, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -873, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -876, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -558, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -699, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -645, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -540, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -876, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -819, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -582, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -747, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -881, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -873, 7,
	ftAnimLoop(0x6800, -126),
};

/* Joint 14 */
u16 dFTYoshiAnimThrown2_joint14[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 172, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 5,
	ftAnimBlock(0, 40),
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimThrown2_joint15[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -536, -893, 0, 0, 156, 0,
	ftAnimBlock(0, 40),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTYoshiAnimThrown2_joint16[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -223, -3, 0, 13, 0, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -234, -1, 152, -13, -73, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -249, 0, -219, -10, 111, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -223, 1, 0, 37, 0, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -234, -1, 152, -13, -73, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -249, 0, -219, -10, 111, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -223, 0, 0,
	ftAnimLoop(0x6800, -106),
};

/* Joint 18 */
u16 dFTYoshiAnimThrown2_joint18[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -153, -3, 0, 29, 0, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -201, -1, 353, -12, -132, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -179, 3, -213, -27, 71, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -153, -2, 0, 56, 0, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -201, -1, 353, -12, -132, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -179, 3, -213, -26, 71, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -153, 0, 0,
	ftAnimLoop(0x6800, -106),
};

/* Joint 19 */
u16 dFTYoshiAnimThrown2_joint19[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0, 0, 245, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 53, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 30), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 197, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 125, -98,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -225, 89,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 43, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 47, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -104, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 297, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 307, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 197, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -6, -7, 125, -98,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -224, 90,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -3, 5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 53, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -102, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 169, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -1, 0, 3, 245, 75,
	ftAnimLoop(0x6800, -192),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTYoshiAnimThrown2_joint21[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 546, -27,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 776, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 845, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 900, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 771, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 734, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 776, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 997, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 903, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 638, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 546, -91,
	ftAnimLoop(0x6800, -94),
};

/* Joint 23 */
u16 dFTYoshiAnimThrown2_joint23[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1598, 2, -83, 0, -263, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 39), -83, 0, -263, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 1528, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1532, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 18), 1513, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1501, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 1589, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1598, 8, -83, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -263,
	ftAnimLoop(0x6800, -86),
};

/* Joint 24 */
u16 dFTYoshiAnimThrown2_joint24[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0, 0, 245, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 39), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -250, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -140, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 221, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 231, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 215, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 245, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -250, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -140, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 221, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 231, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 220, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 0, 0, 245, 24,
	ftAnimLoop(0x6800, -132),
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTYoshiAnimThrown2_joint26[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 546, 37,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1055, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1018, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 719, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 705, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 599, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 546, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1050, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1055, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 715, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 696, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 583, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 546, -36,
	ftAnimLoop(0x6800, -110),
};

/* Joint 27 */
u16 dFTYoshiAnimThrown2_joint27[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1580, 1, -89, 0, -228, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 39), -89, 0, -228, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 1532, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1494, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 1586, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1591, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 1512, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1457, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 1556, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1565, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1576, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1580, 3, -89, 0, -228, 0,
	ftAnimLoop(0x6800, -116),
	ftAnimEnd(),
};
