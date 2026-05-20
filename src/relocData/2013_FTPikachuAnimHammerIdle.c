/* AnimJoint data for relocData file 2013 (FTPikachuAnimHammerIdle) */
/* 1712 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimHammerIdle_joint1[18];
extern u16 dFTPikachuAnimHammerIdle_joint2[22];
extern u16 dFTPikachuAnimHammerIdle_joint3[22];
extern u16 dFTPikachuAnimHammerIdle_joint5[12];
extern u16 dFTPikachuAnimHammerIdle_joint6[22];
extern u16 dFTPikachuAnimHammerIdle_joint7[14];
extern u16 dFTPikachuAnimHammerIdle_joint8[22];
extern u16 dFTPikachuAnimHammerIdle_joint9[22];
extern u16 dFTPikachuAnimHammerIdle_joint10[32];
extern u16 dFTPikachuAnimHammerIdle_joint11[32];
extern u16 dFTPikachuAnimHammerIdle_joint13[12];
extern u16 dFTPikachuAnimHammerIdle_joint14[26];
extern u16 dFTPikachuAnimHammerIdle_joint16[16];
extern u16 dFTPikachuAnimHammerIdle_joint17[100];
extern u16 dFTPikachuAnimHammerIdle_joint19[44];
extern u16 dFTPikachuAnimHammerIdle_joint21[110];
extern u16 dFTPikachuAnimHammerIdle_joint22[90];
extern u16 dFTPikachuAnimHammerIdle_joint24[48];
extern u16 dFTPikachuAnimHammerIdle_joint25[102];
extern u16 dFTPikachuAnimHammerIdle_joint26[38];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTPikachuAnimHammerIdle_joints[] = {
	(AObjEvent32 *)dFTPikachuAnimHammerIdle_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTPikachuAnimHammerIdle_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTPikachuAnimHammerIdle_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTPikachuAnimHammerIdle_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTPikachuAnimHammerIdle_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTPikachuAnimHammerIdle_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTPikachuAnimHammerIdle_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTPikachuAnimHammerIdle_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTPikachuAnimHammerIdle_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTPikachuAnimHammerIdle_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTPikachuAnimHammerIdle_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTPikachuAnimHammerIdle_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTPikachuAnimHammerIdle_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTPikachuAnimHammerIdle_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTPikachuAnimHammerIdle_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTPikachuAnimHammerIdle_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTPikachuAnimHammerIdle_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTPikachuAnimHammerIdle_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTPikachuAnimHammerIdle_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTPikachuAnimHammerIdle_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTPikachuAnimHammerIdle_joint1[18] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 782, 108,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), -26, 33, -28, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 790, 193,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 782, 108,
	ftAnimLoop(0x6800, -34),
};

/* Joint 2 */
u16 dFTPikachuAnimHammerIdle_joint2[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -220,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -34, 37, 0, -209, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -369, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 467, 12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), -220,
	ftAnimLoop(0x6800, -40),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimHammerIdle_joint3[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -128,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -296, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 114, 14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), -128,
	ftAnimLoop(0x6800, -40),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPikachuAnimHammerIdle_joint5[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 175, 0, 400,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimHammerIdle_joint6[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 746, 0, 258, -4, 2037, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 746, 258, 2037,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), 258, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 746, 2037,
	ftAnimLoop(0x6800, -42),
};

/* Joint 7 */
u16 dFTPikachuAnimHammerIdle_joint7[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 15), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimLoop(0x6800, -26),
};

/* Joint 8 */
u16 dFTPikachuAnimHammerIdle_joint8[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -148,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -122, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 125, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), -148,
	ftAnimLoop(0x6800, -40),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimHammerIdle_joint9[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 279,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 7, 3205, 8, 32, 508,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 166, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 115, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 279,
	ftAnimLoop(0x6800, -40),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimHammerIdle_joint10[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 280, -47, -208, 20, 293, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -471, -23, 203, 17, 257, -24,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0, 0,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimHammerIdle_joint11[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 272, -53, 249, -13, -276, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -538, -22, -139, -20, -247, 23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0, 0,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPikachuAnimHammerIdle_joint13[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1, 0, 0, -205, 22, 425,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimHammerIdle_joint14[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 889, 0, 1974, 4, 476, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 889, 0, 1974, 0, 476, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 889, 0, 1974, 0, 476, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPikachuAnimHammerIdle_joint16[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 17 */
u16 dFTPikachuAnimHammerIdle_joint17[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2, -35, 3, -31, 155, -104,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -55, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -310, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -400, -211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -574, -61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -226, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -69, -56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -274, 39,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -247, 60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -306, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -319, -207,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1498, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -190, 93,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -14, -7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -391, 51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -62, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1116, 489,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -58, 337,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -28, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -14, 13, -7, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2, 11, 3, 11, 155, 214,
	ftAnimLoop(0x6800, -196),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPikachuAnimHammerIdle_joint19[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 466, 187,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1175, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1164, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 602, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 806, 244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1247, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1259, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1033, -272,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 693, -283,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 466, -226,
	ftAnimLoop(0x6800, -86),
};

/* Joint 21 */
u16 dFTPikachuAnimHammerIdle_joint21[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1602, 11, -1610, -46, 1383, 37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1709, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1404, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1551, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1766, 165,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1744, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1661, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1965, -14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1522, -198,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1545, 254,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1564, -120,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1303, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1934, 38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1670, 127,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1860, 231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1216, -50, -1554, 2, 2008, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1559, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1666, -55, 1819, -247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1666, 19, 1514, -209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1597, -21, -1626, 28, 1400, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1602, -4, -1610, 16, 1383, -17,
	ftAnimLoop(0x6800, -216),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimHammerIdle_joint22[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 276, -48, 328, -93, -598, 136,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 68, 75,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 163, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -461, 243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -110, 351,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 420, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 122, -376,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1210, -210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 144, 79,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 246, -101,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1273, 62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -537, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 118, -89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 270, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 147, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 239, 33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -445, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -564, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 275, 36, 328, 58, -597, -33,
	ftAnimLoop(0x6800, -176),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTPikachuAnimHammerIdle_joint24[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1115, -49,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 855, -282,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 501, -326,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 203, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 546, 359,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1162, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1217, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 862, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 733, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1100, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1115, 14,
	ftAnimLoop(0x6800, -94),
};

/* Joint 25 */
u16 dFTPikachuAnimHammerIdle_joint25[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1166, 112, -1706, 57, 1744, -88,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1448, -95,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1661, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1412, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1437, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1412, 111,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1318, -147,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1031, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1589, 159,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1668, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1760, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1615, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1130, 138,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1458, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1479, -159,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1473, 151,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1576, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1642, -71,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1342, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1230, -87, 1652, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1167, -63, -1705, -63, 1744, 91,
	ftAnimLoop(0x6800, -200),
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTPikachuAnimHammerIdle_joint26[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -20, 388, -18,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, -180, -354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -119, -59, 623, -60, -230, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -615, 8, -218, -19, -888, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -20, 388, -18,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
