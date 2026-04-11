/* AnimJoint data for relocData file 908 (FTDonkeyAnimJab2) */
/* 2496 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimJab2_joint1[54];
extern u16 dFTDonkeyAnimJab2_joint2[56];
extern u16 dFTDonkeyAnimJab2_joint4[54];
extern u16 dFTDonkeyAnimJab2_joint5[126];
extern u16 dFTDonkeyAnimJab2_joint7[64];
extern u16 dFTDonkeyAnimJab2_joint8[50];
extern u16 dFTDonkeyAnimJab2_joint10[46];
extern u16 dFTDonkeyAnimJab2_joint11[130];
extern u16 dFTDonkeyAnimJab2_joint12[60];
extern u16 dFTDonkeyAnimJab2_joint13[30];
extern u16 dFTDonkeyAnimJab2_joint14[10];
extern u16 dFTDonkeyAnimJab2_joint16[34];
extern u16 dFTDonkeyAnimJab2_joint17[82];
extern u16 dFTDonkeyAnimJab2_joint19[32];
extern u16 dFTDonkeyAnimJab2_joint21[80];
extern u16 dFTDonkeyAnimJab2_joint22[124];
extern u16 dFTDonkeyAnimJab2_joint24[166];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTDonkeyAnimJab2_joints[] = {
	(u32)dFTDonkeyAnimJab2_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimJab2_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimJab2_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTDonkeyAnimJab2_joint5, /* [4] joint 5 */
	(u32)dFTDonkeyAnimJab2_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTDonkeyAnimJab2_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimJab2_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTDonkeyAnimJab2_joint11, /* [10] joint 11 */
	(u32)dFTDonkeyAnimJab2_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimJab2_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimJab2_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimJab2_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTDonkeyAnimJab2_joint17, /* [16] joint 17 */
	(u32)dFTDonkeyAnimJab2_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTDonkeyAnimJab2_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTDonkeyAnimJab2_joint22, /* [21] joint 22 */
	(u32)dFTDonkeyAnimJab2_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF022D, /* [24] END */
};

