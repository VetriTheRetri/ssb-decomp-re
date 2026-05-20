/* AnimJoint data for relocData file 1914 (FTYoshiAnimStarRodNeutral) */
/* 2496 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimStarRodNeutral_joint1[10];
extern u16 dFTYoshiAnimStarRodNeutral_joint2[78];
extern u16 dFTYoshiAnimStarRodNeutral_joint3[54];
extern u16 dFTYoshiAnimStarRodNeutral_joint4[88];
extern u16 dFTYoshiAnimStarRodNeutral_joint6[20];
extern u16 dFTYoshiAnimStarRodNeutral_joint7[142];
extern u16 dFTYoshiAnimStarRodNeutral_joint10[56];
extern u16 dFTYoshiAnimStarRodNeutral_joint11[144];
extern u16 dFTYoshiAnimStarRodNeutral_joint12[72];
extern u16 dFTYoshiAnimStarRodNeutral_joint13[30];
extern u16 dFTYoshiAnimStarRodNeutral_joint14[62];
extern u16 dFTYoshiAnimStarRodNeutral_joint15[20];
extern u16 dFTYoshiAnimStarRodNeutral_joint17[24];
extern u16 dFTYoshiAnimStarRodNeutral_joint18[70];
extern u16 dFTYoshiAnimStarRodNeutral_joint20[48];
extern u16 dFTYoshiAnimStarRodNeutral_joint22[82];
extern u16 dFTYoshiAnimStarRodNeutral_joint23[80];
extern u16 dFTYoshiAnimStarRodNeutral_joint25[40];
extern u16 dFTYoshiAnimStarRodNeutral_joint26[76];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTYoshiAnimStarRodNeutral_joints[] = {
	(AObjEvent32 *)dFTYoshiAnimStarRodNeutral_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTYoshiAnimStarRodNeutral_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTYoshiAnimStarRodNeutral_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTYoshiAnimStarRodNeutral_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTYoshiAnimStarRodNeutral_joint6, /* [4] joint 6 */
	NULL, /* [5] NULL */
	(AObjEvent32 *)dFTYoshiAnimStarRodNeutral_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTYoshiAnimStarRodNeutral_joint10, /* [7] joint 10 */
	NULL, /* [8] NULL */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTYoshiAnimStarRodNeutral_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTYoshiAnimStarRodNeutral_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTYoshiAnimStarRodNeutral_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTYoshiAnimStarRodNeutral_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTYoshiAnimStarRodNeutral_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTYoshiAnimStarRodNeutral_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTYoshiAnimStarRodNeutral_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTYoshiAnimStarRodNeutral_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTYoshiAnimStarRodNeutral_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTYoshiAnimStarRodNeutral_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTYoshiAnimStarRodNeutral_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTYoshiAnimStarRodNeutral_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTYoshiAnimStarRodNeutral_joint1[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 672, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTYoshiAnimStarRodNeutral_joint2[78] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -1, -89, -6, 0, 0, 30, 2, 20, -32,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX, 4), 0, 210,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 5), 2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ, 5), -7, -1, -258, 28, -144, 322,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), -42,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 30, 30,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 131, -81, -34, 375,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), -7, 0, 106, 8, 0, 0, -30, -55, 303, 69,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 123, -262,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), -100, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 17), 0, 1, -89, 0, 0, 13, 30, 8, 20, -105,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 17), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTYoshiAnimStarRodNeutral_joint3[54] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 16, -10, 0, 1, 0, -1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -250, 22, 56, 38, -44, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 173, 63, 268, 1, -223, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 194, -18, 65, -22, 169, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, -5, 0, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 7), -44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 16, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTYoshiAnimStarRodNeutral_joint4[88] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 78, 19, 0, 2, 0, -3,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 600, 329,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 0, 15, 600, -131, 329, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 365, 3, 99, -4, -46, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 100, -117, -25, -121, 168, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 13, 72, -264, 5, 198, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 461, 50, 2, 20, 260, -19,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 19, 436, 324,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 0, -11, 600, 93, 329, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 566, -29, -41, 0, -17, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 78, -28, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, 600, 329,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTYoshiAnimStarRodNeutral_joint6[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 48, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 0, 63,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 446,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 17), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTYoshiAnimStarRodNeutral_joint7[142] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -110, -3, -132, 11, -352, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 2, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -99, -23, -193, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -151, 0, -11, 147,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 108, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -100, -256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -665, -179, 68, -574,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -460, 122, -1145, -635, -197, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -420, 140, -1202, -9, -211, -144,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -17, 96, -1235, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -486, -238,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -778, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 12, 19, -1310, -50,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 10, -45, -1320, 69,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -774, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -734, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -60, 26, -1201, 452, -630, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 62, 7, -415, 536, -801, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -45, -71, -127, 160, -537, 224,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -123, 10, -308, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -94, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -101, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -124, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -110, 13, -132, -7, -352, -43,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTYoshiAnimStarRodNeutral_joint10[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -764, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -751, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -642, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -953, 235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -399, 343,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -265, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -496, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -777, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -898, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1219, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1136, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -833, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -764, 69,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimStarRodNeutral_joint11[144] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -145, -112, -103, 107, 2997, 106,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 208, 175, 3128, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -257, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -529, -196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -651, 329, 354, -8, 3096, -532,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 93, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 130, 560, 2062, -575,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 470, 130, 1945, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2367, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 392, -57, 139, 50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 55, -160,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 216, -155,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2414, 75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2642, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -127, -156,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -404, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 12, -188,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -483, -94,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2626, 50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 3033, 58,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -561, -57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -174, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -332, 80,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -72, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3081, 42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 3045, -51,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -84, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -95, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -145, 29, -103, -7, 2997, -47,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimStarRodNeutral_joint12[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1002, 25,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -926, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1017, 458,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 504,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -312, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -268, -232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -442, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -367, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -475, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -1150, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1107, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1052, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1002, 50,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTYoshiAnimStarRodNeutral_joint13[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 172, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 67, 24,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -245, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 12, 148, -3, 0, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTYoshiAnimStarRodNeutral_joint14[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -536, -893, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 156, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1072, 52, -893, -21, 0, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -223, 482, -1021, -67, -603, -317,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -107, -123, -1027, 6, -634, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -469, 139, -1007, -21, -540, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 449, -23, -1113, 19, -1040, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -611, -75, -893, 16, 0, 80,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -536, -893, 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimStarRodNeutral_joint15[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -190, -14,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -544, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -45, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 17), -190, 2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTYoshiAnimStarRodNeutral_joint17[24] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -153, -18,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -549, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 48, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -285, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -153, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimStarRodNeutral_joint18[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -5, 5, 5, -5, -3, -84,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 44, -83,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 12, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -277, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -130, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -115, -34, -349, 152,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 41, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 51, -44, 174, 249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -76, -68, 150, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 45, 3, -85, -6, 149, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -5, 0, 5, 0, 22, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5, 0, 5, 0, -3, -26,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimStarRodNeutral_joint20[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 262, 130,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 563, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 640, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 630, -174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 373, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 376, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 377, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 244, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 262, 17,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTYoshiAnimStarRodNeutral_joint22[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1614, -6, -83, -31, -263, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1545, 63,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -178, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -322, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -166, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1681, 44, -277, 58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1543, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -34, 114, -50, -108,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 30, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -493, -224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -269, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1540, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 1614, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 22, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), -81, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1614, 0, -83, -2, -263, 6,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimStarRodNeutral_joint23[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 4, 0, -1, -154, -52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -25, -99,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -3, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -279, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -40, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -205, -23, -303, -149,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 31, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -340, -53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -226, 21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 38, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 3, -4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -4, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1, 2,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -206, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -155, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -3, 0, 1, -154, 0,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimStarRodNeutral_joint25[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 378, 89,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 599, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 620, -195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 207, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 571, 255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 753, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 725, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 372, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTYoshiAnimStarRodNeutral_joint26[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1609, -2, -89, -29, -228, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 1652, 66, -232, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -372, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -219, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1757, -4, -101, 94, -328, 58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1585, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 80, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -102, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -410, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1577, -6, -417, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), 1606, 2, -224, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 72, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 13), -89, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1609, 2, -89, 0, -228, -4,
	ftAnimEnd(),
};
