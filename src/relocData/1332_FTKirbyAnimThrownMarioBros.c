/* AnimJoint data for relocData file 1332 (FTKirbyAnimThrownMarioBros) */
/* 1520 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimThrownMarioBros_joint2[48];
extern u16 dFTKirbyAnimThrownMarioBros_joint3[14];
extern u16 dFTKirbyAnimThrownMarioBros_joint4[22];
extern u16 dFTKirbyAnimThrownMarioBros_joint6[22];
extern u16 dFTKirbyAnimThrownMarioBros_joint7[112];
extern u16 dFTKirbyAnimThrownMarioBros_joint8[14];
extern u16 dFTKirbyAnimThrownMarioBros_joint10[22];
extern u16 dFTKirbyAnimThrownMarioBros_joint11[112];
extern u16 dFTKirbyAnimThrownMarioBros_joint12[14];
extern u16 dFTKirbyAnimThrownMarioBros_joint14[10];
extern u16 dFTKirbyAnimThrownMarioBros_joint15[58];
extern u16 dFTKirbyAnimThrownMarioBros_joint17[16];
extern u16 dFTKirbyAnimThrownMarioBros_joint19[80];
extern u16 dFTKirbyAnimThrownMarioBros_joint20[70];
extern u16 dFTKirbyAnimThrownMarioBros_joint22[14];
extern u16 dFTKirbyAnimThrownMarioBros_joint23[86];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTKirbyAnimThrownMarioBros_joints[] = {
	0x00000000, /* [0] NULL */
	(u32)dFTKirbyAnimThrownMarioBros_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimThrownMarioBros_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimThrownMarioBros_joint4, /* [3] joint 4 */
	(u32)dFTKirbyAnimThrownMarioBros_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTKirbyAnimThrownMarioBros_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimThrownMarioBros_joint8, /* [7] joint 8 */
	(u32)dFTKirbyAnimThrownMarioBros_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTKirbyAnimThrownMarioBros_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimThrownMarioBros_joint12, /* [11] joint 12 */
	(u32)dFTKirbyAnimThrownMarioBros_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTKirbyAnimThrownMarioBros_joint15, /* [14] joint 15 */
	(u32)dFTKirbyAnimThrownMarioBros_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTKirbyAnimThrownMarioBros_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTKirbyAnimThrownMarioBros_joint20, /* [19] joint 20 */
	(u32)dFTKirbyAnimThrownMarioBros_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTKirbyAnimThrownMarioBros_joint23, /* [22] joint 23 */
};

/* Joint 2 */
u16 dFTKirbyAnimThrownMarioBros_joint2[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -240, -480,
	ftAnimSetValRate(FT_ANIM_TRAX), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 0, -11,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 0, 329, 912, 0, 672,
	ftAnimSetValRateT(FT_ANIM_TRAX, 5), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 900, 360,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 10), 0, 900,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 5), -178, -17, 120, -192,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 5), -178, 120,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimThrownMarioBros_joint3[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, -312, 0,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTKirbyAnimThrownMarioBros_joint4[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 134,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 178,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimThrownMarioBros_joint6[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 10), 178, -120, -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 10), 178, -120, -120,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimThrownMarioBros_joint7[112] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1048, -75, -1307, 36, -968, -40,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1142, 110, -1191, -480,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1123, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1328, 118,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -402, 369,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1049, -54, -1970, -608,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2688, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1250, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -149, 216, -1322, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 272, 267,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1245, -23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2896, -248,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -3525, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 566, 233,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 768, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1268, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1269, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3533, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -3533, 12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 767, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 771, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 771, 0, -1264, 4, -3525, 7,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTKirbyAnimThrownMarioBros_joint8[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 19), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimThrownMarioBros_joint10[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 10), -178, 120, -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 10), -178, 120, -120,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimThrownMarioBros_joint11[112] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2656, 75, 301, 36, -2577, -40,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 468, 112, -2794, -480,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2732, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2941, -117,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2010, -369,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 561, -54, -3578, -611,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -4293, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 358, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1757, -215, 286, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1335, -268,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 366, -24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4505, -250,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -5134, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1041, -233,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 840, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 340, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 338, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5141, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -5141, 12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 841, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 837, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 836, 0, 343, 4, -5134, 7,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTKirbyAnimThrownMarioBros_joint12[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 19), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimThrownMarioBros_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTKirbyAnimThrownMarioBros_joint15[58] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 162, -25, -280, 4, 665, 10,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -308, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 32, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 301, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 251, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 232, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -302, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -303, 2,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 36, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 3, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2, -1, -302, 1, 233, 1,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTKirbyAnimThrownMarioBros_joint17[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTKirbyAnimThrownMarioBros_joint19[80] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -319, 41, -185, -19, -3047, -39,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -3148, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -100, 71, -323, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -53, -42, -349, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -249, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 129, 98,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2943, 200,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2449, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -190, 72,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -30, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 181, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 187, -3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2434, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -2449, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -30, 0, 185, -2, -2460, -11,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTKirbyAnimThrownMarioBros_joint20[70] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1445, 23, 1328, 5, 2274, 6,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1299, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 1583, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1987, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1910, -64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1792, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1305, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1304, 1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1576, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1605, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1793, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1840, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1608, 3, 1305, 1, 1845, 5,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimThrownMarioBros_joint22[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTKirbyAnimThrownMarioBros_joint23[86] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1289, -41, 1423, -19, 1778, -43,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1677, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -1508, -71, 1285, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1555, 42, 1258, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1358, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1737, 98,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1882, 200,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2368, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1418, -72,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1578, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1789, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1796, -3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2372, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 2390, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2375, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1577, 0, 1793, -2, 2368, -7,
	ftAnimEnd(),
	0x0000, 0x0000,
};
