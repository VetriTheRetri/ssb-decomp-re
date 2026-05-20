/* AnimJoint data for relocData file 1381 (FTKirbyAnimFTiltLow) */
/* 2400 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimFTiltLow_joint1[44];
extern u16 dFTKirbyAnimFTiltLow_joint2[32];
extern u16 dFTKirbyAnimFTiltLow_joint3[80];
extern u16 dFTKirbyAnimFTiltLow_joint5[50];
extern u16 dFTKirbyAnimFTiltLow_joint6[190];
extern u16 dFTKirbyAnimFTiltLow_joint7[14];
extern u16 dFTKirbyAnimFTiltLow_joint9[62];
extern u16 dFTKirbyAnimFTiltLow_joint10[180];
extern u16 dFTKirbyAnimFTiltLow_joint11[16];
extern u16 dFTKirbyAnimFTiltLow_joint13[10];
extern u16 dFTKirbyAnimFTiltLow_joint14[112];
extern u16 dFTKirbyAnimFTiltLow_joint16[12];
extern u16 dFTKirbyAnimFTiltLow_joint18[138];
extern u16 dFTKirbyAnimFTiltLow_joint19[86];
extern u16 dFTKirbyAnimFTiltLow_joint21[12];
extern u16 dFTKirbyAnimFTiltLow_joint22[118];

/* Joint pointer table (22 entries, 88 bytes) */
AObjEvent32 * dFTKirbyAnimFTiltLow_joints[] = {
	(AObjEvent32 *)dFTKirbyAnimFTiltLow_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTKirbyAnimFTiltLow_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTKirbyAnimFTiltLow_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTKirbyAnimFTiltLow_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTKirbyAnimFTiltLow_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTKirbyAnimFTiltLow_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTKirbyAnimFTiltLow_joint9, /* [7] joint 9 */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTKirbyAnimFTiltLow_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTKirbyAnimFTiltLow_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTKirbyAnimFTiltLow_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTKirbyAnimFTiltLow_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTKirbyAnimFTiltLow_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTKirbyAnimFTiltLow_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTKirbyAnimFTiltLow_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTKirbyAnimFTiltLow_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTKirbyAnimFTiltLow_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimFTiltLow_joint1[44] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 600, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 600, 384, -120, 384,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 840, 48, 240, 288,
	ftAnimSetValRateT(FT_ANIM_TRAY, 17), 720, -101,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 7), 240, -112,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 10), 0, -160,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 600, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 600, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimFTiltLow_joint2[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 0, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -804, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -1072, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), -3485, -201,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), -3485,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), -3485,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimFTiltLow_joint3[80] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 312, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 5), 312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 0, 8, 178, 107, 3891, 81, 4505, -163, 3891, 81,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 536, 26, 4300, 20, 3686, -40, 4300, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 44,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 17), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_SCAY, 17), 312, -30, 4096, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 0, -2, 446, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 0, -37,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 6), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 0, 240, 4300, 3276, 4300,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 0, 312, 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTKirbyAnimFTiltLow_joint5[50] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -178, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 89, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 3), -180, 60,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAX, 17), 178, -4, -120, 50,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 17), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 6), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX, 2), 0, -29, -60, 160,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX, 4), 0, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimFTiltLow_joint6[190] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2412, 95, -1387, 88, -1608, -206,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 3072,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1229, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2508, 152, -1814, -307,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2718, 86, -2224, -218,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 2656, 16, -2288, -266,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 20), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1267, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1084, 41,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2713, 69, -2786, -230,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 2961, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1114, -27, -2748, 49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -973, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2686, 64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -2418, -41,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2970, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 3108, 129,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2481, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3299, 567, -878, 52, -2666, -561,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1157, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4244, 597, -3605, -590,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4494, 172, -3846, -164,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 4652, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3934, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3989, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4725, 328, -4058, -281,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5309, 451, -1164, -85, -4551, -383,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5629, 164, -1327, -104, -4825, -134,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 5637, -3, -4822, -1,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1374, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1392, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 5632, -4, -4824, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5629, -3, -1391, 1, -4825, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTKirbyAnimFTiltLow_joint7[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 27), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTKirbyAnimFTiltLow_joint9[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX, 2), -178, 35, 0, -35, 60, 192,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 178, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -178, 120, -120, -60,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 0, -9, 0, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 17), 120, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX, 2), 60, -160,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX, 4), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimFTiltLow_joint10[180] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2412, 71, 217, 136, 0, 180,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 3072,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 465, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 3152, 593,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 180, 278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 557, 320,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 20), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 331, -109, 821, 237,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 600, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3903, 506, 1032, 438,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 4184, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1697, 331,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1695, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1175, -235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4202, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 3837, -249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3579, -210, 947, -181,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 3270, 24, 728, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 600, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1183, -3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3340, -72, 832, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3125, -117, 664, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3105, -23, 698, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 3038, 3, 784, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3052, 298, 832, 249,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1608, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3635, 484, 1142, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 4021, 194, 1327, 117,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4025, 1, 1377, 32, 1604, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1391, -2, 1607, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4024, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4022, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4021, -1, 1387, -3, 1608, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimFTiltLow_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimFTiltLow_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 28),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimFTiltLow_joint14[112] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -23, -155, -302, 22, 237, 270,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -268, 121, -358, -116, 569, -207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -42, 218, -490, -71, 246, -287,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 198, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -508, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -39, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 170, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 219, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 20, -74,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -514, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -421, 28,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -46, -64, 249, 78,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 445, -59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -81, 77,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -396, 21,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 6), -302,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 319, -106,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 4), 233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -21, 29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -21,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -21, -302, 233,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimFTiltLow_joint16[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 27), 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTKirbyAnimFTiltLow_joint18[138] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1918, -288, -1431, 183, -1704, 406,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -941, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2207, 72, -1248, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1772, 239, -1698, -173,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1733, -34,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 3), 8192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1595, 104, -995, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -797, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1488, 70,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1419, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1798, -51,
	ftAnimSetValRateT(FT_ANIM_SCAX, 7), 5120, -630,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -2420, -94,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -772, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -906, -128,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1418, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1311, 26,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 6), 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2517, -83,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2591, 195,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1044, -273,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1708, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2195, 336, -1281, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1918, 138, -1431, -75,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1918, -1431, -1708,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1918, -1431, -1708,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTKirbyAnimFTiltLow_joint19[86] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 23, 28, 302, -64, 237, 73,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -15, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 178, 30, 286, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 215, 23, 204, -62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 162, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 278, 11,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -14, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -100, -5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 164, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 24, -6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 289, 10,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 9), 302,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -102, 29, 23, 50,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 21, 233,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 21, 233,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 302,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimFTiltLow_joint21[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 27), 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimFTiltLow_joint22[118] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1298, 4, -1785, -110, -1704, -27,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1603, 129,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1341, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -2006, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1915, 121,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1686, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1478, 89,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1417, -3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1685, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1543, 21,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1420, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1526, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1343, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1338, 58,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1524, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1650, -135,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1537, -49,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 3), -1708,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1298, 19, -1785, -67,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -1298, -1785,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 3), -1708,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1298, -1785,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