/* Joint 1 */
u16 dFTDonkeyAnimJab2_joint1[54] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 76, -51, 1017, 0, -174, -109,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 166, -157, 807, -281, -145, 743,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -41, -357, 805, 81, 383, 1060,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -101, -117, 868, 105, 650, -279,
	ftAnimSetValRateT(FT_ANIM_TRAY, 12), 1017, 54,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 8), -217, 16, -35, -549,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 4), -76, 94, -174, -182,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), -29, 1031, -400,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTDonkeyAnimJab2_joint2[56] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -214, -154,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -246, -7, -27, -5, -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -254, 9, -101, 27, 9, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 8, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -188, 4, 135, 49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -196, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 195, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 60, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -246, -4, 27, -6, -10, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -265, -41, -16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTDonkeyAnimJab2_joint4[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 706, 13, 16, -28, 12, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 790, -15, -210, -14, 114, 49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 553, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -53, 26, 260, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -50, 2, -26, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 686, 12, -16, 2, 5, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 706, 4, -16, 2, 12, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 750, 24, 41,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTDonkeyAnimJab2_joint5[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -113, -90, -125, 0, -319, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -322, -27, -320, -81, -493, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -352, -53, -359, 61, -448, 204,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 248, 288,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -566, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -198, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -174, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -197, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 493, 138,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 352, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -504, 55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -384, 75,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 308, -50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -296, -34,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -156, 41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -113, 5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -301, 76,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -62, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -318, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -453, -12,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -111, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -85, 0,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -464, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -471, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -62, 0, -84, 0, -473, -2,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTDonkeyAnimJab2_joint7[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -628, 105,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -270, 259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4, -336,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -678, -527,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1060, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1040, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -561, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -571, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -613, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -557, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -508, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -495, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -410, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -407, 2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimJab2_joint8[50] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 141, 4, -52, 16, -81, -17,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 1354, 213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 155, 3, 82, 37, -236, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 176, -2, 320, -4, 357, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 123, -2, 24, -22, 17, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 141, 3, 52, -5, -81, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 174, -67, -44,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTDonkeyAnimJab2_joint10[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -384, 11, 127, -28, 14, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -338, 3, -30, -30, 79, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -351, -6, -177, -12, -432, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -428, -2, -200, 4, -42, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -384, 1, -127, 16, 14, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -398, 70, 29,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTDonkeyAnimJab2_joint11[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1636, 154, -1778, 108, -1903, 242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1791, 260, -1670, 215, -1661, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2157, 208, -1348, 154, -1589, 139,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1784, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2208, -70, -1381, 243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2017, -75, -1102, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2056, -187, -1335, -627,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1642, -257, -2357, -628,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1480, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1758, 23, -2592, -179,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1872, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2716, -102,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2299, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1428, -43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1713, -6,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2123, 153,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1948, -17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1848, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -1781, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1700, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 1494, -3,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1966, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -2085, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1492, -1, -1780, 0, -2087, -2,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimJab2_joint12[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -543, -239,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -915, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -849, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -848, -205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1260, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -621, 422,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -529, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -627, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -887, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -812, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -426, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -419, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, 2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTDonkeyAnimJab2_joint13[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 103, 58, 0, 0, 1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1572, 151, 0, 6, 1, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1618, -49, 60, 0, -25, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 98, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTDonkeyAnimJab2_joint14[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -893, -1340, 2502,
	_FT_ANIM_CMD(11, 0, 1), 21,
	ftAnimBlock(0, 34),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTDonkeyAnimJab2_joint16[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -536, -17, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -531, 25, -17, 0, -17, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -329, -36, -14, 0, -14, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -969, -2, -9, 0, -9, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), -404, 0, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimJab2_joint17[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -34, -29, -273, 11, -312, 58,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -228, -68, 142, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -208, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -103, 95,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -112, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -321, -62, 229, 80,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -364, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 412, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -72, 42, 329, -87,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), 16, -31, -184, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -364, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -392, -1,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -9, -19, -179, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 11), -61, 0, -326, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -60, 0, -392, 0, -329, -3,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimJab2_joint19[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1036, 21,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1000, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 778, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 444, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 530, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 1025, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1026, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTDonkeyAnimJab2_joint21[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -154, 18, 92, -72, -455, -49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -711, 78,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -194, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -41, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -218, -171,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -394, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -590, 92,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -439, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -193, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), 15, 3,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -376, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -115, 3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -417, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -414, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -407, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -371, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -113, 1, 17, 2, -370, 1,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimJab2_joint22[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1628, -34, 1404, -41, -1801, -142,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1278, 88,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2363, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1522, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1515, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1367, -42, 1452, 128,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1530, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1430, 39, -2095, 151,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1461, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -2052, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2071, -33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -2212, 34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1526, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1281, 17,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1512, 52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1668, -6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2174, 36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1802, -14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1306, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1391, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1670, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1711, 1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1819, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1900, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1712, 0, 1391, 0, -1904, -3,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimJab2_joint24[166] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1000, 43,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1073, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1056, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1251, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1243, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 26), 994, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 994, 0,
	ftAnimEnd(),
	0x0000, 0x200E, 0x009D, 0xFFE6, 0x0175, 0xFFAA, 0xFE65, 0x0037, 0x2805, 0x0005, 0xFFD8, 0x0061, 0x200B, 0x0003, 0xFFD0, 0xFFAE, 0xFF7E, 0x0072, 0x200B, 0x0001, 0xFF99, 0x0083, 0xFFE3, 0xFFCD, 0x2809, 0x0002, 0xFE01, 0xFF6B, 0x2003, 0x0001, 0x00D6, 0x00A5, 0x2007, 0x0001, 0x00E2, 0xFFEB, 0x0094, 0x006E, 0x2805, 0x0004, 0x008A, 0xFFDE, 0x2803, 0x0007, 0x002B, 0xFFC0, 0x2009, 0x0001, 0xFDEC, 0xFFFC, 0x2809, 0x0007, 0xFECB, 0x0009, 0x0801, 0x0003, 0x2005, 0x0001, 0x0061, 0xFFCE, 0x2805, 0x0009, 0xFF31, 0x0038, 0x0801, 0x0002, 0x2003, 0x0001, 0xFFEC, 0xFFCA, 0x2803, 0x0007, 0x0048, 0x001A, 0x2009, 0x0001, 0xFED1, 0x0003, 0x2809, 0x000C, 0xFE3A, 0x000B, 0x0801, 0x0005, 0x2005, 0x0001, 0xFF72, 0x003F, 0x2805, 0x0009, 0x0098, 0xFFF2, 0x2003, 0x0001, 0x0052, 0x0001, 0x2803, 0x000B, 0x000E, 0xFFF5, 0x0801, 0x0005, 0x2009, 0x0001, 0xFE46, 0x000B, 0x2809, 0x0005, 0xFE7B, 0x0004, 0x0801, 0x0002, 0x2005, 0x0001, 0x0088, 0xFFF1, 0x2005, 0x0002, 0x006C, 0xFFF8, 0x200F, 0x0001, 0x0007, 0xFFFA, 0x0067, 0xFFFC, 0xFE7D, 0x0002, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
