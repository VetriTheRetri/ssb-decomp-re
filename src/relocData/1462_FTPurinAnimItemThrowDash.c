/* AnimJoint data for relocData file 1462 (FTPurinAnimItemThrowDash) */
/* 2768 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPurinAnimItemThrowDash_joint1[18];
extern u16 dFTPurinAnimItemThrowDash_joint2[72];
extern u16 dFTPurinAnimItemThrowDash_joint3[44];
extern u16 dFTPurinAnimItemThrowDash_joint4[100];
extern u16 dFTPurinAnimItemThrowDash_joint6[72];
extern u16 dFTPurinAnimItemThrowDash_joint7[188];
extern u16 dFTPurinAnimItemThrowDash_joint8[20];
extern u16 dFTPurinAnimItemThrowDash_joint10[90];
extern u16 dFTPurinAnimItemThrowDash_joint11[168];
extern u16 dFTPurinAnimItemThrowDash_joint12[16];
extern u16 dFTPurinAnimItemThrowDash_joint14[60];
extern u16 dFTPurinAnimItemThrowDash_joint15[86];
extern u16 dFTPurinAnimItemThrowDash_joint17[22];
extern u16 dFTPurinAnimItemThrowDash_joint19[90];
extern u16 dFTPurinAnimItemThrowDash_joint20[118];
extern u16 dFTPurinAnimItemThrowDash_joint22[30];
extern u16 dFTPurinAnimItemThrowDash_joint23[144];

/* Joint pointer table (23 entries, 92 bytes) */
AObjEvent32 * dFTPurinAnimItemThrowDash_joints[] = {
	(AObjEvent32 *)dFTPurinAnimItemThrowDash_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTPurinAnimItemThrowDash_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTPurinAnimItemThrowDash_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTPurinAnimItemThrowDash_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTPurinAnimItemThrowDash_joint6, /* [4] joint 6 */
	NULL, /* [5] NULL */
	(AObjEvent32 *)dFTPurinAnimItemThrowDash_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTPurinAnimItemThrowDash_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTPurinAnimItemThrowDash_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTPurinAnimItemThrowDash_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTPurinAnimItemThrowDash_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTPurinAnimItemThrowDash_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTPurinAnimItemThrowDash_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTPurinAnimItemThrowDash_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTPurinAnimItemThrowDash_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTPurinAnimItemThrowDash_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTPurinAnimItemThrowDash_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTPurinAnimItemThrowDash_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTPurinAnimItemThrowDash_joint1[18] = {
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 2400,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), 960, 640,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 26), 2400, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 10), 2400,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPurinAnimItemThrowDash_joint2[72] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 303, 62, -47, 18, 1035, 381, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 30), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, -75, 0, -15, 0, 11, 0, -36, 720, -871, 0, -763,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 600, -53,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), 0, 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 36), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 0, 600, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 0, 600, -3, 0, 0,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4096, 35, 4096, -27, 4096, 30,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 590, 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPurinAnimItemThrowDash_joint3[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -12, -636, 15,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -312, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 0, 3, 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 18), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 36), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 16), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 0, -2, -268, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -46, 13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), -268,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTPurinAnimItemThrowDash_joint4[100] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 312, 0,
	ftAnimSetValRate(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3889, 0, 4236, 0, 3889, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 4), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 20), 312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), -178, 89, -268, 89, 4300, 103, 3686, -70, 4300, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 357, 24, 357, 44, 4096, -22, 4096, 45, 4096, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ, 16), 268, -13, 536, -13, 0, 68,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 16), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 12), 240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 0, -5, 0, -26, 312, -38, 4096, 27, 4096, -109, 4096, 27,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 178, 240, 4300, 3276, 4300,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 10), 0,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 8), 0,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 0, 312, 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPurinAnimItemThrowDash_joint6[72] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -157, -440, 92,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -357, 44, -89, 44, -30, 254, -30, 821, 0, -185,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 178, 29, 178, 14,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -30, -30, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 16), 178, -6, 178, -6, -30, 9, -30, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 16), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, -8, 0, -8, 0, -52, 0, -18, 0, 39,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -160, -114, -76, -123, 99, 90,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPurinAnimItemThrowDash_joint7[188] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1626, -622, 1624, -366, -2042, 98,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_SCAX, 2), 2048, -511,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1003, 390, 1257, -753, -1944, 216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2407, 717, 116, -663, -1608, 41,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_SCAX, 2), -2189, -231, 3072, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2439, 217, -70, -367,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2842, 276, -618, -297,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 3162, 161,
	ftAnimSetValRateT(FT_ANIM_SCAX, 16), 3072, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -665, -34, -2324, -147,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2713, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -688, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -439, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3315, 113,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 3050, -63,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2715, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -2602, -81,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2992, -53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 3065, 132,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_SCAX, 10), 4096, 102,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3202, 112, -412, 40, -2681, -58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -174, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 3582, 207, -2787, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3812, 177, -2903, -113,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 3696, -85,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -3128, -61,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -207, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -333, -20,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 4096,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3610, -77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 3579, 32,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3192, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -350, -15, -3244, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3605, 25, -365, -14, -3264, -19,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPurinAnimItemThrowDash_joint8[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 36), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPurinAnimItemThrowDash_joint10[90] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 247, -547, 197,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0, -268, 0, -268, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -96, -206, 74,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAZ, 2), 446, 0, -170, -337,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 0, 89, 93, -162,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 8), -29, -26, -285, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 16), 89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 446, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 36), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 8), -296,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -243, 132, -220, 170,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 8), -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 0, 0, 0, 0, 87, 0, 0, 0, 136,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 151, 105, -96, -147, 120, 54,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTPurinAnimItemThrowDash_joint11[168] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1739, 223, 1754, -325, 1226, 575,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1182, -103,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2478, 314,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 4098,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1801, 778,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2784, 748,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1223, -6, 3299, 157,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1037, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2825, 180, 3099, -105,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 3126, 48,
	ftAnimSetValRateT(FT_ANIM_SCAX, 26), 4096, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 2865, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2909, 59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 4336, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3192, 81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 4364, 38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1022, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1225, 59,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4394, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 4559, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4360, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 4233, -86,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1279, 44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1431, -31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4162, -31, 4582, 61,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 4092, -5, 4987, 26,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1397, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1262, -18,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4103, 19, 4992, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 4206, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 4825, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4777, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4198, -7, 1241, -20, 4762, -14,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTPurinAnimItemThrowDash_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTPurinAnimItemThrowDash_joint14[60] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -58, -637, -1530, 106, -21, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -804, -186, 0, 159, -1072, 114, 204, 194, -120, -196, 0, -32,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -804, 0, -1072, 204, -120, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), -804, 0, -1072, 204, -120, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -804, 0, 0, 0, -1072, 0, 204, 0, -120, 0, 0, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -501, -271, -1055, 106, -21, 16,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTPurinAnimItemThrowDash_joint15[86] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 523, -593, -260, 110, -461, 962,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -70, -275, -150, 20, 500, 553,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -27, 20, -219, -57, 645, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -299, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -22, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 237, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 217, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), 230, -2,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -300, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), -310, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -22, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -37, 2,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 230, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 260, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -34, 2, -308, 1, 255, -4,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPurinAnimItemThrowDash_joint17[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1033, -1026,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -516,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 37), 7, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPurinAnimItemThrowDash_joint19[90] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -680, 396, 52, 30, -177, 286,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -42, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 82, 47, 108, 395,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 146, -115, 613, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -250, -133, -147, -161, 256, -354,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -304, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -176, -12, -96, -175,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -177, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -94, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -95, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 33), -80, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -303, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 31), -332, 2,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -177, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 16), -144, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -328, 3, -150, -5, -84, -3,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTPurinAnimItemThrowDash_joint20[118] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -415, 34, 179, 31, -448, -303,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 285, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -381, 205, -751, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -5, 184, -463, 484,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -12, 25, 211, -51, 218, 731,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 143, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 46, 29, 999, 403,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 54, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1025, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1046, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 971, -31,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 146, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 305, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 53, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), 36, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 932, -51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 233, -31,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 322, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 309, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 215, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 257, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 36, 0, 308, 0, 259, 2,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPurinAnimItemThrowDash_joint22[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 688, 30,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 719, -340,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -356,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 35), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTPurinAnimItemThrowDash_joint23[144] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1464, -172, -1605, -335, 2089, 221,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1292, 192, -1941, -54, 2310, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1848, 267, -1714, 32, 1728, -378,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1828, 41, -1875, 10, 1553, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1932, 42, -1692, 94, 1870, 155,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1678, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1879, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1864, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1867, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 1855, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1675, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1733, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1873, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 2030, 34,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1837, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1454, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1779, -55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1821, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2058, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1905, 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1465, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 1528, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1799, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1752, -5,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1909, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 1939, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1937, -1, -1758, -6, 1527, 0,
	ftAnimEnd(),
	0x0000, 0x0000,
};
