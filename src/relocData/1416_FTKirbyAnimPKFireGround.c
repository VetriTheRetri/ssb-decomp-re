/* AnimJoint data for relocData file 1416 (FTKirbyAnimPKFireGround) */
/* 3104 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimPKFireGround_joint1[96];
extern u16 dFTKirbyAnimPKFireGround_joint2[18];
extern u16 dFTKirbyAnimPKFireGround_joint3[28];
extern u16 dFTKirbyAnimPKFireGround_joint5[72];
extern u16 dFTKirbyAnimPKFireGround_joint6[260];
extern u16 dFTKirbyAnimPKFireGround_joint7[20];
extern u16 dFTKirbyAnimPKFireGround_joint9[72];
extern u16 dFTKirbyAnimPKFireGround_joint10[270];
extern u16 dFTKirbyAnimPKFireGround_joint11[24];
extern u16 dFTKirbyAnimPKFireGround_joint13[10];
extern u16 dFTKirbyAnimPKFireGround_joint14[176];
extern u16 dFTKirbyAnimPKFireGround_joint16[14];
extern u16 dFTKirbyAnimPKFireGround_joint18[186];
extern u16 dFTKirbyAnimPKFireGround_joint19[128];
extern u16 dFTKirbyAnimPKFireGround_joint21[14];
extern u16 dFTKirbyAnimPKFireGround_joint22[120];

/* Joint pointer table (22 entries, 88 bytes) */
AObjEvent32 * dFTKirbyAnimPKFireGround_joints[] = {
	(AObjEvent32 *)dFTKirbyAnimPKFireGround_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTKirbyAnimPKFireGround_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTKirbyAnimPKFireGround_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTKirbyAnimPKFireGround_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTKirbyAnimPKFireGround_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTKirbyAnimPKFireGround_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTKirbyAnimPKFireGround_joint9, /* [7] joint 9 */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTKirbyAnimPKFireGround_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTKirbyAnimPKFireGround_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTKirbyAnimPKFireGround_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTKirbyAnimPKFireGround_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTKirbyAnimPKFireGround_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTKirbyAnimPKFireGround_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTKirbyAnimPKFireGround_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTKirbyAnimPKFireGround_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTKirbyAnimPKFireGround_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimPKFireGround_joint1[96] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 600, 0, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 15), -480,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 600, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 720, 3891, 4915, 3891,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 360, 240, 4915, 2457, 4915,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 660, 3891, 4505, 3891,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 1), 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 1), 240,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 1), 144,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 1), 240,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 1), 168,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 1), 240,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 1), 192,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 1), 240,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 1), 216,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), 240, 6,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 28), 240, -45,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 28), 480, 4300, 3276, 4300,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 14), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 7), 720, 3993, 4300, 3993,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 7), 600, 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimPKFireGround_joint2[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 48), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 14), -268,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimPKFireGround_joint3[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -268, -23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -357,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 38), 178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 14), 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTKirbyAnimPKFireGround_joint5[72] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 357, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -180, -90, 60,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -180, -90, 60,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -120, 287, -180, 95, -60, -335,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 5), -536,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -268, 0, -30, -150,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 45), -30,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 38), -536, -268, 0, -150,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 7), -60, 85,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 7), -90,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimPKFireGround_joint6[260] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2412, -55, -1387, 43, -1608, 16,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1210, 273,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -915, -31,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 2127, -308,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1740, -351,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 519, -181,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -879, 315,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -402, 28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -964, -56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1074, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 370, -135,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -48, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -386, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -206, 98,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 55), 3072,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1037, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1054, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -146, -69, -89, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -186, 82, -1013, -38, -205, -230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 18, 96, -1130, -257, -550, -100,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -8, 421,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -284, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1527, -266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1664, 195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1137, 282, 437, 261,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 535, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1100, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -293, -2, -1057, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -161, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1106, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 535, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 360, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -166, -5, 365, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 24), -250, 24, 446, -27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1106, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), -1071, 10,
	ftAnimBlock(0, 22),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -220, 39, 412, -46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -24, -252,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 455, 293,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1056, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -971, -33,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -290, -252,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -949, -255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 760, 311,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1832, 340,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 7), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1239, -247,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1609, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2114, 219, -1030, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 2407, 12, -1368, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2412, 5, -1391, -22, -1608, 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimPKFireGround_joint7[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 34), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 36), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTKirbyAnimPKFireGround_joint9[72] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -357, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 180, -90, 60,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 180, -90, 60,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 120, -287, -180, 95, -60, -335,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 5), 536,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), -268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 268, 0, -30, -150,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 45), -30,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 38), 536, 268, 0, -150,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 7), -60, 85,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 7), 90,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimPKFireGround_joint10[270] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2412, 56, 1391, -46, -1608, 17,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1200, 277,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 934, 30,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -2123, 313,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1729, 358,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -383, 140,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -867, 302,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -342, 18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 980, 52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1074, -35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -257, 113,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 48, 83,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 55), 3072,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -324, 28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -206, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1037, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1053, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 140, 65, -97, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 179, -81, 1012, 38, -213, -229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -23, -92, 1131, 257, -555, -96,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -6, 419,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 280, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1527, 266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1664, -195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1135, -283, 432, 257,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 534, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1098, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 292, 2, 1057, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 161, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1106, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 529, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 360, 5,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 161, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), 245, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 372, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), 440, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1105, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), 1070, -10,
	ftAnimBlock(0, 22),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 219, -42, 411, -49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -317, -238,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1057, -317,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1054, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 965, 25,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -530, -194,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1185, -256,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1393, -361,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2263, -126,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 7), 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1017, 70, -1420, -177,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1363, 46, -1609, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2346, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -2406, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2412, -5, 1391, 27, -1608, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimPKFireGround_joint11[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 35), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 35), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimPKFireGround_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 72),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimPKFireGround_joint14[176] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -23, 2, -302, -3, 237, -4,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -390, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 90, 79, 58, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 202, 152, -79, -172,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 716, 85, -540, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -387, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -249, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 770, 56, -563, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 701, -178,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -440, 93,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -250, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 50), -257, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 492, -182,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 209, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -344, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -237, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 271, 4, -333, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 217, 2, -237, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 276, 10, -312, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 239, 9, -237, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 296, 14, -298, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 28), 244, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -237, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -280,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 30), -236, -4,
	ftAnimBlock(0, 26),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 244, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -2, -17,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -237, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 223, 15,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -260, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -300, -3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -15, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -21, -5, -302, -2, 233, 9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTKirbyAnimPKFireGround_joint16[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 71), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTKirbyAnimPKFireGround_joint18[186] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -309, -2, 3040, 0, -96, 4,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 78, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -467, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 3039, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2987, -111,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 2533, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 117, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -540, -188, 274, 275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -845, -248, 667, 309,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1030, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1036, -149, 2560, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -1121, 145, 2637, -58,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 977, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -895, 456, 2534, -32, 778, -462,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 3103, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -208, 280, 53, -323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -334, -92, 131, 91,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -404, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 236, 78,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 385, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 3106, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 3033, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 290, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 372, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 293, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -424, -5, 355, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 33), -405, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 298, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 307, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 302, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 27), 294, 3,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 3036, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 30), 3041, -1,
	ftAnimBlock(0, 17),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -400, 9, 293, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), -307, -3, -91, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -309, -2, 3040, 0, -99, -8,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimPKFireGround_joint19[128] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 21, 19, 302, -10, 233, 36,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 246, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 26, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 438, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 411, -26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 233, 27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 262, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 205, -35,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 9, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 191, -3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 293, 86,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 563, -5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 177, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 165, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 534, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 38), 554, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 189, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 37), 160, -5,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 164, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 36), 290, 10,
	ftAnimBlock(0, 25),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 152, -11, 541, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 11), 23, -3, 237, -8,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 299, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, -2, 302, 3, 233, -4,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimPKFireGround_joint21[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 71), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimPKFireGround_joint22[120] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1298, -10, -1785, 0, -1708, -23,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -1713, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), -1802, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), -1309, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1306, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1397, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1710, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1739, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1702, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1769, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1703, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1794, -8, -1756, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 48), -1785, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1385, 3, -1704, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 35), -1386, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1708, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1707, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), -1705, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1709, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1694, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1378, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1302, 6,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1701, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1706, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1298, 3, -1785, 0, -1708, -1,
	ftAnimEnd(),
	0x0000, 0x0000,
};
