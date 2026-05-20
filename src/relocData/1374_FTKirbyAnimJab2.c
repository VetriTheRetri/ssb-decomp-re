/* AnimJoint data for relocData file 1374 (FTKirbyAnimJab2) */
/* 1920 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimJab2_joint1[40];
extern u16 dFTKirbyAnimJab2_joint2[10];
extern u16 dFTKirbyAnimJab2_joint3[92];
extern u16 dFTKirbyAnimJab2_joint5[70];
extern u16 dFTKirbyAnimJab2_joint6[118];
extern u16 dFTKirbyAnimJab2_joint7[14];
extern u16 dFTKirbyAnimJab2_joint9[94];
extern u16 dFTKirbyAnimJab2_joint10[130];
extern u16 dFTKirbyAnimJab2_joint11[14];
extern u16 dFTKirbyAnimJab2_joint13[10];
extern u16 dFTKirbyAnimJab2_joint14[70];
extern u16 dFTKirbyAnimJab2_joint16[14];
extern u16 dFTKirbyAnimJab2_joint18[66];
extern u16 dFTKirbyAnimJab2_joint19[80];
extern u16 dFTKirbyAnimJab2_joint21[14];
extern u16 dFTKirbyAnimJab2_joint22[80];

/* Joint pointer table (22 entries, 88 bytes) */
AObjEvent32 * dFTKirbyAnimJab2_joints[] = {
	(AObjEvent32 *)dFTKirbyAnimJab2_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTKirbyAnimJab2_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTKirbyAnimJab2_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTKirbyAnimJab2_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTKirbyAnimJab2_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTKirbyAnimJab2_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTKirbyAnimJab2_joint9, /* [7] joint 9 */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTKirbyAnimJab2_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTKirbyAnimJab2_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTKirbyAnimJab2_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTKirbyAnimJab2_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTKirbyAnimJab2_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTKirbyAnimJab2_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTKirbyAnimJab2_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTKirbyAnimJab2_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTKirbyAnimJab2_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimJab2_joint1[40] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 600, 240,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 600, 320, 240, 320,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 720, 87, 360, 87,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 720, -40, 360, -94,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 660, -119, 217, -359,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 600, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimJab2_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -268, 0, 0, -312, 0,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimJab2_joint3[92] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 312,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 143, -5, -132, -7, 4096, -136, 4096, 546, 4096, -136,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 3), 312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 143, 11, -132, 252, 4096, 273, 4096, -546, 4096, 273,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 178, 3, 625, 68,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4505, 3276, 4505,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY, 9), 178, -10, 625, -36, 312, -41,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, -91, 4096, 182, 4096, -91,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 5), 240,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, 81, 4096, -327, 4096, 81,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4300, 3276, 4300,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 312, 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTKirbyAnimJab2_joint5[70] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), -263, 15, -143, 5, -60, -40, -60, -40,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), -263, 147, -143, -11, -60, -479, -60, 239,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 178, 40, -178, -3,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), -180, -480, 0, 480,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 1), 60, 48,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 1), -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 9), 178, -10, -178, 10, -180, -36, 60, -36,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 4), -240, 179, 0, -59,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 4), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimJab2_joint6[118] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX), -510, 2157, 493, 3072,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 3), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -510, 332, 2157, -160, 493, -232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 153, 339, 1836, 12, 27, -351,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -37, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2182, 185, -208, -6,
	ftAnimSetValRateT(FT_ANIM_SCAX, 9), 3072, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2208, 8, 15, 178,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -215, -43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 2279, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -137, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 214, 34,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 8), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 214, -67, -212, 83,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 311, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -129, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -212, 296, 2349, 114,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 2935, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 463, 468, 48, -135,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 12, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 723, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 786, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, 18, 2999, 64, 0, -12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTKirbyAnimJab2_joint7[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTKirbyAnimJab2_joint9[94] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -287, 11, 120, 120, -120, -160, 120, 120,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -287, 244, 0, 89, -120, 479, 120, -479,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 1), 120,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 446, 66, 268, 24,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 120, -240, 0, 480, 0, -720,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 60, -79, -60, -79,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 1), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 446, -26, 268, -15,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 60, 53, 0, -53, -60, -53,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 4), 120, 59, -120, -59,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), -60,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 120, -119, 0, 59, -120, 119,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimJab2_joint10[130] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX), -126, -2137, -232, 3072,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -23, 66, -94, 171,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -2115, -14,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX, 1), 3072, 2048,
	ftAnimSetValRateT(FT_ANIM_SCAX, 2), 6144, 292,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 5, -81, 110, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -293, -74,
	ftAnimSetValRateT(FT_ANIM_SCAX, 5), 4096, -682,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2111, 15, -87, -153,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -2221, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -196, -76,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 176, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -335, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 57, 117,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 4), 3072,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 8), 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 197, 192, 299, 190,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 765, 177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2284, 0, 557, 335,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1847, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 970, 314,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1391, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 797, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 797, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1546, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, 7, -1825, 21, 1608, 61,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimJab2_joint11[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTKirbyAnimJab2_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimJab2_joint14[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -67, -179, 384,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 13, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 258, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -53, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -168, -76,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -168, 34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 24, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -216, -47,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -126, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -20, -3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -260, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -291, -21, 240, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -23, -3, -302, -11, 237, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTKirbyAnimJab2_joint16[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTKirbyAnimJab2_joint18[66] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1816, 1745, -1828,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1675, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1737, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1770, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1743, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1851, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1667, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -1711, 6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1737, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1909, -16,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1845, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1791, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1918, -8, 1785, -6, -1704, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTKirbyAnimJab2_joint19[80] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 325, 279, 712,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 442, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 849, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 237, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 64, -105,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 18, 13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 444, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 338, -29,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 32, 14, 848, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 58, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 478, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 382, -88,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 250, -31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 31, -17, 312, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 23, -7, 302, -10, 237, -13,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTKirbyAnimJab2_joint21[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimJab2_joint22[80] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1497, -1569, -1205,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -995, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1569, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1568, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1550, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1596, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -991, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1004, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1597, -48, -1016, -42,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1801, 9, -1661, -64,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1573, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1221, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1251, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1285, -23, -1790, 8, -1698, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1298, -13, -1785, 4, -1704, -6,
	ftAnimEnd(),
	0x0000,
};
