/* AnimJoint data for relocData file 425 (FTKirbyAnimIntro2) */
/* 2112 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimIntro2_joint1[56];
extern u16 dFTKirbyAnimIntro2_joint2[10];
extern u16 dFTKirbyAnimIntro2_joint3[138];
extern u16 dFTKirbyAnimIntro2_joint5[46];
extern u16 dFTKirbyAnimIntro2_joint6[136];
extern u16 dFTKirbyAnimIntro2_joint7[46];
extern u16 dFTKirbyAnimIntro2_joint9[60];
extern u16 dFTKirbyAnimIntro2_joint10[118];
extern u16 dFTKirbyAnimIntro2_joint11[36];
extern u16 dFTKirbyAnimIntro2_joint13[10];
extern u16 dFTKirbyAnimIntro2_joint14[54];
extern u16 dFTKirbyAnimIntro2_joint16[30];
extern u16 dFTKirbyAnimIntro2_joint18[64];
extern u16 dFTKirbyAnimIntro2_joint19[90];
extern u16 dFTKirbyAnimIntro2_joint21[40];
extern u16 dFTKirbyAnimIntro2_joint22[78];

/* Joint pointer table (22 entries, 88 bytes) */
AObjEvent32 * dFTKirbyAnimIntro2_joints[] = {
	(AObjEvent32 *)dFTKirbyAnimIntro2_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTKirbyAnimIntro2_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTKirbyAnimIntro2_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTKirbyAnimIntro2_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTKirbyAnimIntro2_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTKirbyAnimIntro2_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTKirbyAnimIntro2_joint9, /* [7] joint 9 */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTKirbyAnimIntro2_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTKirbyAnimIntro2_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTKirbyAnimIntro2_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTKirbyAnimIntro2_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTKirbyAnimIntro2_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTKirbyAnimIntro2_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTKirbyAnimIntro2_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTKirbyAnimIntro2_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTKirbyAnimIntro2_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimIntro2_joint1[56] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), -53, -1569, -160, 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -3600, 3522, 3522, 3522,
	ftAnimSetValBlock(FT_ANIM_TRAZ), 6479,
	ftAnimSetValT(FT_ANIM_TRAZ, 15), -840,
	ftAnimSetValRateT(FT_ANIM_TRAY, 15), 600, 75,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 3522, 3522, 3522,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 3522, 81, 3522, -327, 3522, 81,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 3727, 2, 2703, -9, 3727, 2,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 164), 3727, 2703, 3727,
	ftAnimBlock(0, 9),
	ftAnimSetValRateT(FT_ANIM_TRAY, 145), -2098, -154,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 145), -3421,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimIntro2_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 409, 0, 0, -312, 0,
	ftAnimBlock(0, 160),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimIntro2_joint3[138] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 268, 0, 0, 312, 0,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 3891, -102, 4300, 102, 3891, -102,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 0, 17, 3891, 81, 4300, -81, 3891, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 89, 0, 4096, 37, 4096, -37, 4096, 37,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 164), 89,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 9), 4096, 87, 4096, -39, 4096, -39,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4710, 3818, 3818,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, -37, 4096, 13, 4096, 13,
	ftAnimSetValRateT(FT_ANIM_SCAX, 5), 4520, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 3884, 3884,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, -28, 4096, 8, 4096, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4379, 3929, 3929,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, -34, 4096, 14, 4096, 14,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4207, 4001, 4001,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, -9, 4096, 9, 4096, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4161, 4049, 4049,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, -5, 4096, 3, 4096, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4132, 4068, 4068,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4096, 4096,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 85), 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTKirbyAnimIntro2_joint5[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, -30, -30,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 178, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), 357, 89,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 1), -30, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY, 3), 357, -107, -30, 47, -30, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY, 2), -178, 0, 0, 1, -60, -1,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY, 164), 0, -60,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 164), -178,
	ftAnimBlock(0, 154),
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimIntro2_joint6[136] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3072,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -521, -468, -608, 180, 1262, 22,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -436, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1364, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAX, 1), -990, -262, 2048, -512,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 3), 2048,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1045, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -876, 179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -474, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -247, 95,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 166), 2048,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -631, 119, -235, 5, 1387, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -251, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), 1383, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -633, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -632, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 150), -635, 0,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -246, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -250, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1383, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 132), 1389, 0,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -256, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 38), -254, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -250, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 70), -240, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -240, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 12), -239, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -634, 0, -244, -4, 1387, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTKirbyAnimIntro2_joint7[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -8, -2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 43), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 35), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 33), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 34), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 9,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTKirbyAnimIntro2_joint9[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -178, -30, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 30, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 357, 89, 0, 44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, -30, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, -17, 357, -125, -30, 47, 0, 47,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 166), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -89, 0, -268, 0, 0, 1, 30, 1,
	ftAnimSetValT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 164), 0, 30,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 164), -89, -268,
	ftAnimBlock(0, 154),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimIntro2_joint10[118] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3072,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -700, 826, 1376, 18, 119, -11,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1310, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 159, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAX, 1), 125, 434, 2048, -511,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 3), 2048,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 169, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -26, -151,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 166), 2048,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -178, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -173, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -169, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 57), -164, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1311, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1300, 9,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 160, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 97), 161, 0,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1304, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 134), 1311, 0,
	ftAnimBlock(0, 42),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -165, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 91), -175, -1,
	ftAnimBlock(0, 45),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 161, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 45), 162, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -178, -3, 1312, 1, 157, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimIntro2_joint11[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 52), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 33), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 34), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 37), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -9,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTKirbyAnimIntro2_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 160),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimIntro2_joint14[54] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 302, 0, -335, 0, -94, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 75), -135, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 159), 308, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -410, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -413, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 152), -411, 0,
	ftAnimBlock(0, 68),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -135, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 82), -134, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -134, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 305, -3, -413, -2, -129, 4,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimIntro2_joint16[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 72), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 49), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 36), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTKirbyAnimIntro2_joint18[64] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), -2121, 0, 1948, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), -1071,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 2008, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 32), -2070, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1147, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1148, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 152), -1148, 0,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2008, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 137), 2004, 0,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2070, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 95), -2070, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2070, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 30), -2077, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2073, 3, 2004, 0, -1148, 0,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimIntro2_joint19[90] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -4, -3, 369, 0, 49, -5,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 30), 65, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 35), 20, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 450, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 450, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 152), 450, 0,
	ftAnimBlock(0, 23),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 65, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 64), 71, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 20, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 72), 23, 2,
	ftAnimBlock(0, 59),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 71, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 59), 62, -2,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 23, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 50), 16, -2,
	ftAnimBlock(0, 46),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 62, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 62, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 16, 0, 450, 0, 62, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimIntro2_joint21[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 30), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 44), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 46), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 36), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTKirbyAnimIntro2_joint22[78] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX), -1792, -1153, 3686,
	ftAnimSetValRate(FT_ANIM_ROTX), -1136, 6,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1235, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 27), -1150, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 159), -1822, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 4), 3686,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX, 2), 3686, 446,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 9), 4966,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1236, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 152), -1235, 0,
	ftAnimBlock(0, 8),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 155), 3686,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1150, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 67), -1155, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1155, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 63), -1147, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1147, 0, -1822, 0, -1235, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
