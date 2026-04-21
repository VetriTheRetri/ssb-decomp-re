/* AnimJoint data for relocData file 1764 (FTNessAnimStarRodNeutral) */
/* 3248 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimStarRodNeutral_joint1[68];
extern u16 dFTNessAnimStarRodNeutral_joint2[68];
extern u16 dFTNessAnimStarRodNeutral_joint4[80];
extern u16 dFTNessAnimStarRodNeutral_joint5[146];
extern u16 dFTNessAnimStarRodNeutral_joint6[56];
extern u16 dFTNessAnimStarRodNeutral_joint7[46];
extern u16 dFTNessAnimStarRodNeutral_joint8[98];
extern u16 dFTNessAnimStarRodNeutral_joint10[10];
extern u16 dFTNessAnimStarRodNeutral_joint11[182];
extern u16 dFTNessAnimStarRodNeutral_joint12[78];
extern u16 dFTNessAnimStarRodNeutral_joint13[102];
extern u16 dFTNessAnimStarRodNeutral_joint15[10];
extern u16 dFTNessAnimStarRodNeutral_joint16[116];
extern u16 dFTNessAnimStarRodNeutral_joint18[48];
extern u16 dFTNessAnimStarRodNeutral_joint19[88];
extern u16 dFTNessAnimStarRodNeutral_joint21[62];
extern u16 dFTNessAnimStarRodNeutral_joint22[108];
extern u16 dFTNessAnimStarRodNeutral_joint24[60];
extern u16 dFTNessAnimStarRodNeutral_joint25[112];
extern u16 dFTNessAnimStarRodNeutral_joint26[34];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTNessAnimStarRodNeutral_joints[] = {
	(u32)dFTNessAnimStarRodNeutral_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimStarRodNeutral_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimStarRodNeutral_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTNessAnimStarRodNeutral_joint5, /* [4] joint 5 */
	(u32)dFTNessAnimStarRodNeutral_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimStarRodNeutral_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimStarRodNeutral_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimStarRodNeutral_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTNessAnimStarRodNeutral_joint11, /* [10] joint 11 */
	(u32)dFTNessAnimStarRodNeutral_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimStarRodNeutral_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimStarRodNeutral_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTNessAnimStarRodNeutral_joint16, /* [15] joint 16 */
	(u32)dFTNessAnimStarRodNeutral_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTNessAnimStarRodNeutral_joint19, /* [18] joint 19 */
	(u32)dFTNessAnimStarRodNeutral_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTNessAnimStarRodNeutral_joint22, /* [21] joint 22 */
	(u32)dFTNessAnimStarRodNeutral_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTNessAnimStarRodNeutral_joint25, /* [24] joint 25 */
	(u32)dFTNessAnimStarRodNeutral_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTNessAnimStarRodNeutral_joint1[68] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 528, -24,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 482, -191, -112, -383,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 1), 4,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 4, 2, 480, 178, -120, 2,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 5, 3, 550, 10, 24, 679,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 6, 1, 412, -7, 212, 6,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 408, -3, 161, -107,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 3), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 5), 6, -1,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 10), 4, 528,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), 84, -275,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 6), -24,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTNessAnimStarRodNeutral_joint2[68] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 28, -360, 8,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), -360, 14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 28, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 28, 0, -360, 14, 8, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 23, 0, -46, 0, 0, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -48, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 23, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 23, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 3, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -48, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -71, 0, -188, -31,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 28, -360, 8,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTNessAnimStarRodNeutral_joint4[80] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -260, -130, -489, -122, 155, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -260, 94, -489, 98, 155, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -72, 167, 122, 502, -133, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 166, 66, 514, 0, 9, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 215, 8, 476, -6, 142, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 476, -5, 143, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 215, -1, 476, -5, 142, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 203, -21, 287, -47, 0, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTNessAnimStarRodNeutral_joint5[146] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2806, 25, -261, -260, -2801, -227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2831, 13, -521, -131, -3028, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2833, -96, -524, -14, -3022, 102,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 2189, -118, -2339, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -545, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -504, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -473, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2134, -27, -2266, 38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2135, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -2256, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2255, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2260, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2135, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2135, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -476, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -409, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2134, 51, -2266, -42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2722, -183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 2471, 245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2727, 210,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2917, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2883, -99,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2870, 35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2897, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2814, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -357, 49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -275, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2835, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2810, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2806, -7, -261, 13, -2801, 9,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimStarRodNeutral_joint6[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -473, -157,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -631, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -631, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -710, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -670, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -638, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -635, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -641, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -523, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -379, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -336, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -461, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, -12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTNessAnimStarRodNeutral_joint7[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, -175, 0, -17, 0, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -703, -47, -71, -17, 51, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -745, -4, -69, 0, 50, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -745, 41, -69, 3, 50, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimStarRodNeutral_joint8[98] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -10, 0, 364, 0, -32, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -603, -296, 919, 277, -536, -251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -603, 239, 919, -383, -536, 297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -123, 250, 153, -612, 57, 300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -102, 48, -305, -177, 63, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 21, 4, -379, 0, 87, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 21, -15, -379, -6, 87, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -69, -13, -417, 3, 71, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -48, 4, -359, 40, 75, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -177, 74, 64, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 11, 90, 21, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 364, 0, -32, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTNessAnimStarRodNeutral_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimStarRodNeutral_joint11[182] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -415, -103, 569, -492, -119, -700,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -519, -51, 77, -244, -820, -349,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -519, 490, 81, 149, -817, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 460, 287, 376, 258, -886, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 55, -762, 597, 429, -1141, -236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1064, -1000, 1235, 283, -1358, -409,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1945, -438, 1163, -36, -1961, -298,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1160, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1941, 2, -1955, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1941, 0, -1956, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1942, -2, 1161, -68, -1956, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1946, -187, 1023, -113, -2041, -287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2317, -330, 933, -69, -2531, -411,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 913, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2607, -415, -2864, -457,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3149, -396, -3446, -433,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3401, -147, -3731, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3444, 7, 928, -10, -3785, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 839, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3387, 319, -3698, 362,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -2213, 355, -2414, 404,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 908, 66,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 978, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2093, 93, -2251, 166,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -2020, -5, -1749, 43,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 976, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1024, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2024, -4, 1038, 14, -1727, 21,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimStarRodNeutral_joint12[78] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, 558,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -466, -175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -360, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -751, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 371,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -160, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -247, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -392, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -731, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -711, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -426, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -461, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -559, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 1,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimStarRodNeutral_joint13[102] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 90, 54, 126,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 896, 402, 257, 101, 2586, 1229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 896, -618, 257, -368, 2586, 616,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -341, -553, -479, -291, 3819, -1116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -210, 345, -326, 124, 352, -1880,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 350, 373, -230, 19, 58, -237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 536, 66, -310, -28, -122, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 483, -17, -287, -6, -30, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 483, -33, -287, -7, -30, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 382, 72, -489, -16, 301, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 701, 0, -337, 29, 121, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 403, -50, -166, 32, 40, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 90, 54, 126,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTNessAnimStarRodNeutral_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimStarRodNeutral_joint16[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -368, 53, -285, -68, -334, -132,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -314, 11, -356, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -467, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -472, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -290, 52, -247, 113, -396, 65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -72, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -130, 80, -341, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -86, 42, -554, -198,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -287, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -20, 28, -738, -93,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -55, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -740, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -743, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -586, 64,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -88, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -232, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -236, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -361, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -518, 65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -339, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -293, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -288, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -368, -7, -285, 2, -334, 4,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimStarRodNeutral_joint18[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 456, 14,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 460, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 367, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 643, 206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 777, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 771, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 680, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 679, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 467, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 456, -11,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTNessAnimStarRodNeutral_joint19[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 33, 27, 15, 2, -5, 114,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -71, -43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 30, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 130, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 105, -59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -215, -43,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -113, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 66, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 20, -2, -227, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 157, 28, -122, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 178, 6, 98, 19, -99, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 22, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 72, -18, -31, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 53, -15, -20, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 34, -3, -7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 33, -1, 15, -7, -5, 1,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimStarRodNeutral_joint21[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -67, 60, -8,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -205, -62, 103, 43, 1, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -240, 23, 147, -7, 7, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -136, -73, 79, -30, -38, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -532, -9, 27, -10, -58, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -553, 9, 27, -1, -58, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -427, 31, 8, 1, -18, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -87, 45, -7,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimStarRodNeutral_joint22[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1462, -20, 1454, 94, 1373, -209,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1551, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1471, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1163, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1160, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1486, -55, 1352, 300,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1465, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1593, 54, 1760, 189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1580, -5, 1731, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1583, 1, 1476, 5, 1754, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1595, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 1475, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 1475, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1467, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1435, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1590, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1382, -18,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1443, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1453, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1466, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1462, -3, 1454, 0, 1373, -9,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimStarRodNeutral_joint24[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 424, 249,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 673, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 674, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 482, -333,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 368, 275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 557, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 570, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 587, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 731, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 745, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 500, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 447, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, -23,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTNessAnimStarRodNeutral_joint25[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 102, -33, 27, -6, -200, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 42, -50, 176, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -234, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -223, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -93, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -25, -1, 336, 127, -284, -95,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 414, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 39, 34, -284, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 43, 6, -289, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -303, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 109, -13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 406, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 281, -52,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -323, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -244, 33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 228, -48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 37, -18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 95, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 98, 5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -213, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 102, 4, 27, -9, -200, 13,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimStarRodNeutral_joint26[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 56,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -35, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -35, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 279, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 279, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 7), 56,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000,
};
