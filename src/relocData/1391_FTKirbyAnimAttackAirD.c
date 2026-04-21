/* AnimJoint data for relocData file 1391 (FTKirbyAnimAttackAirD) */
/* 2272 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimAttackAirD_joint1[76];
extern u16 dFTKirbyAnimAttackAirD_joint2[36];
extern u16 dFTKirbyAnimAttackAirD_joint3[58];
extern u16 dFTKirbyAnimAttackAirD_joint5[54];
extern u16 dFTKirbyAnimAttackAirD_joint6[124];
extern u16 dFTKirbyAnimAttackAirD_joint7[14];
extern u16 dFTKirbyAnimAttackAirD_joint9[54];
extern u16 dFTKirbyAnimAttackAirD_joint10[128];
extern u16 dFTKirbyAnimAttackAirD_joint11[14];
extern u16 dFTKirbyAnimAttackAirD_joint13[10];
extern u16 dFTKirbyAnimAttackAirD_joint14[90];
extern u16 dFTKirbyAnimAttackAirD_joint16[12];
extern u16 dFTKirbyAnimAttackAirD_joint18[154];
extern u16 dFTKirbyAnimAttackAirD_joint19[90];
extern u16 dFTKirbyAnimAttackAirD_joint21[16];
extern u16 dFTKirbyAnimAttackAirD_joint22[162];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimAttackAirD_joints[] = {
	(u32)dFTKirbyAnimAttackAirD_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimAttackAirD_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimAttackAirD_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimAttackAirD_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimAttackAirD_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimAttackAirD_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimAttackAirD_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimAttackAirD_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimAttackAirD_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimAttackAirD_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimAttackAirD_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimAttackAirD_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimAttackAirD_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimAttackAirD_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimAttackAirD_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTKirbyAnimAttackAirD_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimAttackAirD_joint1[76] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 600, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), -268, -89, 4505, 273, 2457, -1092, 4505, 273,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4505, -273, 2457, 1092, 4505, -273,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), -268,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 17), -268,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4096, -234, 4096, 702, 4096, -234,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 3686, -25, 4915, 51, 3686, -25,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 3891, 27, 4505, -54, 3891, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), -268, 8, 4096, 13, 4096, -27, 4096, 13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 0, 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimAttackAirD_joint2[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 0, 89,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 0, 459,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 3216, 402,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), 6433, 214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 20), 9650, 98,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), 9382,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimAttackAirD_joint3[58] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 268, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 312, 0,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 0, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 0, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 178, 25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 178, 2, 4096, 16, 4096, -65, 4096, 16,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 10), 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4300, 3276, 4300,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTKirbyAnimAttackAirD_joint5[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 178, -120, -120,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), 0, -59,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 1), -180, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 0, 89,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), -180, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), 268, 38,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 1), -120, -120,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 46), -120, -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), 268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 268, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), 178,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimAttackAirD_joint6[124] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -571, -232, -609, -86, -1891, 283,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -695, 102, -1608, -310,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), -972,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -804, 285,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -402, 228, -514, 94, -2133, -298,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -525, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -346, 42, -2205, -52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -348, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2238, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -2191, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -545, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -518, 1,
	ftAnimBlock(0, 17),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -344, 0, -2196, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 14), -402, -23, -2133, 24,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -517, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -601, -13,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -434, -42, -2101, 41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1878, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -620, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -598, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -581, 14, -1885, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -568, 12, -612, -11, -1895, -9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTKirbyAnimAttackAirD_joint7[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 49), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTKirbyAnimAttackAirD_joint9[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), -178, 120, -120,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), 0, 59,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 180, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 0, -89,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 180, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), -268, -38,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 120, -120,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 46), 120, -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), -268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), -268, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), -178,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimAttackAirD_joint10[128] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 572, 231, 609, 86, 1325, 283,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 695, -100, 1608, -306,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 966, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 804, -281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 402, -226, 513, -95, 1083, -295,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 543, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 350, -42, 1016, -52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 348, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 978, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), 1020, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 563, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 517, -2,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 344, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 399, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1026, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 1079, 22,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 513, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 601, 13,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 434, 46, 1115, 45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1341, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 620, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 600, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 581, -14, 1331, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 572, -9, 609, 8, 1325, -6,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimAttackAirD_joint11[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 49), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTKirbyAnimAttackAirD_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimAttackAirD_joint14[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 295, -394, -302, 111, 237, -136,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 99, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -194, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -99, -198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -102, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -11, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 97, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -10, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -16, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 33), -9, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -12, 0, -194, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 34), -25, 8, -212, -12,
	ftAnimBlock(0, 31),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 227, 12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -13, 18, -227, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 280, 30, -298, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 297, 16, -300, -1, 233, 6,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimAttackAirD_joint16[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 49), 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTKirbyAnimAttackAirD_joint18[154] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1286, 128, 1766, -186, -1255, -291,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), 1580, -83,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1424, 0, -1624, -1,
	ftAnimSetVal0RateT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 3686, 3686,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 3686,
	ftAnimSetValRateT(FT_ANIM_SCAX, 2), 3686, 273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1599, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1442, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1414, 121, -1550, 415,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 1667, 127, -792, 395, 4096, 409, 3686, 117, 3686, 117,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 5120, 127, 4096, 51, 4096, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1668, 0, -758, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -800, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 35), 1667, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1444, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 37), 1423, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 5120, -95, 4096, -27, 4096, -27,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -799, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), -796, -15,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 3686, -95, 3686, -27, 3686, -27,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 3686, 3686, 3686,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1658, -13, -817, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 1295, -17, -1253, -12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1429, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 1742, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1286, -8, 1766, 24, -1259, -5,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimAttackAirD_joint19[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -297, 395, 300, -108, 233, -136,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 95, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 194, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 98, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 101, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 11, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 97, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -10, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -16, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 31), -18, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 12, 0, 194, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 34), 24, -9, 213, 12,
	ftAnimBlock(0, 29),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -14, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 227, 12,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 12, -17, 227, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -280, -30, 298, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -297, -16, 300, 1, 233, 6,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimAttackAirD_joint21[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 49), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTKirbyAnimAttackAirD_joint22[162] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 322, -128, 158, -186, 349, -291,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), -28, -83,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 2), 183,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -19, 0,
	ftAnimSetVal0RateT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 3686, 3686,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 3686,
	ftAnimSetValRateT(FT_ANIM_SCAX, 2), 3686, 273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -8, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -166, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 194, -121, 57, 417,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), -58, -127, 815, 395, 4096, 409, 3686, 117, 3686, 117,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 5120, 127, 4096, 51, 4096, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -60, 0, 849, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 804, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 35), -58, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -164, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 37), -184, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 5120, -95, 4096, -27, 4096, -27,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 808, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), 815, -15,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 3686, -95, 3686, -27, 3686, -27,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 3686, 3686, 3686,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -50, 13, 794, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 313, 17, 354, -12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -178, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 133, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 322, 8, 158, 24, 349, -5,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
