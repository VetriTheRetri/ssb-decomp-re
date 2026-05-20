/* AnimJoint data for relocData file 1892 (FTYoshiAnimCliffSlow) */
/* 2560 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimCliffSlow_joint1[52];
extern u16 dFTYoshiAnimCliffSlow_joint2[24];
extern u16 dFTYoshiAnimCliffSlow_joint3[68];
extern u16 dFTYoshiAnimCliffSlow_joint4[50];
extern u16 dFTYoshiAnimCliffSlow_joint5[58];
extern u16 dFTYoshiAnimCliffSlow_joint7[20];
extern u16 dFTYoshiAnimCliffSlow_joint8[152];
extern u16 dFTYoshiAnimCliffSlow_joint9[62];
extern u16 dFTYoshiAnimCliffSlow_joint11[22];
extern u16 dFTYoshiAnimCliffSlow_joint12[184];
extern u16 dFTYoshiAnimCliffSlow_joint13[102];
extern u16 dFTYoshiAnimCliffSlow_joint14[26];
extern u16 dFTYoshiAnimCliffSlow_joint15[32];
extern u16 dFTYoshiAnimCliffSlow_joint16[34];
extern u16 dFTYoshiAnimCliffSlow_joint18[34];
extern u16 dFTYoshiAnimCliffSlow_joint19[46];
extern u16 dFTYoshiAnimCliffSlow_joint21[16];
extern u16 dFTYoshiAnimCliffSlow_joint23[24];
extern u16 dFTYoshiAnimCliffSlow_joint24[108];
extern u16 dFTYoshiAnimCliffSlow_joint26[48];
extern u16 dFTYoshiAnimCliffSlow_joint27[64];

/* Joint pointer table (27 entries, 108 bytes) */
AObjEvent32 * dFTYoshiAnimCliffSlow_joints[] = {
	(AObjEvent32 *)dFTYoshiAnimCliffSlow_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTYoshiAnimCliffSlow_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTYoshiAnimCliffSlow_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTYoshiAnimCliffSlow_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTYoshiAnimCliffSlow_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTYoshiAnimCliffSlow_joint7, /* [5] joint 7 */
	NULL, /* [6] NULL */
	(AObjEvent32 *)dFTYoshiAnimCliffSlow_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTYoshiAnimCliffSlow_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTYoshiAnimCliffSlow_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTYoshiAnimCliffSlow_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTYoshiAnimCliffSlow_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTYoshiAnimCliffSlow_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTYoshiAnimCliffSlow_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTYoshiAnimCliffSlow_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTYoshiAnimCliffSlow_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTYoshiAnimCliffSlow_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTYoshiAnimCliffSlow_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTYoshiAnimCliffSlow_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTYoshiAnimCliffSlow_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTYoshiAnimCliffSlow_joint26, /* [24] joint 26 */
	NULL, /* [25] NULL */
	(AObjEvent32 *)dFTYoshiAnimCliffSlow_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTYoshiAnimCliffSlow_joint1[52] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), -1756, -2, -220, 413,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX), 11,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 11, 0, -1756, 244, -220, -91,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 13, 0, -1144, 494, -449, 2,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 13, 0, -519, 384, -214, -4,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 3), 13,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 3), -214, -4,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 3), -519,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 7), 13,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 7), -214, -4,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 7), -519,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTYoshiAnimCliffSlow_joint2[24] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 672, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -893,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), 0, 29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 20), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 0, 17,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTYoshiAnimCliffSlow_joint3[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -446, -38, 0, 0, 0, 26, -49, -120, 83, 41, 168, -94,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -625, -8, -270, -38, 122, 2, -191, -31,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 23), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 30), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), -714, -3, -194, 26, 91, -10, 51, 84,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -714, -19, 91, -437, 51, -147,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 3), -194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -914, 28, 0, -1, -194, 35, -455, -13, -133, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTYoshiAnimCliffSlow_joint4[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -114, 14, -33, 0, 604, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 279, 23, 0, 2, 0, -49,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 189, 39, -42, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 1072, 47, 0, 0, 7, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1234, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 962, -54, 7, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTYoshiAnimCliffSlow_joint5[58] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 600, 329,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 43), 0, 0, 600, -20, 329, 4,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 8,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 8, -965, -4, 0, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, -5, 0, 27, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), -200, 2, 8, 0, -17, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 82, -12, 1, 7, -18, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 478, 353,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 600, 329,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimCliffSlow_joint7[20] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), 460,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 0, -5,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 8,
	ftAnimBlock(0, 10),
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 60), 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTYoshiAnimCliffSlow_joint8[152] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 6144,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -126, 28, -631, 69, -581, -23,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_SCAX, 10), -1084, 15, 6144, -136,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -11, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 64, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 43, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 145, 18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_SCAX, 20), 4096, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1029, 85,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -838, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -7, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 17, -30,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -829, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -574, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -510, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 140, 112,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 49, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 155, 3, -8, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 86, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 195, 67,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -143, -114,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -56, 64,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 4096,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 81, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 187, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -26, -45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -627, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 258, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 11, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 332, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 279, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 17, 6, 251, -28, -603, 24,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTYoshiAnimCliffSlow_joint9[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -322, -230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -460, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -954, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1057, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -548, 260,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -240, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -272, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -322, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1254, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1209, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -965, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -943, 21,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTYoshiAnimCliffSlow_joint11[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -625,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -625, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -89, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -1608, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -804, 13,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimCliffSlow_joint12[184] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1217, 0, 429, 59, -1854, -23,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 598, 332,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 6144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1218, -9, -1878, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1237, 199, -1928, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -818, 58, 1153, 358, -1527, 112,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1355, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1120, -234, -1703, -151,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2465, -221,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1619, 7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1420, 67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 1572, 61,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2692, -113,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2469, 74,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_SCAX, 20), 4096, -136,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1608, 15, -2377, 108,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1271, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -1714, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1605, 96,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1619, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1221, 39, 1640, 55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1303, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 1563, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1444, -57, -1820, -112,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1492, -86,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1783, -145,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 4096,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1236, 49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1321, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1350, -142,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1214, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1985, -203,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2258, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1483, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1533, -10, 1264, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1505, 28, 1260, -3, -2213, 44,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTYoshiAnimCliffSlow_joint13[102] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -345,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -699, -341,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -691, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -842, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -828, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -396, 343,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 194,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -191, -218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -436, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -952, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1030, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -714, 198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -492, 315,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -83, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -135, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -506, -300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -819, -271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1085, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -956, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -852, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -854, -2,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTYoshiAnimCliffSlow_joint14[26] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -625, -3,
	_FT_ANIM_CMD(11, FT_ANIM_ROTZ, 1), 8,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -89, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -1608, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -804, 36,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimCliffSlow_joint15[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -536, -14, -893, 19, 0, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -785, -10, -564, 11, 246, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -766, -2, -635, 4, 219, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), -870, -57, -429, -15, 314, 49,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTYoshiAnimCliffSlow_joint16[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -108, 13, 112, 4, 20, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 124, -7, 100, -1, 18, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), -354, -2, 56, -2, 10, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 31, 4, 7, -1, 1, 0,
	ftAnimBlock(0, 5),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTYoshiAnimCliffSlow_joint18[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -123, 9, 245, 9, -25, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 72, -13, 219, -3, -23, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), -589, 2, 122, -4, -12, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 186, 12, 16, -3, -1, 0,
	ftAnimBlock(0, 5),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTYoshiAnimCliffSlow_joint19[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 64, 7, 168, 7, 594, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 29), 137, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 39), 140, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), 706, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 731, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 825, -4,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 140, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 146, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 140, -6, 135, -4, 821, -3,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTYoshiAnimCliffSlow_joint21[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), 6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTYoshiAnimCliffSlow_joint23[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1868, 16, -225, 0, 323, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 39), -1697, 2, -237, 0, 342, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1692, 5, -236, 1, 335, -6,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTYoshiAnimCliffSlow_joint24[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -7, 11, -39, 58, 493, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 718, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), -76, -33, -106, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -105, -20, -145, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 28, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), -322, -87,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 709, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 596, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 581, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 366, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 59, 33, 278, -73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 323, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -52, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -409, -16, -137, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -356, -39, -84, -36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 324, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 224, -47,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -401, -47, -124, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -584, -38, -303, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -623, -38, 173, -51, -339, -35,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTYoshiAnimCliffSlow_joint26[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 38, 209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 418, 276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 901, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 961, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1056, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1041, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1201, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1239, 38,
	ftAnimEnd(),
	0x0000,
};

/* Joint 27 */
u16 dFTYoshiAnimCliffSlow_joint27[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1167, 283, -48, 0, 345, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 39), -93, 5, 369, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1549, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1580, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 1300, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1307, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 1587, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1596, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), 1697, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1702, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1713, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1733, 20, -85, 8, 361, -7,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
