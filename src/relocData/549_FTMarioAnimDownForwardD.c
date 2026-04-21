/* AnimJoint data for relocData file 549 (FTMarioAnimDownForwardD) */
/* 2640 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimDownForwardD_joint1[14];
extern u16 dFTMarioAnimDownForwardD_joint2[56];
extern u16 dFTMarioAnimDownForwardD_joint3[24];
extern u16 dFTMarioAnimDownForwardD_joint5[20];
extern u16 dFTMarioAnimDownForwardD_joint6[72];
extern u16 dFTMarioAnimDownForwardD_joint7[26];
extern u16 dFTMarioAnimDownForwardD_joint8[10];
extern u16 dFTMarioAnimDownForwardD_joint9[50];
extern u16 dFTMarioAnimDownForwardD_joint11[32];
extern u16 dFTMarioAnimDownForwardD_joint12[104];
extern u16 dFTMarioAnimDownForwardD_joint13[48];
extern u16 dFTMarioAnimDownForwardD_joint14[54];
extern u16 dFTMarioAnimDownForwardD_joint16[10];
extern u16 dFTMarioAnimDownForwardD_joint17[166];
extern u16 dFTMarioAnimDownForwardD_joint19[56];
extern u16 dFTMarioAnimDownForwardD_joint21[152];
extern u16 dFTMarioAnimDownForwardD_joint22[156];
extern u16 dFTMarioAnimDownForwardD_joint24[60];
extern u16 dFTMarioAnimDownForwardD_joint25[160];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTMarioAnimDownForwardD_joints[] = {
	(u32)dFTMarioAnimDownForwardD_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimDownForwardD_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimDownForwardD_joint3, /* [2] joint 3 */
	(u32)dFTMarioAnimDownForwardD_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTMarioAnimDownForwardD_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimDownForwardD_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimDownForwardD_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimDownForwardD_joint9, /* [8] joint 9 */
	(u32)dFTMarioAnimDownForwardD_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTMarioAnimDownForwardD_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimDownForwardD_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimDownForwardD_joint14, /* [13] joint 14 */
	(u32)dFTMarioAnimDownForwardD_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTMarioAnimDownForwardD_joint17, /* [16] joint 17 */
	(u32)dFTMarioAnimDownForwardD_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTMarioAnimDownForwardD_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTMarioAnimDownForwardD_joint22, /* [21] joint 22 */
	(u32)dFTMarioAnimDownForwardD_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTMarioAnimDownForwardD_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTMarioAnimDownForwardD_joint1[14] = {
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 1600,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 25), 4200,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 11), 4200,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTMarioAnimDownForwardD_joint2[56] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 723, 134, 697, 5, 293, -8,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 5, -1, 720, -60, -6, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), 3395, 69,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 180, -46, 17, 5,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 20), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 10), 4,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 21), 540,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 10), 5, -1, 6, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 11), 3216, 223, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTMarioAnimDownForwardD_joint3[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 25), 0, -1, 0, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 25), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -71, -790, -95,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTMarioAnimDownForwardD_joint5[20] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 6, -457, 156,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 402, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 402, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 208, 258, 110,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimDownForwardD_joint6[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -328, 1, -144, -12, -748, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), -864, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), 110, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), -306, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -306, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -142, 19,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -880, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -570, 86,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -122, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -266, -24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 131, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 235, -68,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -476, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 133, -101, -300, -34, -272, 203,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimDownForwardD_joint7[26] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 28), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, -182,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimDownForwardD_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 36),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTMarioAnimDownForwardD_joint9[50] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 204, -764, -525, 0, 288, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 36), 0, 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 482, 18, 0, 50, 0, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 482, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 134, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 348, 6, 0, 0, 0, 16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 201, -4, 176,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimDownForwardD_joint11[32] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 54, -18,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 36), 0, 54, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 0, -7, 0, 4, 0, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -221, 139, -209,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTMarioAnimDownForwardD_joint12[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -344, -412, 996, 11, -1134, -372,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1080, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -756, -636, -1506, -584,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1616, -429, -2302, -364,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1615, -6, 1279, 142, -2235, 40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1397, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1630, -10, -2220, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), -2353, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), -1670, -29,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1397, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 1367, -21,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2385, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2383, 81,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1700, 14, 1344, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), -1273, 103, 1064, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2220, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1766, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1658, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1164, 109, 1056, -7, -1542, 115,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimDownForwardD_joint13[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -522, -71,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 261,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 292,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), -9, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -14, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -311, -211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -436, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -787, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, -23,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTMarioAnimDownForwardD_joint14[54] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -268, -1072, 714,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -821, -87, -55, 167, 471, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -704, 6, -235, -10, -44, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -704, 21, -235, 11, -44, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -281, 125, -3, 12, 157, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 426, 82, -119, 0, 128, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 625, 38, 0, 10, 0, -10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTMarioAnimDownForwardD_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 36),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTMarioAnimDownForwardD_joint17[166] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 940, -38, -338, 117, -524, -95,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -62, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 901, -152, -619, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 634, -307, -892, -171,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 90, -139, -777, 201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -123, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -72, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 7, -21, -558, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 78, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -781, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -869, -75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -995, 65,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 84, 6, -70, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -116, -45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -7, -13,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -899, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -179, -2, -718, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -70, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -877, -141,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -1033, 30,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -71, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -273, -50,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -19, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 196, -102,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -996, 52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -250, 182,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -320, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -252, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 68, -121,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -118, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -88, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 11, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -135, -16, -230, 22, 45, 33,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTMarioAnimDownForwardD_joint19[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 792, 40,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 689, -229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 382, -341,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 447, 315,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 913, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1027, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1283, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1225, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 721, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 721, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 432, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, -31,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTMarioAnimDownForwardD_joint21[152] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1719, -160, 1307, 10, -1450, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1516, 102, -1229, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1651, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1863, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1580, -126, 1620, 49, -1161, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1559, -89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1590, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1610, 62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1765, -29,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1645, -82,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1894, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1585, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1488, -11,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1746, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1757, -59,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1870, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1587, 27,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1693, -51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1504, -66,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1477, -50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1192, -16,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1459, -21, -1556, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1802, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1407, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1255, 77,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1607, 15,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1806, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1774, 14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1412, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1396, -16, 1619, 12, -1764, 9,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTMarioAnimDownForwardD_joint22[156] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 802, 52, -52, 159, 195, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -90, -254,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 170, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1010, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1124, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 919, -544, -418, -225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 35, -511, -22, -126, -541, -174,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -193, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -102, -72, -767, -158,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1068, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -108, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 335, 147,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -184, 16, -1126, -53,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -74, -46, -1056, 105,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 508, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 357, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -156, -60, -958, 96,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -127, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -371, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 298, -52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 153, -9,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -99, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 27, 64,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -362, 43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 32, 5,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 146, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 153, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 92, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 147, 47, 31, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 200, 46, 187, 39, 35, 4,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTMarioAnimDownForwardD_joint24[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 106, 305,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 659, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 402, -329,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 447, 318,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 786, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 914, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1398, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1349, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 775, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 713, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 427, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 434, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, 3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTMarioAnimDownForwardD_joint25[160] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -296, 636, -260, -47, 598, -76,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 692, 159,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -330, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 521, -210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 176, -403,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 658, -79, -285, -310,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 533, -310, -219, 86, -444, -96,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 200, 90, -76, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 38, -339,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -229, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -258, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -359, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 279, 45, 47, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -104, -57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 289, -11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -430, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -436, 94, -163, -60,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -663, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -241, 111,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -679, 6,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 277, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -65, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -637, 79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -174, 47,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -691, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -293, 19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -129, 43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 91, 5,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -274, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -226, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 89, -2, -93, -28, -212, 13,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
