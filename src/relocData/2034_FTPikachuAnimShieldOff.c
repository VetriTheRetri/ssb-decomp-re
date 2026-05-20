/* AnimJoint data for relocData file 2034 (FTPikachuAnimShieldOff) */
/* 1968 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimShieldOff_joint1[10];
extern u16 dFTPikachuAnimShieldOff_joint2[40];
extern u16 dFTPikachuAnimShieldOff_joint3[42];
extern u16 dFTPikachuAnimShieldOff_joint4[42];
extern u16 dFTPikachuAnimShieldOff_joint6[50];
extern u16 dFTPikachuAnimShieldOff_joint7[50];
extern u16 dFTPikachuAnimShieldOff_joint8[16];
extern u16 dFTPikachuAnimShieldOff_joint9[50];
extern u16 dFTPikachuAnimShieldOff_joint10[10];
extern u16 dFTPikachuAnimShieldOff_joint11[34];
extern u16 dFTPikachuAnimShieldOff_joint12[34];
extern u16 dFTPikachuAnimShieldOff_joint14[42];
extern u16 dFTPikachuAnimShieldOff_joint15[56];
extern u16 dFTPikachuAnimShieldOff_joint17[14];
extern u16 dFTPikachuAnimShieldOff_joint18[84];
extern u16 dFTPikachuAnimShieldOff_joint20[40];
extern u16 dFTPikachuAnimShieldOff_joint22[72];
extern u16 dFTPikachuAnimShieldOff_joint23[72];
extern u16 dFTPikachuAnimShieldOff_joint25[40];
extern u16 dFTPikachuAnimShieldOff_joint26[92];
extern u16 dFTPikachuAnimShieldOff_joint27[38];

/* Joint pointer table (27 entries, 108 bytes) */
AObjEvent32 * dFTPikachuAnimShieldOff_joints[] = {
	(AObjEvent32 *)dFTPikachuAnimShieldOff_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTPikachuAnimShieldOff_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTPikachuAnimShieldOff_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTPikachuAnimShieldOff_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTPikachuAnimShieldOff_joint6, /* [4] joint 6 */
	NULL, /* [5] NULL */
	(AObjEvent32 *)dFTPikachuAnimShieldOff_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTPikachuAnimShieldOff_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTPikachuAnimShieldOff_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTPikachuAnimShieldOff_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTPikachuAnimShieldOff_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTPikachuAnimShieldOff_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTPikachuAnimShieldOff_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTPikachuAnimShieldOff_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTPikachuAnimShieldOff_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTPikachuAnimShieldOff_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTPikachuAnimShieldOff_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTPikachuAnimShieldOff_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTPikachuAnimShieldOff_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTPikachuAnimShieldOff_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTPikachuAnimShieldOff_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTPikachuAnimShieldOff_joint27, /* [26] joint 27 */
};

/* 4-byte alignment padding */
static u32 dFTPikachuAnimShieldOff_pad[1] = { 0 };

