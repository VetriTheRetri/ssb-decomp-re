/* AnimJoint data for relocData file 2080 (FTPikachuAnimThrown2) */
/* 2320 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimThrown2_joint2[14];
extern u16 dFTPikachuAnimThrown2_joint3[24];
extern u16 dFTPikachuAnimThrown2_joint4[24];
extern u16 dFTPikachuAnimThrown2_joint6[24];
extern u16 dFTPikachuAnimThrown2_joint7[136];
extern u16 dFTPikachuAnimThrown2_joint8[62];
extern u16 dFTPikachuAnimThrown2_joint9[24];
extern u16 dFTPikachuAnimThrown2_joint10[12];
extern u16 dFTPikachuAnimThrown2_joint11[24];
extern u16 dFTPikachuAnimThrown2_joint12[24];
extern u16 dFTPikachuAnimThrown2_joint14[34];
extern u16 dFTPikachuAnimThrown2_joint15[128];
extern u16 dFTPikachuAnimThrown2_joint17[64];
extern u16 dFTPikachuAnimThrown2_joint18[104];
extern u16 dFTPikachuAnimThrown2_joint20[48];
extern u16 dFTPikachuAnimThrown2_joint22[76];
extern u16 dFTPikachuAnimThrown2_joint23[116];
extern u16 dFTPikachuAnimThrown2_joint25[64];
extern u16 dFTPikachuAnimThrown2_joint26[104];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTPikachuAnimThrown2_joints[] = {
	0x00000000, /* [0] NULL */
	(u32)dFTPikachuAnimThrown2_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimThrown2_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimThrown2_joint4, /* [3] joint 4 */
	(u32)dFTPikachuAnimThrown2_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTPikachuAnimThrown2_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimThrown2_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimThrown2_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimThrown2_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimThrown2_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimThrown2_joint12, /* [11] joint 12 */
	(u32)dFTPikachuAnimThrown2_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTPikachuAnimThrown2_joint15, /* [14] joint 15 */
	(u32)dFTPikachuAnimThrown2_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTPikachuAnimThrown2_joint18, /* [17] joint 18 */
	(u32)dFTPikachuAnimThrown2_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTPikachuAnimThrown2_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTPikachuAnimThrown2_joint23, /* [22] joint 23 */
	(u32)dFTPikachuAnimThrown2_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTPikachuAnimThrown2_joint26, /* [25] joint 26 */
	0xFFFF0238, /* [26] END */
};

/* Joint 2 */
u16 dFTPikachuAnimThrown2_joint2[14] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -26, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 33, -28, 0, -224, -491,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), -26,
	ftAnimLoop(0x6800, -26),
};

/* Joint 3 */
u16 dFTPikachuAnimThrown2_joint3[24] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 181, 7, -30, -13, 24, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 121, -48, 24,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 181, -30, 24,
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTPikachuAnimThrown2_joint4[24] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -392, -11, 217, 14, -31, -2,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -282, 236, -34,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -392, 217, -31,
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimThrown2_joint6[24] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 494, 117, -86, 8, -53, -192,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 456, -53, 96,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), 494, -86, -53,
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimThrown2_joint7[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2492, 169, -493, -47, -2674, -250,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -343, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2662, 271, -2924, -310,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3035, 373, -3294, -310,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 3724, 228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3545, -229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3753, -150,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -3857, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3865, 92, -135, 119,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 3949, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -97, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -108, -18, -3864, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -3885, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3963, 10, -133, -113,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 3995, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -336, -173,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -842, -96,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4023, -10, -3919, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3974, 242, -3887, -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4509, 143, -4456, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4261, -156, -933, -86, -4262, 97,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1105, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4195, -57, -4261, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 4113, -23, -4280, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4101, -12, -1115, -9, -4282, -2,
	ftAnimLoop(0x6800, -268),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPikachuAnimThrown2_joint8[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -803, -127,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -918, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -753, 240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -438, 371,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -394, -312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -624, -182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -899, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -907, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -818, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -803, 15,
	ftAnimLoop(0x6800, -122),
};

/* Joint 9 */
u16 dFTPikachuAnimThrown2_joint9[24] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 89, 19, 367, 2, 71, 2,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 170, 126, 24,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 89, 367, 71,
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimThrown2_joint10[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 20),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimThrown2_joint11[24] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 8, 0, -8, 0, -22,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 128, -133, -358,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 0, 0,
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTPikachuAnimThrown2_joint12[24] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 296, -20, -440, -28, -322, 27,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -182, -259, 248,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 296, -440, -322,
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimThrown2_joint14[34] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -439, -108, -24, 140, 180, -265,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -446, -7, 95, -5, 15, 48,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -451, 3, -33, -68, 258, 94,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -439, -24, 180,
	ftAnimLoop(0x6800, -66),
};

