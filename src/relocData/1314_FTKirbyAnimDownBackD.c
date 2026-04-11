/* AnimJoint data for relocData file 1314 (FTKirbyAnimDownBackD) */
/* 2432 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimDownBackD_joint1[16];
extern u16 dFTKirbyAnimDownBackD_joint2[78];
extern u16 dFTKirbyAnimDownBackD_joint3[24];
extern u16 dFTKirbyAnimDownBackD_joint4[20];
extern u16 dFTKirbyAnimDownBackD_joint6[88];
extern u16 dFTKirbyAnimDownBackD_joint7[162];
extern u16 dFTKirbyAnimDownBackD_joint8[22];
extern u16 dFTKirbyAnimDownBackD_joint10[90];
extern u16 dFTKirbyAnimDownBackD_joint11[166];
extern u16 dFTKirbyAnimDownBackD_joint12[24];
extern u16 dFTKirbyAnimDownBackD_joint14[38];
extern u16 dFTKirbyAnimDownBackD_joint15[72];
extern u16 dFTKirbyAnimDownBackD_joint17[14];
extern u16 dFTKirbyAnimDownBackD_joint19[158];
extern u16 dFTKirbyAnimDownBackD_joint20[58];
extern u16 dFTKirbyAnimDownBackD_joint22[140];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTKirbyAnimDownBackD_joints[] = {
	(u32)dFTKirbyAnimDownBackD_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimDownBackD_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimDownBackD_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimDownBackD_joint4, /* [3] joint 4 */
	(u32)dFTKirbyAnimDownBackD_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTKirbyAnimDownBackD_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimDownBackD_joint8, /* [7] joint 8 */
	(u32)dFTKirbyAnimDownBackD_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTKirbyAnimDownBackD_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimDownBackD_joint12, /* [11] joint 12 */
	(u32)dFTKirbyAnimDownBackD_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTKirbyAnimDownBackD_joint15, /* [14] joint 15 */
	(u32)dFTKirbyAnimDownBackD_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTKirbyAnimDownBackD_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTKirbyAnimDownBackD_joint20, /* [19] joint 20 */
	(u32)dFTKirbyAnimDownBackD_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	0xFFFF0221, /* [22] END */
};

