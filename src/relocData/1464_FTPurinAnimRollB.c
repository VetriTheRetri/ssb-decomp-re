/* AnimJoint data for relocData file 1464 (FTPurinAnimRollB) */
/* 3584 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPurinAnimRollB_joint1[28];
extern u16 dFTPurinAnimRollB_joint2[126];
extern u16 dFTPurinAnimRollB_joint3[50];
extern u16 dFTPurinAnimRollB_joint4[28];
extern u16 dFTPurinAnimRollB_joint6[72];
extern u16 dFTPurinAnimRollB_joint7[200];
extern u16 dFTPurinAnimRollB_joint8[14];
extern u16 dFTPurinAnimRollB_joint10[80];
extern u16 dFTPurinAnimRollB_joint11[204];
extern u16 dFTPurinAnimRollB_joint12[38];
extern u16 dFTPurinAnimRollB_joint14[28];
extern u16 dFTPurinAnimRollB_joint15[160];
extern u16 dFTPurinAnimRollB_joint17[36];
extern u16 dFTPurinAnimRollB_joint19[234];
extern u16 dFTPurinAnimRollB_joint20[178];
extern u16 dFTPurinAnimRollB_joint22[8];
extern u16 dFTPurinAnimRollB_joint23[262];

/* Joint pointer table (23 entries, 92 bytes) */
AObjEvent32 * dFTPurinAnimRollB_joints[] = {
	(AObjEvent32 *)dFTPurinAnimRollB_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTPurinAnimRollB_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTPurinAnimRollB_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTPurinAnimRollB_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTPurinAnimRollB_joint6, /* [4] joint 6 */
	NULL, /* [5] NULL */
	(AObjEvent32 *)dFTPurinAnimRollB_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTPurinAnimRollB_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTPurinAnimRollB_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTPurinAnimRollB_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTPurinAnimRollB_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTPurinAnimRollB_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTPurinAnimRollB_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTPurinAnimRollB_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTPurinAnimRollB_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTPurinAnimRollB_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTPurinAnimRollB_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTPurinAnimRollB_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTPurinAnimRollB_joint1[28] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 4), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 6), -960, -1920,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 6), -2100, -480,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 6), -3240, -1920,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 6), -4200,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 4), -4200,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTPurinAnimRollB_joint2[126] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 590, 0,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 520, 4096, 1, 4096, 5, 4096, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 1072, 465, -240, -1, 660, 388, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 2), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 0, -479, 780, 359,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1395, 240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1608, -72,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 9), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 28), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY, 6), -2055, -67, -720, -799, 1020, 7,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 6), -1200, 960,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -2412, -59,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4300, 3276, 4300,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 6), 1080,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAX, 6), -2770, -50, -720, 800,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 4096, 4096, 4096,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 6), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 6), 360, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 10), -3216,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4915, 2048, 4915,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 0, 600, 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTPurinAnimRollB_joint3[50] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY), -46, 48, -268, 249, -312, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 32), -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 12), -1608,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), 0, -2, 0, -16,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 12), -3216,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -46, -268,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 4), -3216,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTPurinAnimRollB_joint4[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValRate(FT_ANIM_TRAY), 312, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAY, 32), 312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 28), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTPurinAnimRollB_joint6[72] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -160, 0, -76, 0, 99, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 357, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 283, -856, 220,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 89, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 83, -455, 210,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 28), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 21, -518, 186,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -249, -468, 529,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -231, -471, 414,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -310, -477, 350,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -283, -453, 363,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -238, -353, 399,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -160, 0, -76, 0, 99, 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPurinAnimRollB_joint7[200] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 386, -697, -367, 260, -44, -462,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 3072,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -833, -221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -311, -360, -106, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -334, 148, -51, 15,
	ftAnimSetValRateT(FT_ANIM_SCAX, 2), 3072, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -14, 258, -76, -95, -948, -76,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -602, 240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 182, 82, -242, -51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 108, -27,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 28), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -179, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -116, 62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 32, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 95, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 158, 137, -332, 237,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -103, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 371, 217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 592, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 640, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 413, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 371, -54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 132, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -118, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 37, 28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 24, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 52, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 104, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -103, -40,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 52, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -53, 22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 48, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 6, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -147, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 158, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -65, 13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -102, -122,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -335, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 318, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 378, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 388, 9, -365, -29, -47, 17,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTPurinAnimRollB_joint8[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 31), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTPurinAnimRollB_joint10[80] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 151, 0, -96, 0, 120, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 178, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 267, -255, 168,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -89, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 16, -292, 161,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), -89, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 101, -519, 229,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 195, -571, 372,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 201, -573, 326,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 207, -553, 349,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 192, -441, 367,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 153, -537, 328,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 151, 0, -96, 0, 120, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTPurinAnimRollB_joint11[204] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -626, 256, 366, 101, -62, -219,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -370, 148, 468, 34, -281, -405,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -330, 14, 435, 85, -874, -343,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 26), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -340, 453, 639, 13, -969, 360,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 577, 159, 462, -55, -152, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -22, -249, 527, -46, -763, -204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 78, 35, 370, -172, -561, 196,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -244, -26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -178, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 78, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 19, -48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -96, -27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -231, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 50, 62,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -204, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -60, 29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 115, 82,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 357, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -126, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -46, 91,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 360, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 454, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -37, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -155, 83,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 463, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 208, -188, 50, 65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 149, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 85, -58, -38, 112,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 86, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 90, -59,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -32, -191,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -533, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 244, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 335, 61, -3, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -626, -93, 366, 31, -62, -59,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTPurinAnimRollB_joint12[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -313,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -633, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 316,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPurinAnimRollB_joint14[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -501, -271, -1055,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 106, -21, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -501, 42, -271, -5, -1055, -52,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 432, -390, -2214,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -501, -271, -1055,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTPurinAnimRollB_joint15[160] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1619, 255, 1872, 216, 1825, -313,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1364, 267, 2089, 92, 1511, -300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1085, -58, 2058, -32, 1224, 59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1932, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1481, -270, 1630, 302,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1626, -116, 1830, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1713, 7, 1975, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1611, 60, 1848, -53, 1808, -104,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1660, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1859, -2, 1920, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1856, 1, 1914, -21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1654, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1964, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1643, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1462, -3,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1633, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1604, 28,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1479, -30, 1911, -68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1792, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1569, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1639, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1680, 75,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1816, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1864, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1566, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1599, -21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1768, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1619, -19, 1872, 7, 1825, 56,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPurinAnimRollB_joint17[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 459, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -226,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 24), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPurinAnimRollB_joint19[234] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -261, 68, -185, 31, -72, 181,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 114, -286,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -192, 156, -153, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 50, 57, -119, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -77, -195, 145, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -339, 8, 189, -9, -337, -106,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 129, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -60, 226, -98, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 113, 153, -1, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 247, 173, 212, 20, 178, 217,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 72, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 461, 146, 434, 164,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 314, -500, 508, -32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -10, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -460, -370, -174, -207, 441, -116,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -127, -234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -426, 89, -425, -185,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -703, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -281, 198,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 206, 213,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -350, -204,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -710, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 397, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 566, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 575, -368, -744, -21, -718, 361,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -631, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -170, -476, 13, 464,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -376, -101, 209, 95,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -337, 56, 176, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -497, 121,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -367, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -261, 105, 107, -112,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -46, 37, -146, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -388, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -361, 227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -51, -23, 66, 152, 68, 161,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -12, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -93, -92, -56, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -236, -90, -232, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -222, 48, -247, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -182, 40, -202, 44, -103, -91,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTPurinAnimRollB_joint20[178] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 36, 0, 308, -114, 259, 34,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 301, 49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 44, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 193, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 280, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 173, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 392, 57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 535, 42,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 79, -117,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -88, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -39, -72,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -80, 66,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 575, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -114, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 32, 110, 34, 138,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 394, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 141, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 79, -74,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -181, -35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 395, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 256, -23,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -214, -35, -164, -43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -23, 89,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -29, 53,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 226, -43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 121, 27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 71, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 32, 11, 226, 7, 276, 52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 84, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -6, -8, 175, -51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 244, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 14, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 31, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 110, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 256, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 36, 5, 308, 51, 259, 14,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPurinAnimRollB_joint22[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 32),
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTPurinAnimRollB_joint23[262] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 329, 60, -3066, 103, -80, -46,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -2969, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 389, 72, -126, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 473, -122, 22, 119,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 117, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 144, -256, -3081, -98,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -3091, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -40, -118,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -130, -27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2927, 132,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -2882, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 60, -37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 57, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -172, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -223, 5, -3051, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -161, 403, -3020, 233, 158, 286,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 583, 474, -2584, 230, 630, 324,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 786, 145, -2558, 29, 807, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 874, 191, -2524, 40, 891, 192,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -2549, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1169, 440, 1191, 450,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1754, 376, 1792, 389,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1923, 57, 1971, 72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1846, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1869, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1765, -160, -2556, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1547, 183, -2498, 125, 1639, 189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2133, 201, -2304, 171, 2224, 205,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -2084, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1949, -115, 2050, -111,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1869, -359,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1902, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1793, -316, -2153, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1270, -375, -2232, 3, 1284, -455,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1043, 92, -2147, 29, 958, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -2194, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1454, 242, 1337, 348,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1783, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1528, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1661, 66, -2136, 65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1716, 99,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1814, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1736, -68,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1565, -59,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1859, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1937, 77, -1758, 55, 1527, -37,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
