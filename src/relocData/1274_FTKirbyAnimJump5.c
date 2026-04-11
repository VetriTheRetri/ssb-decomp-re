/* AnimJoint data for relocData file 1274 (FTKirbyAnimJump5) */
/* 1680 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimJump5_joint1[22];
extern u16 dFTKirbyAnimJump5_joint2[14];
extern u16 dFTKirbyAnimJump5_joint3[22];
extern u16 dFTKirbyAnimJump5_joint5[38];
extern u16 dFTKirbyAnimJump5_joint6[166];
extern u16 dFTKirbyAnimJump5_joint7[14];
extern u16 dFTKirbyAnimJump5_joint9[38];
extern u16 dFTKirbyAnimJump5_joint10[162];
extern u16 dFTKirbyAnimJump5_joint11[14];
extern u16 dFTKirbyAnimJump5_joint13[10];
extern u16 dFTKirbyAnimJump5_joint14[56];
extern u16 dFTKirbyAnimJump5_joint16[14];
extern u16 dFTKirbyAnimJump5_joint18[78];
extern u16 dFTKirbyAnimJump5_joint19[54];
extern u16 dFTKirbyAnimJump5_joint21[94];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimJump5_joints[] = {
	(u32)dFTKirbyAnimJump5_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimJump5_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimJump5_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimJump5_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimJump5_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimJump5_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimJump5_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimJump5_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimJump5_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimJump5_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimJump5_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimJump5_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimJump5_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimJump5_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimJump5_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	0xFFFF017D, /* [21] END */
};

/* Joint 1 */
u16 dFTKirbyAnimJump5_joint1[22] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4915, 4915, 4915,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 600, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 30), 4915, 4915, 4915,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimJump5_joint2[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, -268, 0, 0, -312, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimJump5_joint3[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -89, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 27), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), 268,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTKirbyAnimJump5_joint5[38] = {
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
u16 dFTKirbyAnimJump5_joint6[166] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 803, -35, -1161, 4, 0, 41,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 2764, 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 782, 19, 23, -22,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 30), 2764, 3686, 3686,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -1083, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1020, 66,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -865, -32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 808, 84, -4, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 950, 715, -150, -718,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2239, 692, -1440, -693,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2335, 62, -1537, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2363, 23, -893, -24, -1565, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -877, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 2462, 53, -1650, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2537, 399, -1722, -396,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 3873, 346, -3057, -347,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -825, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1201, -37,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3953, 53, -3140, -55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 4020, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -3218, -2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1224, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1143, 6,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 3072, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4021, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 4249, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3221, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -3496, -6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1138, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 14), -999, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4256, 6, -996, 3, -3504, -7,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimJump5_joint7[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 49), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTKirbyAnimJump5_joint9[38] = {
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
u16 dFTKirbyAnimJump5_joint10[162] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2417, 35, 443, 4, -1608, 41,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 2764, 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -2395, -19, -1584, -22,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 30), 2764, 3686, 3686,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 521, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 588, 67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 746, -30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2421, -71, -1613, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2538, -714, -1732, -716,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3849, -703, -3046, -704,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3944, -63, -3142, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3975, -25, 717, -25, -3172, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 731, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -4076, -53, -3259, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4151, -397, -3330, -395,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -5492, -347, -4671, -348,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 782, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 407, -36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -5567, -50, -4748, -53,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), -5635, -2, -4826, -2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 383, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 464, 8,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 3072, 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -5638, -4, -4830, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 17), -5862, -5, -5104, -6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 470, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 14), 608, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5865, -2, 609, 1, -5108, -3,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimJump5_joint11[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 49), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTKirbyAnimJump5_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimJump5_joint14[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 54, 10, -244, 3, 655, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 44), 228, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 46), -305, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 33), 645, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 633, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 240, -6,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 245, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 292, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -304, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -302, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 297, 4, -300, 2, 233, -6,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimJump5_joint16[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 49), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTKirbyAnimJump5_joint18[78] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1856, -1, 1771, -14, -1545, 51,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 2949, 2949, 2949,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 30), 2949, 2949, 2949,
	ftAnimSetValRateT(FT_ANIM_ROTY, 44), 1772, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 48), -1928, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1306, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1291, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 34), -1453, 24,
	ftAnimBlock(0, 24),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 3686, 3686, 3686,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1427, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1258, 5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1771, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1767, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1930, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1930, 0, 1766, 0, -1259, 0,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimJump5_joint19[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -55, -10, 244, -3, 651, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 44), -228, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 45), 306, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 32), 653, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 645, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 237, -4,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -245, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -294, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 305, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -295, 0, 302, 1, 237, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimJump5_joint21[94] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 49), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
	0x0000, 0x280E, 0x0740, 0x0001, 0xF915, 0x000E, 0xF9F3, 0x0033, 0x3F00, 0x0B85, 0x0B85, 0x0B85, 0x4701, 0x001E, 0x0B85, 0x0B85, 0x0B85, 0x2805, 0x002C, 0xF914, 0x0001, 0x2803, 0x0030, 0x0788, 0x0002, 0x2009, 0x0005, 0xFAE6, 0x000C, 0x2009, 0x0001, 0xFAF5, 0x0009, 0x2809, 0x0022, 0xFA53, 0x0018, 0x0801, 0x0018, 0x4701, 0x0014, 0x0E66, 0x0E66, 0x0E66, 0x0801, 0x000A, 0x2009, 0x0001, 0xFA6A, 0x0018, 0x2809, 0x0008, 0xFB12, 0x0007, 0x0801, 0x0003, 0x2005, 0x0001, 0xF915, 0x0001, 0x2805, 0x0004, 0xF919, 0x0000, 0x0801, 0x0003, 0x2003, 0x0001, 0x078A, 0x0001, 0x200F, 0x0001, 0x078A, 0x0000, 0xF91A, 0x0000, 0xFB19, 0x0006, 0x0000,
};
