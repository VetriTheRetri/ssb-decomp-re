/* AnimJoint data for relocData file 744 (FTFoxAnimStarRodNeutral) */
/* 2656 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimStarRodNeutral_joint1[48];
extern u16 dFTFoxAnimStarRodNeutral_joint2[48];
extern u16 dFTFoxAnimStarRodNeutral_joint4[60];
extern u16 dFTFoxAnimStarRodNeutral_joint5[144];
extern u16 dFTFoxAnimStarRodNeutral_joint6[56];
extern u16 dFTFoxAnimStarRodNeutral_joint7[10];
extern u16 dFTFoxAnimStarRodNeutral_joint8[62];
extern u16 dFTFoxAnimStarRodNeutral_joint10[10];
extern u16 dFTFoxAnimStarRodNeutral_joint11[164];
extern u16 dFTFoxAnimStarRodNeutral_joint12[64];
extern u16 dFTFoxAnimStarRodNeutral_joint13[78];
extern u16 dFTFoxAnimStarRodNeutral_joint15[10];
extern u16 dFTFoxAnimStarRodNeutral_joint16[108];
extern u16 dFTFoxAnimStarRodNeutral_joint18[44];
extern u16 dFTFoxAnimStarRodNeutral_joint20[104];
extern u16 dFTFoxAnimStarRodNeutral_joint21[82];
extern u16 dFTFoxAnimStarRodNeutral_joint23[44];
extern u16 dFTFoxAnimStarRodNeutral_joint24[88];
extern u16 dFTFoxAnimStarRodNeutral_joint25[20];
extern u16 dFTFoxAnimStarRodNeutral_joint26[32];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTFoxAnimStarRodNeutral_joints[] = {
	(AObjEvent32 *)dFTFoxAnimStarRodNeutral_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTFoxAnimStarRodNeutral_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTFoxAnimStarRodNeutral_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTFoxAnimStarRodNeutral_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTFoxAnimStarRodNeutral_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTFoxAnimStarRodNeutral_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTFoxAnimStarRodNeutral_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTFoxAnimStarRodNeutral_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTFoxAnimStarRodNeutral_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTFoxAnimStarRodNeutral_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTFoxAnimStarRodNeutral_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTFoxAnimStarRodNeutral_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTFoxAnimStarRodNeutral_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTFoxAnimStarRodNeutral_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTFoxAnimStarRodNeutral_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTFoxAnimStarRodNeutral_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTFoxAnimStarRodNeutral_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTFoxAnimStarRodNeutral_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTFoxAnimStarRodNeutral_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTFoxAnimStarRodNeutral_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimStarRodNeutral_joint1[48] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 48, 912, -20,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, -97, 960, 94, -120, -198,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 960, -192, -120, 960,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 3), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 840, -87, 480, 436,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 2), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 0, 21, 840, 32, 480, -222,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 48, 912, -20,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimStarRodNeutral_joint2[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -141, -338, -3,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -89, 13, -357, -4, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -89, 71, -357, 125,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 268, 32, 268, 56,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 268, -22, 268, -33, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -141, -338, -3,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTFoxAnimStarRodNeutral_joint4[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 309, 156, 81,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -77, -268, -106, 0, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 30, -268, 134, 0, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 123, 134, 269, 357, -170, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 268, 64, 446, 37, 178, 103,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 577, 535, 555,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 268, -22, 446, -31, 178, -39,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 309, 156, 81,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTFoxAnimStarRodNeutral_joint5[144] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1498, 716, -1442, 381, -1349, -1102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2214, 422, -1061, 172, -2452, -608,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2344, 47, -1098, 14, -2565, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2310, -64, -1032, 18, -2531, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2214, 214, -1061, 454, -2452, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2740, 30, -124, 25, -2894, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2276, -115, -1010, -498, -2153, 283,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2509, 166, -1121, -89, -2326, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2609, 104, -1189, -31, -2371, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 2862, -22, -1094, 84, -2603, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2827, -328, -957, 197, -2634, 277,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -553, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2205, -213, -2048, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2401, 178, -2251, -177,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2628, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 3080, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -464, 98,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -28, -64,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2585, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2886, -109,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -115, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3107, 26, -165, -49, -2958, -71,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimStarRodNeutral_joint6[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, 311,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -247, -364,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -728, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -304, 293,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -232, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -295, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -546, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -572, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -523, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -649, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -637, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 78,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTFoxAnimStarRodNeutral_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimStarRodNeutral_joint8[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -113, 136, -72,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 119, 58, 415, 69, -14, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 119, -80, 415, -152, -14, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -202, -372, -192, -476, 162, 230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -625, -120, -536, -41, 446, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -1048, 30, -485, 20, 699, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -255, 77, -284, 51, 230, -64,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -113, 136, -72,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTFoxAnimStarRodNeutral_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimStarRodNeutral_joint11[164] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 132, -129, 271, 755, 336, -871,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3, 265, 1027, 426, -534, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 664, 353, 1124, 46, 155, 386,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 709, -330, 1120, -48, 238, -345,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3, -384, 1027, -381, -534, -868,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -59, -115, 358, -195, -1498, -494,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -227, 48, 636, 130, -1523, 151,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 417, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 37, 171, -1196, 246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 114, 3, -1030, 136,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -372, -71,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -499, 86,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 381, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 134, -85,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -414, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 3, 110,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 76, 26, -407, 229,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 216, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -40, 281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 154, 113,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -63, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 87, 17, 269, 62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 14, 54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 253, 20,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 36, 131,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 307, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 78, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 122, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 132, 10, 271, 18, 336, 29,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimStarRodNeutral_joint12[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -594, 200,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -393, 297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -393, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -489, -332,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -672, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -567, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -623, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -637, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 42,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimStarRodNeutral_joint13[78] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 272, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -116, -29, -114, -28, 250, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -116, 39, -114, 20, 250, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 41, 18, -32, -48, 56, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -79, 7, -211, -71, 433, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 70, 120, -318, -20, 338, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 643, 53, -336, 16, -206, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 390, -80, -220, 19, -211, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 81, -43, -200, 24, 169, 23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimStarRodNeutral_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimStarRodNeutral_joint16[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1202, 144, -1385, 67, 1581, -205,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 1724, 52, -1508, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1375, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1378, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1346, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1746, 80, -1682, -76, 1193, -98,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1625, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1103, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1906, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1923, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1635, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1616, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1544, 55,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1104, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1420, 73,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1524, -104,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1254, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1489, 49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1397, 14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1492, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1550, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1202, -51, -1385, 12, 1581, 30,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimStarRodNeutral_joint18[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 354, 209,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 563, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 501, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 563, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 682, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 633, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 628, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 431, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 377, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, -23,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimStarRodNeutral_joint20[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1655, -66, 1482, 116, 1552, 45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1925, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1329, -65, 1740, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1323, 122, 1681, -193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1574, 136, 1783, -163, 1352, -237,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1565, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1595, 4, 1205, -85,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1166, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1618, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1547, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1518, -24,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1173, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1486, 50,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1625, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1643, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1499, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1512, -14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1531, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1655, 11, 1482, -29, 1552, 20,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimStarRodNeutral_joint21[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1963, 81, -1746, 94, 1743, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 2080, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1556, -26, 1756, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1651, -9, 1698, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1376, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1785, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1726, -42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1824, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2092, 11, -1336, 33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1676, -73,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 1965, -1,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1847, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1743, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1735, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1749, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1963, -1, -1746, 3, 1743, 0,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimStarRodNeutral_joint23[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 332, -135,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 95, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 50,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -98,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 320, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 331, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, 0,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTFoxAnimStarRodNeutral_joint24[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1624, -30, 1711, 85, -1835, 77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1679, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1862, -19, -1633, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1796, -200, -1757, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1254, -114,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1578, 34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1772, 64,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1771, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1231, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1579, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1548, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -1704, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1782, -2, -1720, -45,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 1636, -21, -1839, 5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1647, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1695, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1624, -11, 1711, 15, -1835, 4,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimStarRodNeutral_joint25[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 219, 0, 0, -126, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -337, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 395, 16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), 0,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimStarRodNeutral_joint26[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -122, 0, 0, 64, -450,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 317, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -392, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -428, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 430, 16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), -178,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
