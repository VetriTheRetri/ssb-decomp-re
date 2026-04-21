/* AnimJoint data for relocData file 1388 (FTKirbyAnimAttackAirF) */
/* 2704 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimAttackAirF_joint1[58];
extern u16 dFTKirbyAnimAttackAirF_joint2[24];
extern u16 dFTKirbyAnimAttackAirF_joint3[72];
extern u16 dFTKirbyAnimAttackAirF_joint5[70];
extern u16 dFTKirbyAnimAttackAirF_joint6[134];
extern u16 dFTKirbyAnimAttackAirF_joint7[24];
extern u16 dFTKirbyAnimAttackAirF_joint9[54];
extern u16 dFTKirbyAnimAttackAirF_joint10[162];
extern u16 dFTKirbyAnimAttackAirF_joint11[14];
extern u16 dFTKirbyAnimAttackAirF_joint13[10];
extern u16 dFTKirbyAnimAttackAirF_joint14[138];
extern u16 dFTKirbyAnimAttackAirF_joint16[14];
extern u16 dFTKirbyAnimAttackAirF_joint18[180];
extern u16 dFTKirbyAnimAttackAirF_joint19[136];
extern u16 dFTKirbyAnimAttackAirF_joint21[22];
extern u16 dFTKirbyAnimAttackAirF_joint22[196];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimAttackAirF_joints[] = {
	(u32)dFTKirbyAnimAttackAirF_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimAttackAirF_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimAttackAirF_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimAttackAirF_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimAttackAirF_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimAttackAirF_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimAttackAirF_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimAttackAirF_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimAttackAirF_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimAttackAirF_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimAttackAirF_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimAttackAirF_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimAttackAirF_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimAttackAirF_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimAttackAirF_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTKirbyAnimAttackAirF_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimAttackAirF_joint1[58] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 600, 0,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4505, 136, 2457, -546, 4505, 136,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), -804,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 28), -804,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4505, -136, 2457, 546, 4505, -136,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, -91, 4096, 364, 4096, -91,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 7), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 25), 4096, 4096, 4096,
	ftAnimBlock(0, 15),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimAttackAirF_joint2[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 0, -223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -3216, -446,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 15), -6433,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), -6702,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimAttackAirF_joint3[72] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 268, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 312, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_SCAZ, 2), 536, 44, 3686, -136,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY, 2), 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 536, -44, 4096, -68, 4096, 136, 3686, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 268, -29, 3891, -45, 4505, 91, 3891, 45,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 7), 268, 3891, 4505, 3891,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 25), 268,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 15), 3891, 40, 4505, -122, 3891, 40,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4300, 40, 3276, -81, 4300, 40,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTKirbyAnimAttackAirF_joint5[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 178, -120, -120,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), -60, 80, -60, 80,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 0, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 4), 0, -44, 178, 29, -60, 39, -60, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 2), -268, -29, 357, 19, -30, 26, -120, -53,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX, 7), -268, 12, 357, -8, -30, -32,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 7), -120,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 25), -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX, 15), 0, 10, 178, -7, -120, -28,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX, 10), 0, 178, -120,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimAttackAirF_joint6[134] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -568, 437, -612, 185, -1895, -696,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -131, 80, -427, 245, -2592, -337,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -406, -154, -122, 179, -2570, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -302, 33, -2486, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -150, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -212, -114,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -543, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -277, 136, -2372, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -30, 166, -2526, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 54, 55, -552, -4, -2599, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -445, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -37, -11, -2516, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -47, -18, -2505, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -2194, 57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -473, -60,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -457, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -633, 18,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2122, 79,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1896, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -533, -47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -570, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -618, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -571, -1, -609, 9, -1892, 4,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimAttackAirF_joint7[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 34), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTKirbyAnimAttackAirF_joint9[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, -178, 120,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, -120, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX, 2), 0, -178, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX, 4), 0, -44, -178, -29, 120, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX, 2), -268, -29, -357, -19, 30, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX, 7), -268, 12, -357, 8, 30, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX, 15), 0, 10, -178, 7, 120, 28,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX, 10), 0, -178, 120,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimAttackAirF_joint10[162] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2180, -119, 999, 321, -283, -113,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -637, -204,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1805, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1320, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1298, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1195, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -806, -108,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -804, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1812, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1852, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1873, -106, -739, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1639, -156, 1065, -68, -917, -122,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1064, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1560, -54, -984, -47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1638, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -904, 8,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1066, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 1101, -9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1651, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1792, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -899, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -706, 92,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1843, 74,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 2281, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1096, 10, -590, 133,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1161, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -237, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2276, -15, -238, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 2192, -19, -278, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1089, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1025, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2180, -11, 998, -27, -283, -5,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimAttackAirF_joint11[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), -6, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -6,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTKirbyAnimAttackAirF_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimAttackAirF_joint14[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 295, -394, -302, 195, 237, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 143, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -99, -194, -106, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -93, 19, -156, -54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -237, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -67, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -55, 80, 140, -37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -9, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 93, 429,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 804, 431,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 956, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1004, 21, -12, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 815, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -93, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -237, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -172, 6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 847, 38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1052, -73,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -93, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 186, 17,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 958, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 149, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 134, 13, -175, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 291, 9, -292, -19,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 206, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 228, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 295, 3, -302, -10, 237, 8,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimAttackAirF_joint16[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTKirbyAnimAttackAirF_joint18[180] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3686,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1286, 282, 1766, -186, -1255, -93,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 3686,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1485, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1568, -60, 1580, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1165, -252, 1756, 70,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1236, 100, 1626, -40,
	ftAnimSetValRateT(FT_ANIM_SCAX, 4), 3686, 819,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1452, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1471, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1344, 114, 1610, -59, -1494, 173,
	ftAnimSetValRateT(FT_ANIM_SCAX, 2), 6144, 546,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1466, -261, 1507, -1, -1123, 237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 821, -393, 1608, 58, -1020, 46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1034, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_SCAX, 7), 1608, 0, 6144, -223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 679, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 635, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 810, -20,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1031, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -853, -3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_SCAX, 15), 3686, -196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1611, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 1621, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 780, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 668, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 808, 166,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1434, -15,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 3686,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -867, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1250, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1606, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1754, 23,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1394, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1290, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1286, -4, 1766, 12, -1255, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTKirbyAnimAttackAirF_joint19[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1905, -7, -1909, -130, 1842, -127,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1605, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1913, 136, -2039, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1631, 155, -1869, 116,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1844, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1593, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1578, 8, 1671, 52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1595, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1716, -418,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2412, -424, -1845, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), -1845, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2564, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2613, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -2424, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1596, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 1547, 20,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2457, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -2590, 154,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1573, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1841, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2412, 158,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -2053, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1868, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1939, 26,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1999, 49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1919, 24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1917, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1905, 13, -1909, 8, 1842, 1,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimAttackAirF_joint21[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 31), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimAttackAirF_joint22[196] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3686,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1930, 88, -1766, 41, -1259, -112,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 3686,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1483, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2019, -158, -1725, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1614, -313, -1396, 153,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1473, -41,
	ftAnimSetValRateT(FT_ANIM_SCAX, 4), 3686, 819,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1392, -53, -1417, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1482, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1506, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1569, 139, -1499, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1784, 83, -1544, 10, -1493, 196,
	ftAnimSetValRateT(FT_ANIM_SCAX, 2), 6144, 546,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1737, 305, -1477, -31, -1089, 233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2395, 399, -1608, -80, -1026, 27,
	ftAnimSetValRateT(FT_ANIM_SCAX, 7), 6144, -223,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1020, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2536, 93, -1638, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1649, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2581, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 2406, 21,
	ftAnimBlock(0, 5),
	ftAnimSetValRateT(FT_ANIM_SCAX, 15), 3686, -196,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2437, 39, -1011, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 2573, -144,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -853, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1661, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1746, -42,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2408, -145,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 2105, -57,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 3686,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -863, -21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1247, -22,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1786, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1778, 16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2043, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1945, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1930, -14, -1766, 11, -1259, -11,
	ftAnimEnd(),
	0x0000,
};
