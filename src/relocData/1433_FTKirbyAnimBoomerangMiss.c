/* AnimJoint data for relocData file 1433 (FTKirbyAnimBoomerangMiss) */
/* 2656 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimBoomerangMiss_joint1[60];
extern u16 dFTKirbyAnimBoomerangMiss_joint2[18];
extern u16 dFTKirbyAnimBoomerangMiss_joint3[48];
extern u16 dFTKirbyAnimBoomerangMiss_joint5[86];
extern u16 dFTKirbyAnimBoomerangMiss_joint6[196];
extern u16 dFTKirbyAnimBoomerangMiss_joint7[22];
extern u16 dFTKirbyAnimBoomerangMiss_joint8[42];
extern u16 dFTKirbyAnimBoomerangMiss_joint10[80];
extern u16 dFTKirbyAnimBoomerangMiss_joint11[180];
extern u16 dFTKirbyAnimBoomerangMiss_joint12[14];
extern u16 dFTKirbyAnimBoomerangMiss_joint14[10];
extern u16 dFTKirbyAnimBoomerangMiss_joint15[128];
extern u16 dFTKirbyAnimBoomerangMiss_joint17[36];
extern u16 dFTKirbyAnimBoomerangMiss_joint19[112];
extern u16 dFTKirbyAnimBoomerangMiss_joint20[104];
extern u16 dFTKirbyAnimBoomerangMiss_joint22[24];
extern u16 dFTKirbyAnimBoomerangMiss_joint23[122];

/* Joint pointer table (23 entries, 92 bytes) */
AObjEvent32 * dFTKirbyAnimBoomerangMiss_joints[] = {
	(AObjEvent32 *)dFTKirbyAnimBoomerangMiss_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTKirbyAnimBoomerangMiss_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTKirbyAnimBoomerangMiss_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTKirbyAnimBoomerangMiss_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTKirbyAnimBoomerangMiss_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTKirbyAnimBoomerangMiss_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTKirbyAnimBoomerangMiss_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTKirbyAnimBoomerangMiss_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTKirbyAnimBoomerangMiss_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTKirbyAnimBoomerangMiss_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTKirbyAnimBoomerangMiss_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTKirbyAnimBoomerangMiss_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTKirbyAnimBoomerangMiss_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTKirbyAnimBoomerangMiss_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTKirbyAnimBoomerangMiss_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTKirbyAnimBoomerangMiss_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTKirbyAnimBoomerangMiss_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTKirbyAnimBoomerangMiss_joint1[60] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 600, 0, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 600, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 10), -240, -144,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 10), -360, 240,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 6), 240, 299,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 480, 4300, 3276, 4300,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 10), 240, -48,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 600, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 600, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), 150, -192,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 5), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimBoomerangMiss_joint2[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 26), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), -268,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimBoomerangMiss_joint3[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 89, 13, 268, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 268, -5, 714, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 0, -16, -268, -113,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -536, -26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 0, -5, -536, 35,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTKirbyAnimBoomerangMiss_joint5[86] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 268, -20, 89, -13,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -30, -32, -60, -64, 0, 80,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -60, -48, -120, -24, 150, 120,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -90, -120, -90, 90, 150, -120,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -30, 120, 30, -400,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -536, -50, -357, -27,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 3), -180,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -90, 73, 0, -18, -150, -55,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 10), -536, 26, -357, 17, -60, 36, -60, 60,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 10), -60,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 0, 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimBoomerangMiss_joint6[196] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, -4, -1391, 7, 1608, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -1142, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 1463, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -909, 50,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 10), 3072,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 26), 3072,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1162, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1586, -664,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1468, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -849, -6, 1812, 585,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1193, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2515, -570, 2639, 462,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2726, -163, 2737, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2841, -92, 2762, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -3013, 54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2778, 50,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1135, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1241, -105,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2881, 125,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2881, -258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1342, 32, 2866, 184,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -968, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3147, 378,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3280, -223, 3624, 272,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3327, -66, -916, 31, 3692, 92,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -971, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3413, -83, 3809, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -3810, -113, 4385, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3916, -75, -1005, -43, 4526, 108,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -3902, -22, 4605, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1410, 15,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 4096,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3934, -34, 4648, 48,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -4020, -2, 4818, 14,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1393, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4021, 0, -1387, 5, 4825, 6,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimBoomerangMiss_joint7[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 34), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTKirbyAnimBoomerangMiss_joint8[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 536,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 804, 204, -120, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 20, 536, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 402, 30, 536, -61,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 402, -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 402, -30, 536, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, -20, 536, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 536,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimBoomerangMiss_joint10[80] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 15), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -268, 178,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 10), 120, 64, 30, -16,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 5), 120, -30,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 120, 43, 0, -43, 30, 65,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 6), 0, 16, 0, -11, 180, 14, 60, 14,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 6), -60,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 150, -64, 0, 32, 60, -16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 5), 60, -120, 30, -48,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimBoomerangMiss_joint11[180] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2412, 6, 217, 4, 0, -1,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 536, 26,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 3072,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -579, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 2634, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2639, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 2232, 115,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 550, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 511, 76,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 26), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -730, -133,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -998, 19,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2369, 122, 591, 70,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2111, -475,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 547, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -987, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1373, -427,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1498, -428, -1916, -350,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1097, -48, -2078, 16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 419, -106,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 208, -20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1056, -43, -2060, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -2262, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 445, -86,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 195, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 244, 40,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2257, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -2753, -170,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 338, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -209, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -345, -141, 282, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -783, -39, 229, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2925, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -3200, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -804, -20, 217, -11, -3216, -16,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTKirbyAnimBoomerangMiss_joint12[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 45), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimBoomerangMiss_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 46),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTKirbyAnimBoomerangMiss_joint15[128] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -23, -1, -302, -1, 237, 1,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 47, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -357, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 145, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 120, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 235, 60,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 52, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -9, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 13, -51, -346, 44, 264, 192,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -82, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -113, -68, 621, 273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -124, -11, 811, 133,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 966, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -120, 6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -69, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -262, -26,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 971, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 506, -106,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -108, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -32, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 397, -98,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 257, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -284, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -297, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -21, 10, -302, -4, 233, -24,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTKirbyAnimBoomerangMiss_joint17[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 274, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 68, -137,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimBoomerangMiss_joint19[112] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1298, -2, 1785, 0, -1704, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), 1210, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), 1797, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -1634, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1626, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1680, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1209, 63, -1854, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1585, 158, -1630, 109,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1797, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 1809, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1653, 42, -1542, 68,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1676, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -1478, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1485, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1736, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1668, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1466, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1371, -67, 1807, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 1300, -3, 1785, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1774, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1716, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1298, -2, 1785, 0, -1708, 8,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTKirbyAnimBoomerangMiss_joint20[104] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 23, -7, 302, 0, 237, -9,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 190, -16, -454, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -216, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -227, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 19, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 6, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 69, 86,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 178, -3, -459, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 288, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -78, 251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 150, 38, 174, 190,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 427, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 111, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 263, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 304, -2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 427, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 246, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 108, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 28, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, -7, 302, -1, 233, -12,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimBoomerangMiss_joint22[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 40), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTKirbyAnimBoomerangMiss_joint23[122] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 309, 0, 176, 0, -96, -2,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 440, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 385, -6, 111, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 368, -31, 47, -80,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -180, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 192, 98,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 475, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 323, -184,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -155, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 14, 84,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 308, 75, 89, -191,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 262, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -170, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 99, 65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 194, -2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 257, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 310, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -174, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -97, 2,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 191, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), 178, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 309, -1, 176, -1, -99, -2,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
