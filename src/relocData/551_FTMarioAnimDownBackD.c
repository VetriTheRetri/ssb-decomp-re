/* AnimJoint data for relocData file 551 (FTMarioAnimDownBackD) */
/* 2592 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimDownBackD_joint1[18];
extern u16 dFTMarioAnimDownBackD_joint2[60];
extern u16 dFTMarioAnimDownBackD_joint3[20];
extern u16 dFTMarioAnimDownBackD_joint5[34];
extern u16 dFTMarioAnimDownBackD_joint6[64];
extern u16 dFTMarioAnimDownBackD_joint7[20];
extern u16 dFTMarioAnimDownBackD_joint8[10];
extern u16 dFTMarioAnimDownBackD_joint9[40];
extern u16 dFTMarioAnimDownBackD_joint11[30];
extern u16 dFTMarioAnimDownBackD_joint12[150];
extern u16 dFTMarioAnimDownBackD_joint13[56];
extern u16 dFTMarioAnimDownBackD_joint14[62];
extern u16 dFTMarioAnimDownBackD_joint16[10];
extern u16 dFTMarioAnimDownBackD_joint17[152];
extern u16 dFTMarioAnimDownBackD_joint19[56];
extern u16 dFTMarioAnimDownBackD_joint21[140];
extern u16 dFTMarioAnimDownBackD_joint22[150];
extern u16 dFTMarioAnimDownBackD_joint24[48];
extern u16 dFTMarioAnimDownBackD_joint25[126];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTMarioAnimDownBackD_joints[] = {
	(u32)dFTMarioAnimDownBackD_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimDownBackD_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimDownBackD_joint3, /* [2] joint 3 */
	(u32)dFTMarioAnimDownBackD_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTMarioAnimDownBackD_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimDownBackD_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimDownBackD_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimDownBackD_joint9, /* [8] joint 9 */
	(u32)dFTMarioAnimDownBackD_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTMarioAnimDownBackD_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimDownBackD_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimDownBackD_joint14, /* [13] joint 14 */
	(u32)dFTMarioAnimDownBackD_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTMarioAnimDownBackD_joint17, /* [16] joint 17 */
	(u32)dFTMarioAnimDownBackD_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTMarioAnimDownBackD_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTMarioAnimDownBackD_joint22, /* [21] joint 22 */
	(u32)dFTMarioAnimDownBackD_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTMarioAnimDownBackD_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTMarioAnimDownBackD_joint1[18] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), -300, -720,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 23), -3840, -1120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 8), -4200,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTMarioAnimDownBackD_joint2[60] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 723, 134, 697, 5, 293, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAY, 5), 536, -141, 360, -42,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 20), 5, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 20), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 20), -2814, -121, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 240, -116,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 214, 528,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 900, 308,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 5, -2, 600, -179, -8, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), -3216, 223, 0, 0, 540, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTMarioAnimDownBackD_joint3[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -71, -790, -95,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTMarioAnimDownBackD_joint5[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 6, -457, 156, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 187, 15,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 36), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 402, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 208, 258, 110,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimDownBackD_joint6[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -328, 0, -144, 0, -748, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -268, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 30), -163, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -544, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -540, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), -443, 33,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -245, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 192, 5,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -177, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -252, -34,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 193, -29, -407, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 133, -59, -300, -47, -272, 134,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimDownBackD_joint7[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 34), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, -173,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimDownBackD_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 36),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTMarioAnimDownBackD_joint9[40] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 204, -764, -525, 0, 288, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 187, 13,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 36), 0, 288, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 402, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 187, -9, 0, 0, 0, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 201, -4, 176,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTMarioAnimDownBackD_joint11[30] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 54, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 25), 0, -6, 0, 3, 0, -5, 0, 0, 54, 0, -18, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), -221, 139, -209, 0, 54, -17,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimDownBackD_joint12[150] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1952, -256, 612, -23, -2742, -241,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -3314, -275,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 162, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2208, -341,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2636, -398,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -3294, -172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3535, -275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3865, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3348, -38, -3916, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -3685, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -3913, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 162, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 193, 20,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3687, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -3438, 12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3916, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -3912, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3426, -56, -3912, -99,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -4032, -242, -4468, -132,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 203, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 274, 223,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4252, -75, -4575, -46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -4604, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4184, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -4163, 30, 613, 361,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -4284, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 996, 204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1021, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1039, 17, -4675, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4381, -97, 1056, 16, -4759, -84,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimDownBackD_joint13[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -522, -140,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -820, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -704, 346,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -127, 352,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -348, -283,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -576, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -752, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, -59,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTMarioAnimDownBackD_joint14[62] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -268, -1072, 714,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -821, -87, -55, 167, 471, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -704, 45, -235, -22, -44, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -366, 12, -281, 0, -89, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -522, 5, -242, 18, -1, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -281, 77, -3, -14, 157, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 408, 113, -411, 0, 594, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 625, 50, 0, 40, 0, -55,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTMarioAnimDownBackD_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 36),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTMarioAnimDownBackD_joint17[152] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -668, -1, -1270, -78, 1084, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -669, -11, -1348, -147, 1073, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -691, -285, -1565, -5, 987, -539,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1241, -429, -1359, 163, -6, -423,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1549, -245, -1239, 23, 141, 155,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1705, 39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 390, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1366, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1408, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1439, 16,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1660, 49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1580, -50,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 406, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 800, 134,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1636, -61,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1978, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1427, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1575, 9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 946, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 941, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1557, 39, 1049, 100,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1244, -3, 1330, 86,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1923, 48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1777, 28,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1259, -22, 1422, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1356, -26, 1639, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1743, 33, -1377, -21, 1653, 14,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTMarioAnimDownBackD_joint19[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 792, 88,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1246, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1218, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 1023, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 906, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 333, -292,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 143, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 353, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 411, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, -10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTMarioAnimDownBackD_joint21[140] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1497, -29, 1307, 2, 1766, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1428, 90, 1363, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1527, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1746, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1269, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1417, -76,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1419, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1527, 70, 1191, -120,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1160, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1457, -41,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1476, -66,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1812, 21,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1186, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 1774, 85,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1412, -52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1065, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1792, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -1765, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1813, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1503, 28,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1879, 57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1463, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1539, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1589, -79,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1118, 57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1571, 56,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1682, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1834, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1820, 14, 1619, 48, 1452, -10,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTMarioAnimDownBackD_joint22[150] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 802, 25, -52, 189, 195, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 433, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 940, 225, 211, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1279, 311, 367, 43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 105, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1563, 165, 355, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 971, 251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1610, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1588, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 126, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 119, 88,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1506, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1635, 31, 324, 108,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 366, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1569, -48, 1212, 192,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1469, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 1966, 87,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 392, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 614, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1453, -17, 686, 70,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1319, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 1371, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2055, 61, 1400, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1303, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1819, -15,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1340, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1571, 67,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1325, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1398, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1808, -10, 1421, 22, 1644, 72,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTMarioAnimDownBackD_joint24[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 106, 355,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1254, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1225, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 1070, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1004, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 579, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 454, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 575, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 611, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 511, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, -73,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTMarioAnimDownBackD_joint25[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1905, 38, 1869, 39, 2206, -77,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -1919, -131, 1944, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1836, -339,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1449, -282,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1213, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2102, -155, 1860, -67,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1936, 190,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1491, -33,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1212, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 1397, 61,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1712, 185,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1464, -7,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1457, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 1690, 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1472, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -1519, 7,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1469, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1521, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1488, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1399, -4,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1514, 2, 1694, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -1515, -2, 1700, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1519, -3, 1702, 2, 1395, -4,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
