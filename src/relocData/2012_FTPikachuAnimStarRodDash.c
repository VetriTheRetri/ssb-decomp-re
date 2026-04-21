/* AnimJoint data for relocData file 2012 (FTPikachuAnimStarRodDash) */
/* 4688 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimStarRodDash_joint1[28];
extern u16 dFTPikachuAnimStarRodDash_joint2[88];
extern u16 dFTPikachuAnimStarRodDash_joint3[86];
extern u16 dFTPikachuAnimStarRodDash_joint4[86];
extern u16 dFTPikachuAnimStarRodDash_joint6[54];
extern u16 dFTPikachuAnimStarRodDash_joint7[204];
extern u16 dFTPikachuAnimStarRodDash_joint8[48];
extern u16 dFTPikachuAnimStarRodDash_joint9[84];
extern u16 dFTPikachuAnimStarRodDash_joint10[70];
extern u16 dFTPikachuAnimStarRodDash_joint11[38];
extern u16 dFTPikachuAnimStarRodDash_joint12[38];
extern u16 dFTPikachuAnimStarRodDash_joint14[62];
extern u16 dFTPikachuAnimStarRodDash_joint15[182];
extern u16 dFTPikachuAnimStarRodDash_joint17[44];
extern u16 dFTPikachuAnimStarRodDash_joint18[228];
extern u16 dFTPikachuAnimStarRodDash_joint20[112];
extern u16 dFTPikachuAnimStarRodDash_joint22[230];
extern u16 dFTPikachuAnimStarRodDash_joint23[214];
extern u16 dFTPikachuAnimStarRodDash_joint25[86];
extern u16 dFTPikachuAnimStarRodDash_joint26[206];
extern u16 dFTPikachuAnimStarRodDash_joint27[102];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTPikachuAnimStarRodDash_joints[] = {
	(u32)dFTPikachuAnimStarRodDash_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimStarRodDash_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimStarRodDash_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimStarRodDash_joint4, /* [3] joint 4 */
	(u32)dFTPikachuAnimStarRodDash_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTPikachuAnimStarRodDash_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimStarRodDash_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimStarRodDash_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimStarRodDash_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimStarRodDash_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimStarRodDash_joint12, /* [11] joint 12 */
	(u32)dFTPikachuAnimStarRodDash_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTPikachuAnimStarRodDash_joint15, /* [14] joint 15 */
	(u32)dFTPikachuAnimStarRodDash_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTPikachuAnimStarRodDash_joint18, /* [17] joint 18 */
	(u32)dFTPikachuAnimStarRodDash_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTPikachuAnimStarRodDash_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTPikachuAnimStarRodDash_joint23, /* [22] joint 23 */
	(u32)dFTPikachuAnimStarRodDash_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTPikachuAnimStarRodDash_joint26, /* [25] joint 26 */
	(u32)dFTPikachuAnimStarRodDash_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTPikachuAnimStarRodDash_joint1[28] = {
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 1209,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), 551, 989,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 2187,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 11), 2706, 1134,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 19), 4277, 331,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 12), 4500, 152,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPikachuAnimStarRodDash_joint2[88] = {
	ftAnimSetValAfter(FT_ANIM_ROTZ | FT_ANIM_TRAX), -28, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ), -26, 33, -94,
	ftAnimSetValRate(FT_ANIM_TRAY), 953, 34,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 728, -568, -30, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 16), -26, 0, 33, 0,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 15), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 407, 477, -24, -52,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 5324, 2867, 5324,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 967, 638, -57, -25,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 30), -26, 33,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 2867, 5324, 2867,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 807, -155, -40, 88,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 25), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), 675, -66, 108, 12,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 666, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 675, 108,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimStarRodDash_joint3[86] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 741, -49, 17,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 895, 63, 58, 2, 89, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 996, 0, -38, -7, -4, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 893, -21, -38, 0, -4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 734, 57, -37, 0, 0, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1123, 7, -35, 0, 24, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 862, 1, -35, 1, 24, 1,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -19, 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 365, -120, 21, 12, 28, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -104, -42, 63, 13, 29, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 133, 17, 32, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 23,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTPikachuAnimStarRodDash_joint4[86] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -198, 32, 3,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 49, -50, 69, 0, -230, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -401, -37, 31, -2, 0, 17,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -403, 6, 31, 0, 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 26,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -32, 18, 21, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -327, -4, 0, -1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -107, 3, 0, -1, 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 260, 47, -1, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 276, -34, 0, 0, -1, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -13, 0, -2,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimStarRodDash_joint6[54] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 267, 97, 442,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 347, 54, 125, 11, 303, -63,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 369, 45, 120, -99, 322, 1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 432, 26, -61, -76, 306, -6,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 432, -68, -61, 7, 306, 56,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 269, -72, -44, 0, 441, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 324, -62, 313,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimStarRodDash_joint7[204] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2412, -7, -37, -10, 2109, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -2265, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1935, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), -237, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -230, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -226, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2266, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2308, -10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1949, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1971, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -243, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2312, 105, -406, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2096, 236, -489, -262, 1584, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1840, -60, -930, 127, 1989, 676,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2216, 152, -234, 466, 2938, 402,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1535, 245, 3, 37, 2793, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2136, -194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -160, -144, 2968, 180,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 3165, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -282, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2114, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -2216, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3172, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 3130, -43,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -284, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -302, 14,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2269, -59, 3064, -112,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2543, -133,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2277, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -275, 56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 391, -16,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2428, -113,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2357, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2202, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -2253, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2471, -119, 2603, 235,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -2439, 39, 2950, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 334, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 278, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2412, 26, 236, -41, 3014, 63,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPikachuAnimStarRodDash_joint8[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 0, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -315, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -399, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -10, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTPikachuAnimStarRodDash_joint9[84] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -326, -6, -41,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -196, -74, 165, 1, -172, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -624, -28, 0, -12, 0, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -568, 7, 0, 0, 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), -296, -32,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -696, -19, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -639, -6, 0, 0, 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 10, -4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -310, 88, 86, -1, -59, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 71, 38, -14, -31, -29, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -2, -163, 20,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimStarRodDash_joint10[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 59, 5, 2401,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 8, 32, 508,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 35, 189, -56, 13, 2447, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 818, 60, 61, 12, 2716, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 826, -14, 101, -33, 2666, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 640, -15, -344, -47, 2710, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 766, 5, -89, 15, 2569, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 739, -26, -72, 0, 2734, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 255, -56, -96, 6, 2440, -27,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 59, 5, 2401,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimStarRodDash_joint11[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -280, -6, -10,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -487, -5, -89, 10, -25, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -393, 5, 194, 15, 186, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -393, 14, 194, -7, 186, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTPikachuAnimStarRodDash_joint12[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -312, -8, -1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -560, -4, 107, -8, -24, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -406, 8, -162, -15, -180, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -406, 15, -162, 6, -180, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimStarRodDash_joint14[62] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -302, 83, 399,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -366, -201, 41, 150, 315, -186,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -403, -23, 158, 38, 306, -44,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), -404, -22, 103, -105, 242, 5,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -445, -17, -38, -60, 317, 31,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), -445, 47, -38, -28, 317, 31,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -333, 80, -105, -15, 392, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -324, -62, 313,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTPikachuAnimStarRodDash_joint15[182] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 803, 14, 1621, -142, 505, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 659, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1479, -295, 483, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1031, -166, 297, -124,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 292, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1405, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 644, -13, 1425, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1402, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 671, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 290, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 289, 4,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1372, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 679, -91, 1230, -96, 284, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 488, -22, 1178, -315, -43, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 634, 148, 599, 101, 475, 633,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 785, -367, 1381, 496, 1222, 305,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1318, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -100, -369, 1087, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 468, 189, 1477, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 426, -35, 1324, 4, 1487, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 716, 95,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1281, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 1452, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1379, -110,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 984, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 797, 43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 821, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1305, 38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1697, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 934, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 984, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 842, 5, 1117, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 812, -13, 1276, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, -8, 1703, 5, 1311, 34,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPikachuAnimStarRodDash_joint17[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 0, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -280, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -185,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -652,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 326,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), -10, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTPikachuAnimStarRodDash_joint18[228] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1639, -164, -1571, 124, -1779, -369,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1238, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1474, 26, -2149, -494,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1692, 67, -2768, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1349, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1162, -104, -2151, 610,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1447, -167, -1548, 335,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1342, -5, -1497, -46, -1481, 67,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), 1320, -4, -1458, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1414, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -1323, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1315, -66, -1435, 84, -1319, -337,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1222, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1187, 129, -1999, -573,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1575, 258, -2465, -228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1703, 126, -1311, -89, -2456, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1829, 0, -1401, 0, -2603, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1519, -113, -2172, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1309, 68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1387, -37,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1476, -40, -2139, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1804, 79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1261, 17,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1429, -48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1630, 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1753, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1810, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1622, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1537, 171,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1290, 235, -1803, -353,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1731, 318, -1259, 84, -2517, -509,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1926, 6, -1369, -23, -2822, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1743, -136, -1307, 32, -2612, 182,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1427, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1652, -57, -2457, 127,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 1709, -31, -2069, 43,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1533, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1597, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1666, -42, -1609, -11, -2015, 54,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTPikachuAnimStarRodDash_joint20[112] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 449,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 449, 536,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1073, 282,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1014, -319,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 434, -349,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 314, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 201, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 64, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 156, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 429, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 482, 361,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1152, 360,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1203, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 801, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 703, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 423, -215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 150, -208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 422,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 851, 371,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 355, -213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 322, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 843, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 921, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 953, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 946, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTPikachuAnimStarRodDash_joint22[230] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1634, 147, -1660, -120, 2267, -199,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1953, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1902, 16, 1932, -175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1815, -52, 1716, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1795, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1821, 74, 1904, 126,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1788, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1969, 59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2023, -50,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1793, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1844, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1794, -2, 1974, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1779, -9, 1824, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1768, 507, -1862, 165, 1772, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2795, 90, -1513, 99, 1507, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1949, -510, -1663, -164, 1888, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1774, -114, -1841, -78, 1706, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1721, -28, -1819, -10, 1801, -66,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1912, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1975, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1573, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1449, -41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1703, 83,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1897, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1713, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1789, 89,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2289, 27,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1988, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1799, -191,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2307, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 2321, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2228, -298,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1563, -141, -1683, 31, 1723, -185,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1577, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1730, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1856, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2070, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2065, -47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1313, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1568, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1539, 67,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1670, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1667, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1614, 75, -1736, -69, 1255, -58,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTPikachuAnimStarRodDash_joint23[214] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1360, 54, 1581, -167, -1786, -332,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2309, 67,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1287, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1414, -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1203, -60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1405, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1984, 309,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1690, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1423, 16, -1638, 50,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 1419, -19, -1293, 24,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1280, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1234, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1220, 85, 1397, -59, -1271, -357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1062, -106, 1300, -130, -2008, -595,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1434, -271, 1136, -8, -2462, -227,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1368, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1606, -159, -2464, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1752, -18, -2578, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1487, 89, -2209, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1303, -43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1434, 31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1463, 21, -2183, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1891, 102,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1325, 9,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1468, 38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1625, -11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1795, 43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1767, 74,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1313, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -960, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1608, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1518, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1668, 106,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1530, -121,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1326, -107,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1545, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1106, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1468, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1449, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1405, 36, 1541, 0, -1656, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1376, 29, 1544, 2, -1756, -100,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTPikachuAnimStarRodDash_joint25[86] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 6, 562,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 993, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 877, -253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 486, -232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 412, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 388, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 434, 360,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1109, 378,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1192, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 946, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 890, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 218, -231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -109,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 6, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 313, 186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 456, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 509, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 749, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 807, 57,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTPikachuAnimStarRodDash_joint26[206] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1470, -108, -1512, 50, -1027, -304,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1274, 42, -1397, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1592, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1501, 198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1331, 30, -1505, -60, -1196, 177,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1511, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1384, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1146, 40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1272, -56,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1497, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1412, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1393, -464, -1364, -190, -1333, -204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 456, -118, -1793, -160, -1682, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1155, 446, -1686, 169, -1287, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1350, 154, -1454, 132, -1456, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1464, 41, -1421, 27, -1435, -63,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1402, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -1582, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1707, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1682, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1016, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1385, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1328, 7,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -897, 65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1198, -320,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1337, 42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1632, 277,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1539, 83,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1399, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1967, 305, -1579, -294,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1894, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 2280, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2141, -137, -1515, -132,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1826, 38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1718, -74,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1934, -45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2060, -22,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1772, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1646, -71, -1733, 38, -2075, -14,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTPikachuAnimStarRodDash_joint27[102] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX), -1, -180, -354, 4096,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAZ), -962, -233, -512, 4096,
	ftAnimSetValBlock(FT_ANIM_SCAY), 4095,
	ftAnimSetValT(FT_ANIM_SCAY, 15), 4095,
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 15), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -726, -2, -397, -50, -195, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -972, -18, -436, -3, -499, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -972, -4, -436, -6, -499, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1020, 146, -509, -2, -490, -194,
	ftAnimSetValBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 3235, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -385, 24, -448, 26, -1277, -21,
	ftAnimSetValBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 3259, -4751,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -773, -16, -243, 23, -708, 38,
	ftAnimSetValBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 25), 4095, 4096,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -627, 37, -99, 12, -692, 35,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -14, 0, -3,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
