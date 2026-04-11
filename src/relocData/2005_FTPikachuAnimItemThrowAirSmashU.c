/* AnimJoint data for relocData file 2005 (FTPikachuAnimItemThrowAirSmashU) */
/* 2656 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimItemThrowAirSmashU_joint1[60];
extern u16 dFTPikachuAnimItemThrowAirSmashU_joint2[70];
extern u16 dFTPikachuAnimItemThrowAirSmashU_joint3[70];
extern u16 dFTPikachuAnimItemThrowAirSmashU_joint5[46];
extern u16 dFTPikachuAnimItemThrowAirSmashU_joint6[116];
extern u16 dFTPikachuAnimItemThrowAirSmashU_joint7[42];
extern u16 dFTPikachuAnimItemThrowAirSmashU_joint8[70];
extern u16 dFTPikachuAnimItemThrowAirSmashU_joint9[10];
extern u16 dFTPikachuAnimItemThrowAirSmashU_joint10[38];
extern u16 dFTPikachuAnimItemThrowAirSmashU_joint11[38];
extern u16 dFTPikachuAnimItemThrowAirSmashU_joint13[54];
extern u16 dFTPikachuAnimItemThrowAirSmashU_joint14[106];
extern u16 dFTPikachuAnimItemThrowAirSmashU_joint16[48];
extern u16 dFTPikachuAnimItemThrowAirSmashU_joint17[98];
extern u16 dFTPikachuAnimItemThrowAirSmashU_joint19[48];
extern u16 dFTPikachuAnimItemThrowAirSmashU_joint21[80];
extern u16 dFTPikachuAnimItemThrowAirSmashU_joint22[90];
extern u16 dFTPikachuAnimItemThrowAirSmashU_joint24[40];
extern u16 dFTPikachuAnimItemThrowAirSmashU_joint25[152];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTPikachuAnimItemThrowAirSmashU_joints[] = {
	(u32)dFTPikachuAnimItemThrowAirSmashU_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimItemThrowAirSmashU_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimItemThrowAirSmashU_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimItemThrowAirSmashU_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPikachuAnimItemThrowAirSmashU_joint6, /* [5] joint 6 */
	(u32)dFTPikachuAnimItemThrowAirSmashU_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimItemThrowAirSmashU_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimItemThrowAirSmashU_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimItemThrowAirSmashU_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimItemThrowAirSmashU_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimItemThrowAirSmashU_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPikachuAnimItemThrowAirSmashU_joint14, /* [13] joint 14 */
	(u32)dFTPikachuAnimItemThrowAirSmashU_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPikachuAnimItemThrowAirSmashU_joint17, /* [16] joint 17 */
	(u32)dFTPikachuAnimItemThrowAirSmashU_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPikachuAnimItemThrowAirSmashU_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPikachuAnimItemThrowAirSmashU_joint22, /* [21] joint 22 */
	(u32)dFTPikachuAnimItemThrowAirSmashU_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTPikachuAnimItemThrowAirSmashU_joint25, /* [24] joint 25 */
	0xFFFF0280, /* [25] END */
};

