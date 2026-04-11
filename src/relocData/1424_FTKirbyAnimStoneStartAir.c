/* AnimJoint data for relocData file 1424 (FTKirbyAnimStoneStartAir) */
/* 1824 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimStoneStartAir_joint1[16];
extern u16 dFTKirbyAnimStoneStartAir_joint2[42];
extern u16 dFTKirbyAnimStoneStartAir_joint3[14];
extern u16 dFTKirbyAnimStoneStartAir_joint4[44];
extern u16 dFTKirbyAnimStoneStartAir_joint6[50];
extern u16 dFTKirbyAnimStoneStartAir_joint7[146];
extern u16 dFTKirbyAnimStoneStartAir_joint8[14];
extern u16 dFTKirbyAnimStoneStartAir_joint10[50];
extern u16 dFTKirbyAnimStoneStartAir_joint11[142];
extern u16 dFTKirbyAnimStoneStartAir_joint12[16];
extern u16 dFTKirbyAnimStoneStartAir_joint14[10];
extern u16 dFTKirbyAnimStoneStartAir_joint15[58];
extern u16 dFTKirbyAnimStoneStartAir_joint17[14];
extern u16 dFTKirbyAnimStoneStartAir_joint19[78];
extern u16 dFTKirbyAnimStoneStartAir_joint20[62];
extern u16 dFTKirbyAnimStoneStartAir_joint22[110];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTKirbyAnimStoneStartAir_joints[] = {
	(u32)dFTKirbyAnimStoneStartAir_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimStoneStartAir_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimStoneStartAir_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimStoneStartAir_joint4, /* [3] joint 4 */
	(u32)dFTKirbyAnimStoneStartAir_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTKirbyAnimStoneStartAir_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimStoneStartAir_joint8, /* [7] joint 8 */
	(u32)dFTKirbyAnimStoneStartAir_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTKirbyAnimStoneStartAir_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimStoneStartAir_joint12, /* [11] joint 12 */
	(u32)dFTKirbyAnimStoneStartAir_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTKirbyAnimStoneStartAir_joint15, /* [14] joint 15 */
	(u32)dFTKirbyAnimStoneStartAir_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTKirbyAnimStoneStartAir_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTKirbyAnimStoneStartAir_joint20, /* [19] joint 20 */
	(u32)dFTKirbyAnimStoneStartAir_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	0xFFFF0198, /* [22] END */
};

/* Joint 1 */
u16 dFTKirbyAnimStoneStartAir_joint1[16] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 10), 960,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 1), 1080,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 12), 1080,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimStoneStartAir_joint2[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY), 0, -268, 600,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_TRAY, 10), -804, 600,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -2412, -321,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), -3216,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), -804, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 13), -3216,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 1), 480,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 12), 480,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), -804,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), -804,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimStoneStartAir_joint3[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, -312, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 23),
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTKirbyAnimStoneStartAir_joint4[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 268, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 13), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 12), 0,
	ftAnimBlock(0, 2),
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 2), 134,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 2), -134,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 2), 134,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 2), -134,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimStoneStartAir_joint6[50] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 178, -120, -120,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 6), -120, 48, -120, 96,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 178,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 4), -60, 96, 0, 192,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -268, -268,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -268, -268,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 1), -60, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 12), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 10), -60,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 2), -60, 80,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimStoneStartAir_joint7[146] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2177, -24, -996, -4, 2930, 27,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -995, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -2412, -34, 3216, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2468, -128, 3225, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2669, -493, -976, -15, 3264, 290,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3456, -616, -1026, -154, 3806, 487,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3903, -398, -1285, -126, 4240, 435,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1279, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4253, -175, 4676, 218,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -4253, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4676, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1280, -26, 4676, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1383, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 4676, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4265, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -4253, -36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1280, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1157, 0, 4613, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 4678, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1279, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -4274, 0, -1383, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -4234, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1276, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1157, 28, 4613, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1220, -60, 4655, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4253, -19, -1279, -59, 4676, 21,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTKirbyAnimStoneStartAir_joint8[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimStoneStartAir_joint10[50] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, -178, 120, -120,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 6), 120, -48, -120, 96,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, -178,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 4), 60, -96, 0, 192,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 268, 268,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 268, 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 60, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 12), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 10), 60,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 2), 60, -80,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimStoneStartAir_joint11[142] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2180, 23, 999, 4, -282, 26,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 992, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 2412, 34, 0, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2469, 128, 9, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2669, 490, 976, 16, 47, 286,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3450, 616, 1025, 152, 583, 487,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3902, 401, 1281, 127, 1021, 438,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1279, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4253, 175, 1459, 218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4253, 0, 1459, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4254, -9, 1276, -28, 1461, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 4254, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1157, 27, 1396, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1276, 112, 1461, 37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1396, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 4274, 0, 1383, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 4254, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1279, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1158, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1276, 111, 1461, 38,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1328, -49, 1472, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4275, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4266, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4253, -13, 1280, -48, 1459, -12,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTKirbyAnimStoneStartAir_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTKirbyAnimStoneStartAir_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 23),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTKirbyAnimStoneStartAir_joint15[58] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 295, -36, -302, 1, 237, 4,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -136, 62,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 22), -302,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 505, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 487, -48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 237, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -67, 56,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 9), -23,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 237,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 11), 237,
	ftAnimBlock(0, 6),
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 5), -23,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -302,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTKirbyAnimStoneStartAir_joint17[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 22), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTKirbyAnimStoneStartAir_joint19[78] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -322, 14, -158, 38, -2864, -5,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -217, -68, -3022, -114,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 39, -136,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 4096, 81, 4096, 81, 4096, 81,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -298, -55, -3153, -122,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 6), -309,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 8), -3313,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -101, -108,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 6), -176,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 13), 4096, 4096, 4096,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 9), -309,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 8), -176,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), -3313,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTKirbyAnimStoneStartAir_joint20[62] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -297, 40, 300, 4, 233, 13,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 180, -28,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 22), 302,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 469, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 501, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 233, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 129, -56,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 13), 21,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 237,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 10), 237,
	ftAnimBlock(0, 9),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, -2, 302, 0, 233, -4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTKirbyAnimStoneStartAir_joint22[110] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 22), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x280E, 0xFAFA, 0xFFF0, 0xF91A, 0x0022, 0xFB15, 0xFFFE, 0x3F00, 0x0E66, 0x0E66, 0x0E66, 0x2803, 0x0007, 0xFA84, 0x003D, 0x2805, 0x0008, 0xF9E9, 0xFF79, 0x2709, 0x0006, 0xFAD9, 0xFFD4, 0x1000, 0x0051, 0x1000, 0x0051, 0x1000, 0x0051, 0x4701, 0x0004, 0x1000, 0x1000, 0x1000, 0x2009, 0x0001, 0xFA92, 0xFF9D, 0x2809, 0x0003, 0xF954, 0xFFE1, 0x2003, 0x0001, 0xFAD5, 0x003B, 0x4003, 0x0007, 0xFAEE, 0x2005, 0x0001, 0xF957, 0xFF90, 0x4005, 0x0006, 0xF907, 0x0801, 0x0001, 0x4701, 0x000D, 0x1000, 0x1000, 0x1000, 0x2009, 0x0001, 0xF954, 0x0001, 0x4009, 0x000B, 0xF958, 0x0801, 0x0004, 0x3807, 0x0001, 0xFAEE, 0xF907, 0x3807, 0x0006, 0xFAEE, 0xF907, 0x200F, 0x0001, 0xFAEE, 0x0000, 0xF907, 0x0000, 0xF954, 0xFFFD, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
