/* AnimJoint data for relocData file 1615 (FTCaptainAnimStarRodDash) */
/* 3296 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimStarRodDash_joint1[8];
extern u16 dFTCaptainAnimStarRodDash_joint2[60];
extern u16 dFTCaptainAnimStarRodDash_joint3[36];
extern u16 dFTCaptainAnimStarRodDash_joint5[44];
extern u16 dFTCaptainAnimStarRodDash_joint6[172];
extern u16 dFTCaptainAnimStarRodDash_joint7[80];
extern u16 dFTCaptainAnimStarRodDash_joint8[30];
extern u16 dFTCaptainAnimStarRodDash_joint9[68];
extern u16 dFTCaptainAnimStarRodDash_joint11[8];
extern u16 dFTCaptainAnimStarRodDash_joint12[138];
extern u16 dFTCaptainAnimStarRodDash_joint13[64];
extern u16 dFTCaptainAnimStarRodDash_joint14[38];
extern u16 dFTCaptainAnimStarRodDash_joint15[10];
extern u16 dFTCaptainAnimStarRodDash_joint17[12];
extern u16 dFTCaptainAnimStarRodDash_joint18[194];
extern u16 dFTCaptainAnimStarRodDash_joint20[72];
extern u16 dFTCaptainAnimStarRodDash_joint22[172];
extern u16 dFTCaptainAnimStarRodDash_joint23[150];
extern u16 dFTCaptainAnimStarRodDash_joint25[64];
extern u16 dFTCaptainAnimStarRodDash_joint26[176];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTCaptainAnimStarRodDash_joints[] = {
	(AObjEvent32 *)dFTCaptainAnimStarRodDash_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTCaptainAnimStarRodDash_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTCaptainAnimStarRodDash_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTCaptainAnimStarRodDash_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTCaptainAnimStarRodDash_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTCaptainAnimStarRodDash_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTCaptainAnimStarRodDash_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTCaptainAnimStarRodDash_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTCaptainAnimStarRodDash_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTCaptainAnimStarRodDash_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTCaptainAnimStarRodDash_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTCaptainAnimStarRodDash_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTCaptainAnimStarRodDash_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTCaptainAnimStarRodDash_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTCaptainAnimStarRodDash_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTCaptainAnimStarRodDash_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTCaptainAnimStarRodDash_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTCaptainAnimStarRodDash_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTCaptainAnimStarRodDash_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTCaptainAnimStarRodDash_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTCaptainAnimStarRodDash_joint1[8] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAZ), 0, 2334,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 46), 4547,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTCaptainAnimStarRodDash_joint2[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRate(FT_ANIM_TRAY), 1503, 18,
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 4), -227, -1, 277, 1, -85, -1, 1041, 2,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 4), -2, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 21), -227, 1, 277, -1, -85, 0, 964, 33, 98, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 11), -2,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 10), -2,
	ftAnimSetValT(FT_ANIM_TRAX, 21), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ, 21), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 12), 1312, 634,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 9), 1600,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTCaptainAnimStarRodDash_joint3[36] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 242, 0, 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 237, 0, 2, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 46), 4, -76, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), 237, 0, 2, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), 0, 107, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTCaptainAnimStarRodDash_joint5[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 92, 230, -11,
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 35, -5, 24,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 46), 0, -31, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 30, 0, 535, 0, 159, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), 30, 0, 535, 0, 159, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 306, 1, -272, -25, -43, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 189, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTCaptainAnimStarRodDash_joint6[172] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -124, -64, -278, 89, 560, -21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 526, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -189, -47, -188, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -218, -35, -155, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -260, -111, -150, -39, 495, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -441, -95, -234, -40, 616, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -451, -8, -231, 2, 616, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), 581, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -458, -6, -229, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 18), -449, -2, -200, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -452, -18, -203, -11, 576, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 349, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -545, 0, -353, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -530, 24, -427, -61,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -288, 112, -526, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 293, -63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -10, -132,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -161, 127, -525, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 57, 80,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -141, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -144, -116,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -425, -42,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 127, 63,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 251, -8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -461, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -523, -2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -83, 52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -5, 21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 243, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 239, -3, 5, 11, -524, 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTCaptainAnimStarRodDash_joint7[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1016, -58,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1074, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1192, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1293, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1301, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -1314, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1315, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1306, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1301, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1149, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1008, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -799, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -804, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -927, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -948, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -846, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -821, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -804, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -797, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTCaptainAnimStarRodDash_joint8[30] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -30, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 46), 424, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -782, 8, -90,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), -685, 8, -90,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), -781, -89, -388,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTCaptainAnimStarRodDash_joint9[68] = {
	ftAnimSetValRate(FT_ANIM_ROTY), 0, -256,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1775, 4, -882, -2, -1605, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), 1603, -26, -848, 7, -1651, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -44, -402, -671, 81, 145, 447,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -6, 12, -524, 115, 136, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -8, 10, -324, 98, 174, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 67, -9, 167, 49, 34, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -95, -6, 121, -16, 25, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTCaptainAnimStarRodDash_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 46),
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTCaptainAnimStarRodDash_joint12[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1352, -592, 1303, 9, -2041, -912,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1944, -281, 1313, -43, -2954, -487,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1914, 18, 1217, -149, -3016, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1907, -277, 1014, -299, -2969, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2469, -280, 617, -200, -3185, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2468, 0, 614, -2, -3185, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2469, 0, 612, -1, -3185, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 617, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 18), -2476, 5, -3192, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2469, -16, -3185, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2508, -29, 606, -18, -3077, 103,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 206, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2528, -15, -2979, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), -2691, -49, -2678, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2746, -55, 167, -40, -2651, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -2604, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -3313, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 62, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 71, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 117, 22,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2615, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3346, -33, 144, 26, -2624, -9,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTCaptainAnimStarRodDash_joint13[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -853, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -843, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -652, 177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -489, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -265, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -271, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -274, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -259, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -265, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -676, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -754, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -1080, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1075, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1028, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1024, 3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTCaptainAnimStarRodDash_joint14[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, 275, 62,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 131, -78,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 91, 351,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -146, 30, 220,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 77, 737,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), 0, 77, 737,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), 270, 275, 62,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTCaptainAnimStarRodDash_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	ftAnimBlock(0, 46),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimStarRodDash_joint17[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 46), 0, 14, 0, -3,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTCaptainAnimStarRodDash_joint18[194] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1576, -135, 1689, 130, 672, 235,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1876, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1712, -62, 907, 272,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1701, -109, 1217, 555,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1930, -119, 1726, -77, 2018, 447,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1940, -5, 1720, 0, 2113, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -1929, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1725, 5, 2113, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 1820, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2114, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), 2170, 1,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1922, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1841, 12,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2168, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1828, 54, 1825, 29, 2160, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1732, 123, 1878, 32, 1974, -231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1582, 127, 1889, -17, 1697, -243,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -1405, 61, 1761, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1487, -201,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1106, -187,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1356, 0, 1641, -100,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1468, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1561, -52, 919, -158,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 759, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1536, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1494, 8, 1511, -42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1356, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1450, -40, 803, 61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1473, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 963, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1353, 0, 1010, 42,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -1405, -11, 1135, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1491, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 1533, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1417, -11, 1538, 4, 1135, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTCaptainAnimStarRodDash_joint20[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 905, 4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 909, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 865, -454,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -430,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 4, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 698, 321,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 948, 216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1250, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1252, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 698, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 634, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 447, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 445, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTCaptainAnimStarRodDash_joint22[172] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -29, 43, 2, 255, 22, -307,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 13, -59, 257, 157, -284, -274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -149, -178, 316, -81, -527, -105,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -130, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -343, -32, -496, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -213, 65, -441, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -434, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -213, 0, -146, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -133, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -214, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -208, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -431, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -433, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -130, 4, -441, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -661, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -60, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -197, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -197, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -154, 49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -4, 25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -632, 43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -366, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -61, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -41, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 7, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -9, -52,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -236, 123,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 23, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -85, -59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -147, 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 56, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 82, -3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -142, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -129, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -126, 2, -42, 0, 80, -2,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTCaptainAnimStarRodDash_joint23[150] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1632, 111, 1554, -49, 1615, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1521, 46, 1505, -26, 1611, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1539, -107, 1501, -45, 1337, -379,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1735, -40, 1415, 16, 851, -251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1620, 55, 1534, 57, 834, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 796, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1624, -3, 1530, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1628, -3, 1528, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 18), -1620, 1, 1535, 0,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 797, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 824, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1619, 20, 1536, 11, 828, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1518, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1668, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 983, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1062, 76,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1395, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1501, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1449, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1654, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1540, -8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1419, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1532, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1447, 1, 1532, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -1448, 0, 1500, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1448, 0, 1498, -2, 1531, 0,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTCaptainAnimStarRodDash_joint25[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 640, 54,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 695, 239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1120, 323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1342, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1093, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1088, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1085, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 1188, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1187, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1140, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1105, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 801, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 735, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 540, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 541, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTCaptainAnimStarRodDash_joint26[176] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 29, 181, 6, 33, 309, -157,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 101, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 210, 297, 151, -210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 624, 30, -111, -200,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -285, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 270, -311,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1, -133, 103, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 114, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 5, 1, -284, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 8, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -331, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -348, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -450, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 118, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 160, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -107, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -562, -85,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -668, -35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 166, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 204, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -110, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 106, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -706, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -537, 58,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 217, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 311, 4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -480, 49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -386, 29,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 101, 1, 315, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 157, 9, 362, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -352, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -290, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 161, 3, 365, 3, -279, 10,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
