/* AnimJoint data for relocData file 1564 (FTCaptainAnimDownBackD) */
/* 3552 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimDownBackD_joint1[12];
extern u16 dFTCaptainAnimDownBackD_joint2[96];
extern u16 dFTCaptainAnimDownBackD_joint3[16];
extern u16 dFTCaptainAnimDownBackD_joint5[44];
extern u16 dFTCaptainAnimDownBackD_joint6[198];
extern u16 dFTCaptainAnimDownBackD_joint7[88];
extern u16 dFTCaptainAnimDownBackD_joint8[70];
extern u16 dFTCaptainAnimDownBackD_joint9[26];
extern u16 dFTCaptainAnimDownBackD_joint11[20];
extern u16 dFTCaptainAnimDownBackD_joint12[196];
extern u16 dFTCaptainAnimDownBackD_joint13[88];
extern u16 dFTCaptainAnimDownBackD_joint14[10];
extern u16 dFTCaptainAnimDownBackD_joint15[8];
extern u16 dFTCaptainAnimDownBackD_joint17[42];
extern u16 dFTCaptainAnimDownBackD_joint18[178];
extern u16 dFTCaptainAnimDownBackD_joint20[64];
extern u16 dFTCaptainAnimDownBackD_joint22[182];
extern u16 dFTCaptainAnimDownBackD_joint23[146];
extern u16 dFTCaptainAnimDownBackD_joint25[64];
extern u16 dFTCaptainAnimDownBackD_joint26[176];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTCaptainAnimDownBackD_joints[] = {
	(AObjEvent32 *)dFTCaptainAnimDownBackD_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTCaptainAnimDownBackD_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTCaptainAnimDownBackD_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTCaptainAnimDownBackD_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTCaptainAnimDownBackD_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTCaptainAnimDownBackD_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTCaptainAnimDownBackD_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTCaptainAnimDownBackD_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTCaptainAnimDownBackD_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTCaptainAnimDownBackD_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTCaptainAnimDownBackD_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTCaptainAnimDownBackD_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTCaptainAnimDownBackD_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTCaptainAnimDownBackD_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTCaptainAnimDownBackD_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTCaptainAnimDownBackD_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTCaptainAnimDownBackD_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTCaptainAnimDownBackD_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTCaptainAnimDownBackD_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTCaptainAnimDownBackD_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTCaptainAnimDownBackD_joint1[12] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 28), -4200,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 8), -4200,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimDownBackD_joint2[96] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 697, 268, -321, 23, 200, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 536, -140, 0, -10, 0, 12, 17, -4, 724, 171, -23, 1,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 413, -427, -23, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -2814, -121,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 5), 17,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), 250, 231,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 8), 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 3), -23,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 645, 731,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), -23, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), -23, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 17, 1, 936, 693,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), -23,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), 1078, -57,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 5), -23, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 3), 17,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 17, -11, 900, 283,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), -3216, 0, 0, 0, 1600, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTCaptainAnimDownBackD_joint3[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 36), 107, 0, 4, -76, 9,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimDownBackD_joint5[44] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -158, -45, 44, 0, -31, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 187, 22, 0, 1, 0, -1, 1, 0, -8, 3, 63, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 402, 0, 0, 0, -20, -9, 134, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 189, 0, 0, 0, -31, 47,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimDownBackD_joint6[198] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2034, -312, 293, -177, -1195, 246,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -77, -180, -750, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2347, -236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2507, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2561, -40, -245, -101, -651, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2587, -12, -280, 27, -616, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2596, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -190, 68, -645, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -133, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -638, 24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2614, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -2928, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -109, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -135, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -610, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -551, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -122, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -54, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2966, -37, -79, -31, -565, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -936, -102,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -349, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -3025, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2980, 53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2865, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1037, -90,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1017, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -352, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -374, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2839, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2752, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2709, 24, -402, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -304, 86,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -2959, -28,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -914, 107,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -562, 43,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -207, 96,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -2, 24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2978, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2983, 0, -531, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2977, 5, 5, 8, -524, 7,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTCaptainAnimDownBackD_joint7[88] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -522, -96,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -619, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -734, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -685, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -450, 282,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -120, 222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -237, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -318, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -605, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -680, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -707, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -628, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -409, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -443, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -798, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -847, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -808, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -797, 10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTCaptainAnimDownBackD_joint8[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 851, 427, 126, -23, 41, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 855, 12, -47, -222, 61, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 876, -150, -318, -134, -280, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 554, -291, -316, 6, -281, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 293, -167, -306, -19, -272, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 219, -32, -356, -19, -129, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 195, -33, -364, 8, -29, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 28), -781, -89, -388,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTCaptainAnimDownBackD_joint9[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 268, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 15), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 187, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 402,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), 187, -19, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTCaptainAnimDownBackD_joint11[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 0, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), -223,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTCaptainAnimDownBackD_joint12[196] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 71, -16, -62, 26, -994, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -901, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -58, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 26, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 95, 58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 163, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -903, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -96, -24, -898, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -140, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -808, 72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -638, 16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -189, -56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -540, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 171, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 148, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 118, -4, -618, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 162, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -724, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -508, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -635, -74,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 185, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 341, 14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -771, -53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -980, -81,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -717, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -808, 50, 350, -13, -1063, 50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 159, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -616, 170, -879, 162,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -250, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -737, 114,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -611, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 82, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -7, 3, -639, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 89, 64, -399, 213,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 139, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -211, 36, -212, 193,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -138, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 214, 225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 146, 2, 437, 189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -129, 9, 144, -2, 592, 154,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTCaptainAnimDownBackD_joint13[88] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -338, -11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -299, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -187, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -125, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -279, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -478, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -513, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -563, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -554, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -630, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -657, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -670, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -648, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -618, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -547, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -424, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -184, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -637, -345,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -875, -200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1121, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1024, 97,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTCaptainAnimDownBackD_joint14[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -564, 159, -21,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 36), 270, 275, 62,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTCaptainAnimDownBackD_joint15[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1538, -1003, 119,
	ftAnimBlock(0, 36),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTCaptainAnimDownBackD_joint17[42] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), -606, 0, 409, -96,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -549, 0, -322, -12, 267, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -609, 1, -176, 10, 226, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), -510, 29, -82, 5, -10, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), 0, 1, 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 9), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTCaptainAnimDownBackD_joint18[178] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1931, -7, 1640, -84, -1753, -135,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1807, -191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1555, -63, -1889, -195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1513, 148, -2143, -286,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2771, -245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1540, -116, 1851, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1573, 11, 1739, -86,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1663, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1563, -4, -2951, -116,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1734, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3004, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3028, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2841, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1658, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1688, 9,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2791, 40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2867, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1694, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1661, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1739, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1547, -43,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2909, -37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2947, 22,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1679, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1730, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1501, -5, 1759, -14, -2920, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1536, 36, 1701, -55, -2822, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1574, 45, 1648, -50, -2724, 101,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 1542, -2, -2094, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1627, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1648, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1746, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1765, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1783, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1799, 16, 1538, -4, -2081, 13,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTCaptainAnimDownBackD_joint20[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 182, 270,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 453, 304,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 791, 302,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1196, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1218, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1263, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1275, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1235, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1223, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 928, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 873, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 819, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 776, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 464, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 445, -18,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTCaptainAnimDownBackD_joint22[182] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -592, -230, -106, 3, 632, -58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -73, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -823, 5, 574, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -582, 409, 333, -343,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4, 238, 17, 70, -113, -340,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 95, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -106, -154, -347, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -313, -137, -417, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -380, -44, -437, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -299, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -379, 26,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 101, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 177, -3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -286, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -130, 43,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -349, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -39, 58,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -82, 51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 33, 74,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 173, -10, 18, 91,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 53, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 120, 19, 143, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 72, -47, 129, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 15, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 26, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -36, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -51, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -103, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 46, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -28, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 22, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 73, 13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -110, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -117, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -126, -9, -42, -13, 80, 6,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTCaptainAnimDownBackD_joint23[146] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 364, -16, 6, 78, -333, -66,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 220, -106,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 250, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -400, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -572, -219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -839, -282,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 90, -131, -1137, -232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -42, -71, 220, -35, -1304, -97,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 95, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -53, -10, -1332, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1137, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -98, 4,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 91, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 100, -4,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1119, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -982, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 96, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 79, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -94, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -15, 30,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 80, 19, -949, 103,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 145, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -775, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -611, 148,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -100, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 16, 31, 159, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 155, 5, 112, -3,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -83, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 160, 4, 110, -1, -76, 6,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTCaptainAnimDownBackD_joint25[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 787, 108,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 895, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1055, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1190, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1240, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1225, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1219, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1242, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1242, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1246, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1243, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 913, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 828, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 559, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 541, -18,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTCaptainAnimDownBackD_joint26[176] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1050, 8, 1986, 5, 1913, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1979, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1128, 150, 1763, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1360, 240, 1553, -218,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1772, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1895, -85, 1327, -171,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1758, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1211, -76,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1154, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1807, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1652, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1718, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1458, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1147, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1196, -7,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1626, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1440, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1411, -47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1135, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1187, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1091, -7,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1448, 68, 1121, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1183, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1577, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1667, 71, 1084, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1757, 34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1192, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1204, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1249, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1789, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1775, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1230, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1318, 14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1770, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1767, -2, 1244, -5, 1325, 7,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
