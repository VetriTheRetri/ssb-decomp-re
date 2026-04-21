/* AnimJoint data for relocData file 1809 (FTNessAnimPKThunderStartAir) */
/* 2320 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimPKThunderStartAir_joint1[46];
extern u16 dFTNessAnimPKThunderStartAir_joint2[30];
extern u16 dFTNessAnimPKThunderStartAir_joint4[38];
extern u16 dFTNessAnimPKThunderStartAir_joint5[140];
extern u16 dFTNessAnimPKThunderStartAir_joint6[32];
extern u16 dFTNessAnimPKThunderStartAir_joint7[54];
extern u16 dFTNessAnimPKThunderStartAir_joint8[38];
extern u16 dFTNessAnimPKThunderStartAir_joint10[10];
extern u16 dFTNessAnimPKThunderStartAir_joint11[94];
extern u16 dFTNessAnimPKThunderStartAir_joint12[44];
extern u16 dFTNessAnimPKThunderStartAir_joint13[70];
extern u16 dFTNessAnimPKThunderStartAir_joint15[10];
extern u16 dFTNessAnimPKThunderStartAir_joint16[82];
extern u16 dFTNessAnimPKThunderStartAir_joint18[48];
extern u16 dFTNessAnimPKThunderStartAir_joint19[108];
extern u16 dFTNessAnimPKThunderStartAir_joint21[42];
extern u16 dFTNessAnimPKThunderStartAir_joint22[56];
extern u16 dFTNessAnimPKThunderStartAir_joint24[28];
extern u16 dFTNessAnimPKThunderStartAir_joint25[86];
extern u16 dFTNessAnimPKThunderStartAir_joint26[52];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTNessAnimPKThunderStartAir_joints[] = {
	(u32)dFTNessAnimPKThunderStartAir_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimPKThunderStartAir_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimPKThunderStartAir_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTNessAnimPKThunderStartAir_joint5, /* [4] joint 5 */
	(u32)dFTNessAnimPKThunderStartAir_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimPKThunderStartAir_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimPKThunderStartAir_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimPKThunderStartAir_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTNessAnimPKThunderStartAir_joint11, /* [10] joint 11 */
	(u32)dFTNessAnimPKThunderStartAir_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimPKThunderStartAir_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimPKThunderStartAir_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTNessAnimPKThunderStartAir_joint16, /* [15] joint 16 */
	(u32)dFTNessAnimPKThunderStartAir_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTNessAnimPKThunderStartAir_joint19, /* [18] joint 19 */
	(u32)dFTNessAnimPKThunderStartAir_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTNessAnimPKThunderStartAir_joint22, /* [21] joint 22 */
	(u32)dFTNessAnimPKThunderStartAir_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTNessAnimPKThunderStartAir_joint25, /* [24] joint 25 */
	(u32)dFTNessAnimPKThunderStartAir_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTNessAnimPKThunderStartAir_joint1[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -209, 0, 0, 242, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 24), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAY, 24), 0, 0, 242, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -211, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -213, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 14), -406, 0,
	ftAnimSetValT(FT_ANIM_TRAY, 1), 279,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 10), -406, 0, 0, 0, 0, 4, 0, 0,
	ftAnimBlock0(0),
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTNessAnimPKThunderStartAir_joint2[30] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 24), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 45), 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -113, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -113, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), -20, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), -20, 0, 0, -1,
	ftAnimBlock0(0),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTNessAnimPKThunderStartAir_joint4[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 148, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -68, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -110, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -58, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 250, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 250, 0, 0, -22, 0, -3,
	ftAnimBlock0(0),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimPKThunderStartAir_joint5[140] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 96, -659, -754, -33, -471, 651,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1274, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -563, 21, 179, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 140, 277, -551, -306,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -8, -125, -432, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -110, -77, -331, 85,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -220, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -168, 18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1290, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1189, 35,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -236, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -297, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -148, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -106, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -353, 121, -1147, 98, -53, -144,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -925, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -55, 262, -396, -282,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 170, 220, -619, -213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 386, 225, -874, 48, -822, -216,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -703, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 622, 66, -1051, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 518, 28, -945, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 679, 111, -1108, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 741, 43, -1173, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 766, 25, -691, 11, -1200, -27,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimPKThunderStartAir_joint6[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, -300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -609, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -427, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -408, 19,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTNessAnimPKThunderStartAir_joint7[54] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -644, -35, 763, 7, -410, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -175, 78, 37, -120, 106, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -175, -39, 37, -46, 106, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -611, -28, -474, 6, 570, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -577, 1, 123, 33, -261, -46,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -577, 4, 123, -6, -261, 26,
	ftAnimBlock0(0),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimPKThunderStartAir_joint8[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 194, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 411, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 145, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -57, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 236, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 236, 0, 0, 19, 0, -8,
	ftAnimBlock0(0),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTNessAnimPKThunderStartAir_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimPKThunderStartAir_joint11[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -808, 95, 1329, -24, -1202, 64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1158, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -459, 336, -899, 374,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -39, 248, -388, 316,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 71, 22, -194, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1228, 55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 1074, -13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 81, 9, -167, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 263, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -104, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -105, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -125, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, -153, 1061, -32, -125, -176,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1009, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -43, -257, -478, -286,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -243, -170, -698, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -384, -140, 998, -10, -847, -149,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimPKThunderStartAir_joint12[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -915, 72,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -526, 416,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 263,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -339, -266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -533, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -653, -119,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTNessAnimPKThunderStartAir_joint13[70] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -170, -63, 267,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2943, -1356, -50, -215, 3299, 1357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2883, 471, -495, -228, 2982, -603,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1529, 980, -735, 136, 1488, -959,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 56, 264, -86, 108, 104, -230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 56, 55, -86, 39, 104, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 664, 36, 348, -3, 448, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 574, -4, -137, -26, -268, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 574, 0, -137, 14, -268, 25,
	ftAnimBlock0(0),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTNessAnimPKThunderStartAir_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimPKThunderStartAir_joint16[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -20, 24, -466, -8, -592, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 57, -101,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -297, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -408, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -208, 207,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 542, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -76, -138,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -430, 7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -163, 77,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -305, -27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 533, -40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -625, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -413, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -7, 14,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -331, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -400, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1, 9, -401, 0, -645, -19,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimPKThunderStartAir_joint18[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 336, 51,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 586, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 468, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 292, -234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 494, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 618, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1014, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1014, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTNessAnimPKThunderStartAir_joint19[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -158, -27, 40, -7, 16, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -213, -89,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 86, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -278, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -485, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -305, 276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 67, 96, -267, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -21, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -112, -125, 242, 132,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 442, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -184, -47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -285, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 575, 59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 92, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 15, 36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 235, -3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -284, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 143, 12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 14, -66,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 40, 17,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 232, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 150, 6, 232, 0, 51, 10,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimPKThunderStartAir_joint21[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -476, 178, 112,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -133, 89, 165, -1, 102, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 419, -10, 165, -1, 102, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -336, 0, 129, -1, 76, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -171, 4, 145, 3, 125, 9,
	ftAnimBlock0(0),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimPKThunderStartAir_joint22[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1710, 3, 1168, -1, 759, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1715, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1399, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -1413, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1375, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -1301, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1719, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1259, -9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1380, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), 1225, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1292, 9, 1217, -7, 1257, -1,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimPKThunderStartAir_joint24[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 894, 8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 782, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 712, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 1080, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1094, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1099, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTNessAnimPKThunderStartAir_joint25[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1597, -2, 1712, -4, 1330, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1549, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1648, 62, 1392, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1583, 37, 1617, 217,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1567, 37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1818, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1595, 36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1705, 17,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1522, 48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1537, -72,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1767, -50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1562, -15,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1612, -72,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1781, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1724, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1762, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1805, -24, 1781, 19, 1549, -12,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimPKThunderStartAir_joint26[52] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -339, -256, -211,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -192, 60, -232, 2, -193, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 263, 16, -232, 2, -193, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -15, -33, -206, 4, -174, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -207, 6, -174, 1, -150, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), -373, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -174, 7, -150, 1,
	ftAnimBlock0(0),
	ftAnimEnd(),
};