/* Joint 1 */
u16 dFTPikachuAnimShieldOff_joint1[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPikachuAnimShieldOff_joint2[40] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 6,
	ftAnimSetValRate(FT_ANIM_TRAY), 632, 429,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), -26, 33, -28, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 997, 457, 108, 162,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 917, -689, 108, 58,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), 653, -323,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 3), 137,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 675, 44, 108, -58,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 675, 108,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimShieldOff_joint3[42] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 95, -58, 130, -2, 55, -18,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -197, 42, 120, -6, -37, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 433, 36, 79, 2, 150, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 23, -102, 133, 13, 32, -29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 23, 133, 32,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTPikachuAnimShieldOff_joint4[42] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 97, 36, -3, -1, 35, 12,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 97, -47, -3, 0, 35, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -142, 10, -7, 0, -44, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 182, 18, -11, 0, 62, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -13, 0, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTPikachuAnimShieldOff_joint6[50] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 134, -183, -137, -63, 505, 315,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 209, 376, -102, 438, 510, -94,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 322, -63, 81, 23, 458, 39,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 169, 170, -87, -437, 535, -344,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 408, 206, -137, 33, 286, -296,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 324, -62, 313,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTPikachuAnimShieldOff_joint7[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 0, 70, -49, -781, -57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 804, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -78, 102, -954, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 44, -21, -935, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -199, 0, -465, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -120, 112, -381, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 173, 105, -232, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, 0, 236, 63, -202, 30,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPikachuAnimShieldOff_joint8[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTPikachuAnimShieldOff_joint9[50] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 89, 22, -166, 0, 20, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 89, -74, -166, 2, 20, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -282, 19, -154, 0, 17, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 222, 99, -171, -3, 19, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 216, -75, -171, 2, 19, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -2, -163, 20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTPikachuAnimShieldOff_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimShieldOff_joint11[34] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -62, 30, 76, 10, -227, 13,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 247, 33, 84, -22, 104, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 274, -41, -146, -14, -354, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTPikachuAnimShieldOff_joint12[34] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -81, 34, -47, -9, 213, -12,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 276, 29, -79, 28, -103, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 214, -46, 238, 13, 378, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTPikachuAnimShieldOff_joint14[42] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -243, -128, -16, 136, 439, 34,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -452, -192, 73, -38, 347, -32,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -388, -153, -46, -280, 414, -235,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -528, 85, -66, -22, 229, -135,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -324, -62, 313,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTPikachuAnimShieldOff_joint15[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2413, 0, 1458, -39, -2728, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -2412, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1381, 83, -2587, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1483, -104, -2642, 61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2140, 234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1171, -211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1059, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1637, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1995, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1910, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2412, 0, 1703, 65, -1905, 5,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPikachuAnimShieldOff_joint17[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -10,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTPikachuAnimShieldOff_joint18[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1497, 57, -1254, -39, 1209, 159,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1387, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1582, -18, 1650, 344,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1517, -12, 2057, 207,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1717, -38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 943, -225,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1402, -51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1557, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1594, -121,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1528, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 842, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 912, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1618, 60, -1545, -10, 1159, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1650, 24, -1578, -31, 1212, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1666, 16, -1609, -30, 1201, -11,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTPikachuAnimShieldOff_joint20[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 997, -126,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 576, -432,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 872, 276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 995, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 909, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 992, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 949, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 946, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTPikachuAnimShieldOff_joint22[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1757, 0, -1642, 4, -1970, 82,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1711, -67,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1659, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1492, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1368, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1743, -134,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1769, -47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1837, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1583, 40, -1807, -92,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1948, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1584, -13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1814, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1788, 38, -1953, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1602, -17, -1736, 52, -1961, -8,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTPikachuAnimShieldOff_joint23[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -278, 134, 410, 7, -932, 248,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 76, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 199, -111, -41, 257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 114, -43, 173, -44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -42, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 0, -49, -130, -303,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 135, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -434, -251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -748, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -141, -30, -494, 303,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -75, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -141, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -142, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 128, -6, -57, 18, -192, -50,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTPikachuAnimShieldOff_joint25[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 968, -107,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 661, -266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 328, -327,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 512, 453,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 982, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 789, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 778, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 807, 28,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTPikachuAnimShieldOff_joint26[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1765, -120, -1459, -2, 1627, 143,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1580, 53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1610, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1862, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2131, 229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1695, 93, 2320, -130,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1677, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1759, -85, 1869, -448,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1847, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1423, -311,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1649, -90, 1246, -208,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1480, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1914, -7, 1005, -101,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1840, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1044, 51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1118, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1653, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1628, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1601, -26, -1893, -52, 1124, 5,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTPikachuAnimShieldOff_joint27[38] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 62, -64, -1, -12, 22, -14,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, -180, -354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -662, 5, -121, 0, -148, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 119, 107, -5, 20, 41, 24,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -14, 0, -3,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
