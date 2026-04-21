/* AnimJoint data for relocData file 1313 (FTKirbyAnimDownForwardU) */
/* 2192 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimDownForwardU_joint1[18];
extern u16 dFTKirbyAnimDownForwardU_joint2[66];
extern u16 dFTKirbyAnimDownForwardU_joint3[26];
extern u16 dFTKirbyAnimDownForwardU_joint4[52];
extern u16 dFTKirbyAnimDownForwardU_joint6[90];
extern u16 dFTKirbyAnimDownForwardU_joint7[108];
extern u16 dFTKirbyAnimDownForwardU_joint8[24];
extern u16 dFTKirbyAnimDownForwardU_joint10[68];
extern u16 dFTKirbyAnimDownForwardU_joint11[110];
extern u16 dFTKirbyAnimDownForwardU_joint12[14];
extern u16 dFTKirbyAnimDownForwardU_joint14[42];
extern u16 dFTKirbyAnimDownForwardU_joint15[50];
extern u16 dFTKirbyAnimDownForwardU_joint17[22];
extern u16 dFTKirbyAnimDownForwardU_joint19[124];
extern u16 dFTKirbyAnimDownForwardU_joint20[80];
extern u16 dFTKirbyAnimDownForwardU_joint22[24];
extern u16 dFTKirbyAnimDownForwardU_joint23[132];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTKirbyAnimDownForwardU_joints[] = {
	(u32)dFTKirbyAnimDownForwardU_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimDownForwardU_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimDownForwardU_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimDownForwardU_joint4, /* [3] joint 4 */
	(u32)dFTKirbyAnimDownForwardU_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTKirbyAnimDownForwardU_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimDownForwardU_joint8, /* [7] joint 8 */
	(u32)dFTKirbyAnimDownForwardU_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTKirbyAnimDownForwardU_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimDownForwardU_joint12, /* [11] joint 12 */
	(u32)dFTKirbyAnimDownForwardU_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTKirbyAnimDownForwardU_joint15, /* [14] joint 15 */
	(u32)dFTKirbyAnimDownForwardU_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTKirbyAnimDownForwardU_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTKirbyAnimDownForwardU_joint20, /* [19] joint 20 */
	(u32)dFTKirbyAnimDownForwardU_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTKirbyAnimDownForwardU_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTKirbyAnimDownForwardU_joint1[18] = {
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, -166,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 8), 29, 126,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 22), 4800,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 6), 4800,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimDownForwardU_joint2[66] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAY), -818, -32, 576, -4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAY, 10), 549, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -818, 33,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 24), 3216,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 531, 154,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 573, 64,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 668, 275,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 572, -30,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 641, 255,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 618, -329,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 593, 23,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 6), 3216,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 600, 2,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimDownForwardU_joint3[26] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAZ), 0, 0, 0, -312, 0, 4096,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAY), 0, 4096, 4096,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAZ, 36), 0, 0, -312, 0, 4096,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 30), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 6), -268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTKirbyAnimDownForwardU_joint4[52] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 312, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 25), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), 0, 312, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), 262, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 0, 0, -22, 28,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 5), 151,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 5), 0, 0, 64, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 329, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, -37, 0, 0, 312, -46, 0, -111,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimDownForwardU_joint6[90] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY), -180, -120,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -318, 16, 48, 2, 79, 20,
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 20, -18,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 12), -120,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 30), -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -244, 27, 147, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -24, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 2, -12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -9, 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 23, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -59, -10,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 18), -120,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 14, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 0, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 22, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 0, 3,
	ftAnimBlock(0, 5),
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 0, 12,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 6), 0, 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimDownForwardU_joint7[108] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3072,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -520, 19, -945, 4, -282, -5,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4095, 4095,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), -843, -1,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 30), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 18), -72, 46, -289, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -26, 34, -294, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 177, 63, -345, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 267, 144, -406, -119,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 1253, 144, -1338, -133,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -850, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1220, -90,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1371, 101, -1440, -79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1716, 212,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1603, -4,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 6), 4095,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1977, 247,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2343, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1295, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1345, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2412, 69, -1387, -42, -1608, -4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTKirbyAnimDownForwardU_joint8[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 32), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimDownForwardU_joint10[68] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -333, 48, 15, 11, -143, 15,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 60, -120, 60,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 12), 120, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 29), 66, 5,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 30), -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 35, -7, 85, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 2, 18, 6, -1,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 18), 120,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 24), 0,
	ftAnimBlock(0, 8),
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 10), -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), -190, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 39, 0, -13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 0, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 6), 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimDownForwardU_joint11[110] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3072,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -740, -18, 323, 10, -1543, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 657, 9, -1459, 7,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 30), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 17), -1183, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1186, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -804, 270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 661, 0, -1464, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 716, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1337, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1173, 208,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -374, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 737, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 336, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -512, 253,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -360, -145,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -250, 109,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -8, 11,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 6), 4096,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -536, -156,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -754, -65,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 269, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -804, -49, 217, -51, 0, 8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTKirbyAnimDownForwardU_joint12[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 35), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimDownForwardU_joint14[42] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 211, -13, -1889, 61,
	ftAnimSetValBlock(FT_ANIM_ROTY), -408,
	ftAnimSetValT(FT_ANIM_ROTY, 19), 371,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), 0, -12, -959, 62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 12, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -765, 86,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -732, -17,
	ftAnimBlock(0, 2),
	ftAnimSetValT(FT_ANIM_ROTY, 17), 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 16), -804, -48, -1072, -23,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTKirbyAnimDownForwardU_joint15[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 98, 3, -211, -23, -36, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 86, 4, -339, 27, 56, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 89, 1, -313, 21, 42, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 17), -4, -20, -318, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 49, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 75, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 203, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -21, -16, -302, 16, 233, 29,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTKirbyAnimDownForwardU_joint17[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 32), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimDownForwardU_joint19[124] = {
	ftAnimSetValAfter(FT_ANIM_SCAZ), 4095,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1788, -20, 1446, 18, -1133, -19,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY), 4095, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1926, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1822, 51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -1410, 8,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY, 9), 4095, 4096,
	ftAnimSetTargetRateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY), -592, -572,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 4), 3067, 3067,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1993, -87,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2164, 47,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1873, 27,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 5), 4096, 679, 4096, 651,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1655, -27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2080, 80,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1857, -24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1402, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -1653, -48,
	ftAnimBlock(0, 1),
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY, 18), 4095, 4096,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1628, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1749, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1883, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1919, 2,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1696, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1705, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1920, 0, 1785, 35, -1704, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTKirbyAnimDownForwardU_joint20[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 134, -46, 314, 24, 417, -83,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 424, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -85, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 122, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 117, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 143, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 417, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 245, 29,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -91, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 44, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 184, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 256, -24,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 44, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 31, -9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 275, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, -10, 302, 27, 233, -23,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimDownForwardU_joint22[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 31), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTKirbyAnimDownForwardU_joint23[132] = {
	ftAnimSetValAfter(FT_ANIM_SCAZ), 4095,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1592, 33, -1529, 19, -1082, -67,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY), 4096, 4095,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1692, -55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 2065, 76,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -1438, 2,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY, 9), 4096, 4095,
	ftAnimSetTargetRateBlock(FT_ANIM_SCAY), -530,
	ftAnimSetValRateT(FT_ANIM_SCAY, 4), 3067, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_SCAX), -578,
	ftAnimSetValRateT(FT_ANIM_SCAX, 5), 3072, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1770, -79,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1723, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2133, 36,
	ftAnimSetValRateT(FT_ANIM_SCAY, 5), 4096, 552,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1785, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_SCAX, 4), 4096, 719,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1436, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -1634, -71,
	ftAnimBlock(0, 1),
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY, 18), 4096, 4095,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1783, 4, -1760, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1874, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 1804, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1809, 8, -1699, -50,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 1909, 10, -1713, 5,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1826, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1918, 9, -1785, 41, -1708, 5,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
