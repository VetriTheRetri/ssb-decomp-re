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
extern u16 dFTKirbyAnimDownBackU_joint22[154];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTKirbyAnimDownBackU_joints[] = {
	(u32)dFTKirbyAnimDownBackU_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimDownBackU_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimDownBackU_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimDownBackU_joint4, /* [3] joint 4 */
	(u32)dFTKirbyAnimDownBackU_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTKirbyAnimDownBackU_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimDownBackU_joint8, /* [7] joint 8 */
	(u32)dFTKirbyAnimDownBackU_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTKirbyAnimDownBackU_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimDownBackU_joint12, /* [11] joint 12 */
	(u32)dFTKirbyAnimDownBackU_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTKirbyAnimDownBackU_joint15, /* [14] joint 15 */
	(u32)dFTKirbyAnimDownBackU_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTKirbyAnimDownBackU_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTKirbyAnimDownBackU_joint20, /* [19] joint 20 */
	(u32)dFTKirbyAnimDownBackU_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	0xFFFF01DF, /* [22] END */
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
u16 dFTKirbyAnimDownBackU_joint22[154] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 30), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
	0x0000, 0x4100, 0x1000, 0x280E, 0x0638, 0x0010, 0xFA07, 0x0005, 0xFBC6, 0xFFE7, 0x4E00, 0x0FFF, 0x0FFF, 0x280D, 0x0008, 0xF99F, 0xFFD1, 0xFA9A, 0xFFD1, 0x4101, 0x000B, 0x1000, 0x2003, 0x0007, 0x0789, 0x0042, 0x2003, 0x0001, 0x07BF, 0x002A, 0x2803, 0x0006, 0x0934, 0x005B, 0x200D, 0x0001, 0xF974, 0xFFD3, 0xFA7B, 0xFFF3, 0x2809, 0x0006, 0xFBA9, 0x002F, 0x2805, 0x0008, 0xF82F, 0x0030, 0x0801, 0x0002, 0x2901, 0x0006, 0x0C70, 0x01AE, 0x0801, 0x0003, 0x2003, 0x0001, 0x0985, 0x0035, 0x2803, 0x0008, 0x0852, 0xFFD7, 0x2009, 0x0001, 0xFBBE, 0xFFFD, 0x2809, 0x0006, 0xFA99, 0xFFDB, 0x0801, 0x0001, 0x2901, 0x0007, 0x0EAC, 0xFE9C, 0x2005, 0x0001, 0xF868, 0x003B, 0x2805, 0x000A, 0xF84D, 0xFFDA, 0x0801, 0x0004, 0x2009, 0x0001, 0xFA76, 0xFFD8, 0x2809, 0x000C, 0xF94D, 0x0005, 0x2003, 0x0001, 0x0826, 0xFFD6, 0x2803, 0x000B, 0x0779, 0x0003, 0x3901, 0x0004, 0x1000, 0x4101, 0x0008, 0x1000, 0x2005, 0x0001, 0xF82E, 0xFFED, 0x2005, 0x0006, 0xF8E2, 0x0027, 0x200F, 0x0001, 0x077C, 0x0003, 0xF907, 0x0024, 0xF954, 0x0006, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
