/* AnimJoint data for relocData file 707 (FTFoxAnimThrowB) */
/* 3680 bytes: 112-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimThrowB_joint1[20];
extern u16 dFTFoxAnimThrowB_joint2[44];
extern u16 dFTFoxAnimThrowB_joint3[40];
extern u16 dFTFoxAnimThrowB_joint5[44];
extern u16 dFTFoxAnimThrowB_joint6[180];
extern u16 dFTFoxAnimThrowB_joint7[72];
extern u16 dFTFoxAnimThrowB_joint8[10];
extern u16 dFTFoxAnimThrowB_joint9[60];
extern u16 dFTFoxAnimThrowB_joint11[10];
extern u16 dFTFoxAnimThrowB_joint12[148];
extern u16 dFTFoxAnimThrowB_joint13[62];
extern u16 dFTFoxAnimThrowB_joint14[76];
extern u16 dFTFoxAnimThrowB_joint16[10];
extern u16 dFTFoxAnimThrowB_joint17[160];
extern u16 dFTFoxAnimThrowB_joint19[80];
extern u16 dFTFoxAnimThrowB_joint21[154];
extern u16 dFTFoxAnimThrowB_joint22[146];
extern u16 dFTFoxAnimThrowB_joint24[78];
extern u16 dFTFoxAnimThrowB_joint25[172];
extern u16 dFTFoxAnimThrowB_joint26[44];
extern u16 dFTFoxAnimThrowB_joint27[26];
extern u16 dFTFoxAnimThrowB_joint28[148];

/* Joint pointer table (28 entries, 112 bytes) */
AObjEvent32 * dFTFoxAnimThrowB_joints[] = {
	(AObjEvent32 *)dFTFoxAnimThrowB_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTFoxAnimThrowB_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTFoxAnimThrowB_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTFoxAnimThrowB_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTFoxAnimThrowB_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTFoxAnimThrowB_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTFoxAnimThrowB_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTFoxAnimThrowB_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTFoxAnimThrowB_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTFoxAnimThrowB_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTFoxAnimThrowB_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTFoxAnimThrowB_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTFoxAnimThrowB_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTFoxAnimThrowB_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTFoxAnimThrowB_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTFoxAnimThrowB_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTFoxAnimThrowB_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTFoxAnimThrowB_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTFoxAnimThrowB_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTFoxAnimThrowB_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTFoxAnimThrowB_joint27, /* [26] joint 27 */
	(AObjEvent32 *)dFTFoxAnimThrowB_joint28, /* [27] joint 28 */
};

