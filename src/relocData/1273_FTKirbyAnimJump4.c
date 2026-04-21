/* AnimJoint data for relocData file 1273 (FTKirbyAnimJump4) */
/* 1728 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimJump4_joint1[22];
extern u16 dFTKirbyAnimJump4_joint2[14];
extern u16 dFTKirbyAnimJump4_joint3[22];
extern u16 dFTKirbyAnimJump4_joint5[38];
extern u16 dFTKirbyAnimJump4_joint6[166];
extern u16 dFTKirbyAnimJump4_joint7[14];
extern u16 dFTKirbyAnimJump4_joint9[38];
extern u16 dFTKirbyAnimJump4_joint10[166];
extern u16 dFTKirbyAnimJump4_joint11[14];
extern u16 dFTKirbyAnimJump4_joint13[10];
extern u16 dFTKirbyAnimJump4_joint14[54];
extern u16 dFTKirbyAnimJump4_joint16[24];
extern u16 dFTKirbyAnimJump4_joint18[80];
extern u16 dFTKirbyAnimJump4_joint19[56];
extern u16 dFTKirbyAnimJump4_joint21[22];
extern u16 dFTKirbyAnimJump4_joint22[80];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimJump4_joints[] = {
	(u32)dFTKirbyAnimJump4_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimJump4_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimJump4_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimJump4_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimJump4_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimJump4_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimJump4_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimJump4_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimJump4_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimJump4_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimJump4_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimJump4_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimJump4_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimJump4_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimJump4_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTKirbyAnimJump4_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimJump4_joint1[22] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 5324, 5324, 5324,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 600, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 30), 5324, 5324, 5324,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimJump4_joint2[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, -268, 0, 0, -312, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimJump4_joint3[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -89, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 27), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), 268,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTKirbyAnimJump4_joint5[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 89, -180, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -178, -26,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 30), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 3), -180,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -178, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 7), -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX, 20), 89, -180,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 20), 178, -120, -120,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimJump4_joint6[166] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2412, -37, -447, -3, -1608, 41,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 2611, 3481, 3481,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 2390, 20, -1584, -22,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 30), 2611, 3481, 3481,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -521, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -591, -67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -746, 30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2416, 83, -1613, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2558, 713, -1757, -715,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3843, 690, -3044, -691,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3939, 63, -3141, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3971, 26, -718, 26, -3172, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -730, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 4069, 53, -3257, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4144, 396, -3329, -394,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 5479, 349, -4665, -350,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -782, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -407, 36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 5559, 53, -4747, -56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 5629, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -4826, -2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -383, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -461, -8,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 3072, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 5630, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 5858, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4830, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -5105, -6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -473, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 14), -608, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5865, 6, -612, -3, -5112, -7,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimJump4_joint7[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 49), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTKirbyAnimJump4_joint9[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), -89, 180, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 178, 26,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 30), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 3), 180,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 178, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 7), 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX, 20), -89, 180,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 20), -178, 120, -120,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimJump4_joint10[166] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 799, 36, 443, 3, -1608, 41,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 2611, 3481, 3481,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 821, -19, -1584, -22,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 30), 2611, 3481, 3481,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 521, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 588, 67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 746, -30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 795, -82, -1612, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 655, -713, -1755, -715,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -631, -691, -3044, -693,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -728, -63, -3142, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -759, -25, 718, -25, -3172, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 734, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -858, -56, -3259, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -939, -394, -3337, -392,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -2267, -350, -4665, -351,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 782, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 407, -33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2347, -53, -4747, -56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -2417, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -4826, -2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 387, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 464, 8,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 3072, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2418, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -2646, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4830, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -5105, -6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 470, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 14), 608, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2648, -2, 609, 0, -5108, -2,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimJump4_joint11[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 49), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTKirbyAnimJump4_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimJump4_joint14[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 46, 11, -232, 3, 655, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 44), 223, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 45), -304, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 36), 590, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 569, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 240, -8,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 243, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 292, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -304, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -302, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 297, 4, -300, 2, 233, -6,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimJump4_joint16[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 35), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTKirbyAnimJump4_joint18[80] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1844, 0, 1759, -13, -1556, 48,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 2785, 2785, 2785,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 30), 2785, 2785, 2785,
	ftAnimSetValRateT(FT_ANIM_ROTY, 46), 1769, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 47), -1924, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1313, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1298, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 35), -1431, 29,
	ftAnimBlock(0, 24),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 3686, 3686, 3686,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1403, 28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1258, 4,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1768, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1767, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1927, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1930, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1930, 0, 1766, 0, -1259, 0,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimJump4_joint19[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -48, -7, 232, -2, 651, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 38), -100, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 45), 302, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 32), 650, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 645, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 240, -6,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -117, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -292, -4,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 304, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 302, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -297, -4, 300, -2, 233, -6,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimJump4_joint21[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 35), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 13), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTKirbyAnimJump4_joint22[80] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1844, 0, -1759, 13, -1560, 55,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 2785, 2785, 2785,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 30), 2785, 2785, 2785,
	ftAnimSetValRateT(FT_ANIM_ROTY, 46), -1769, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 47), 1924, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1309, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1302, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), -1552, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1560, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -1258, 6,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 3686, 3686, 3686,
	ftAnimBlock(0, 16),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1768, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1767, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1927, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1930, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1930, 0, -1766, 0, -1259, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
