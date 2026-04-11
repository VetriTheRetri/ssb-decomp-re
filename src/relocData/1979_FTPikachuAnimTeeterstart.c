/* AnimJoint data for relocData file 1979 (FTPikachuAnimTeeterstart) */
/* 1120 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimTeeterstart_joint1[18];
extern u16 dFTPikachuAnimTeeterstart_joint2[14];
extern u16 dFTPikachuAnimTeeterstart_joint3[26];
extern u16 dFTPikachuAnimTeeterstart_joint5[14];
extern u16 dFTPikachuAnimTeeterstart_joint6[32];
extern u16 dFTPikachuAnimTeeterstart_joint7[16];
extern u16 dFTPikachuAnimTeeterstart_joint8[26];
extern u16 dFTPikachuAnimTeeterstart_joint9[10];
extern u16 dFTPikachuAnimTeeterstart_joint10[22];
extern u16 dFTPikachuAnimTeeterstart_joint11[22];
extern u16 dFTPikachuAnimTeeterstart_joint13[14];
extern u16 dFTPikachuAnimTeeterstart_joint14[34];
extern u16 dFTPikachuAnimTeeterstart_joint16[16];
extern u16 dFTPikachuAnimTeeterstart_joint17[44];
extern u16 dFTPikachuAnimTeeterstart_joint19[20];
extern u16 dFTPikachuAnimTeeterstart_joint21[38];
extern u16 dFTPikachuAnimTeeterstart_joint22[50];
extern u16 dFTPikachuAnimTeeterstart_joint24[24];
extern u16 dFTPikachuAnimTeeterstart_joint25[68];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTPikachuAnimTeeterstart_joints[] = {
	(u32)dFTPikachuAnimTeeterstart_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimTeeterstart_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimTeeterstart_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimTeeterstart_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPikachuAnimTeeterstart_joint6, /* [5] joint 6 */
	(u32)dFTPikachuAnimTeeterstart_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimTeeterstart_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimTeeterstart_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimTeeterstart_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimTeeterstart_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimTeeterstart_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPikachuAnimTeeterstart_joint14, /* [13] joint 14 */
	(u32)dFTPikachuAnimTeeterstart_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPikachuAnimTeeterstart_joint17, /* [16] joint 17 */
	(u32)dFTPikachuAnimTeeterstart_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPikachuAnimTeeterstart_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPikachuAnimTeeterstart_joint22, /* [21] joint 22 */
	(u32)dFTPikachuAnimTeeterstart_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTPikachuAnimTeeterstart_joint25, /* [24] joint 25 */
	0xFFFF010E, /* [25] END */
};

/* Joint 1 */
u16 dFTPikachuAnimTeeterstart_joint1[18] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 660, 51,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -26, 33, -28,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 10), 534, 92,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 10), 146, 906,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTPikachuAnimTeeterstart_joint2[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 340, -23, -13,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 536, 0, -137,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimTeeterstart_joint3[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 42, 4, -3,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -82, 4, -31, -9, 24, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 83, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -87, 35,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTPikachuAnimTeeterstart_joint5[14] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 233, -20, 413,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 286, -124, 409,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimTeeterstart_joint6[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2412, -61, -1634, 3, -1864, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1786, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 2044, 10, -2337, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2060, 17, -2298, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2079, 18, -1833, -46, -2256, 41,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimTeeterstart_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTPikachuAnimTeeterstart_joint8[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -49, 14, 54,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -122, 12, 111, 13, 42, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 76, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 152, 44,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTPikachuAnimTeeterstart_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimTeeterstart_joint10[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -194, 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -328, 1, 58, 5, 10, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -184, 62, 51,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimTeeterstart_joint11[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -148, 5, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -279, 6, -67, -9, -48, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -87, -90, -104,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPikachuAnimTeeterstart_joint13[14] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -228, -53, 438,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -316, -12, 511,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimTeeterstart_joint14[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2417, -82, -93, 16, -277, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), 2192, -13, 270, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -755, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -751, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -737, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2183, -9, 284, 13, -729, 8,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPikachuAnimTeeterstart_joint16[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTPikachuAnimTeeterstart_joint17[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1592, -13, -1247, 2, 453, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1478, 51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -980, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 828, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 797, -42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 695, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1542, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1602, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1605, 3, -966, 14, 705, 9,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPikachuAnimTeeterstart_joint19[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1083, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 980, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 989, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 983, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTPikachuAnimTeeterstart_joint21[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1784, -6, 1430, -8, 1598, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1855, 75,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1229, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1467, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1599, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1929, 51, 1714, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1958, 28, 1224, -4, 1756, 41,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimTeeterstart_joint22[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 282, 5, 136, -18, -453, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 137, 59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 145, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -337, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -431, -102,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -723, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 195, 48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 254, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 95, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 75, -20, 258, 4, -752, -28,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTPikachuAnimTeeterstart_joint24[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 871, -51,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 559, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 647, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 786, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 790, 3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTPikachuAnimTeeterstart_joint25[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -7, 32, -31, 10, -469, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -35, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 34, -101, 159, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -82, -77, 239, 43,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -90, 12, 11, -53,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 93, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 231, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -80, 9, -19, -30, 246, 14,
	ftAnimEnd(),
	0x400E, 0xFE22, 0x01CF, 0xFE9A, 0x48E0, 0xFFFF, 0xFF4C, 0xFE9E, 0x380F, 0x000A, 0xFCE6, 0x0088, 0xFCCB, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
