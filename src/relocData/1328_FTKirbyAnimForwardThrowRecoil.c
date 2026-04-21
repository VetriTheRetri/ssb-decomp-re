/* AnimJoint data for relocData file 1328 (FTKirbyAnimForwardThrowRecoil) */
/* 2528 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimForwardThrowRecoil_joint1[30];
extern u16 dFTKirbyAnimForwardThrowRecoil_joint2[62];
extern u16 dFTKirbyAnimForwardThrowRecoil_joint3[18];
extern u16 dFTKirbyAnimForwardThrowRecoil_joint4[46];
extern u16 dFTKirbyAnimForwardThrowRecoil_joint6[46];
extern u16 dFTKirbyAnimForwardThrowRecoil_joint7[162];
extern u16 dFTKirbyAnimForwardThrowRecoil_joint8[38];
extern u16 dFTKirbyAnimForwardThrowRecoil_joint10[46];
extern u16 dFTKirbyAnimForwardThrowRecoil_joint11[162];
extern u16 dFTKirbyAnimForwardThrowRecoil_joint12[40];
extern u16 dFTKirbyAnimForwardThrowRecoil_joint14[10];
extern u16 dFTKirbyAnimForwardThrowRecoil_joint15[106];
extern u16 dFTKirbyAnimForwardThrowRecoil_joint17[14];
extern u16 dFTKirbyAnimForwardThrowRecoil_joint19[140];
extern u16 dFTKirbyAnimForwardThrowRecoil_joint20[92];
extern u16 dFTKirbyAnimForwardThrowRecoil_joint22[14];
extern u16 dFTKirbyAnimForwardThrowRecoil_joint23[120];
extern u16 dFTKirbyAnimForwardThrowRecoil_joint24[70];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTKirbyAnimForwardThrowRecoil_joints[] = {
	(u32)dFTKirbyAnimForwardThrowRecoil_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimForwardThrowRecoil_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimForwardThrowRecoil_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimForwardThrowRecoil_joint4, /* [3] joint 4 */
	(u32)dFTKirbyAnimForwardThrowRecoil_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTKirbyAnimForwardThrowRecoil_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimForwardThrowRecoil_joint8, /* [7] joint 8 */
	(u32)dFTKirbyAnimForwardThrowRecoil_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTKirbyAnimForwardThrowRecoil_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimForwardThrowRecoil_joint12, /* [11] joint 12 */
	(u32)dFTKirbyAnimForwardThrowRecoil_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTKirbyAnimForwardThrowRecoil_joint15, /* [14] joint 15 */
	(u32)dFTKirbyAnimForwardThrowRecoil_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTKirbyAnimForwardThrowRecoil_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTKirbyAnimForwardThrowRecoil_joint20, /* [19] joint 20 */
	(u32)dFTKirbyAnimForwardThrowRecoil_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTKirbyAnimForwardThrowRecoil_joint23, /* [22] joint 23 */
	(u32)dFTKirbyAnimForwardThrowRecoil_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTKirbyAnimForwardThrowRecoil_joint1[30] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 4800,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -1120,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 29), -2400, -320,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 9), 2400, 595,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 20), 2160, -872,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimForwardThrowRecoil_joint2[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 1608, 600, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 5), 1608,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 15), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 300, -480, 4915, 327, 2048, -819, 4915, 327,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 300, 479, 4915, -327, 2048, 819, 4915, -327,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 0, 600, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 31), 0, 600, 4096, 4096, 4096,
	ftAnimBlock(0, 9),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -521,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), -3216,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimForwardThrowRecoil_joint3[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), -268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 25), -268,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTKirbyAnimForwardThrowRecoil_joint4[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ), -536, 0, 312, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, 312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -536,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 357, -268, 360, -180,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 357, -268, 360, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 268, -21, 0, 15, 312, -22, 0, 84,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimForwardThrowRecoil_joint6[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -357, -357, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -357, -357, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -178, 178, -120, -120, -60,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -178, 178, -120, -120, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 0, 10, 178, -10, -120, 56, -120, 56, 0, 28,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTKirbyAnimForwardThrowRecoil_joint7[162] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -432, 446, -1161, 285, 824, -382,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 610, 0, -130, 0,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -875, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -858, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -858, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 454, -298, 19, 285,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 13, 24, -875, 152, 441, -159,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 502, -333, -554, 106, -299, 236,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 3072,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 14), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -653, -565, -661, 63, 915, 603,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -628, -37, -427, 68, 908, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -729, -225, -524, -46, 996, 218,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -523, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1079, -174, 1345, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1079, -1, 1345, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1082, -1, 1348, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -910, 57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 1265, -7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -523, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -593, -13,
	ftAnimBlock(0, 5),
	ftAnimSetValRateT(FT_ANIM_SCAX, 15), 3072, 120,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -852, 55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -587, 13,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1261, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1312, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -571, 15, -609, -15, 1325, 12,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTKirbyAnimForwardThrowRecoil_joint8[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, -489,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -495, -282,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -572, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -572, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -495, 286,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 247,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimForwardThrowRecoil_joint10[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 357, 357, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 357, 357, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -268, -89, 120, -60, 60,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -268, -89, 120, -60, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 0, 15, -178, 5, 120, -56, -120, 28, 0, -28,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimForwardThrowRecoil_joint11[162] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1175, -434, 447, 285, -784, -370,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2213, 0,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 732, 151, -1154, -397,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 751, 7, -1579, -289,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 751, -7, -1579, 289,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2053, 301,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1609, -27, 732, 149, -1154, -162,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2107, -972, 1050, 50, -1903, -1064,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 3072,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 14), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3554, -764, 833, -51, -3283, -726,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -3048, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3636, 100, 948, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3352, 98, 995, 49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1048, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3439, -40, -3139, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -3438, 1, -3142, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3436, 4, -3148, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -3755, -68,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -3275, -30,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_SCAX, 15), 3072, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1054, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1013, -13,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3825, -66,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -4199, -51,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3308, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -3464, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4253, -53, 999, -14, -3499, -35,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTKirbyAnimForwardThrowRecoil_joint12[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, -486,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -493, -281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -570, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -570, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -493, 281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTKirbyAnimForwardThrowRecoil_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 35),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTKirbyAnimForwardThrowRecoil_joint15[106] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 123, -85, -328, 107, -4, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 123, 47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -111, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -221, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -328, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -47, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 132, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 45, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -171, -41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -194, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -47, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -229, -24,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 45, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 237, 52,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -198, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 217, 20,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 287, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 314, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -253, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -300, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 295, -19, -302, -1, 237, 20,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTKirbyAnimForwardThrowRecoil_joint17[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 34), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimForwardThrowRecoil_joint19[140] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -166, 149, 203, -103, -2566, 77,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 99, 56,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 6), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -2582, -21,
	ftAnimSetVal0RateT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 15), 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -5, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -16, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -166, -59, 203, 30,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 4505,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -27, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -136, 64,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 163, 33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2613, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -2711, -27,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 4505,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 163, 0, -27, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 119, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -14, -14,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, -40, 4096, -40,
	ftAnimSetVal0RateT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 15), 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_SCAX, 15), 3686, -48,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 78, -48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -311, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -35, -25, -2741, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -163, 2, -2860, -8,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -318, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -322, -3, -158, 4, -2864, -4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTKirbyAnimForwardThrowRecoil_joint20[92] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -123, 85, 328, -107, -4, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -4, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -35, -46, 221, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -123, -21, 328, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 51, 6, 194, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 59, 91,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 329, -1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 51, 0, 194, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -206, -47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), 303, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 325, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), 221, -4,
	ftAnimBlock(0, 19),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -254, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -302, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 220, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 228, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -297, 5, 300, -3, 233, 5,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimForwardThrowRecoil_joint22[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 34), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTKirbyAnimForwardThrowRecoil_joint23[120] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1774, -149, 1811, -103, 2259, 77,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1708, 56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 2259, -73,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 15), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1614, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1625, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1774, 94, 1811, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1529, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1814, 61, 2193, -111,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 5), 1976,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1841, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1529, 0, 1841, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), 1457, -12, 1960, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1976, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 1906, 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, -40, 4096, -40, 4096, -40,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 15), 3686, 3686, 3686,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1914, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1946, -8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1448, -3, 1965, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1930, -15, 1450, 1, 1957, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTKirbyAnimForwardThrowRecoil_joint24[70] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 840, 540,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAX), 0, -33, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX, 2), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -402, 1164, 439,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY, 3), 0, 100, 0, 0, 1080, -800,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 3), 450,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 0, -67, 0, 0, 720, 4061,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 1), 360,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 31), 360,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAZ, 4), -335, 0, 2988,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 27), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 10), -335, 2988,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 17), -804, 8880,
	ftAnimBlock(0, 15),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