/* Joint 1 */
u16 dFTPikachuAnimItemThrowAirSmashU_joint1[60] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 1114, -108,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -26, 33, -28,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 10), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1122, -11, 135, 1089,
	ftAnimSetValRateT(FT_ANIM_TRAY, 9), 1100, 83,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), 163, -19,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 8), 113, 25,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, -213, 1257, -201, 202, -147,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 923, -825, -15, -360,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 3), -186,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 213, 638, 217, -68, -106,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 1114, -108,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPikachuAnimItemThrowAirSmashU_joint2[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 999, -124, 300,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 957, -7, -35, 14, 24, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 957, -86, -35, 17, 24, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 13, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 435, -257, 70, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -71, -282, 301, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1259, -299, 312, -12, 286, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -2174, -281, 214, -58, 244, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -2899, -6, -35, -48, 38, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -2217, -124, 300,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimItemThrowAirSmashU_joint3[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -173, 58, -73,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 254, 71, 0, -9, 0, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 254, -14, 0, 24, 0, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 169, -146, 148, 70, 120, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -330, -95, 283, -23, -19, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -405, -23, 10, -40, 255, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -491, 105, 0, -1, 0, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 225, 45, 0, 8, 0, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -173, 58, -73,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPikachuAnimItemThrowAirSmashU_joint5[46] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 199, -70, 479,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 316, 157, -5, 87, 274, -273,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 316, 85, -5, -59, 274, -33,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 445, 93, -93, -64, 224, -36,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 445, -197, -93, 18, 224, 203,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 199, -70, 479,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimItemThrowAirSmashU_joint6[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 11, -19, -56, -204, 2405, 160,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -339, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -7, 344, 2566, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 700, 399, 2500, -21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 2628, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 791, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 779, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 738, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 814, 67, -307, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 675, -239,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -426, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2680, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 2280, -2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 383, -187,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 333, -8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2291, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2234, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 303, -53, -420, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -3, 17, -90, 56,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2192, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2384, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2406, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 11, 15, -56, 33, 2405, 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimItemThrowAirSmashU_joint7[42] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -758, 193,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -565, 379,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 277,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 16), -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -265,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -540, -356,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -713, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -758, -45,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTPikachuAnimItemThrowAirSmashU_joint8[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -478, -335, -28,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -76, 66, 0, 55, 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -76, 39, 0, 4, 0, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 160, -38, 24, -31, -45, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -231, -124, -127, -4, -60, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -583, -50, 0, 18, 0, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -583, 127,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 184, 15, 0, -47, 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -478, -335, -28,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimItemThrowAirSmashU_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1598, -1559, 4035, 39, 48, 495,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimItemThrowAirSmashU_joint10[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -132, 170, 229,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -292, -26, 210, 6, 285, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -292, -11, 210, -3, 285, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -382, 8, 180, -2, 150, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -132, 170, 229,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimItemThrowAirSmashU_joint11[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -3, -171, -270,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -302, -49, -193, -3, -257, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -302, 0, -193, 0, -257, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -309, 16, -188, 1, -91, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -3, -171, -270,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPikachuAnimItemThrowAirSmashU_joint13[54] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -469, 245, 91,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -350, 158, -49, -392, 346, 340,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -350, -186, -49, 24, 346, -240,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -537, -126, -24, -12, 105, -118,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -477, 68, -61, -42, 227, 139,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -477, 5, -61, 245, 227, -109,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -469, 245, 91,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimItemThrowAirSmashU_joint14[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 803, -26, 1481, -77, 717, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 797, 72, 765, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1403, -172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1136, -255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 921, 46, 892, -111, 868, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 797, -26, 765, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 914, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1136, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 767, -31, 1098, -42, 794, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 922, 93, 1162, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 859, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 802, -45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 720, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1016, 85, 1235, 58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 812, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 1325, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1371, 41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1480, 7,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 718, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 803, -8, 1481, 0, 717, 0,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPikachuAnimItemThrowAirSmashU_joint16[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -374, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -359, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -96, 179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 0, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTPikachuAnimItemThrowAirSmashU_joint17[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1, -35, -241, -109, -979, 273,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -163, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -350, -10, -705, 382,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -261, 60, -213, 284,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -155, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -247, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -164, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -240, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -204, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 93, 102,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -228, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -295, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 169, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -60, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -275, -16, -133, -82,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), -5, 8, -965, -26,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -267, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -248, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1, 3, -241, 7, -979, -13,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPikachuAnimItemThrowAirSmashU_joint19[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 932, 37,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 970, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 691, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 691, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 640, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 276, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 310, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 557, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 653, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 928, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 932, 3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTPikachuAnimItemThrowAirSmashU_joint21[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 230, 0, 39, 8, 585, -94,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), 40, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 231, -198, 491, -241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -165, -188, 103, -263,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 103, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -145, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -148, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -46, 33,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 173, 80,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 638, -8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 8, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 437, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 465, 14, 628, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 242, -22, 586, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 230, -11, 39, 0, 585, -1,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimItemThrowAirSmashU_joint22[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 203, -22, 533, 2, -780, 168,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 62, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 536, -97, -612, 246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 338, -119, -287, 198,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 338, -10, -287, -3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 85, 45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 470, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 311, -41, -265, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 87, 16, -47, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 315, -134, 110, 21, -213, -149,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 530, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 243, -3, -638, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 236, -9, -682, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 206, -5, -772, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 203, -2, 533, 3, -780, -7,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTPikachuAnimItemThrowAirSmashU_joint24[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 595, 37,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 633, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 464, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 465, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 544, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 549, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 598, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 595, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTPikachuAnimItemThrowAirSmashU_joint25[152] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1866, 89, -1534, -22, 1886, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1620, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1848, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1516, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1560, -47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1872, -181,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1608, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1674, -21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2064, -159,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2136, 100,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1905, 78,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2124, -31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2019, 65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2246, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1681, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1535, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2085, -40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1890, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2202, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -1874, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1866, 8, -1534, 1, 1886, -3,
	ftAnimEnd(),
	0x400E, 0xFDE1, 0xFF5C, 0xFE08, 0x48E0, 0xFFFF, 0xFF4C, 0xFE9E, 0x200F, 0x0002, 0xFDE1, 0xFFCD, 0xFF5C, 0x0024, 0xFE08, 0x002C, 0x200F, 0x0008, 0xFBDD, 0x0008, 0x00CC, 0x0008, 0xFFC8, 0x0001, 0x200F, 0x0003, 0xFE44, 0x0063, 0xFFB5, 0xFFD0, 0xFE1D, 0x0031, 0x200F, 0x0004, 0xFE96, 0xFFF8, 0xFF78, 0xFFF8, 0x0124, 0xFFFF, 0x380F, 0x0007, 0xFDE1, 0xFF5C, 0xFE08, 0x0000, 0x0000, 0x0000,
};