/* Joint 1 */
u16 dFTKirbyAnimDownBackD_joint1[16] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 6), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 24), -4800,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 6), -4800,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimDownBackD_joint2[78] = {
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAY), 773, 0, 576, 91,
	ftAnimSetValBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 7), 665, 106,
	ftAnimSetValT(FT_ANIM_TRAZ, 36), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 773,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 24), -3216,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 628, -45,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 620, -260,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 556, -5,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 582, 109,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 676, 24,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 581, 8,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 606, 247,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 592, 24,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), 619, -36,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 6), -3216,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 600, -39,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimDownBackD_joint3[24] = {
	ftAnimSetValAfter(FT_ANIM_TRAX), 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -312, 0,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 36), 0, 0, -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 25), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 11), -268, -65,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTKirbyAnimDownBackD_joint4[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 36), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 19), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 11), -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 0, 70,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimDownBackD_joint6[88] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 77, -2, -162, 5, -63, -1,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -180, -60, -120,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 6), -120,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 6), -60, 87,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -102, -7,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 11), -60,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 69, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -134, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -194, 12,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 5), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 23), -120,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 100, 0,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 18), -120,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 25), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), 0, -1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -13, 5,
	ftAnimBlock(0, 13),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 0, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 0, 0,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 7), 0, 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimDownBackD_joint7[162] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3072,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2188, -44, -583, 43, 1760, 57,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4095, 4095,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), -2432, -49, 2201, 102,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 26), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), -344, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -349, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -471, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2480, -41, 2308, 104,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 2731, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -2652, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2668, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -2466, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -535, -64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -634, 17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2707, -21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2757, 27,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2527, -49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2625, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -639, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -741, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2799, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2911, -582, 3060, 554,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3791, -483, 3908, 449,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 4095,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3879, -26, -679, 84, 3959, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -451, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -3231, 322,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3896, -58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 3297, -83,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -432, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -262, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2908, 266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -2479, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2412, 67, -217, 44, 3216, -80,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTKirbyAnimDownBackD_joint8[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 33), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimDownBackD_joint10[90] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 28, 7, 157, -2, -44, 28,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 120, -120, 90,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 6), 0, -109,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 103, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 55, -3,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 29), 120, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 151, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 230, -11,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 5), -60,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 94, -15,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 18), 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 28, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -58, -14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), 0, -1,
	ftAnimBlock(0, 10),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 0, 8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 0, -2,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimDownBackD_joint11[166] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3072,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 644, 6, 1457, -22, 286, 2,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4095, 4095,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), 871, 24, 1215, -13,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 26), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 677, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 779, 96,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1183, -43,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 903, 58, 1187, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 886, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1093, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 992, -134, 1124, -87,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 969, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 683, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 739, 104,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 942, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 918, 9, 1088, 78,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 893, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1126, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 991, 599, 1174, 595,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2141, 688, 2318, 677,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2368, 97, 2529, 77,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 2265, -76, 2371, -76,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 956, 102,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1262, 17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2184, -124, 2320, -55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1178, -189,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1766, -149,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1271, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1331, 42,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1027, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 908, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, -104, 1387, 56, 1608, -158,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTKirbyAnimDownBackD_joint12[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 32), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTKirbyAnimDownBackD_joint14[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, 41, 0, 42, -1072, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 539, 121, 814, 41, -76, 51,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -521, -38, -1130, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 421, -118,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 0, -6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), -804, -28, -1072, -9,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTKirbyAnimDownBackD_joint15[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 25, 28, -202, -36, 128, -72,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 274, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), -358, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -272, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -256, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 30, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 263, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 95, -9,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -362, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -319, 19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 40, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 200, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 80, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -4, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -23, -19, -302, 17, 237, 36,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTKirbyAnimDownBackD_joint17[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 35), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimDownBackD_joint19[158] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX), -1684, -21, 1494, 59, -751, -13, 4095, -251,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4095, 4095,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 2099, 51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1137, -120,
	ftAnimSetValRateT(FT_ANIM_SCAX, 11), 3060, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1767, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1939, -295,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2357, -291,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2521, -81,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -2114, 61,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2137, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1548, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1266, -77,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1059, -73,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_SCAX, 25), 4095, 76,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2076, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1953, -36,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1578, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1718, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1993, -27, -1144, -99,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1855, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1920, -6,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1735, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1599, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1836, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1696, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1924, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1937, 14,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1621, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1736, 46,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1700, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1703, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1918, 19, 1785, 49, -1704, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTKirbyAnimDownBackD_joint20[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -499, 20, 290, 7, -430, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), 302, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 22), -107, 19, -22, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -83, 32, 11, 48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 283, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 36, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 279, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 273, 27,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 274, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 262, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 23, -12, 302, 28, 237, -24,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimDownBackD_joint22[140] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 35), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x290E, 0xFB77, 0x0045, 0x06E7, 0xFFCE, 0xFD82, 0xFFF0, 0x1000, 0xFEFC, 0x4E00, 0x0FFF, 0x0FFF, 0x2909, 0x0009, 0xFBB9, 0xFFA7, 0x0BF4, 0x0008, 0x2803, 0x000B, 0xFC97, 0xFF61, 0x2005, 0x0008, 0x0468, 0xFFCE, 0x2005, 0x0001, 0x0444, 0xFFFB, 0x2805, 0x0008, 0x0681, 0x0001, 0x2901, 0x001B, 0x1000, 0x0044, 0x2009, 0x0001, 0xFB70, 0xFFD6, 0x2809, 0x0008, 0xFBFB, 0xFFAF, 0x0801, 0x0001, 0x2003, 0x0001, 0xFBEC, 0xFF8A, 0x2003, 0x0004, 0xFAF1, 0xFFD7, 0x2003, 0x0001, 0xFAD7, 0xFFF7, 0x2803, 0x0007, 0xFB05, 0xFFD7, 0x2005, 0x0001, 0x066F, 0xFFE3, 0x2805, 0x0008, 0x04D4, 0xFFFF, 0x2009, 0x0001, 0xFBA3, 0xFFBA, 0x2809, 0x0006, 0xF9AB, 0xFFB5, 0x0801, 0x0005, 0x2003, 0x0001, 0xFAD6, 0xFFD6, 0x2803, 0x000A, 0xFAED, 0x0002, 0x2009, 0x0001, 0xF96D, 0xFFD3, 0x2809, 0x0008, 0xF963, 0xFFFE, 0x2005, 0x0001, 0x04D6, 0x0002, 0x2805, 0x0008, 0x0569, 0x002E, 0x0801, 0x0007, 0x2009, 0x0001, 0xF95F, 0xFFFD, 0x200F, 0x0001, 0xFAEF, 0x0001, 0x059C, 0x0033, 0xF95C, 0xFFFD, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
