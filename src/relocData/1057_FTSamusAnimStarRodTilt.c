/* AnimJoint data for relocData file 1057 (FTSamusAnimStarRodTilt) */
/* 2688 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimStarRodTilt_joint1[32];
extern u16 dFTSamusAnimStarRodTilt_joint2[38];
extern u16 dFTSamusAnimStarRodTilt_joint4[76];
extern u16 dFTSamusAnimStarRodTilt_joint5[228];
extern u16 dFTSamusAnimStarRodTilt_joint6[80];
extern u16 dFTSamusAnimStarRodTilt_joint7[106];
extern u16 dFTSamusAnimStarRodTilt_joint8[10];
extern u16 dFTSamusAnimStarRodTilt_joint11[44];
extern u16 dFTSamusAnimStarRodTilt_joint12[144];
extern u16 dFTSamusAnimStarRodTilt_joint14[56];
extern u16 dFTSamusAnimStarRodTilt_joint15[78];
extern u16 dFTSamusAnimStarRodTilt_joint17[48];
extern u16 dFTSamusAnimStarRodTilt_joint19[108];
extern u16 dFTSamusAnimStarRodTilt_joint20[100];
extern u16 dFTSamusAnimStarRodTilt_joint22[40];
extern u16 dFTSamusAnimStarRodTilt_joint23[110];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTSamusAnimStarRodTilt_joints[] = {
	(u32)dFTSamusAnimStarRodTilt_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimStarRodTilt_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimStarRodTilt_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimStarRodTilt_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimStarRodTilt_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimStarRodTilt_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimStarRodTilt_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimStarRodTilt_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimStarRodTilt_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimStarRodTilt_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimStarRodTilt_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimStarRodTilt_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimStarRodTilt_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimStarRodTilt_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimStarRodTilt_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTSamusAnimStarRodTilt_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTSamusAnimStarRodTilt_joint1[32] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1600, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 1600, -324, -49, 570,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 1194, -123, 712, -23,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 1164, 101, 381, -178,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 22), 1600, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTSamusAnimStarRodTilt_joint2[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -240, -24, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -240, 30, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 36, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), 0, -1, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTSamusAnimStarRodTilt_joint4[76] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 264, 25, -303, -28, -89, -24, -44, -38, -16, -39, 62, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 250, -2, -285, 60, -249, 0, -47, 44, -49, 16, 55, -62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 236, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 236, -7, -88, 19,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 59, 0, 39, 0, -28,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 19,
	ftAnimSetValRateT(FT_ANIM_TRAX, 5), 26, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 151, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 22), 0, 0, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimStarRodTilt_joint5[228] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 476, 54, 114, -9, -231, -48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -651, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 764, 18, 187, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 766, -5, 214, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 734, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 204, -36, -702, -43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -744, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 140, -216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 670, 24, -229, -226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 784, 228, -311, 27, -859, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1127, 183, -175, -65, -881, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1151, 376, -442, -223, -1028, -472,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1880, 492, -622, -69, -1826, -524,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2137, 217, -581, 79, -2078, -211,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -414, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2333, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2315, 123,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2456, 32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -411, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -448, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2487, 28, -2349, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 2654, 31, -2503, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2691, -2, -454, 75, -2542, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2661, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -298, 115, -2459, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -223, 47, -2437, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -390, -137, -2620, -239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2685, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 2797, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3065, 305, -526, -58, -2959, -367,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -340, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3407, 241, -3355, -282,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3549, 93, -3524, -110,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 3649, 13, -3577, 23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -270, 67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 23, 87,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3663, 14, -3546, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3678, 14, -3502, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3693, 14, 114, 91, -3448, 53,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimStarRodTilt_joint6[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -739, 13,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -531, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -523, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -571, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -775, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -208, 385,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -255, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -420, -335,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -675, -220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1072, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -967, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -799, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, 59,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimStarRodTilt_joint7[106] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 701, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 156, -64, -112, -2, 302, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 181, -70, -22, 158, 337, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 15, -161, 203, 201, 18, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -141, -80, 381, 168, 495, 319,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -145, 24, 541, -1, 658, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -92, 45, 378, -129, 635, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -55, 79, 281, -147, 605, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 145, -21, -63, -8, 662, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 24, -4, -40, -7, 641, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 99, 25, -239, -3, 630, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 412, 35, -97, 14, 33, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 701, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimStarRodTilt_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1335, -671, -2814, 98, 60, -42,
	ftAnimBlock(0, 42),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimStarRodTilt_joint11[44] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -61, -6, 563, 55, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -61, 3, 551, -71, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), -20, 4, -363, -23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, -322, 16, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTSamusAnimStarRodTilt_joint12[144] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 58, -19, -128, 1, -215, 48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 34, 54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -78, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 296, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 477, 157,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 564, -238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 83, 40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 205, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -21, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 174, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 152, -183, 482, 168, 207, -400,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 492, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -192, -203, -235, -262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -255, -28, -317, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -215, -12, -210, 19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 464, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 277, -15,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -234, -18, -197, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -205, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -51, 30,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 262, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -120, -7,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -202, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -214, -1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -22, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 54, 7,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -126, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 58, 3, -128, -2, -215, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimStarRodTilt_joint14[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -595, -65,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -802, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -951, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1095, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1138, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -580, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -544, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -906, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -918, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), -606, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -600, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -596, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimStarRodTilt_joint15[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1521, 5, 1635, 0, -1998, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1532, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), -1477, -42, -2005, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1522, -25, -2053, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1425, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -2326, 14,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1513, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1609, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1429, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -1555, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1556, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -1521, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1609, 0, -2311, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 1635, 0, -2000, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1521, 0, 1635, 0, -1998, 2,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimStarRodTilt_joint17[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 478, -11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 413, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 489, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 886, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 978, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 979, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 965, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), 516, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 500, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 481, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimStarRodTilt_joint19[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1684, -3, -1579, 13, 1566, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), -1721, 40, -1313, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1658, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1597, -109,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1175, -25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1678, 25, -1343, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1788, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1619, -53,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1202, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 1486, 4,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1779, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1669, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1674, -43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1676, 9,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1669, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -1684, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1490, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 1565, 1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1666, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 12), -1582, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1684, 0, -1579, 2, 1566, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimStarRodTilt_joint20[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1831, 0, 1445, -3, 1554, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1447, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1421, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 1855, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1819, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1706, -173, 1422, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1471, -138, 1486, 0, 1481, 133,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1495, 52, 1375, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1689, 189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1860, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1533, 42, 1395, 23, 1864, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 1481, -5, 1644, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 1797, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1796, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 1832, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1475, -5, 1629, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 1445, 0, 1554, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1831, 0, 1445, 0, 1554, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimStarRodTilt_joint22[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 453, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 490, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 547, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 311, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 340, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 677, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 684, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 455, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 453, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTSamusAnimStarRodTilt_joint23[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 145, -5, 193, -10, -214, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 74, 22, -167, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -8, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -22, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 114, 78, 48, 145, -191, -57,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 292, 37, -375, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 268, 153,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 360, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 306, 6, -376, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -487, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 239, -6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 355, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), 222, -9,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -477, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -216, 3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 232, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 145, -1,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 213, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 195, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 145, 0, 193, -1, -214, 1,
	ftAnimEnd(),
	0x0000, 0x0000,
};
