/* AnimJoint data for relocData file 1908 (FTYoshiAnimItemDrop) */
/* 1664 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimItemDrop_joint1[10];
extern u16 dFTYoshiAnimItemDrop_joint2[68];
extern u16 dFTYoshiAnimItemDrop_joint3[14];
extern u16 dFTYoshiAnimItemDrop_joint4[22];
extern u16 dFTYoshiAnimItemDrop_joint6[10];
extern u16 dFTYoshiAnimItemDrop_joint7[62];
extern u16 dFTYoshiAnimItemDrop_joint10[32];
extern u16 dFTYoshiAnimItemDrop_joint11[110];
extern u16 dFTYoshiAnimItemDrop_joint12[56];
extern u16 dFTYoshiAnimItemDrop_joint13[28];
extern u16 dFTYoshiAnimItemDrop_joint14[34];
extern u16 dFTYoshiAnimItemDrop_joint15[22];
extern u16 dFTYoshiAnimItemDrop_joint17[22];
extern u16 dFTYoshiAnimItemDrop_joint18[50];
extern u16 dFTYoshiAnimItemDrop_joint20[40];
extern u16 dFTYoshiAnimItemDrop_joint22[56];
extern u16 dFTYoshiAnimItemDrop_joint23[42];
extern u16 dFTYoshiAnimItemDrop_joint25[32];
extern u16 dFTYoshiAnimItemDrop_joint26[70];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTYoshiAnimItemDrop_joints[] = {
	(u32)dFTYoshiAnimItemDrop_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimItemDrop_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimItemDrop_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimItemDrop_joint4, /* [3] joint 4 */
	(u32)dFTYoshiAnimItemDrop_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTYoshiAnimItemDrop_joint7, /* [6] joint 7 */
	(u32)dFTYoshiAnimItemDrop_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTYoshiAnimItemDrop_joint11, /* [10] joint 11 */
	(u32)dFTYoshiAnimItemDrop_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimItemDrop_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimItemDrop_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimItemDrop_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimItemDrop_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTYoshiAnimItemDrop_joint18, /* [17] joint 18 */
	(u32)dFTYoshiAnimItemDrop_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTYoshiAnimItemDrop_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTYoshiAnimItemDrop_joint23, /* [22] joint 23 */
	(u32)dFTYoshiAnimItemDrop_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTYoshiAnimItemDrop_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTYoshiAnimItemDrop_joint1[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 672, 0,
	ftAnimSetFlagsT(0, 24),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTYoshiAnimItemDrop_joint2[68] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX), 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -1, -89, -3, 30, 12, 20, 12,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -89, -4,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, -2, 35, -81, 21, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 0, -15, -112, -29,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -41, -2, 27, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 7), -122,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -322, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 2), -2,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 17), 0, 0, 30, -3, 20, 16,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), 0, 5, -89, 10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTYoshiAnimItemDrop_joint3[14] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 16, -2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 24), 16, 2,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTYoshiAnimItemDrop_joint4[22] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 78, 19,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 600, 329,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 381, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 0, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 78, -2,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTYoshiAnimItemDrop_joint6[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 48, 120,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimItemDrop_joint7[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1498, -4, -1476, -1, -1960, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1293, -95,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1798, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -1365, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1279, 64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1157, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1182, -102,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 1468, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1736, 52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -1934, -30,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1207, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -1455, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1498, 30, -1476, -21, -1960, -26,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTYoshiAnimItemDrop_joint10[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -764, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -791, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -763, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -267, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -325, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -760, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -764, -4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimItemDrop_joint11[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -145, 178, -103, 119, -219, 106,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -276, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -303, -270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 269, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 268, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 201, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 163, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 263, 396, -285, -224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 956, 22, -636, -104, -725, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 307, -330, -512, 335, -491, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 294, -76, 34, 406, -940, -297,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 139, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 69, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1086, -55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -485, 125,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 213, 64,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -140, -25,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 38, -23, -402, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -100, -13, -218, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -145, -4, -103, -2, -219, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimItemDrop_joint12[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1002, -23,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1025, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -832, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -623, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -546, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1287, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1104, 222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -842, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -835, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1051, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1012, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -990, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1002, -12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTYoshiAnimItemDrop_joint13[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 172, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 15, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 15, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -119,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), -583,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 12), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTYoshiAnimItemDrop_joint14[34] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -536, -893, 0,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 156, 0,
	ftAnimSetFlags(0),
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -536, -893, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -10, -18, 14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -643, -1074, 144,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -536, -893, 0,
	ftAnimBlock(0, 3),
	ftAnimSetFlagsT(FT_ANIM_ROTY, 11),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTYoshiAnimItemDrop_joint15[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -190, -8, 0, -1, 0, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -347, -92, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -190, 9, 0, 2, 0, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTYoshiAnimItemDrop_joint17[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -153, -7, 0, -5, 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -277, -261, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -153, 6, 0, 4, 0, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimItemDrop_joint18[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -5, 0, 5, 0, -3, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 23), -6, 0, 6, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -18, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -18, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 387, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 380, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 142, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 93, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 20, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5, 0, 5, -1, -3, -24,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimItemDrop_joint20[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 262, -29,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 185, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 381, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 6, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 87, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 145, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 241, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 262, 21,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTYoshiAnimItemDrop_joint22[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1614, 0, -83, 0, -263, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -265, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), 1614, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -353, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -426, -34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -278, 11,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -285, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -96, 14,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -269, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -260, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1614, 0, -83, 12, -263, -3,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimItemDrop_joint23[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0, 0, -154, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 23), 1, -1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -239, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -299, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -164, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -155, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -146, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -1, 0, 0, -154, -7,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimItemDrop_joint25[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 378, -19,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 344, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 521, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 533, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 505, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 365, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, 13,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTYoshiAnimItemDrop_joint26[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1609, 0, -89, 0, -228, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -277, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1506, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -270, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -302, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -173, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -312, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -103, 17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1500, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1607, 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -175, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -218, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1609, 1, -89, 14, -228, -10,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
