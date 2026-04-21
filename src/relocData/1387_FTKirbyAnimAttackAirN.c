/* AnimJoint data for relocData file 1387 (FTKirbyAnimAttackAirN) */
/* 2288 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimAttackAirN_joint1[54];
extern u16 dFTKirbyAnimAttackAirN_joint2[32];
extern u16 dFTKirbyAnimAttackAirN_joint3[78];
extern u16 dFTKirbyAnimAttackAirN_joint5[48];
extern u16 dFTKirbyAnimAttackAirN_joint6[128];
extern u16 dFTKirbyAnimAttackAirN_joint7[16];
extern u16 dFTKirbyAnimAttackAirN_joint9[76];
extern u16 dFTKirbyAnimAttackAirN_joint10[120];
extern u16 dFTKirbyAnimAttackAirN_joint11[16];
extern u16 dFTKirbyAnimAttackAirN_joint13[10];
extern u16 dFTKirbyAnimAttackAirN_joint14[130];
extern u16 dFTKirbyAnimAttackAirN_joint16[14];
extern u16 dFTKirbyAnimAttackAirN_joint18[152];
extern u16 dFTKirbyAnimAttackAirN_joint19[94];
extern u16 dFTKirbyAnimAttackAirN_joint21[14];
extern u16 dFTKirbyAnimAttackAirN_joint22[118];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimAttackAirN_joints[] = {
	(u32)dFTKirbyAnimAttackAirN_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimAttackAirN_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimAttackAirN_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimAttackAirN_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimAttackAirN_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimAttackAirN_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimAttackAirN_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimAttackAirN_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimAttackAirN_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimAttackAirN_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimAttackAirN_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimAttackAirN_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimAttackAirN_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimAttackAirN_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimAttackAirN_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTKirbyAnimAttackAirN_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimAttackAirN_joint1[54] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 600, 0,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4096, 136, 4096, -546, 4096, 136,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4300, 14, 3276, -56, 4300, 14,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 27), 4300, -12, 3276, 51, 4300, -12,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, -40, 4096, 163, 4096, -40,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimAttackAirN_joint2[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 0, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -402, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 27), -402, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 0, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 0, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), -268,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimAttackAirN_joint3[78] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 268, 0, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 312, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), 0, 29,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 3), 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 3891, 4300, 3891,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 89, 3, 4096, 14, 4096, -14, 4096, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 27), 268, -5, 89, -2, 4096, -12, 4096, 25, 4096, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 89, -13, 0, -8, 3891, -40, 4505, 81, 3891, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 134, 11, 3891, 27, 4505, -54, 3891, 27,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 268, 0, 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTKirbyAnimAttackAirN_joint5[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, -120, -120,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 178, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), 357, -59,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 1), -180, -180,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -178, -18,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), -120, -120,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 47), -120, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 27), -178, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 17, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 17, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimAttackAirN_joint6[128] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1036, -533, -998, -116, -283, 156,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1325, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 502, -167, -127, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 700, 314, -180, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -199, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1131, 234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1169, 36, -1324, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 25), 1170, -36, -1333, 6,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -199, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -174, 21,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1131, -85, -1325, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 292, -90,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -959, 13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -142, 46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 81, -51,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 248, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 514, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -953, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -998, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 16, -68,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -279, -7,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 582, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 1025, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1036, 10, -998, 0, -283, -3,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimAttackAirN_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 49), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTKirbyAnimAttackAirN_joint9[76] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, -178, 120, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -120, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -29, 357, -89, 0, 59,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 240, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -89, -3, -268, -21,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), 0, 120, 120,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 27), -89, 2, -268, 13,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 32), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 47), 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 27), 120,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 0, 8, 178, 44,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 5), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 178, -11, 0, -11,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 15), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0, -178,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimAttackAirN_joint10[120] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1036, 1197, 999, 169, -282, 384,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 161, 449, 1168, -24, 101, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -136, -366, 950, -25, -108, -224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -570, -225, 1116, 83, -347, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -587, -15, 1117, 0, -352, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), 1117, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 25), -574, 3, -350, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -570, 15, -348, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -411, -74, -173, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1117, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 926, 8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -545, -114, -317, -123,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -581, -16, -281, 31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 934, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 999, -1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -608, -39, -254, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -1019, -33, -279, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1040, -20, 995, -3, -287, -7,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimAttackAirN_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 49), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimAttackAirN_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimAttackAirN_joint14[130] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 295, -542, -302, -10, 237, 449,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -247, -189, -312, -129, 686, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -83, 323, -560, -74, 282, -532,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 400, 244, -460, 54, -378, -338,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 405, 6, -451, 9, -394, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), -484, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 25), 411, -12, -395, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 400, -38, -378, 55,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -118, -63, 384, 117,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -499, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -287, 13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -149, -22, 454, 47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 448, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 169, 62,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -282, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -306, 8,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 241, -9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 225, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 287, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 297, 9, -300, 6, 233, -7,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimAttackAirN_joint16[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 49), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTKirbyAnimAttackAirN_joint18[152] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3686,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1930, 126, 1766, -43, -1255, 283,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1804, -169, 1723, 38, -972, 95,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 3686,
	ftAnimSetValRateT(FT_ANIM_SCAX, 2), 6144, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2270, -242, 1844, 35, -1065, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1790, -3, -979, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2289, -5,
	ftAnimSetValRateT(FT_ANIM_SCAX, 27), 6144, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2281, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), -2289, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1787, -3, -973, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), 1829, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), -977, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -989, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1154, 23,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 15), 3686,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2280, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2212, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1940, 239,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1691, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1813, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1779, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1115, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1289, -37,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1694, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1930, -2,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1316, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1261, 9,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 3686,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1770, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1930, 0, 1766, -3, -1259, 2,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimAttackAirN_joint19[94] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -297, 50, 300, 128, 233, -447,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 429, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -199, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -214, -242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -251, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 36), -233, -2,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 429, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 34), 419, -10,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -199, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 23), -256, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -253, 4, -230, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -264, -21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 224, 16,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 408, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 303, -6,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -282, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -293, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -297, -3, 300, -3, 233, 8,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimAttackAirN_joint21[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 49), 7, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimAttackAirN_joint22[118] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1286, 187, -1766, -213, -1259, 37,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -2042, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1128, -86, -1291, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1271, -75, -1427, -74,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1299, -5, -1465, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2044, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 31), -1980, 4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1304, -5, -1471, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 22), -1271, 15, -1427, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1247, 34, -1397, 40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1222, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1236, -84,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1981, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1822, 31,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1244, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1261, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1325, -80,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1294, 16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1797, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -1768, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1286, 8, -1766, 1, -1259, 1,
	ftAnimEnd(),
};
