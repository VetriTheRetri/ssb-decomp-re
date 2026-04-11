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
extern u16 dFTKirbyAnimJumpB_joint21[180];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimJumpB_joints[] = {
	(u32)dFTKirbyAnimJumpB_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimJumpB_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimJumpB_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimJumpB_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimJumpB_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimJumpB_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimJumpB_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimJumpB_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimJumpB_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimJumpB_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimJumpB_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimJumpB_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimJumpB_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimJumpB_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimJumpB_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	0xFFFF01A2, /* [21] END */
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
u16 dFTKirbyAnimJumpB_joint21[180] = {
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
	0x0000, 0x4100, 0x1400, 0x280E, 0xFEEC, 0x0005, 0xF8BB, 0x0000, 0xFD22, 0x0004, 0x4E00, 0x0E66, 0x0E66, 0x280D, 0x0014, 0xF924, 0xFFF1, 0xFE06, 0xFFE7, 0x2901, 0x0019, 0x1400, 0xFFAF, 0x2003, 0x0010, 0x0007, 0x0002, 0x2003, 0x0001, 0x0009, 0x0000, 0x2803, 0x0004, 0xFFDB, 0xFF95, 0x0801, 0x0003, 0x200D, 0x0001, 0xF90A, 0xFFD4, 0xFDD6, 0xFF9E, 0x280D, 0x0002, 0xF937, 0x00B6, 0xFC04, 0xFED7, 0x2003, 0x0001, 0xFF2A, 0xFE9F, 0x2003, 0x0001, 0xFD18, 0xFE6D, 0x200F, 0x0001, 0xFC04, 0xFF5D, 0xFA39, 0x00AB, 0xFAEF, 0xFF53, 0x280B, 0x0003, 0xFBCD, 0xFFFB, 0xFAA6, 0x0009, 0x2805, 0x0004, 0xFA66, 0xFFE4, 0x0801, 0x0001, 0x2901, 0x000A, 0x0E66, 0xFF41, 0x0801, 0x0002, 0x200B, 0x0001, 0xFBC6, 0xFFF8, 0xFAB5, 0x0014, 0x2809, 0x0005, 0xFB6D, 0xFFF1, 0x2803, 0x000B, 0xFAFE, 0xFFFA, 0x2005, 0x0001, 0xFA45, 0xFFDD, 0x2805, 0x000A, 0xF91D, 0xFFFA, 0x0801, 0x0004, 0x2009, 0x0001, 0xFB5D, 0xFFF1, 0x2809, 0x0005, 0xFB18, 0xFFFD, 0x0801, 0x0001, 0x4101, 0x0005, 0x0E66, 0x0801, 0x0004, 0x200F, 0x0001, 0xFAFA, 0xFFFD, 0xF91A, 0xFFFD, 0xFB19, 0x0000, 0x0000, 0x0000, 0x0000,
};
