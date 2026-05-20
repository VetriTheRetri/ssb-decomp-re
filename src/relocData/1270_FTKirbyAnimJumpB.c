/* AnimJoint data for relocData file 1270 (FTKirbyAnimJumpB) */
/* 1936 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimJumpB_joint1[22];
extern u16 dFTKirbyAnimJumpB_joint2[10];
extern u16 dFTKirbyAnimJumpB_joint3[28];
extern u16 dFTKirbyAnimJumpB_joint5[42];
extern u16 dFTKirbyAnimJumpB_joint6[116];
extern u16 dFTKirbyAnimJumpB_joint7[14];
extern u16 dFTKirbyAnimJumpB_joint9[42];
extern u16 dFTKirbyAnimJumpB_joint10[116];
extern u16 dFTKirbyAnimJumpB_joint11[16];
extern u16 dFTKirbyAnimJumpB_joint13[10];
extern u16 dFTKirbyAnimJumpB_joint14[82];
extern u16 dFTKirbyAnimJumpB_joint16[14];
extern u16 dFTKirbyAnimJumpB_joint18[108];
extern u16 dFTKirbyAnimJumpB_joint19[124];
extern u16 dFTKirbyAnimJumpB_joint21[48];
extern u16 dFTKirbyAnimJumpB_joint22[132];

/* Joint pointer table (22 entries, 88 bytes) */
AObjEvent32 * dFTKirbyAnimJumpB_joints[] = {
	(AObjEvent32 *)dFTKirbyAnimJumpB_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTKirbyAnimJumpB_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTKirbyAnimJumpB_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTKirbyAnimJumpB_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTKirbyAnimJumpB_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTKirbyAnimJumpB_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTKirbyAnimJumpB_joint9, /* [7] joint 9 */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTKirbyAnimJumpB_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTKirbyAnimJumpB_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTKirbyAnimJumpB_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTKirbyAnimJumpB_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTKirbyAnimJumpB_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTKirbyAnimJumpB_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTKirbyAnimJumpB_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTKirbyAnimJumpB_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTKirbyAnimJumpB_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimJumpB_joint1[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -268, 0, 0, 600, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), 268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 0, -148,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -446,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), -3216,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimJumpB_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, -312, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimJumpB_joint3[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 25), 178, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -536, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -357, 80,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTKirbyAnimJumpB_joint5[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 178, -120, -120,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 25), 178, 2, -120, 32, -120, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 5), 268, 8, 0, 96, -240, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 5), 268, -8, 0, -95, -240, 95,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 5), 178, -120, -120,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimJumpB_joint6[116] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3072,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2805, 0, -563, -1, -2105, 1,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), -662, 28,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 25), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 17), 2483, -49, -1686, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2434, -46, -1632, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 2551, 131, -1768, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2693, 125, -627, 50, -1944, -165,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2082, 69,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 2513, -19, -43, 26,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 4096,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2006, 67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1895, 14,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2503, -6, -30, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -377, -170,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 2622, 29,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 3072,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1883, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -543, -115, -1883, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2644, 22, -609, -66, -1891, -8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTKirbyAnimJumpB_joint7[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTKirbyAnimJumpB_joint9[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), -178, 120, -120,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 25), -178, -2, 120, -32, -120, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 5), -268, -8, 0, -96, -240, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 5), -268, 8, 0, 95, -240, 95,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 5), -178, 120, -120,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimJumpB_joint10[116] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3072,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 411, 4, 563, 0, 1111, 5,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), 662, -29,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 25), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 17), 731, 49, 1528, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 782, 47, 1584, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 665, -128, 1448, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 528, -124, 624, -50, 1278, -165,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1136, 67,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 703, 19, 43, -27,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 4096,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1210, 66,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1322, 14,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 713, 6, 27, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 374, 172,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 594, -29,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 3072,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1335, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 543, 117, 1333, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 572, -22, 609, 65, 1325, -8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimJumpB_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimJumpB_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimJumpB_joint14[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1466, 1, -275, 0, -353, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 1579, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), -275, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -553, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -547, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -101, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1552, -43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1190, -154,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -278, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -303, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1064, -81,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 738, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -87, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 233, 6,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 661, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 301, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 297, -4, -300, 3, 233, 0,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimJumpB_joint16[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 39), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTKirbyAnimJumpB_joint18[108] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 66, -3, 1922, 0, -679, 3,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 1861, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 19), -268, 10, -302, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -253, 47, -309, -47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 214, 257,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1122, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1886, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1862, -86,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 498, 216,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 722, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1766, -59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1738, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1135, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -1228, -20,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 755, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1278, 14,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1747, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1765, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1244, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1252, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1286, 7, 1766, 1, -1259, -7,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimJumpB_joint19[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1931, -5, 213, 0, -116, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -296, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 191, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 18), 1665, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1668, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1869, 316,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -292, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -22, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 206, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2345, 375, 235, -65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2667, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 74, -91,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 104, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -38, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 131, 72,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2683, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 2902, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 140, 43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 306, -2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 194, 35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 233, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 306, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 300, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2910, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 2918, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2921, 3, 302, 1, 237, 4,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimJumpB_joint21[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 473, 310,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 628, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 474, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 355, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 7, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTKirbyAnimJumpB_joint22[132] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 5120,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -276, 5, -1861, 0, -734, 4,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -1756, -15, -506, -25,
	ftAnimSetValRateT(FT_ANIM_SCAX, 25), 5120, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 16), 7, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 9, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -37, -107,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1782, -44, -554, -98,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1737, 182, -1020, -297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -214, -353,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -744, -403,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1020, -163, -1479, 171, -1297, -173,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1075, -5, -1370, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1434, -28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_SCAX, 10), 3686, -191,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1082, -8, -1355, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1171, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1282, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1467, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1763, -6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1187, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1256, -3,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 3686,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1286, -3, -1766, -3, -1255, 0,
	ftAnimEnd(),
	0x0000, 0x0000,
};
