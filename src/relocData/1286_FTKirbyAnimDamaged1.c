/* AnimJoint data for relocData file 1286 (FTKirbyAnimDamaged1) */
/* 1792 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimDamaged1_joint1[86];
extern u16 dFTKirbyAnimDamaged1_joint2[10];
extern u16 dFTKirbyAnimDamaged1_joint3[42];
extern u16 dFTKirbyAnimDamaged1_joint5[50];
extern u16 dFTKirbyAnimDamaged1_joint6[98];
extern u16 dFTKirbyAnimDamaged1_joint7[16];
extern u16 dFTKirbyAnimDamaged1_joint9[36];
extern u16 dFTKirbyAnimDamaged1_joint10[106];
extern u16 dFTKirbyAnimDamaged1_joint11[14];
extern u16 dFTKirbyAnimDamaged1_joint13[10];
extern u16 dFTKirbyAnimDamaged1_joint14[92];
extern u16 dFTKirbyAnimDamaged1_joint16[14];
extern u16 dFTKirbyAnimDamaged1_joint18[82];
extern u16 dFTKirbyAnimDamaged1_joint19[74];
extern u16 dFTKirbyAnimDamaged1_joint21[122];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimDamaged1_joints[] = {
	(u32)dFTKirbyAnimDamaged1_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimDamaged1_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimDamaged1_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimDamaged1_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimDamaged1_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimDamaged1_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimDamaged1_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimDamaged1_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimDamaged1_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimDamaged1_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimDamaged1_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimDamaged1_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimDamaged1_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimDamaged1_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimDamaged1_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	0xFFFF0192, /* [21] END */
};

/* Joint 1 */
u16 dFTKirbyAnimDamaged1_joint1[86] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 600, 0, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 660, 320, -180, -239,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 2), 3276, 3276,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 720, 131,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 7), -240, 53,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAZ, 1), 6144,
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 3), 3686,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 3), 4300, 4300,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 720, -135,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 3), 4096,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 3), 4096, 4096,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_SCAZ, 2), 450, 4505,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 2), -120, 480,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY, 1), 4505, 3072,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 600, 0, 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimDamaged1_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -268, 0, 0, -312, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimDamaged1_joint3[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -312, -44, -268, -33, 89, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -357, 49, -268, 14, 89, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 134, 89, -134, 67, 134, -22,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTKirbyAnimDamaged1_joint5[50] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), -178, -22, -120, -120, -120, -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 1), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAY, 7), -178, 16, 0, -53,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 7), -120, -120,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), -120, 239, -120, 239,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 4), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 2), -60,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimDamaged1_joint6[98] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2412, -415, -217, -923, 0, 119,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2828, -144, -1140, -521,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 245, 64,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 3072,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 9), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2701, 62, -1259, -42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -931, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -3031, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3140, -15, 310, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -2931, 267, 211, -262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -983, -61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1093, 43,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2527, 438, -233, -476,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2053, 11, -966, 361, -741, 94,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2504, -179, -371, 373, -44, 370,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2412, 91, -220, 150, 0, 44,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimDamaged1_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTKirbyAnimDamaged1_joint9[36] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAX, 1), 180, 180,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 7), 180, -106, 0, -53,
	ftAnimSetValRateT(FT_ANIM_TRAX, 2), 60, -359,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 2), -60,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 0, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimDamaged1_joint10[106] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, -701, 217, 285, 0, -1562,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1505, -318, 503, 37, -1562, -656,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 3072,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 9), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1441, 15, 293, -107, -1312, 129,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1393, -48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 565, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1474, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1329, 105,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1286, -69,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1435, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1480, -251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 562, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 315, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1396, -402,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2091, -745, -1946, -577,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -3092, -290,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2888, -845,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3783, -566,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4021, -237, 217, -97, -3216, -124,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimDamaged1_joint11[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTKirbyAnimDamaged1_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimDamaged1_joint14[92] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -23, 684, -302, -145, 237, -735,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -437, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 660, 370, -497, -426,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 717, 75, -615, -88,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 778, -51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -462, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -427, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -418, -58,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 708, -75,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 627, 20,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -475, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 653, -225, -504, -21, -490, 196,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -358, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 175, -324, -82, 324,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4, -98, 158, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -21, -25, -302, 55, 233, 74,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimDamaged1_joint16[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTKirbyAnimDamaged1_joint18[82] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -309, -358, -176, 5, -96, 680,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -96, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -668, -169, 584, 363,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -649, -14, 629, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -644, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 618, -94,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -130, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -177, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -632, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -688, 97,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 465, -227,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -35, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -451, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -358, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -309, 48, -176, 0, -99, -64,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimDamaged1_joint19[74] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 23, -77, 302, -67, 237, -162,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 179, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 14, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -94, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -48, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -63, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 164, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 316, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 20, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 23, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -254, 13, -228, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -36, 143, 77, 223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 31, 28, 219, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, -10, 302, -14, 233, 13,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimDamaged1_joint21[122] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 594, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 169, -293,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -81,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
	0x280E, 0x0135, 0x003B, 0x00B0, 0x00EC, 0xFFA0, 0x0147, 0x4F00, 0x1000, 0x1000, 0x1000, 0x2805, 0x0002, 0x01E4, 0x002A, 0x2803, 0x0004, 0x0183, 0xFFD5, 0x2009, 0x0001, 0x00E6, 0x00BC, 0x2009, 0x0001, 0x0119, 0x0022, 0x2809, 0x0005, 0x013B, 0xFFE0, 0x2005, 0x0001, 0x01F1, 0xFFF8, 0x2805, 0x0004, 0x018F, 0x0004, 0x0801, 0x0001, 0x2003, 0x0001, 0x0159, 0xFFE8, 0x2803, 0x0003, 0x0150, 0x0054, 0x0801, 0x0002, 0x200D, 0x0001, 0x0193, 0xFFD9, 0x010B, 0xFF37, 0x2805, 0x0003, 0x00B3, 0xFFEF, 0x200B, 0x0001, 0x01FC, 0x003C, 0xFFAA, 0xFF65, 0x2803, 0x0002, 0x0168, 0xFFB6, 0x2009, 0x0001, 0xFFD6, 0x000B, 0x2009, 0x0001, 0xFFC2, 0xFFE4, 0x200F, 0x0001, 0x0135, 0xFFCE, 0x00B0, 0xFFFE, 0xFF9D, 0xFFDC, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
