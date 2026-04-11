/* AnimJoint data for relocData file 1765 (FTNessAnimStarRodTilt) */
/* 4512 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimStarRodTilt_joint1[88];
extern u16 dFTNessAnimStarRodTilt_joint2[46];
extern u16 dFTNessAnimStarRodTilt_joint4[56];
extern u16 dFTNessAnimStarRodTilt_joint5[226];
extern u16 dFTNessAnimStarRodTilt_joint6[80];
extern u16 dFTNessAnimStarRodTilt_joint7[44];
extern u16 dFTNessAnimStarRodTilt_joint10[98];
extern u16 dFTNessAnimStarRodTilt_joint11[280];
extern u16 dFTNessAnimStarRodTilt_joint12[106];
extern u16 dFTNessAnimStarRodTilt_joint13[142];
extern u16 dFTNessAnimStarRodTilt_joint15[10];
extern u16 dFTNessAnimStarRodTilt_joint16[200];
extern u16 dFTNessAnimStarRodTilt_joint18[80];
extern u16 dFTNessAnimStarRodTilt_joint19[182];
extern u16 dFTNessAnimStarRodTilt_joint21[54];
extern u16 dFTNessAnimStarRodTilt_joint22[188];
extern u16 dFTNessAnimStarRodTilt_joint24[80];
extern u16 dFTNessAnimStarRodTilt_joint25[244];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTNessAnimStarRodTilt_joints[] = {
	(u32)dFTNessAnimStarRodTilt_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimStarRodTilt_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimStarRodTilt_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTNessAnimStarRodTilt_joint5, /* [4] joint 5 */
	(u32)dFTNessAnimStarRodTilt_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimStarRodTilt_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimStarRodTilt_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTNessAnimStarRodTilt_joint11, /* [10] joint 11 */
	(u32)dFTNessAnimStarRodTilt_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimStarRodTilt_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimStarRodTilt_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTNessAnimStarRodTilt_joint16, /* [15] joint 16 */
	(u32)dFTNessAnimStarRodTilt_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTNessAnimStarRodTilt_joint19, /* [18] joint 19 */
	(u32)dFTNessAnimStarRodTilt_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTNessAnimStarRodTilt_joint22, /* [21] joint 22 */
	(u32)dFTNessAnimStarRodTilt_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTNessAnimStarRodTilt_joint25, /* [24] joint 25 */
	0xFFFF0449, /* [25] END */
};

