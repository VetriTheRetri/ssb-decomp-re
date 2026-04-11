/* AnimJoint data for relocData file 1864 (FTYoshiAnimDownForwardD) */
/* 2320 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimDownForwardD_joint1[18];
extern u16 dFTYoshiAnimDownForwardD_joint2[80];
extern u16 dFTYoshiAnimDownForwardD_joint3[20];
extern u16 dFTYoshiAnimDownForwardD_joint4[34];
extern u16 dFTYoshiAnimDownForwardD_joint5[20];
extern u16 dFTYoshiAnimDownForwardD_joint7[10];
extern u16 dFTYoshiAnimDownForwardD_joint8[24];
extern u16 dFTYoshiAnimDownForwardD_joint9[16];
extern u16 dFTYoshiAnimDownForwardD_joint11[10];
extern u16 dFTYoshiAnimDownForwardD_joint12[34];
extern u16 dFTYoshiAnimDownForwardD_joint13[16];
extern u16 dFTYoshiAnimDownForwardD_joint14[34];
extern u16 dFTYoshiAnimDownForwardD_joint15[8];
extern u16 dFTYoshiAnimDownForwardD_joint16[22];
extern u16 dFTYoshiAnimDownForwardD_joint18[22];
extern u16 dFTYoshiAnimDownForwardD_joint19[146];
extern u16 dFTYoshiAnimDownForwardD_joint21[80];
extern u16 dFTYoshiAnimDownForwardD_joint23[134];
extern u16 dFTYoshiAnimDownForwardD_joint24[152];
extern u16 dFTYoshiAnimDownForwardD_joint26[226];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTYoshiAnimDownForwardD_joints[] = {
	(u32)dFTYoshiAnimDownForwardD_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimDownForwardD_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimDownForwardD_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimDownForwardD_joint4, /* [3] joint 4 */
	(u32)dFTYoshiAnimDownForwardD_joint5, /* [4] joint 5 */
	(u32)dFTYoshiAnimDownForwardD_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTYoshiAnimDownForwardD_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimDownForwardD_joint9, /* [8] joint 9 */
	(u32)dFTYoshiAnimDownForwardD_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTYoshiAnimDownForwardD_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimDownForwardD_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimDownForwardD_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimDownForwardD_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimDownForwardD_joint16, /* [15] joint 16 */
	(u32)dFTYoshiAnimDownForwardD_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTYoshiAnimDownForwardD_joint19, /* [18] joint 19 */
	(u32)dFTYoshiAnimDownForwardD_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTYoshiAnimDownForwardD_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTYoshiAnimDownForwardD_joint24, /* [23] joint 24 */
	(u32)dFTYoshiAnimDownForwardD_joint26, /* [24] joint 26 */
	0x00000000, /* [25] NULL */
	0xFFFF01F7, /* [26] END */
};

