/* AnimJoint data for relocData file 2033 (FTPikachuAnimShieldOn) */
/* 1040 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimShieldOn_joint1[10];
extern u16 dFTPikachuAnimShieldOn_joint2[22];
extern u16 dFTPikachuAnimShieldOn_joint3[26];
extern u16 dFTPikachuAnimShieldOn_joint4[26];
extern u16 dFTPikachuAnimShieldOn_joint6[18];
extern u16 dFTPikachuAnimShieldOn_joint7[24];
extern u16 dFTPikachuAnimShieldOn_joint8[14];
extern u16 dFTPikachuAnimShieldOn_joint9[26];
extern u16 dFTPikachuAnimShieldOn_joint10[10];
extern u16 dFTPikachuAnimShieldOn_joint11[26];
extern u16 dFTPikachuAnimShieldOn_joint12[26];
extern u16 dFTPikachuAnimShieldOn_joint14[18];
extern u16 dFTPikachuAnimShieldOn_joint15[34];
extern u16 dFTPikachuAnimShieldOn_joint17[14];
extern u16 dFTPikachuAnimShieldOn_joint18[24];
extern u16 dFTPikachuAnimShieldOn_joint20[16];
extern u16 dFTPikachuAnimShieldOn_joint22[24];
extern u16 dFTPikachuAnimShieldOn_joint23[32];
extern u16 dFTPikachuAnimShieldOn_joint25[16];
extern u16 dFTPikachuAnimShieldOn_joint26[34];
extern u16 dFTPikachuAnimShieldOn_joint27[24];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTPikachuAnimShieldOn_joints[] = {
	(u32)dFTPikachuAnimShieldOn_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimShieldOn_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimShieldOn_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimShieldOn_joint4, /* [3] joint 4 */
	(u32)dFTPikachuAnimShieldOn_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTPikachuAnimShieldOn_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimShieldOn_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimShieldOn_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimShieldOn_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimShieldOn_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimShieldOn_joint12, /* [11] joint 12 */
	(u32)dFTPikachuAnimShieldOn_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTPikachuAnimShieldOn_joint15, /* [14] joint 15 */
	(u32)dFTPikachuAnimShieldOn_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTPikachuAnimShieldOn_joint18, /* [17] joint 18 */
	(u32)dFTPikachuAnimShieldOn_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTPikachuAnimShieldOn_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTPikachuAnimShieldOn_joint23, /* [22] joint 23 */
	(u32)dFTPikachuAnimShieldOn_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTPikachuAnimShieldOn_joint26, /* [25] joint 26 */
	(u32)dFTPikachuAnimShieldOn_joint27, /* [26] joint 27 */
};

/* 4-byte alignment padding */
static u32 dFTPikachuAnimShieldOn_pad[1] = { 0 };

/* Joint 1 */
u16 dFTPikachuAnimShieldOn_joint1[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPikachuAnimShieldOn_joint2[22] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 675, 108,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), -26, 33, -28, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 675, -87, 108, -203,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 632, 429,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), 6,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimShieldOn_joint3[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 23, 133, 32,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 95, 17, 130, 0, 55, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 95, -58, 130, -2, 55, -18,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTPikachuAnimShieldOn_joint4[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -13, 0, -2,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -13, 27, 0, 0, -2, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 97, 36, -3, -1, 35, 12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTPikachuAnimShieldOn_joint6[18] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 324, -62, 313,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 134, -183, -137, -63, 505, 315,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTPikachuAnimShieldOn_joint7[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 0, 236, 1, -202, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 804, 0, 143, -68, -656, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, 0, 70, -72, -781, -124,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPikachuAnimShieldOn_joint8[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimShieldOn_joint9[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2, -163, 20,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -2, 22, -163, 0, 20, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 89, 22, -166, 0, 20, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTPikachuAnimShieldOn_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimShieldOn_joint11[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, -15, 0, 19, 0, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -62, 30, 76, 10, -227, 13,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTPikachuAnimShieldOn_joint12[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, -20, 0, -11, 0, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -81, 34, -47, -9, 213, -12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTPikachuAnimShieldOn_joint14[18] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -324, -62, 313,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -243, -128, -16, 136, 439, 34,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTPikachuAnimShieldOn_joint15[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2412, 0, 1703, -20, -1905, -89,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -2413, 0, 1499, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1995, -195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2296, -309,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2613, -216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2413, 0, 1458, -41, -2728, -115,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPikachuAnimShieldOn_joint17[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTPikachuAnimShieldOn_joint18[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1666, -52, -1609, 85, 1201, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1474, -12, -1281, 60, 1201, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1497, 22, -1254, 27, 1209, 7,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTPikachuAnimShieldOn_joint20[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 946, -8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 982, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 997, 15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTPikachuAnimShieldOn_joint22[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1602, -47, -1736, 31, -1961, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1759, -13, -1650, 12, -1997, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1757, 1, -1642, 7, -1970, 27,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTPikachuAnimShieldOn_joint23[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 128, 45, -57, 175, -192, -57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 443, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 138, -168, -408, -278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -161, -208, -807, -261,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -278, -116, 410, -32, -932, -125,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTPikachuAnimShieldOn_joint25[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 807, 79,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1038, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 968, -69,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTPikachuAnimShieldOn_joint26[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1601, 18, -1893, 329, 1124, 57,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1790, 12, 1453, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1563, 217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1458, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1428, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1765, -25, -1459, -31, 1627, 173,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTPikachuAnimShieldOn_joint27[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -14, 0, -3,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, -180, -354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 62, -64, -1, -12, 22, -14,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
