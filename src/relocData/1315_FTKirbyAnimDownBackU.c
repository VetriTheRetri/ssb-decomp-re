/* AnimJoint data for relocData file 1315 (FTKirbyAnimDownBackU) */
/* 2176 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimDownBackU_joint1[16];
extern u16 dFTKirbyAnimDownBackU_joint2[78];
extern u16 dFTKirbyAnimDownBackU_joint3[26];
extern u16 dFTKirbyAnimDownBackU_joint4[20];
extern u16 dFTKirbyAnimDownBackU_joint6[68];
extern u16 dFTKirbyAnimDownBackU_joint7[132];
extern u16 dFTKirbyAnimDownBackU_joint8[16];
extern u16 dFTKirbyAnimDownBackU_joint10[70];
extern u16 dFTKirbyAnimDownBackU_joint11[152];
extern u16 dFTKirbyAnimDownBackU_joint12[16];
extern u16 dFTKirbyAnimDownBackU_joint14[10];
extern u16 dFTKirbyAnimDownBackU_joint15[60];
extern u16 dFTKirbyAnimDownBackU_joint17[16];
extern u16 dFTKirbyAnimDownBackU_joint19[136];
extern u16 dFTKirbyAnimDownBackU_joint20[72];
extern u16 dFTKirbyAnimDownBackU_joint22[24];
extern u16 dFTKirbyAnimDownBackU_joint23[130];

/* Joint pointer table (23 entries, 92 bytes) */
AObjEvent32 * dFTKirbyAnimDownBackU_joints[] = {
	(AObjEvent32 *)dFTKirbyAnimDownBackU_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTKirbyAnimDownBackU_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTKirbyAnimDownBackU_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTKirbyAnimDownBackU_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTKirbyAnimDownBackU_joint6, /* [4] joint 6 */
	NULL, /* [5] NULL */
	(AObjEvent32 *)dFTKirbyAnimDownBackU_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTKirbyAnimDownBackU_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTKirbyAnimDownBackU_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTKirbyAnimDownBackU_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTKirbyAnimDownBackU_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTKirbyAnimDownBackU_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTKirbyAnimDownBackU_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTKirbyAnimDownBackU_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTKirbyAnimDownBackU_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTKirbyAnimDownBackU_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTKirbyAnimDownBackU_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTKirbyAnimDownBackU_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTKirbyAnimDownBackU_joint1[16] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 6), -60, -89,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 24), -4800,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 6), -4800,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimDownBackU_joint2[78] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAY), -818, 0, 576, -5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -889, -13,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 572, -4,
	ftAnimSetValRateT(FT_ANIM_TRAY, 4), 622, 236,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 24), -6433,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 681, -46,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 588, -62,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 522, -314,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 572, -221,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 567, 187,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 674, -332,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 576, -48,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 641, 166,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 593, 34,
	ftAnimSetValRateT(FT_ANIM_TRAY, 7), 600, 0,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), -6433,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimDownBackU_joint3[26] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAZ), 0, 0, 0, -312, 0, 4096,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAY), 0, 4096, 4096,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAZ, 36), 0, 0, -312, 0, 4096,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 30), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 6), -268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTKirbyAnimDownBackU_joint4[20] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 36), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 25), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 0, 45,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimDownBackU_joint6[68] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY), -180, -120,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -318, 9, 48, -14, 79, -11,
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -61, -3, 8, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -211, 1,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 26), -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 8), -120,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 18), -120,
	ftAnimBlock(0, 5),
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -18, -6, 72, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), 0, 10,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -154, -5, -29, -4,
	ftAnimBlock(0, 9),
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 10), 0, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 28, 0, 4,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimDownBackU_joint7[132] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3072,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -515, -8, -943, -5, -288, 40,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4095, 4095,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1143, -67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 115, 38,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 28), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -383, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -327, 77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -94, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1206, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1114, 17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -112, 6, 148, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 77, 9, -234, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 85, 14, -265, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 265, 66,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -594, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1098, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1285, -57,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 346, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 599, 524,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1395, 586, -693, -122,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1551, -69,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 8), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 2080, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2172, 86,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2372, 46,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1345, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2412, 40, -1387, -42, -1608, -56,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTKirbyAnimDownBackU_joint8[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 35), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimDownBackU_joint10[70] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -333, 9, 15, 1, -143, 14,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 60, -120, 60,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 30, 1, -3, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -160, 10,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 26), -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 8), 120, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 18), 120,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 28), 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -16, -9, -69, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -142, -9, -74, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 0, 5,
	ftAnimBlock(0, 8),
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 10), 0, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 26, 0, 14,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimDownBackU_joint11[152] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3072,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2476, -27, 323, 17, -1543, 4,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 28), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 2208, 28, 592, 40, -1405, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2251, -36, 628, 0, -1346, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 439, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1826, -56, -1463, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1839, 16, -1417, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1640, -111, -1665, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 447, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 595, 81,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1552, -27, -1790, -63,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1490, -107, -1901, -92,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 680, 61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 682, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1361, -105, -2009, -79,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2380, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 754, -262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 453, -318, 688, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -365, -160,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 318, -92,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 8), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2522, -141,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2972, -122,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -493, -104,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -737, -73,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3103, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -804, -66, 220, -97, -3216, -113,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTKirbyAnimDownBackU_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 35), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTKirbyAnimDownBackU_joint14[10] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 211, -408, -1889,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 36), -804, 0, -1072,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTKirbyAnimDownBackU_joint15[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 100, 3, -210, -12, -40, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -427, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 29), 128, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -75, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -50, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), 163, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -437, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -322, 18,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 110, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -7, -17,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 202, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -21, -13, -302, 20, 233, 30,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTKirbyAnimDownBackU_joint17[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 35), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTKirbyAnimDownBackU_joint19[136] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4095,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1787, -32, 1446, 28, -1133, -41,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4095,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 11), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 1916, 75, -1269, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -1970, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2024, -67,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_SCAX, 6), -2420, 46, 3174, 466,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1989, 61, -1184, 77,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1348, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1751, -44,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_SCAX, 7), 3762, -340,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2361, 57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -2038, 96,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1403, -94,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1816, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1707, -48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1612, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1951, 56,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1914, 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1781, 37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1704, 0,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 8), 4095,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1602, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1754, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1912, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1919, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1920, 0, 1785, 30, -1704, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTKirbyAnimDownBackU_joint20[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 131, -16, 315, 10, 413, -43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -145, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 386, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -147, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -122, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 337, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -148, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 68, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 411, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 244, 30,
	ftAnimBlock(0, 16),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 66, -2, 339, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 39, -13, 265, -27,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 275, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 23, -15, 302, 27, 237, -27,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimDownBackU_joint22[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 30), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTKirbyAnimDownBackU_joint23[130] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1592, 16, -1529, 5, -1082, -25,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4095, 4095,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -1633, -47, -1382, -47,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 11), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 1929, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1983, 42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 2356, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1676, -45, -1413, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1111, 47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -2001, 48,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_SCAX, 6), 3184, 430,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2437, 53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 2130, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1090, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1383, -37,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_SCAX, 7), 3756, -356,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1944, 59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1971, -38,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1418, -40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -1715, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2086, -42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1913, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 4), 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 8), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2002, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -1822, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1916, 3, -1785, 36, -1708, 6,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
