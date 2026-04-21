/* AnimJoint data for relocData file 2068 (FTPikachuAnimDownBackU) */
/* 3552 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimDownBackU_joint1[24];
extern u16 dFTPikachuAnimDownBackU_joint2[50];
extern u16 dFTPikachuAnimDownBackU_joint3[40];
extern u16 dFTPikachuAnimDownBackU_joint4[62];
extern u16 dFTPikachuAnimDownBackU_joint6[30];
extern u16 dFTPikachuAnimDownBackU_joint7[130];
extern u16 dFTPikachuAnimDownBackU_joint8[30];
extern u16 dFTPikachuAnimDownBackU_joint9[54];
extern u16 dFTPikachuAnimDownBackU_joint10[28];
extern u16 dFTPikachuAnimDownBackU_joint11[38];
extern u16 dFTPikachuAnimDownBackU_joint12[38];
extern u16 dFTPikachuAnimDownBackU_joint14[30];
extern u16 dFTPikachuAnimDownBackU_joint15[130];
extern u16 dFTPikachuAnimDownBackU_joint17[60];
extern u16 dFTPikachuAnimDownBackU_joint18[192];
extern u16 dFTPikachuAnimDownBackU_joint20[78];
extern u16 dFTPikachuAnimDownBackU_joint22[198];
extern u16 dFTPikachuAnimDownBackU_joint23[188];
extern u16 dFTPikachuAnimDownBackU_joint25[72];
extern u16 dFTPikachuAnimDownBackU_joint26[192];
extern u16 dFTPikachuAnimDownBackU_joint27[58];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTPikachuAnimDownBackU_joints[] = {
	(u32)dFTPikachuAnimDownBackU_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimDownBackU_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimDownBackU_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimDownBackU_joint4, /* [3] joint 4 */
	(u32)dFTPikachuAnimDownBackU_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTPikachuAnimDownBackU_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimDownBackU_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimDownBackU_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimDownBackU_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimDownBackU_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimDownBackU_joint12, /* [11] joint 12 */
	(u32)dFTPikachuAnimDownBackU_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTPikachuAnimDownBackU_joint15, /* [14] joint 15 */
	(u32)dFTPikachuAnimDownBackU_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTPikachuAnimDownBackU_joint18, /* [17] joint 18 */
	(u32)dFTPikachuAnimDownBackU_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTPikachuAnimDownBackU_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTPikachuAnimDownBackU_joint23, /* [22] joint 23 */
	(u32)dFTPikachuAnimDownBackU_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTPikachuAnimDownBackU_joint26, /* [25] joint 26 */
	(u32)dFTPikachuAnimDownBackU_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTPikachuAnimDownBackU_joint1[24] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 15), -2640, -743,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -1319,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 10), -3181, -118,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -206,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 11), -3181,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPikachuAnimDownBackU_joint2[50] = {
	ftAnimSetValAfter(FT_ANIM_TRAX), 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 615, 287,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -3216, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 330, -27, -26, -148,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 564, 116, 8, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 1, 0, -1, 564, 41, 8, 37,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 10), -3216,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 33, -28, 673, 108,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 11), -3243,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTPikachuAnimDownBackU_joint3[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -11, -60,
	ftAnimSetValRate(FT_ANIM_ROTX), -900, 52,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 551, 69, 839, 73, -7, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 139, -25, 1091, 15, 10, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 139, -5, 1091, -45, 10, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 23, 133, 32,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTPikachuAnimDownBackU_joint4[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -61, 273, -120,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 145, 89, -22, -98, 5, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 746, 14, -612, -19, -945, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 272, -124, -198, 90, -390, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1, -25, -71, -10, 10, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -54, 3, -333, -16, 96, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 44, 3, -312, 30, 64, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -13, 0, -2,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimDownBackU_joint6[30] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 500, -30, 63,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 412, -56, -41, -10, 261, 79,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 324, -33, -62, -7, 313, 19,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 324, -62, 313,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimDownBackU_joint7[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -657, -2, -742, -3, 620, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -968, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -692, -90, 663, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -850, 50, 827, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -592, 104, 577, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -642, -36, 638, 48,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 13), -788, -45, 947, 45,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1082, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -1102, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1107, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1279, 5,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -834, -46, 993, 44,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -916, 66, 1075, -65,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1252, 47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1177, -148,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -848, 44, 1004, -46,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -948, 59, 1365, 36,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1405, -230,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1837, -16,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -878, 62, 1389, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -824, 36, 1402, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -804, 19, -1849, -12, 1406, 3,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPikachuAnimDownBackU_joint8[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -784, 8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -411, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -271, 205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 25), -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 10,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimDownBackU_joint9[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -183, 354, -62,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -167, 6, -350, -29, -12, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -103, -6, -5, -43, -28, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -204, 13, -614, -29, 217, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 66, 24, -389, 8, 0, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 157, -6, -483, 20, -9, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -2, -163, 20,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimDownBackU_joint10[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 434, 148, 2349,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 8, 32, 508,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 59, -15, 5, -5, 2401, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 59, 5, 2401,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 59, 5, 2401,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTPikachuAnimDownBackU_joint11[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 132, 55, 516,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 96, 0, 367, 12, 335, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 111, -26, 367, -18, 335, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -295, -10, 82, -33, -6, -30,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTPikachuAnimDownBackU_joint12[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -280, -178, -261,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -715, -6, -43, 5, -274, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -454, 6, -43, 1, -274, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -612, 41, -21, 3, -136, 24,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimDownBackU_joint14[30] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -525, -36, -17,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), -451, 11, -59, 10, 161, 16,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -488, 48, -4, -1, 35, 58,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), -324, -62, 313,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTPikachuAnimDownBackU_joint15[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -405, 23, 898, 0, -336, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 1222, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 54, 155, 189, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 224, 82, 387, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 207, -4, 423, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 203, -3, 431, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), 232, 8, 509, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 242, -23, 523, -39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 296, -48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 123, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1180, -42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1097, 173,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 250, -53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -103, -474,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 103, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -152, -449,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -794, -529, -760, -536,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1211, -526, -1175, -515,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1847, -364, -1791, -313,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1940, -127, -1801, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2101, -149, 1306, 203, -1826, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -2403, -18, 1698, 16, -1903, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2412, -9, 1703, 4, -1905, -2,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPikachuAnimDownBackU_joint17[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -214, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -125, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 62,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 0, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -402, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -522, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -413, 263,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -63, 206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -10,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTPikachuAnimDownBackU_joint18[192] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -348, -40, -147, -44, 446, 56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 245, -662,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -388, 6, -191, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -335, 390, -428, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 393, -108, -319, -8, -822, -501,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -551, -405, -445, 386, -756, 234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -417, 452, 454, 438, -354, 551,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 353, 282, 432, -72, 346, 268,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -266, -284, 23, -224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 182, -204,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -149, -39,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -422, -108, -139, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -214, 480, 247, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -141, 37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -129, -50,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 476, 246, 102, -149,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -19, -83,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -368, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -175, -262,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1144, -205,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 111, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -43, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1065, 65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -858, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -344, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -89, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -37, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 325, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 302, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 23, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -117, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -3, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -747, 106,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -423, 20,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 37, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 51, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 58, 6, 0, 4, -409, 13,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTPikachuAnimDownBackU_joint20[78] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 427, 587,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1181, 508,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1443, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 401, -222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 461, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 823, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 573, -408,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -286,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 267,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 534, 334,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 623, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 609, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1055, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1096, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 958, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 951, -7,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimDownBackU_joint22[198] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -121, -132, 104, 3, 144, -221,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 212, 89, -254, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -254, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -416, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -208, 578, 286, -185, -110, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 740, 498, -157, -216, -164, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 789, -40, -146, -22, -298, 118,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -228, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 660, -100, 71, 180,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 441, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 62, -108,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -316, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -65, 89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -89, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 267, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 319, 122, -356, 384,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 513, -226, 29, -40, 453, 486,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -133, -265, -169, -62, 616, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 278, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -16, 184, -94, 213,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 385, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 258, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 293, 4, 554, 153,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 584, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 99, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 454, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -184, -18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 572, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -218, -20,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -195, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 32, -18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 59, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 161, -16,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -243, -31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -345, -18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 13, -12, 139, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 6, -7, 127, -11, -356, -10,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTPikachuAnimDownBackU_joint23[188] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1886, -49, 1605, -55, 1854, -203,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1509, -347, 1385, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1444, -242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1165, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1059, -145, 1512, -108, 1138, 156,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1693, 342,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1169, -207, 1477, 360,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1096, -69, 1858, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1904, 176, 1030, 72, 1842, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2047, -169, 1241, 188, 1785, -175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1565, -289, 1407, 229, 1490, -286,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1120, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1467, 80, 1700, 129,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1559, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1726, 102,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1437, -254,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1267, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1441, -127, 1305, -94,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1570, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1164, -72, 1079, -220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1292, 68, 864, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1300, 5, 899, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1345, 90,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 530, -19,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1603, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1467, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1469, 160,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2036, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 547, 90,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1029, 127,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2065, -4, 1576, 96,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 1756, -33, 1671, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1146, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1403, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1738, -18, 1665, -5, 1414, 10,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTPikachuAnimDownBackU_joint25[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 685, 189,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 874, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 717, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 841, 201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1119, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 732, -207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 558, -366,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 918, 320,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1106, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 881, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 869, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 1018, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 963, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 814, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 812, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTPikachuAnimDownBackU_joint26[192] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1463, -137, -1553, 25, 1207, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1601, -144, -1528, 103, 1221, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1751, 52, -1347, 95, 1523, 90,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1301, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1495, 396, -1336, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -957, 405, -1685, -174,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1034, -508,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1120, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1329, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1698, 388,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1717, -279, 2243, 231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1593, 65, -1402, -230, 2161, -91,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1707, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1587, -73, 2060, -168,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1550, -318,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1740, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1945, 51, -1536, 190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1636, 432, -1326, -12, 1187, -244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1080, 194, -1562, -99, 1061, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1247, -76, -1525, 9, 1278, 142,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1473, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1234, 8, -1543, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1318, -40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1605, 42,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1494, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1451, -109,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1369, -93,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2041, -48,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1564, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1887, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2039, 44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1633, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1328, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1119, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1615, 17, -1892, -5, 1120, 0,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTPikachuAnimDownBackU_joint27[58] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 17, -535, -952,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, -180, -354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 246, -109, 71, 76, 750, 427,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -640, -108, -78, -49, 1614, 231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -402, 46, -226, 79, 2139, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -364, -14, 396, 38, 1809, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -489, 14, 6, -16, 1012, -75,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), -14, 0, -3,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