/* Joint 1 */
u16 dFTYoshiAnimDownForwardD_joint1[18] = {
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 127,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), 274, 2524,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 26), 4200,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 5), 4200,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTYoshiAnimDownForwardD_joint2[80] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAY), -242, 127, 265, -642,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 466, 382,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 4), -1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 269, 937,
	ftAnimSetValRateT(FT_ANIM_TRAY, 4), 1355, 2808,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1173, 118,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 4), 609, 2818,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 653, -4889,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), 1228, -454,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 21), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), 3216, 66,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 340, 346,
	ftAnimSetValRateT(FT_ANIM_TRAY, 24), 672, 46,
	ftAnimBlock(0, 19),
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 3216, -53,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 5), 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTYoshiAnimDownForwardD_joint3[20] = {
	ftAnimSetVal(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 144, -190,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetValT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 36), 30, 20,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 31), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 5), -89,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTYoshiAnimDownForwardD_joint4[34] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 934, -139,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 242, -260,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 174, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 932, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 825, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 221, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 16, -11,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTYoshiAnimDownForwardD_joint5[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -607, -30,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -271, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 507, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 21), 78, -26,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTYoshiAnimDownForwardD_joint7[10] = {
	ftAnimSetVal(FT_ANIM_ROTX), 0,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 36), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTYoshiAnimDownForwardD_joint8[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1557, -29, -1051, -2, 685, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 35), -1724, 5, -1467, -9, 1254, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1718, 5, -1476, -8, 1256, 1,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTYoshiAnimDownForwardD_joint9[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -595, -25,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 35), -779, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -764, 14,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimDownForwardD_joint11[10] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -263, -454, -220,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 36), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimDownForwardD_joint12[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -9, 29, 567, -4, 2338, 44,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 35), -134, -11, -93, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 2919, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2934, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 2990, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -145, -10, -103, -9, 2997, 7,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTYoshiAnimDownForwardD_joint13[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -710, -35,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 35), -1022, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1002, 20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTYoshiAnimDownForwardD_joint14[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 284, -7, 225, 5, 28, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 29), 43, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 36), 0, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 28), 381, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 0, -50,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 28, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, -6,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimDownForwardD_joint15[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -536, -893, 0,
	ftAnimBlock(0, 36),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTYoshiAnimDownForwardD_joint16[22] = {
	ftAnimSetVal(FT_ANIM_ROTX), 39,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 14), -263,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 3), -434,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 7), -398,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 5), -365,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 7), -190,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimDownForwardD_joint18[22] = {
	ftAnimSetVal(FT_ANIM_ROTX), 107,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 14), -321,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 3), -507,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 7), -407,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 5), -494,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 7), -153,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTYoshiAnimDownForwardD_joint19[146] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -348, -19, -313, -145, 1068, -373,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -437, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -367, 62, 695, -446,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -223, 55, 174, -427,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -306, 27, -426, -228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -301, 98,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -203, 111,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -200, 53, -617, -74,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -232, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -576, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -585, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -368, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -174, 22, -189, 338,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -104, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -56, 29, 309, 147,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -161, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 106, -118,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 149, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -49, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -101, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -157, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -21, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 180, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 326, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -85, 15, 189, -127,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -10, 6, -136, 102,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -24, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -7, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5, 4, 5, 13, -3, 132,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTYoshiAnimDownForwardD_joint21[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 382, 225,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 686, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 477, -174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 337, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 491, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 489, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 606, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 575, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 510, -284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 516, 373,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 820, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 856, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 163, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 386, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 428, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 383, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 261, -121,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTYoshiAnimDownForwardD_joint23[134] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1166, 77, -16, 151, 446, -54,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 144, -20, 452, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1088, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1192, -89,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1342, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 93, -15, 620, 130,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 265, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 713, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 542, -158,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 307, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1394, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1342, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 243, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 63, 16,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1438, -79, 245, 44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1505, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 396, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 220, -114,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 135, -51,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 84, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -59, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 74, -54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -145, -48,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1512, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -1613, 8,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -185, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -295, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1602, 10, -83, -24, -263, 31,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTYoshiAnimDownForwardD_joint24[152] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1434, 62, 1172, -49, -1140, -83,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -1360, 53, 1228, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1488, -292,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1808, -283,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2218, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1269, 30, 1324, 37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1396, -122,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1257, 127,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2138, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2250, 157,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1533, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1309, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1939, 336,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1308, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1429, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1328, -67, 1549, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1510, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1415, -82, -1505, -108,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1362, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1401, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1501, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1437, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1362, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1187, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1409, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1598, -13,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1280, -114,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1835, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1465, -25, 1580, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -1575, -29, 1598, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1608, -32, 1608, 9, -1762, 73,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTYoshiAnimDownForwardD_joint26[226] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 675, 24,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 594, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 383, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 460, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 487, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 883, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 716, -300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 502, 373,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 710, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 762, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 120, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 433, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 451, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 423, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, -44,
	ftAnimEnd(),
	0x0000, 0x200E, 0xFDA1, 0xFFFE, 0x0681, 0x0091, 0xFC1C, 0xFFA1, 0x2809, 0x0003, 0xFC1B, 0x006D, 0x2803, 0x0004, 0xFE53, 0x001A, 0x2005, 0x0002, 0x0716, 0xFFD5, 0x2005, 0x0001, 0x06BD, 0xFFB2, 0x2805, 0x0002, 0x06B8, 0x0079, 0x2009, 0x0001, 0xFC9F, 0x001D, 0x2809, 0x0002, 0xFB8C, 0xFF6C, 0x2003, 0x0001, 0xFE5E, 0x0022, 0x2007, 0x0001, 0xFE97, 0x000B, 0x076A, 0x006F, 0x2805, 0x0003, 0x07CF, 0xFFEB, 0x200B, 0x0001, 0xFE75, 0x0023, 0xFB2D, 0xFF79, 0x200B, 0x0002, 0xFF5C, 0x0025, 0xF9F3, 0x0028, 0x200F, 0x0001, 0xFF2A, 0xFFA9, 0x07A3, 0xFF96, 0xFACE, 0x0122, 0x200F, 0x0001, 0xFEAD, 0xFFE7, 0x06F9, 0xFFBE, 0xFC38, 0x0037, 0x200F, 0x0001, 0xFEF6, 0x0051, 0x071E, 0x0024, 0xFB3E, 0xFF0E, 0x2803, 0x0007, 0xFF7A, 0x0016, 0x2805, 0x000A, 0x0726, 0x0004, 0x2009, 0x0002, 0xFA21, 0xFFF6, 0x2009, 0x0001, 0xFA3F, 0x0016, 0x2809, 0x0008, 0xF9A3, 0x0005, 0x0801, 0x0004, 0x2003, 0x0001, 0xFF92, 0x001B, 0x2803, 0x000F, 0xFFFF, 0x0000, 0x0801, 0x0002, 0x2005, 0x0001, 0x072A, 0x0001, 0x2805, 0x000A, 0x06C0, 0x0001, 0x2009, 0x0001, 0xF9AF, 0xFFFA, 0x2809, 0x000A, 0xF8B9, 0x0007, 0x0801, 0x0009, 0x2005, 0x0001, 0x06BD, 0xFFF9, 0x200D, 0x0001, 0x06B1, 0xFFF3, 0xF8C3, 0x000D, 0x200F, 0x0001, 0x0000, 0x0001, 0x06A1, 0xFFF1, 0xF8D3, 0x0010, 0x0000,
};
