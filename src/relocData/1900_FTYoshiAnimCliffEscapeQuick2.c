/* AnimJoint data for relocData file 1900 (FTYoshiAnimCliffEscapeQuick2) */
/* 2736 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimCliffEscapeQuick2_joint1[18];
extern u16 dFTYoshiAnimCliffEscapeQuick2_joint2[50];
extern u16 dFTYoshiAnimCliffEscapeQuick2_joint3[62];
extern u16 dFTYoshiAnimCliffEscapeQuick2_joint4[64];
extern u16 dFTYoshiAnimCliffEscapeQuick2_joint5[50];
extern u16 dFTYoshiAnimCliffEscapeQuick2_joint7[20];
extern u16 dFTYoshiAnimCliffEscapeQuick2_joint8[138];
extern u16 dFTYoshiAnimCliffEscapeQuick2_joint9[38];
extern u16 dFTYoshiAnimCliffEscapeQuick2_joint11[22];
extern u16 dFTYoshiAnimCliffEscapeQuick2_joint12[140];
extern u16 dFTYoshiAnimCliffEscapeQuick2_joint13[46];
extern u16 dFTYoshiAnimCliffEscapeQuick2_joint14[20];
extern u16 dFTYoshiAnimCliffEscapeQuick2_joint15[64];
extern u16 dFTYoshiAnimCliffEscapeQuick2_joint16[56];
extern u16 dFTYoshiAnimCliffEscapeQuick2_joint18[44];
extern u16 dFTYoshiAnimCliffEscapeQuick2_joint19[92];
extern u16 dFTYoshiAnimCliffEscapeQuick2_joint21[46];
extern u16 dFTYoshiAnimCliffEscapeQuick2_joint23[88];
extern u16 dFTYoshiAnimCliffEscapeQuick2_joint24[128];
extern u16 dFTYoshiAnimCliffEscapeQuick2_joint26[48];
extern u16 dFTYoshiAnimCliffEscapeQuick2_joint27[80];

/* Joint pointer table (27 entries, 108 bytes) */
AObjEvent32 * dFTYoshiAnimCliffEscapeQuick2_joints[] = {
	(AObjEvent32 *)dFTYoshiAnimCliffEscapeQuick2_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTYoshiAnimCliffEscapeQuick2_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTYoshiAnimCliffEscapeQuick2_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTYoshiAnimCliffEscapeQuick2_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTYoshiAnimCliffEscapeQuick2_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTYoshiAnimCliffEscapeQuick2_joint7, /* [5] joint 7 */
	NULL, /* [6] NULL */
	(AObjEvent32 *)dFTYoshiAnimCliffEscapeQuick2_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTYoshiAnimCliffEscapeQuick2_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTYoshiAnimCliffEscapeQuick2_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTYoshiAnimCliffEscapeQuick2_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTYoshiAnimCliffEscapeQuick2_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTYoshiAnimCliffEscapeQuick2_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTYoshiAnimCliffEscapeQuick2_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTYoshiAnimCliffEscapeQuick2_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTYoshiAnimCliffEscapeQuick2_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTYoshiAnimCliffEscapeQuick2_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTYoshiAnimCliffEscapeQuick2_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTYoshiAnimCliffEscapeQuick2_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTYoshiAnimCliffEscapeQuick2_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTYoshiAnimCliffEscapeQuick2_joint26, /* [24] joint 26 */
	NULL, /* [25] NULL */
	(AObjEvent32 *)dFTYoshiAnimCliffEscapeQuick2_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTYoshiAnimCliffEscapeQuick2_joint1[18] = {
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 1376,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 13), 2191, 959,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 866,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 17), 3360, 57,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTYoshiAnimCliffEscapeQuick2_joint2[50] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAY), 312,
	ftAnimSetValRateBlock(FT_ANIM_ROTY), 0, 124,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 5), 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 4,
	ftAnimSetValRateT(FT_ANIM_TRAY, 7), 672, 7,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY, 1), 4,
	ftAnimBlock(0, 1),
	ftAnimSetValT(FT_ANIM_ROTY, 29), 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 10), 600, -162,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 312, -182,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 10), 312, 200,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 496, 575,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 672, -184,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTYoshiAnimCliffEscapeQuick2_joint3[62] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -52, 46, 87, -51, 179, -140,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 0, 32, 30, -35, 20, -97,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 187, 82, -4, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 19, -15, 0, -12,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -89, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -89, 0, 30, 20,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 22), -89, 0, 30, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 19), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTYoshiAnimCliffEscapeQuick2_joint4[64] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 172,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 31), 0, 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 5,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -4, -35,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), 288, 67,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 337, -30, 0, 0, 0, 3,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 16, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 268, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 231, -15,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 12), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 16, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 16, 19,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTYoshiAnimCliffEscapeQuick2_joint5[50] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -5, 544, 331,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -304, 11, 0, -21, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 9), 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), 78, 30, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1,
	ftAnimBlock(0, 8),
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 22), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 18), 528, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 78, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 78, 40,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTYoshiAnimCliffEscapeQuick2_joint7[20] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), 460,
	ftAnimSetValRateT(FT_ANIM_ROTX, 31), 0, -9,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 23,
	ftAnimBlock(0, 8),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 19), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimCliffEscapeQuick2_joint8[138] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateBlock(FT_ANIM_SCAX), 4096, -386,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 14), 4096,
	_FT_ANIM_CMD(11, FT_ANIM_SCAX, 1), 6,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 319, -72, 213, -4, -173, -70,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -39, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 74, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -422, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -459, -81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -883, -69,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 22), 4096,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -49, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -154, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -905, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1053, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1042, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 73, -44, -1005, 188,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -66, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -664, 309,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -403, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -136, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -29, -24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -8, 34, -621, -192,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -118, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -811, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -65, -14, -751, 267,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -121, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -277, 269,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -213, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -151, 4, -247, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -109, 41, -132, -10, -353, -106,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTYoshiAnimCliffEscapeQuick2_joint9[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -546, -452,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -914, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -444, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -568, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -974, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -762, 212,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTYoshiAnimCliffEscapeQuick2_joint11[22] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTZ), -1340, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 0, 43,
	_FT_ANIM_CMD(11, FT_ANIM_ROTZ, 1), 4,
	ftAnimBlock(0, 8),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 19), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTYoshiAnimCliffEscapeQuick2_joint12[140] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 238, -129, 57, 24, -19, -213,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -100, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 8, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -662, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -672, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -749, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -105, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -154, -13,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 36, 23, -874, -97,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 97, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -999, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1046, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1021, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 91, -80, -992, 246,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -164, -31, -160, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -172, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -92, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -126, 42, -132, -30, -313, -151,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -66, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -192, -16, -614, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -192, 66, -536, 258,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -44, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -150, -46, -98, 246,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -160, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -42, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -50, -29, -58, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -143, 16, -104, -53, -220, -162,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTYoshiAnimCliffEscapeQuick2_joint13[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -8, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 18), -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -362,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -733, -549,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1098, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1005, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -852, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -618, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -809, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -930, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1000, -69,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTYoshiAnimCliffEscapeQuick2_joint14[20] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), -1340,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 0, 43,
	_FT_ANIM_CMD(11, FT_ANIM_ROTZ, 1), 4,
	ftAnimBlock(0, 8),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 19), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimCliffEscapeQuick2_joint15[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1180, -27, -882, 0, 177, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -898, 38, -881, -1, 197, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -874, 78, -893, -8, 0, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -274, 274, -945, -50, -645, -334,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 496, 139, -1145, -20, -1673, -215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 563, -6, -1070, -17, -1940, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 407, -84, -1373, 13, -1250, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -536, -72, -893, 36, 0, 96,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTYoshiAnimCliffEscapeQuick2_joint16[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -320, -8, -22, -1, -4, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -25, 37, -16, 0, -3, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 215, -240,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 273, 22, -14, 0, -2, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 273, -42, -14, 0, -2, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -279, -66, -1, 2, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -190, 79, 0, -1, 0, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTYoshiAnimCliffEscapeQuick2_joint18[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -121, 44, 262, -1, -27, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -82, 9, -37, 0, 3, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 243, -19, -30, 1, 3, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -405, -66, -4, 5, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -153, 81, 0, -3, 0, 0,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTYoshiAnimCliffEscapeQuick2_joint19[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1757, -3, 1821, 11, 682, 82,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1092, 69,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1686, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 1841, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1801, -42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), 1644, -19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1165, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1276, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1684, 13, 1320, -96,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -1622, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 477, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 427, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 563, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 702, 131,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1363, 150,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1637, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1695, -9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1527, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1699, -3, 1630, -13, 1605, 77,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTYoshiAnimCliffEscapeQuick2_joint21[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 904, 351,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1150, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1423, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1458, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1305, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1131, -205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 388, -203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 263, -124,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimCliffEscapeQuick2_joint23[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1439, -63, -79, 13, -64, -66,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -69, -25, -254, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -1603, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1564, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1523, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -83, 1, -263, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 17, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -551, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1512, 8, -559, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1687, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -300, 33,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 14, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -80, -5,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1701, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1684, 12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -273, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1676, 7, -83, -3, -263, 9,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTYoshiAnimCliffEscapeQuick2_joint24[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1660, 71, 1412, 49, 786, 58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1130, 48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1685, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1851, 247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2227, 296,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2444, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2367, -79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1978, 22,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1178, 44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1183, -197,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1691, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1211, -102,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 867, -230,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 567, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1999, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1523, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1171, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1428, 18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 468, -101,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 328, 109,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1539, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1760, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 462, 137,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1402, 112,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1450, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1518, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1767, 7, 1534, 15, 1464, 62,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTYoshiAnimCliffEscapeQuick2_joint26[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 210, 388,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 776, 403,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1191, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1265, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1429, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1379, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 473, -175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 379, -94,
	ftAnimEnd(),
	0x0000,
};

/* Joint 27 */
u16 dFTYoshiAnimCliffEscapeQuick2_joint27[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1727, -4, 80, 55, -252, 109,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1657, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 163, -112, -60, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -89, -138, -228, -92,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -233, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -108, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -95, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), -89, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -228, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), -236, 6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1669, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1863, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1860, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1507, 7,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -230, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1501, 5, -89, 0, -228, 2,
	ftAnimEnd(),
};