/* Joint 1 */
u16 dFTNessAnimStarRodTilt_joint1[88] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, -18, 534,
	ftAnimSetValRate(FT_ANIM_TRAZ), -31, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -97, -1, -17, 1, 499, 8, -16, 15,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 6), -15, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY, 5), -97, 1, -17, 10, 499, 11,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 497, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX, 3), 0, 0, -6, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 2), 378, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 472, -302,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 20), -6, -2, 378, 3,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 32), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 1), 426,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 472, 124,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 487, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 1), 471,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 16), 472, 18,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), -18, 534, -31,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTNessAnimStarRodTilt_joint2[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 28, -360, 8,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 207, -1, -765, 0, -202, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 207, 0, -765, 0, -202, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 27, -7, 335, 0, 43, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 27, 0, 335, 0, 43, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 28, -360, 8,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTNessAnimStarRodTilt_joint4[56] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -25, 11, 178, 19, 92, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 110, 0, 199, -14, 97, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 216, 1, 152, 0, 225, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 198, 0, 104, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 91, -4, 198, -1, 48, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTNessAnimStarRodTilt_joint5[226] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2018, -322, -1347, 146, 2024, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2340, 173, -1201, 330, 2076, -338,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1672, 303, -685, 270, 1346, -323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1733, -12, -659, 16, 1430, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1698, 57, -653, 0, 1424, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -722, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1550, 45, 1340, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1527, -51, 1347, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1652, -163, 1495, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1854, -154, 1710, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1962, -59, 1825, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1974, -7, -722, 0, 1842, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -725, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1944, 12, 1810, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1932, 23, 1794, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1886, -2, 1741, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1902, -6, 1755, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1911, -3, 1764, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1908, -14, 1765, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1941, -77, -724, 6, 1803, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2063, -140, -713, 25, 1951, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2221, -292, -673, -87, 2160, 342,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2648, -238, -888, -85, 2636, 287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2699, -78, -844, 75, 2736, 110,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -633, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2805, -202, 2856, 204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3103, -216, 3145, 216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3239, -115, -524, 97, 3288, 135,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -3591, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -240, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 3715, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3713, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 3643, -17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3610, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3622, -8, -254, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3627, -4, -261, -6, 3632, -10,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimStarRodTilt_joint6[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -473, -33,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -507, 232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -327,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -655, -471,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -943, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1036, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1078, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1006, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -915, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -507, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, 33,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTNessAnimStarRodTilt_joint7[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -93, 0, -8, 0, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -749, -32, -69, -3, 50, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -749, 23, -69, 2, 50, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTNessAnimStarRodTilt_joint10[98] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -10, 0, 364, 0, -32, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -21, -7, 566, -16, -27, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -64, -13, 251, -82, -62, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -115, -25, 157, -91, -65, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -115, 11, -322, -349, -23, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -93, 39, -542, -25, -24, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 3, 83, -546, 1, -23, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -517, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 241, -6, -23, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 138, -8, -17, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 107, 0, -13, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 131, -9, -146, 73, -17, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -10, 0, 364, 0, -32, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimStarRodTilt_joint11[280] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1192, -402, 1038, -448, 1489, -587,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 790, 169, 590, -237, 901, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1532, 370, 563, -13, 1254, 174,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 561, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1531, -4, 1250, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1523, 1, 1237, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1532, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1244, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1237, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1551, 204, 563, -89, 1254, 68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 296, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1941, 234, 1375, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2019, 304, 1446, 677,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2550, 264, 549, 124, 2729, 640,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2548, -41, 546, 8, 2728, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2467, -27, 566, 10, 2599, -44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 564, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2493, 22, 2640, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 2508, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2669, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2664, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 565, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 569, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2662, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 2669, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2510, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 2515, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2517, 28, 569, 13, 2670, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2572, 203, 595, 39, 2735, 219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2923, 572, 649, -144, 3109, 590,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3717, 463, 306, -223, 3916, 375,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3851, 98, 201, -112, 3860, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 3879, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 81, -71, 3901, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 59, 4, 3908, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 144, 66, 3884, -25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3817, -88,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 3594, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 224, 12, 3850, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 170, 8, 3973, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3488, -59, 241, 84, 4052, 49,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 3387, -175, 3811, -258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 442, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 550, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3129, -253, 609, 20, 3481, -310,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2880, -164, 591, -19, 3191, -191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2801, -79, 569, -21, 3097, -93,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimStarRodTilt_joint12[106] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, 93,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -465, 279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -489, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -406, -302,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -605, -174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -755, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -802, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -713, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -609, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 50,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimStarRodTilt_joint13[142] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 90, 54, 126,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2629, -732, -35, 120, 2427, 402,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1373, -5, 295, 3, 2646, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1373, -1, 295, -8, 2646, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2075, 1074, -169, -247, 2956, -1366,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 775, 556, -199, -115, -86, -1631,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 919, -4, -399, -3, -307, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 919, -3, -399, 2, -307, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 506, -210, -434, -52, -181, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 77, -319, -611, -78, -349, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -133, -67, -591, 34, -270, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -190, 1, -474, 45, -262, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -128, 71, -408, 84, -292, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -48, 67, -306, 96, -138, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 6, 36, -216, 84, -60, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 62, 19, -54, 59, 135, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 85, 7, 19, 27, 143, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 90, 54, 126,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTNessAnimStarRodTilt_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 42),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimStarRodTilt_joint16[200] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -360, 66, -286, -53, -304, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -294, -11, -339, 45, -222, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -383, -34, -194, 78, -38, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -364, 24, -183, 11, -43, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -335, 33, -171, 13, -52, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -248, 50, -136, 22, -79, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -194, 114, -111, -33, -92, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -19, 167, -203, 79, -357, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 139, 165, 48, 94, -328, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 310, 93, -15, -16, -48, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 325, 13, 14, 6, -77, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -9, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 348, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -17, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 13, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 12, 14, 4, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 52, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 13, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -36, -12,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 53, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -27, -16,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 310, -51, -48, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -210, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -200, -85,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -47, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -197, -28,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -239, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -315, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -272, -59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -359, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -226, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -283, -7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -307, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -360, 0, -286, -3, -304, 3,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimStarRodTilt_joint18[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 403, 134,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 537, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 503, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 505, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 503, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 665, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 685, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 527, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 679, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 520, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 458, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 522, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 522, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 535, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 527, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 629, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 623, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 432, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 403, -28,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTNessAnimStarRodTilt_joint19[182] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, -150, 8, -216, 40, -86,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -223, -28, -376, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -46, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -44, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -206, 8, -395, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -273, -62, -503, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -352, 64, -559, 43, 59, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -235, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -143, 175, -72, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 0, 49, -299, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -44, -24, -127, 44, -388, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -50, 3, -146, -19, -488, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -16, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -165, -19, -388, 67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -207, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -353, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -393, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -395, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -372, 10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -12, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -44, -8,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -172, 39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 10, 81,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -51, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 51, 38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 94, 73, -359, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 160, -31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 12, 35,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 85, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 12, -19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 122, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 18, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1, -10, 8, -10, 40, 27,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimStarRodTilt_joint21[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -66, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -30, 5, 524, 74, -10, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -30, -41, 524, -51, -10, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -278, 65, 214, -190, 0, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 165, 22, -48, -11, 9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 222, -7, -48, 1, 9, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -66, 0, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimStarRodTilt_joint22[188] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1479, -99, 1477, 52, 1387, -117,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1569, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1380, -139, 1269, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1199, -101, 1157, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1178, -17, 1574, 4, 1168, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1579, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1164, -8, 1174, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1170, 19, 1169, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1199, 206, 1568, 37, 1157, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1583, 248, 1654, -100, 840, -203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1696, 41, 1366, -210, 749, 117,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1205, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1665, -66, 1074, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1563, 18, 928, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1701, 95, 1091, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1754, 9, 1205, -9, 1149, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1174, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1721, -12, 1096, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1729, 6, 1100, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 1074, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 1654, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1170, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 13), 1232, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1252, 27, 1076, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1166, 45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1520, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1652, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1484, -10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1215, 50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1377, 17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1513, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1483, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1479, -5, 1477, -6, 1387, 9,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimStarRodTilt_joint24[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 426, 53,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 535, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 532, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 538, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 534, 217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 973, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 872, -201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 570, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 718, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 578, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 528, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 588, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 589, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 577, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 570, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 645, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 624, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 444, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 426, -17,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTNessAnimStarRodTilt_joint25[244] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1681, 37, 1583, 132, 1397, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1800, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1396, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1719, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1856, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1850, -5, 1776, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1766, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1845, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1848, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1396, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1857, -176, 1799, -8, 1400, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1495, -182, 1749, -229, 1543, 201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1492, 88, 1340, -221, 1804, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1672, 93, 1306, -6, 1739, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1679, -9, 1328, 17, 1702, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1643, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 1306, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1716, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1699, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1642, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 1636, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1697, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 1731, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1644, 2, 1739, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1547, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1419, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1299, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1524, 34,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1560, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1672, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1397, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1394, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1555, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1575, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1681, 9, 1583, 7, 1397, 3,
	ftAnimEnd(),
	0x400E, 0x0038, 0x0000, 0x0000, 0x48E0, 0xFF82, 0xFFAE, 0xFFF4, 0x200F, 0x0002, 0xFF3B, 0xFFDC, 0x0077, 0x0011, 0xFF9C, 0xFFF2, 0x200F, 0x0005, 0xFF3B, 0xFFD5, 0x0077, 0x0002, 0xFF9C, 0x001C, 0x200F, 0x0001, 0xFE33, 0xFF54, 0x0087, 0xFF95, 0x0049, 0x0050, 0x200F, 0x0001, 0xFDE2, 0x0076, 0xFFA0, 0xFEFB, 0x003D, 0xFFC6, 0x200F, 0x0001, 0xFF20, 0x000F, 0xFE7C, 0xFFF3, 0xFFD6, 0xFFFC, 0x200F, 0x0014, 0xFF20, 0x0008, 0xFE7C, 0x000C, 0xFFD6, 0x0001, 0x380F, 0x000C, 0x0038, 0x0000, 0x0000, 0x0000,
};
