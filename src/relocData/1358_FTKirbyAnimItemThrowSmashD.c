/* AnimJoint data for relocData file 1358 (FTKirbyAnimItemThrowSmashD) */
/* 2352 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimItemThrowSmashD_joint1[50];
extern u16 dFTKirbyAnimItemThrowSmashD_joint2[10];
extern u16 dFTKirbyAnimItemThrowSmashD_joint3[82];
extern u16 dFTKirbyAnimItemThrowSmashD_joint5[92];
extern u16 dFTKirbyAnimItemThrowSmashD_joint6[152];
extern u16 dFTKirbyAnimItemThrowSmashD_joint7[14];
extern u16 dFTKirbyAnimItemThrowSmashD_joint9[84];
extern u16 dFTKirbyAnimItemThrowSmashD_joint10[160];
extern u16 dFTKirbyAnimItemThrowSmashD_joint11[14];
extern u16 dFTKirbyAnimItemThrowSmashD_joint13[10];
extern u16 dFTKirbyAnimItemThrowSmashD_joint14[104];
extern u16 dFTKirbyAnimItemThrowSmashD_joint16[14];
extern u16 dFTKirbyAnimItemThrowSmashD_joint18[122];
extern u16 dFTKirbyAnimItemThrowSmashD_joint19[86];
extern u16 dFTKirbyAnimItemThrowSmashD_joint21[14];
extern u16 dFTKirbyAnimItemThrowSmashD_joint22[124];

/* Joint pointer table (22 entries, 88 bytes) */
AObjEvent32 * dFTKirbyAnimItemThrowSmashD_joints[] = {
	(AObjEvent32 *)dFTKirbyAnimItemThrowSmashD_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTKirbyAnimItemThrowSmashD_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTKirbyAnimItemThrowSmashD_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTKirbyAnimItemThrowSmashD_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTKirbyAnimItemThrowSmashD_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTKirbyAnimItemThrowSmashD_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTKirbyAnimItemThrowSmashD_joint9, /* [7] joint 9 */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTKirbyAnimItemThrowSmashD_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTKirbyAnimItemThrowSmashD_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTKirbyAnimItemThrowSmashD_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTKirbyAnimItemThrowSmashD_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTKirbyAnimItemThrowSmashD_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTKirbyAnimItemThrowSmashD_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTKirbyAnimItemThrowSmashD_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTKirbyAnimItemThrowSmashD_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTKirbyAnimItemThrowSmashD_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimItemThrowSmashD_joint1[50] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_SCAY), 600, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 960, 719,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAY, 2), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAY, 2), 960, -600, 4096, -409,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 660, -96,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAY, 2), 3276,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAY, 8), 840, -43, 4096, 148,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), 600, -319,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAY, 3), 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAY, 3), 600, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimItemThrowSmashD_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -268, 0, 0, -312, 0,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimItemThrowSmashD_joint3[82] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 312, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 312, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 446, 111, -357, -89, -625, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 446, 44, -357, 178, -625, 268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 625, 26, 357, 71, 446, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 714, -56, 357, -32, 580, -40, 312, -52, 4096, 37, 4096, -148, 4096, 37,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, -119, 0, -59, 0, -96,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 240, 4300, 3276, 4300,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 0, 0, 0, 312, 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTKirbyAnimItemThrowSmashD_joint5[92] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -178, -44, -178, -44,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 5), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), -120, -60,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -178, 134, -178, 44,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), -120, -60,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 1), 60, 720,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 357, 53, 0, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 1), -180,
	ftAnimSetValRateT(FT_ANIM_TRAY, 1), -60, -192,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), -120, 120,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ | FT_ANIM_TRAZ, 8), 0, 120,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 357, -16,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 11), -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), -120,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAZ, 3), 178, -59, 60, -159,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 6), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimItemThrowSmashD_joint6[152] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 229, -217, -221, 0, -637,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 3072,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -745, 421,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -760, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1033, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1055, -479,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 15), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 74, 0, 205, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1055, 1089, -633, 97, -745, -1187,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -421, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2253, 304, -2169, -438,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1664, -234, -1623, 257,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2075, 289,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1653, -95,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2234, -75,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2362, 186,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1990, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -357, 40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -304, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2229, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2156, -185,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1882, 209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2408, 346,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2575, 252, -201, 57, -2460, -148,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 3297, 508, -2547, -253,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -240, -2,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 3), 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3930, 361, -2961, -334,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4021, 90, -217, 22, -3216, -255,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimItemThrowSmashD_joint7[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTKirbyAnimItemThrowSmashD_joint9[84] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 178, 44, -178, -44,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 120, -120, -120,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 178, 89, -178, 134,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 12), 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -120, -120,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 536, 44, 357, 89,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, -60,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 15), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 1), -120,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 446, -11,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 8), -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 446, -38, 357, -51,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 178, -74, 0, -59,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 3), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 3), 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimItemThrowSmashD_joint10[160] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 1570, 1391, -374, 1608, 1177,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2374, 819, 1016, -183, 2785, 496,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2444, 59, 1024, -49, 2601, -89,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2271, -165,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2644, -39,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 15), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 917, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1024, 188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1295, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2112, -109, 970, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2052, -78, 986, -26, 2571, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1955, -562, 917, -50, 2424, -614,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 927, -650, 885, 57, 1342, -681,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 655, -186, 1032, 97, 1062, -165,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 448, -105,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1123, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1011, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 867, -166,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 344, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 242, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 244, 217, 1158, 56, 661, 85,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1354, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 678, 269, 1039, 262,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 3), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 783, 68, 1187, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 815, 10, 1397, 210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, -10, 1391, 36, 1608, 211,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimItemThrowSmashD_joint11[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimItemThrowSmashD_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimItemThrowSmashD_joint14[104] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1629, 37, -1305, -27, 1841, -70,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1371, 53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1896, 259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1506, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1552, -350,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2207, -497, -1278, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1352, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2547, -182, 2199, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -2587, -13, 2248, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2598, -8, -1359, -2, 2255, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 2095, -138,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1302, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -2576, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2441, 298,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1632, 195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1923, -124,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1845, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1588, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1606, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1629, -23, -1305, -3, 1841, -3,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimItemThrowSmashD_joint16[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 7, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTKirbyAnimItemThrowSmashD_joint18[122] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -309, -4, -176, 101, -99, 223,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 392, -228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -340, 0, 12, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -301, 114, 13, 52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -14, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 118, -98, -3, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -183, -157, 198, 140,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -194, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -57, -32, 277, 60,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 242, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -19, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -190, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -81, 65,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 194, -113,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -121, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -35, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -270, -137, -25, -47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -226, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -309, -28, -96, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -319, 9, -108, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -202, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -309, 9, -176, 26, -99, 8,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimItemThrowSmashD_joint19[86] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 23, 599, 302, 4, 237, 488,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 252, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 623, 390, 726, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 804, 109, 631, -97,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 804, -215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 531, -255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 121, -216,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 142, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 411, -405,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -7, -233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -55, -33, 254, 1, 139, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), 23, -2, 306, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 202, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 237, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 236, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, -2, 302, -3, 233, -3,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimItemThrowSmashD_joint21[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 19), 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTKirbyAnimItemThrowSmashD_joint22[124] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1298, 308, -1785, -239, -1704, 255,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -989, -13, -2024, -43, -1449, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1326, -258, -1871, 165, -1463, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1506, -601, -1693, 397, -1528, 300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2529, -162, -1076, 220, -862, 124,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1652, -221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1830, 600, -1278, -273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1327, 282, -1410, -68,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1392, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1266, 44, -1695, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1752, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1238, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1298, 7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1387, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1491, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1621, -106,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1715, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1785, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1786, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1291, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1295, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1298, -3, -1785, 1, -1708, 6,
	ftAnimEnd(),
};
