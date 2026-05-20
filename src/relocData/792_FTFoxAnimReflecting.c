/* AnimJoint data for relocData file 792 (FTFoxAnimReflecting) */
/* 1088 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimReflecting_joint1[14];
extern u16 dFTFoxAnimReflecting_joint2[8];
extern u16 dFTFoxAnimReflecting_joint4[8];
extern u16 dFTFoxAnimReflecting_joint5[42];
extern u16 dFTFoxAnimReflecting_joint6[24];
extern u16 dFTFoxAnimReflecting_joint7[10];
extern u16 dFTFoxAnimReflecting_joint8[18];
extern u16 dFTFoxAnimReflecting_joint10[10];
extern u16 dFTFoxAnimReflecting_joint11[32];
extern u16 dFTFoxAnimReflecting_joint12[24];
extern u16 dFTFoxAnimReflecting_joint13[10];
extern u16 dFTFoxAnimReflecting_joint15[10];
extern u16 dFTFoxAnimReflecting_joint16[54];
extern u16 dFTFoxAnimReflecting_joint18[32];
extern u16 dFTFoxAnimReflecting_joint20[42];
extern u16 dFTFoxAnimReflecting_joint21[44];
extern u16 dFTFoxAnimReflecting_joint23[24];
extern u16 dFTFoxAnimReflecting_joint24[48];
extern u16 dFTFoxAnimReflecting_joint25[18];
extern u16 dFTFoxAnimReflecting_joint26[20];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTFoxAnimReflecting_joints[] = {
	(AObjEvent32 *)dFTFoxAnimReflecting_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTFoxAnimReflecting_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTFoxAnimReflecting_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTFoxAnimReflecting_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTFoxAnimReflecting_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTFoxAnimReflecting_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTFoxAnimReflecting_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTFoxAnimReflecting_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTFoxAnimReflecting_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTFoxAnimReflecting_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTFoxAnimReflecting_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTFoxAnimReflecting_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTFoxAnimReflecting_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTFoxAnimReflecting_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTFoxAnimReflecting_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTFoxAnimReflecting_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTFoxAnimReflecting_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTFoxAnimReflecting_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTFoxAnimReflecting_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTFoxAnimReflecting_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimReflecting_joint1[14] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), -60,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 48, 679,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), -475,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), -60, 448,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTFoxAnimReflecting_joint2[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -141, -338, -3,
	ftAnimBlock(0, 6),
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTFoxAnimReflecting_joint4[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 309, 156, 81,
	ftAnimBlock(0, 6),
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTFoxAnimReflecting_joint5[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 34, -46, -137, 48, -841, 217,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -88, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 19, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -396, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -472, -119,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -786, -102,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -129, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 34, 15, -137, -7, -841, -55,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimReflecting_joint6[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -701, -218,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1085, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1055, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -817, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -701, 116,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTFoxAnimReflecting_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 6),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimReflecting_joint8[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -113,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 136, -72, 0, 336, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -113,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 106,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), -113,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTFoxAnimReflecting_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 6),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimReflecting_joint11[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -427, -3, -324, 4, -541, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -365, 37, -399, -37, -626, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -341, -31, -419, 37, -662, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -427, -86, -324, 94, -541, 121,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimReflecting_joint12[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -345, -13,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -317, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -195, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -143, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -345, -201,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimReflecting_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 357, 0, 0, 272, 0, 0,
	ftAnimBlock(0, 6),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimReflecting_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 6),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimReflecting_joint16[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -220, -46, -404, -43, -332, -74,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -394, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -448, 35, -406, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -333, 23, -276, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -448, -17, -402, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -348, 53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -228, 33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -435, 21, -386, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -220, 8, -404, 30, -332, 54,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimReflecting_joint18[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 858, -206,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 651, -371,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 114, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, 247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 610, 213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 780, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 858, 77,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimReflecting_joint20[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 48, 99, 122, 46, -249, 289,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 93, -58, 148, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 40, 351,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 453, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 296, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 83, -208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -119, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 48, -44, 122, -26, -249, -129,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimReflecting_joint21[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 260, -72, 290, 13, 392, -273,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -46, -65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 309, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 188, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 256, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 207, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 245, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 260, 53, 290, -19, 392, 147,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimReflecting_joint23[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 313, 385,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 870, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 839, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 537, -208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 313, -223,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimReflecting_joint24[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 330, -98, -182, -88, -556, -123,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -361, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 231, -133, -680, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 64, -55, -633, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 287, 57, -640, 63,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -286, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -218, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 330, 42, -182, 36, -556, 84,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimReflecting_joint25[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 442, 339, 140,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -126, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 442, -18, 339, -4, 140, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTFoxAnimReflecting_joint26[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 64, -450,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 0, -7, 0, -5,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
