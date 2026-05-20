/* AnimJoint data for relocData file 418 (FTKirbyAnimSelected) */
/* 2704 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimSelected_joint1[36];
extern u16 dFTKirbyAnimSelected_joint2[24];
extern u16 dFTKirbyAnimSelected_joint3[44];
extern u16 dFTKirbyAnimSelected_joint5[52];
extern u16 dFTKirbyAnimSelected_joint6[266];
extern u16 dFTKirbyAnimSelected_joint7[30];
extern u16 dFTKirbyAnimSelected_joint9[50];
extern u16 dFTKirbyAnimSelected_joint10[236];
extern u16 dFTKirbyAnimSelected_joint11[32];
extern u16 dFTKirbyAnimSelected_joint13[10];
extern u16 dFTKirbyAnimSelected_joint14[106];
extern u16 dFTKirbyAnimSelected_joint16[28];
extern u16 dFTKirbyAnimSelected_joint18[136];
extern u16 dFTKirbyAnimSelected_joint19[112];
extern u16 dFTKirbyAnimSelected_joint21[22];
extern u16 dFTKirbyAnimSelected_joint22[124];

/* Joint pointer table (22 entries, 88 bytes) */
AObjEvent32 * dFTKirbyAnimSelected_joints[] = {
	(AObjEvent32 *)dFTKirbyAnimSelected_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTKirbyAnimSelected_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTKirbyAnimSelected_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTKirbyAnimSelected_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTKirbyAnimSelected_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTKirbyAnimSelected_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTKirbyAnimSelected_joint9, /* [7] joint 9 */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTKirbyAnimSelected_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTKirbyAnimSelected_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTKirbyAnimSelected_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTKirbyAnimSelected_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTKirbyAnimSelected_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTKirbyAnimSelected_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTKirbyAnimSelected_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTKirbyAnimSelected_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTKirbyAnimSelected_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimSelected_joint1[36] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 600, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 480, 4300, 3276, 4300,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 960, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 100), 1080, 3891, 4505, 3891,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 960, 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimSelected_joint2[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 804, 521,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 100), 31097, 74,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 31365,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimSelected_joint3[44] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 22, 0, -119, 0, 44,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 71, 7, -428, -53, 142, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 89, -536, 178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -178, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 100), -178, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 670, 402, 580,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTKirbyAnimSelected_joint5[52] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -134, -17, -134, -17,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 15), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 115), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 5), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX, 5), -178, -178, -180,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX, 5), 0, 0, -120,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 105), -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 100), 0, 268, -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -268, -178, -60, -120,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimSelected_joint6[266] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2412, -6, -1391, 12, -1608, 13,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 2317, -41, -1316, 28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1361, -21,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 5), 3072,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 115), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2255, -176, -1267, 100,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -581, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1963, -456,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1342, -389, -1397, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1368, 163,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1524, -6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -565, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -862, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1568, 284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1937, 420, -1506, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2409, 237, -1685, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2412, 1, -1608, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1607, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2412, 0, -861, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), 2379, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 46), -1013, -18,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1606, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -1518, 26,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2359, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2307, -150,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1497, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2026, -236, -1216, 237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1833, -440, -1022, 440,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1145, -444, -334, 445,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 932, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -132, 106,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -82, 24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 894, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 855, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -70, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 48), -32, 0,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1030, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 43), -1455, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 855, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 49), 835, 0,
	ftAnimBlock(0, 31),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -32, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -30, 0,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1457, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1484, 2,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 835, -32, -30, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 579, -248,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 185, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1456, 115,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1096, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 272, -247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 83, -92, 121, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 88, 4, -1066, 29, 51, -69,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTKirbyAnimSelected_joint7[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 36), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 52), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTKirbyAnimSelected_joint9[50] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -178, -26, 178, 26,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 15), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 115), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 5), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX, 5), -268, 268, 180,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX, 5), 0, 0, 120,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_TRAX, 105), 0, 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAY, 100), -268, -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 89, 0, -60,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimSelected_joint10[236] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -8, 1391, -14, 1608, -18,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 655, -5, 1325, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1211, -60,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 5), 3072,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 115), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 679, 62, 1295, -59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 861, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 979, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1146, -93,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 765, -270,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 720, -203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 455, -207, 483, -176,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 422, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 304, -156, 982, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 861, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 142, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 20, 207, 548, 433,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 557, 391, 1289, 530,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 804, 123, 1608, 159,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 804, 0, 1608, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 858, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 49), 1065, 17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 804, 0, 1608, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 20), 838, 14, 1647, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 858, 25, 1667, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 954, 60, 1764, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1010, 234, 1821, 234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1422, 598, 2233, 598,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2207, 427, 3018, 427,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2277, 49, 3089, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2305, 16, 3117, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 32), 2366, 0, 3179, 0,
	ftAnimBlock(0, 19),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1083, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 49), 1465, -2,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2367, 0, 3179, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 35), 2381, 0, 3186, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2381, 37, 3186, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2914, 292,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 3559, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1456, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1266, -60,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3234, 222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3358, 124, 1234, -32, 3601, 42,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimSelected_joint11[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 35), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 58), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimSelected_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 120),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimSelected_joint14[106] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -23, 26, -302, -9, 237, -48,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 261, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), -322, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -237, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -237, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -11, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 258, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 117, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 61, -38, 87, 68,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 41, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 125, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 125, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 92), 125, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 41, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 89), 57, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -321, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 85), -322,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 57, -19, -322, 8, 125, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -42, 47, -33, 63, 661, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 42, 0, 33, 703, 41,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTKirbyAnimSelected_joint16[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 36), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 43), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 38), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTKirbyAnimSelected_joint18[136] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1918, -10, 1785, -1, -1704, 24,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1755, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -1845, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1311, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1316, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1341, 15,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1732, -51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1297, -23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1298, 78,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1124, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1800, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -1801, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1297, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 98), 1307, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1124, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 97), -1133, 0,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1801, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 85), -1813, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1813, 13, 1307, -21, -1133, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1235, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1785, 114, -1096, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1585, 140, -796, 255,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1590, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1476, 175, -585, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1586, 65, -619, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1644, -53, 1608, 22, -635, -16,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimSelected_joint19[112] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 21, 20, 302, -22, 233, 41,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 83, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 76, 0, 480, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 76, 0, 476, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 250, 67, 303, -110,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 59, -43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -41, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 305, 35, 182, -91,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 322, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 121, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 121, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 98), 121, -1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 322, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 89), 321, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -42, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 84), -59, 2,
	ftAnimBlock(0, 83),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 321, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 145, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -55, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -21, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -17, 4, 121, -24, 121, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimSelected_joint21[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 74), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 44), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimSelected_joint22[124] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1298, 0, -1785, -26, -1708, -9,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1612, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1197, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -2107, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2105, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1831, 225,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1612, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1392, 147,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1242, -78,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1415, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1576, 230,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1297, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1223, 132,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1128, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1416, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 100), -1403, 2,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1297, 0, -1128, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 94), -1307, 0, -1136, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1307, -9, -1136, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1513, -46, -1213, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1399, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1450, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1470, -20, -1541, -28, -1224, -10,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