/* Joint 1 */
u16 dFTFoxAnimThrowB_joint1[20] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 7), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), -240, -3199,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), -1200,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 30), -1200,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTFoxAnimThrowB_joint2[44] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 900, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 22), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 480, -960, 120, 80,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 180, 274, 60, -274,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 720, -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 720, -120,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 600, 70, -180, 36,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 18), 49, 912, -20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTFoxAnimThrowB_joint3[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -268, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 18), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -357, -201, 0, 26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -2010, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), -2010, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -2859, -61, 0, -15, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), -3358, -338, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTFoxAnimThrowB_joint5[44] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 89, 402, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 18), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 268, 63, 0, -57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 536, -38,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 11), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 536, 14, 0, 7, 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 309, 156, 81,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTFoxAnimThrowB_joint6[180] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1244, -424, -1232, 181, -1091, 229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 819, -150, -1051, 669, -862, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 942, -73, 106, 566, -1150, -119,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1039, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 672, -160, 81, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 621, -54, 44, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 57, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 414, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -976, 83,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -550, 138,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 66, -232,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -617, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 344, -225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -36, 94, -439, -366,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 533, 284, -8, 304, -1283, -422,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 533, 0, -8, 0, -1283, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1283, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 533, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 440, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), -153, -20,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1243, 68,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -811, 66,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 425, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 212, -55,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -747, 65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -272, 46,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 158, -50,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -103, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -228, 85,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 207, 51,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -165, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -165, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 245, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -109, -5, -165, 0, 259, 13,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimThrowB_joint7[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -895, -286,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1181, 447,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 587,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -243, -449,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -906, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 449,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -440, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -507, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -546, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -559, -13,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTFoxAnimThrowB_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTFoxAnimThrowB_joint9[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -134, 17,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -178, 25, 0, 19, 0, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 178, 142,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 536, -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -357, -491,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -446,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), -446,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -268, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 178, 8, 0, 7, 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), -113, 136, -72,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimThrowB_joint11[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimThrowB_joint12[148] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2394, 28, 174, -155, 2388, -95,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -87, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 2807, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 2138, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2194, 88,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2618, 149,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -88, 228,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 611, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2836, 222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3251, -76, 2784, -342,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2683, -284, 8, -301, 1933, -425,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2683, 8, 1933,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1933, 23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2683, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 2779, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 115, 19,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1979, 75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2326, 61,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2791, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 3060, 82,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2391, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 2849, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 135, 44, 2905, 120,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 3218, 114,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 271, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3135, 69,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 3343, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3320, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 3543, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3349, 6, 272, 1, 3553, 10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimThrowB_joint13[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -235, 235,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 117,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -214, -454,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -909, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 450,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -236, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -354, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -587, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTFoxAnimThrowB_joint14[76] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 272, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 0, -12, 0, 25,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 3), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -89, 0, 178, 59,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 4), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 0, 29, 357, -59,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 2), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 1), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 8), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 11), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 8), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 0, 17,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 3), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 0, 0, 89, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 2), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 17), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 17), 0,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimThrowB_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTFoxAnimThrowB_joint17[160] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1825, 82, -1409, -2, -1813, -60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1584, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1577, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1739, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1529, 188,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1194, 253,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1596, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1614, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -856, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1663, -40, -1375, -627,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1608, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2110, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1532, 288,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1532, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1530, 45,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1607, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1608, -12,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1441, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1445, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1633, -70, -1589, 132, -1446, -554,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1825, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1348, 87, -2554, -569,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1414, -21, -2586, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -1245, 3, -1990, 85,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1837, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -2034, 14,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1247, -6, -1909, 75,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -1396, -7, -1585, 10,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2018, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1987, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1985, 2, -1401, -4, -1579, 5,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTFoxAnimThrowB_joint19[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 427, 214,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1262, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1318, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 986, -203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 825, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1123, -409,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -558,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 448, 436,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 878, 495,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1438, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 695, -359,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 719, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 735, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 337, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 328, -9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTFoxAnimThrowB_joint21[154] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1592, -23, 1572, -6, -1699, -123,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1626, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 1606, 0, -2195, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1616, 40, -1971, 215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1686, -11, -1765, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1592, 9, -2067, -191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1706, 39, -2147, 380,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1671, -17, 1667, 21, -1306, 420,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1659, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1683, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1305, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1305, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1303, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1375, -188,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1936, -174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1633, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1690, 107, 1574, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1899, 84, 1404, -78, -2029, 231,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1409, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1859, -24, -1474, 259,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1764, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1510, -34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -1661, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1394, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1397, 36,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1723, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1610, -2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1433, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1506, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1609, -1, 1511, 5, -1658, 3,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTFoxAnimThrowB_joint22[146] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1224, -59, -1746, -39, -1551, -271,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1389, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1785, 47, -1823, -506,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1650, 91, -2565, -341,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1595, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1599, -121, -2505, 109,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1606, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2346, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1941, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1597, 12, -1594, -6, -1939, -85,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1600, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -1421, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2113, 204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1530, 291,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -1530,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -1530,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1530, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1602, -31, -1492, -71,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1762, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1673, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1705, -172,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2236, -72,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1323, 37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1371, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2164, 72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -1415, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1752, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1734, 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1369, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -1262, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1261, 1, -1731, 2, -1409, 5,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTFoxAnimThrowB_joint24[78] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 396, 531,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1070, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 570, -288,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 809, 190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 999, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 842, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1121, -421,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -560,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 75, 373,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 746, 438,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 952, 208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1163, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1057, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 841, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 787, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 302, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 290, -12,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimThrowB_joint25[172] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1571, 215, 1667, -157, -1901, -329,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1379, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1356, -10, -2230, -284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1593, -163, -2469, 69,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1652, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1519, 88, -2090, 239,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1543, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1990, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -2069, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2163, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1668, -36, -1933, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1677, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2144, 315,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1526, -9, -1301, 421,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1526, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1301, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1301, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1710, -6, 1578, 71, -1551, -363,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -1647, 72, 1672, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2029, -286,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2124, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1546, -65, 1359, -159, -2233, -64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1347, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2160, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1778, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1721, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -1575, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1354, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1696, 5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2130, 31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1824, 12,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1569, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1565, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1563, 1, 1699, 2, -1817, 6,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimThrowB_joint26[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 410, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -146, 5, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 433, 288,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 19), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1009, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 188, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), 14, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -555, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 14), 0, 0,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTFoxAnimThrowB_joint27[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -237,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -122, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 189, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 868, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 305, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -286, -28,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 7), -178,
	ftAnimEnd(),
	0x0000,
};

/* Joint 28 */
u16 dFTFoxAnimThrowB_joint28[148] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 60, 600,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 1608,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 25), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 389, 114, 0, 0, 618, 635, 303, -974,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 804, 103, 0, 0, 616, -131, -252, -1712,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 804, 89, 0, 0, 552, -2153, -552, -1556,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 982, 134, 0, 0, 77, -291, -641, -1148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1072, 27, 0, 0, 480, 1232, -840, -848,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1064, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 540, -960,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1036, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 480, -840,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1021, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 540, -960,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 1072, 117, 0, 0, 480, 73, -840, -1066,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 1608, 159, 0, -4, 586, -184, -1626, -1601,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 2191, 114, -3, -14, 318, -789, -2241, -1424,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 2412, 14, 0, 0, -12, 1, -104, 150, -2873, -1044,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 600, -640, -4200, -960,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX, 12), 2412, 0, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