/* Joint 15 */
u16 dFTPikachuAnimThrown2_joint15[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -515, -81, 907, 44, -409, -58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 926, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -672, 11, -492, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -649, 106, -461, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -460, 40, 865, -11, -264, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -568, -373, 904, -68, -371, -369,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1208, -175, 728, -206, -1003, -163,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 303, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -919, 155, -698, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -896, 9, -657, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -899, -2, 241, -39, -651, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -894, -11, -661, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 248, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 320, 146,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 753, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -921, -231, -716, -259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1356, -616, -1180, -645,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2153, -340, 717, -11, -2007, -368,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2037, 14, 730, -8, -1917, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2123, -86, 701, -29, -2017, -100,
	ftAnimLoop(0x6800, -252),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPikachuAnimThrown2_joint17[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -10, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -410, -219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -448, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -198, 224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -418, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -292, 204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimLoop(0x6800, -126),
};

/* Joint 18 */
u16 dFTPikachuAnimThrown2_joint18[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1791, 37, -1337, 28, 1294, -115,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1826, -42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1277, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1020, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 902, -78,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 903, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1767, -56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1699, 7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 943, 63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1405, 216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1707, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1505, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1264, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1392, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1621, 197,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1906, -44,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1516, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1771, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1374, 20, 1821, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1333, -4, 1335, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1791, 19, -1337, -4, 1294, -40,
	ftAnimLoop(0x6800, -204),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTPikachuAnimThrown2_joint20[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1005, 18,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1001, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 933, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 848, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 871, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 644, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 483, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 384, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 511, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 980, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1005, 25,
	ftAnimLoop(0x6800, -94),
};

/* Joint 22 */
u16 dFTPikachuAnimThrown2_joint22[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1299, 8, -1708, -32, 1361, 97,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1773, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1782, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1435, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1476, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1423, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1793, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1384, -21,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1419, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1319, -18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1769, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1710, 3,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1304, -9, 1367, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1299, -4, -1708, 1, 1361, -5,
	ftAnimLoop(0x6800, -148),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTPikachuAnimThrown2_joint23[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 29, 43, 150, 19, 233, 90,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 140, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 322, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 526, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 525, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 140, 54, 519, -79,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 345, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 336, -9, 366, -155,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 176, -139, -31, -252,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 395, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 220, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 25, -112, -296, -229,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -43, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -628, 24,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 187, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 188, -27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -50, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -7, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -584, 85,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 155, 127,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 17, 18, 161, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 29, 11, 150, -11, 233, 77,
	ftAnimLoop(0x6800, -228),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTPikachuAnimThrown2_joint25[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 432, -123,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 142, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 294, 250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 508, 201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 861, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 822, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 715, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 757, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 821, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 685, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 520, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 432, -88,
	ftAnimLoop(0x6800, -126),
};

/* Joint 26 */
u16 dFTPikachuAnimThrown2_joint26[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1763, -10, -1712, 36, 1609, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1567, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -1657, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 1766, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1779, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1690, -37,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1599, 36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1735, -24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1660, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1714, 50,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1704, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1617, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1769, 37, -1679, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1775, -13, -1708, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1763, -11, -1712, -3, 1609, -8,
	ftAnimLoop(0x6800, -156),
	ftAnimEnd(),
	0x280E, 0xFE45, 0xFFBD, 0x01C4, 0x0026, 0xFE84, 0xFFE0, 0x48E0, 0xFFFF, 0xFF4C, 0xFE9E, 0x380F, 0x000A, 0xFC87, 0x01F5, 0xFE5B, 0x380F, 0x000A, 0xFE45, 0x01C4, 0xFE84, 0x6800, 0xFFD4, 0x0000,
};
