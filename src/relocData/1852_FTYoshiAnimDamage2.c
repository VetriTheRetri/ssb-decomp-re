/* AnimJoint data for relocData file 1852 (FTYoshiAnimDamage2) */
/* 2368 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimDamage2_joint1[16];
extern u16 dFTYoshiAnimDamage2_joint2[126];
extern u16 dFTYoshiAnimDamage2_joint3[60];
extern u16 dFTYoshiAnimDamage2_joint4[58];
extern u16 dFTYoshiAnimDamage2_joint6[20];
extern u16 dFTYoshiAnimDamage2_joint7[106];
extern u16 dFTYoshiAnimDamage2_joint10[32];
extern u16 dFTYoshiAnimDamage2_joint11[112];
extern u16 dFTYoshiAnimDamage2_joint12[44];
extern u16 dFTYoshiAnimDamage2_joint13[8];
extern u16 dFTYoshiAnimDamage2_joint14[8];
extern u16 dFTYoshiAnimDamage2_joint15[20];
extern u16 dFTYoshiAnimDamage2_joint17[20];
extern u16 dFTYoshiAnimDamage2_joint18[102];
extern u16 dFTYoshiAnimDamage2_joint20[56];
extern u16 dFTYoshiAnimDamage2_joint22[98];
extern u16 dFTYoshiAnimDamage2_joint23[94];
extern u16 dFTYoshiAnimDamage2_joint25[56];
extern u16 dFTYoshiAnimDamage2_joint26[96];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTYoshiAnimDamage2_joints[] = {
	(AObjEvent32 *)dFTYoshiAnimDamage2_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTYoshiAnimDamage2_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTYoshiAnimDamage2_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTYoshiAnimDamage2_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTYoshiAnimDamage2_joint6, /* [4] joint 6 */
	NULL, /* [5] NULL */
	(AObjEvent32 *)dFTYoshiAnimDamage2_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTYoshiAnimDamage2_joint10, /* [7] joint 10 */
	NULL, /* [8] NULL */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTYoshiAnimDamage2_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTYoshiAnimDamage2_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTYoshiAnimDamage2_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTYoshiAnimDamage2_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTYoshiAnimDamage2_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTYoshiAnimDamage2_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTYoshiAnimDamage2_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTYoshiAnimDamage2_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTYoshiAnimDamage2_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTYoshiAnimDamage2_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTYoshiAnimDamage2_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTYoshiAnimDamage2_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTYoshiAnimDamage2_joint1[16] = {
	ftAnimSetVal(FT_ANIM_ROTX), 0,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 672, 0, 4096, 4096, 4096,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 29), 1072,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTYoshiAnimDamage2_joint2[126] = {
	ftAnimSetValAfter(FT_ANIM_SCAX | FT_ANIM_SCAY), 4096, 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAZ), -74, 105, 138, 22, 90, 126, 30, 142, -102, -673, 4096, 1452,
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 132, -81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 519, 96,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAY, 6), 250, -32, 60, -142,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 10), -392,
	ftAnimSetValT(FT_ANIM_TRAX, 29), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAZ, 2), 5120,
	ftAnimSetValRateT(FT_ANIM_SCAZ, 2), 4096, -1445,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -48, -6,
	ftAnimSetValT(FT_ANIM_ROTZ, 16), 479,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -95, -3,
	ftAnimSetValT(FT_ANIM_SCAZ, 25), 4096,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_TRAY, 12), -248, -223,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -287, -29,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 9), -330, 147,
	ftAnimBlock(0, 8),
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), -313, 40,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 6), -370, -222,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), -33,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -413, -42, 392, 13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -174, 22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), -187, 1393,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 369, 104,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), -335, 1163,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), 102, 984,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTYoshiAnimDamage2_joint3[60] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAZ), -166, 18, 81, -8, 126, -65, 4096, -884,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY), 0, 0, 172, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 82, 10, -3, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), 175, 16,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAZ, 2), 3481,
	ftAnimSetValRateT(FT_ANIM_SCAZ, 2), 4096, 862,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 266, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 26), -166, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValT(FT_ANIM_SCAZ, 25), 4096,
	ftAnimBlock(0, 17),
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 227, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 1124, 144,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTYoshiAnimDamage2_joint4[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 433, -215, 67, 123, -118, -227,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 5), -515,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -183, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 181, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 176, -3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 18), -308, -6, -419, 8,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 114, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 31, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 178, 66, 155, 22, -191, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 263, 20, 205, 12, -197, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTYoshiAnimDamage2_joint6[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 373, 166,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 625, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 21), 625,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 409, 31,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimDamage2_joint7[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -113, -178, -336, 15, -297, 47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -323, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -479, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -469, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -478, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -493, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -255, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -448, -31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -470, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -399, 14,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -479, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -736, 8,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -492, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -476, 31,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -370, 69, -705, 35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -484, 105,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 68, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -422, 102,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -34, 229,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -390, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 187, 221, 36, -32, -451, -61,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTYoshiAnimDamage2_joint10[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -680, -155,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -911, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -890, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -797, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -791, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -988, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -769, 218,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimDamage2_joint11[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 259, -77, -3121, 153, -2601, -187,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -2845, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 108, 51, -2872, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 285, 195, -2673, 213,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 582, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2952, -56, -2445, 125,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -2937, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2421, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -3111, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 617, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 237, -24,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2938, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -3095, 20,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3147, -34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -3373, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 214, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 198, 4,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -3061, 54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -2833, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 190, -41, -3523, -186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -37, -164, -4017, -271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -213, -175, -2852, -18, -4288, -271,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimDamage2_joint12[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1206, 273,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -756, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -870, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1046, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1056, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -856, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -856, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -943, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -786, 192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -557, 229,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTYoshiAnimDamage2_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 29),
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTYoshiAnimDamage2_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -536, -893, 0,
	ftAnimBlock(0, 29),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTYoshiAnimDamage2_joint15[20] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -380, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 123, -54, -26,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), 146, 60, -141,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -211, 143, -152,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTYoshiAnimDamage2_joint17[20] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -271, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 122, -142, -38,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), 209, 104, -42,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -268, 168, -17,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTYoshiAnimDamage2_joint18[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -218, 408, -151, -43, -275, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -466, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 190, -39, -264, 502,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -297, -182, 729, 428,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 51, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 593, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 365, -113,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 373, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 74, 21, -465, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 17), 150, -5, -320, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 385, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 979, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 143, 57, -314, 157, 1038, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 265, 17, -6, 226, 623, -296,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 178, -64, 137, 88, 445, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 230, 63, 128, -51, 575, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 293, 62, 61, -66, 679, 103,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimDamage2_joint20[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 518, 319,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 837, -259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -318,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 199, 217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 435, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 477, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 493, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 341, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 293, 238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 818, 298,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 890, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 489, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 334, -154,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTYoshiAnimDamage2_joint22[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1548, -68, -132, -15, -12, 176,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1471, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 18, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 390, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 360, -47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 167, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1473, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 1556, 4,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 40, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 310, -6,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 156, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 254, 101,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1559, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1682, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1667, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1662, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 290, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 164, -76,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 362, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1651, -10, 85, -78, 457, 95,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimDamage2_joint23[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -177, 49, -5, 79, -342, 247,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 60, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 187, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 247, 322,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 550, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 608, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 768, 64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 722, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 54, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 68, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 719, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 880, 16,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 193, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 235, 10,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 72, -17, 897, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -263, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 342, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 259, 47, 344, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -239, 24, 329, 70, 436, 92,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimDamage2_joint25[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 886, -110,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 516, -263,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 290, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 107, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 244, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 274, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 200, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 186, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 668, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 677, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 588, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, -209,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTYoshiAnimDamage2_joint26[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1489, -133, -11, 61, -247, -161,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 111, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1703, 129, -437, 216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1364, 237, 24, 327,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1175, 31, 333, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1163, 0, 43, -68, 362, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 517, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -1335, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), -70, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -76, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -10, 37,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 529, -39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 80, -25,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1356, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1426, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 25, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 56, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1444, -17, 71, 15, 107, 26,
	ftAnimEnd(),
	0x0000, 0x0000,
};
