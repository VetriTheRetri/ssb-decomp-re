/* AnimJoint data for relocData file 653 (FTFoxAnimJumpB) */
/* 2448 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimJumpB_joint1[22];
extern u16 dFTFoxAnimJumpB_joint2[18];
extern u16 dFTFoxAnimJumpB_joint4[28];
extern u16 dFTFoxAnimJumpB_joint5[196];
extern u16 dFTFoxAnimJumpB_joint7[70];
extern u16 dFTFoxAnimJumpB_joint8[22];
extern u16 dFTFoxAnimJumpB_joint10[10];
extern u16 dFTFoxAnimJumpB_joint11[166];
extern u16 dFTFoxAnimJumpB_joint12[62];
extern u16 dFTFoxAnimJumpB_joint13[18];
extern u16 dFTFoxAnimJumpB_joint15[10];
extern u16 dFTFoxAnimJumpB_joint16[66];
extern u16 dFTFoxAnimJumpB_joint18[38];
extern u16 dFTFoxAnimJumpB_joint20[114];
extern u16 dFTFoxAnimJumpB_joint21[86];
extern u16 dFTFoxAnimJumpB_joint23[62];
extern u16 dFTFoxAnimJumpB_joint24[110];
extern u16 dFTFoxAnimJumpB_joint25[42];
extern u16 dFTFoxAnimJumpB_joint26[32];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTFoxAnimJumpB_joints[] = {
	(AObjEvent32 *)dFTFoxAnimJumpB_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTFoxAnimJumpB_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTFoxAnimJumpB_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTFoxAnimJumpB_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTFoxAnimJumpB_joint7, /* [5] joint 7 */
	NULL, /* [6] NULL */
	(AObjEvent32 *)dFTFoxAnimJumpB_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTFoxAnimJumpB_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTFoxAnimJumpB_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTFoxAnimJumpB_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTFoxAnimJumpB_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTFoxAnimJumpB_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTFoxAnimJumpB_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTFoxAnimJumpB_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTFoxAnimJumpB_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTFoxAnimJumpB_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTFoxAnimJumpB_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTFoxAnimJumpB_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTFoxAnimJumpB_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTFoxAnimJumpB_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimJumpB_joint1[22] = {
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 960, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValT(FT_ANIM_ROTZ, 40), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -223,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 35), -3216,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTFoxAnimJumpB_joint2[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 15), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 372,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 20), 3216,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 3216,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTFoxAnimJumpB_joint4[28] = {
	ftAnimSetValAfter(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), 268,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 8), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 8), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 7), 804,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), 0,
	ftAnimSetValT(FT_ANIM_ROTX, 30), 0,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 25), -268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTFoxAnimJumpB_joint5[196] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -124, 17, -130, 8, 274, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -62, 43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -205, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 366, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 476, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 0, 218, 435, -238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 373, 505, -486, -86, 0, -545,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1009, 358, -379, 75, -656, -414,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1090, 86, -335, -21, -829, -226,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -465, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1182, 114, -1110, -431,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1318, -66, -1693, -272,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1049, -167, -276, 89, -1654, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -292, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 863, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1629, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -1519, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -295, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -294, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 814, -43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 731, -10,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -295, -49, -1525, 36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1180, 272,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -517, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 695, -98,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 278, -34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -901, 236,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -546, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -468, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -426, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 315, 42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 286, 126,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -478, 59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -675, -107,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 444, 141, -407, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 569, 77, -345, 25, -762, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 599, 30, -355, -10, -763, 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimJumpB_joint7[70] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -289, 63,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -240, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -549, -256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -739, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -507, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -649, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -789, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -368, 210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -368, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -368, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -368, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -838, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -868, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -485, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -371, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 94,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimJumpB_joint8[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 178, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 30), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), -357,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 178, 268,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTFoxAnimJumpB_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimJumpB_joint11[166] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 20, 10, 125, 39, 360, 40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 766, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 57, -7, 434, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 31, 48, 393, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 639, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 154, 256, 947, 136,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1197, 235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 545, 289,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 809, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1511, 156, 639, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 639, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1511, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 814, 3, 1511, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 800, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), 1511, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1511, -57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 855, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 656, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 738, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 835, -54, 819, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 692, -19, 782, -65, 734, 51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 494, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 796, 24, 922, 130,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 279, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 876, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 679, -119,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 627, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 253, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 760, 52,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 439, -49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 488, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 567, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 518, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 790, 30, 526, 38, 528, 10,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimJumpB_joint12[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -352, -66,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -522, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -501, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -566, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -807, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -708, 49,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -708,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -708, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -708, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -975, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -966, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -515, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -494, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -476, 18,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimJumpB_joint13[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 272, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 1251,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 14), 1251,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 16), 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimJumpB_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimJumpB_joint16[66] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -3, -33, -794,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -6, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 39), -9, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), -794,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -794, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 61, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -41, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -79, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 27, 53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 27, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -6, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), -6, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 27, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 26, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 8, -6, 0, 25, -1,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimJumpB_joint18[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 1153,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1187, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1125, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 310, -280,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 5, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 5,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTFoxAnimJumpB_joint20[114] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -84, -40, 52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1, 65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -59, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -38, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -89, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 65, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 75, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -8, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -81, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -16, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -89,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -130, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), 8, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 11, 71,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 8, 1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -17, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -85, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 11, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 114, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 167, 53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 497, 0,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 14, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 44, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 60, 16, -94, -8, 493, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTFoxAnimJumpB_joint21[86] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1495, 1601, 1554,
	ftAnimSetValRateT(FT_ANIM_ROTX, 35), -1580, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 38), 1591, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 1554,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1554, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 2233, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2175, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 2014, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1800, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1633, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1633, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1613, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1598, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1277, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1248, -57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 926, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1588, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1614, -9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1598, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1624, -9, 1607, 9, 845, -81,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimJumpB_joint23[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 266, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 282, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 195, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 275, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 495, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 524, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 944, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1013, 68,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTFoxAnimJumpB_joint24[110] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -192, -113, 479,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -172, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 0, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 484, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 507, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 165, -216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -125, 53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -12, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -88, -168,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 12, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 27, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 70, 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 9, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 0, -6,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -12, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -6, 9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -145, 2,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 74, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 113, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -141, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -220, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3, 10, 121, 8, -202, 17,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTFoxAnimJumpB_joint25[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -759, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -759, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -19, 92,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -19, 22, 0, -48, 0, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 204, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -481, -168,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 178, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTFoxAnimJumpB_joint26[32] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -178, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 347, 25, 0, -11, 0, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 519, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -320, -387,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 312, 0, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
