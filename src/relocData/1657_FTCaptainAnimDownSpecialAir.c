/* AnimJoint data for relocData file 1657 (FTCaptainAnimDownSpecialAir) */
/* 4224 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimDownSpecialAir_joint1[34];
extern u16 dFTCaptainAnimDownSpecialAir_joint2[56];
extern u16 dFTCaptainAnimDownSpecialAir_joint3[74];
extern u16 dFTCaptainAnimDownSpecialAir_joint5[78];
extern u16 dFTCaptainAnimDownSpecialAir_joint6[214];
extern u16 dFTCaptainAnimDownSpecialAir_joint7[92];
extern u16 dFTCaptainAnimDownSpecialAir_joint8[52];
extern u16 dFTCaptainAnimDownSpecialAir_joint11[90];
extern u16 dFTCaptainAnimDownSpecialAir_joint12[244];
extern u16 dFTCaptainAnimDownSpecialAir_joint13[108];
extern u16 dFTCaptainAnimDownSpecialAir_joint14[48];
extern u16 dFTCaptainAnimDownSpecialAir_joint15[10];
extern u16 dFTCaptainAnimDownSpecialAir_joint17[10];
extern u16 dFTCaptainAnimDownSpecialAir_joint18[208];
extern u16 dFTCaptainAnimDownSpecialAir_joint20[88];
extern u16 dFTCaptainAnimDownSpecialAir_joint22[196];
extern u16 dFTCaptainAnimDownSpecialAir_joint23[214];
extern u16 dFTCaptainAnimDownSpecialAir_joint25[64];
extern u16 dFTCaptainAnimDownSpecialAir_joint26[180];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTCaptainAnimDownSpecialAir_joints[] = {
	(AObjEvent32 *)dFTCaptainAnimDownSpecialAir_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTCaptainAnimDownSpecialAir_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTCaptainAnimDownSpecialAir_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTCaptainAnimDownSpecialAir_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTCaptainAnimDownSpecialAir_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTCaptainAnimDownSpecialAir_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTCaptainAnimDownSpecialAir_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTCaptainAnimDownSpecialAir_joint11, /* [8] joint 11 */
	NULL, /* [9] NULL */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTCaptainAnimDownSpecialAir_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTCaptainAnimDownSpecialAir_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTCaptainAnimDownSpecialAir_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTCaptainAnimDownSpecialAir_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTCaptainAnimDownSpecialAir_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTCaptainAnimDownSpecialAir_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTCaptainAnimDownSpecialAir_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTCaptainAnimDownSpecialAir_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTCaptainAnimDownSpecialAir_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTCaptainAnimDownSpecialAir_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTCaptainAnimDownSpecialAir_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTCaptainAnimDownSpecialAir_joint1[34] = {
	ftAnimSetValAfter(FT_ANIM_TRAX), 0,
	ftAnimSetValRate(FT_ANIM_TRAY), 0, 767,
	ftAnimSetValBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValT(FT_ANIM_TRAZ, 17), 285,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 16), 333, -521,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -1496,
	ftAnimSetValT(FT_ANIM_TRAY, 17), -7695,
	ftAnimBlock(0, 1),
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 16), 2862,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 545,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 17), 3840, 317,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 17), -11412,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimDownSpecialAir_joint2[56] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1225, 0,
	ftAnimSetValBlock(FT_ANIM_TRAX), -52,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 1427, -1, 7, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 3), -55,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 1427, -1, 7, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 10), -55,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 21), 1547, -12, 21, -4,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 21), -24,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 1385, -60, -170, -91,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 6), -15,
	ftAnimSetValT(FT_ANIM_TRAX, 10), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 1456, 171, -116, 158,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 1600, 27,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTCaptainAnimDownSpecialAir_joint3[74] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 240, 95, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -89, 1, -1072, 1, 89, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -89, -1072, 89,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 671, -389, -576,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 4, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 671, 2, -389, 2, -576, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -291, 57, 57, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1053, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1497, 251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 2060, 213, -175, 49, -132, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 3197, 80, 204, 22, 1, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 3418, 34, 95, -45, 49, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTCaptainAnimDownSpecialAir_joint5[78] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 242, -182, -12, 0, -31, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 83, 0, -357, 0, -244, 0, -31, 0, 47, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 3), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 83, -357, -244, 0, -31, 47,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -93, -411, 377, -183, -77, -9,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), -93, 0, -411, 0, 377, 0, -183, 0, -77, 1, -9, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 0, -31, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 242, 0, -182, 0, -12, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 242, -182, -12,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimDownSpecialAir_joint6[214] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 274, 93, -120, 175, -606, 147,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 190, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 368, 59, -458, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 394, 20, -474, 8,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 6), 409,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 185, -1, -442, 14,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 9), 187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -444, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 8), -444,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 409,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 429, 16,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 187, -10, -444, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -424, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 165, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 442, -185, -101, -322,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 59, -191, -479, -189, -198, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 59, 0, -479, 0, -198, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), 59, 0, -479, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -198, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -198, -3,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 59, -28, -479, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -398, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1, -80, -206, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -102, -81, -274, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -160, -34, -403, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -171, 230, -390, 107, -471, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 299, 288, -183, 258, -582, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 405, 48, 125, 152, -664, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 395, -8, 122, -9, -681, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -803, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 388, -7, 107, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 296, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -25, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -34, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -51, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 283, -11, -805, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 270, -1, -840, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, 0, -50, 1, -851, -10,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTCaptainAnimDownSpecialAir_joint7[92] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1109, 625,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -484, 554,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 239,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -420, -545,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1090, -335,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1090, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -1090,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -1090, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1090, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1141, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1131, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1033, 290,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -551, 240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -551, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -561, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -594, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -586, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -936, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -956, -19,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTCaptainAnimDownSpecialAir_joint8[52] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 191, -97, -323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -9, 0, 15, 0, -118, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -9, 15, -118,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -502, 289, -367,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -502, 0, 289, 0, -367, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 191, 0, -97, 0, -323, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 14), 140, -5, -85, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 14), -302,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTCaptainAnimDownSpecialAir_joint11[90] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -153, 113, -38, 0, 360, -108,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 14), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), 361, 0, -108, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 414, 1, 945, 0, 431, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 414, 945, 431,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -798, 620, -1134,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -51, 1, 440, 0, -79, 1,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), -798, 0, 620, 0, -1134, 0, -51, 0, 440, -3, -79, 1,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 0, 360, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 472, -1, 212, -37, -227, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 248, -35, 18, 1, 21, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -30, 79, 22,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTCaptainAnimDownSpecialAir_joint12[244] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 133, 0, 249, 81, 628, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 134, 150, 331, 400, 813, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 434, 505, 1051, 493, 762, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1145, 355, 1318, 133, 892, 64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), 1318, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1145, 892,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 1145, 1318, 892,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1145, 76, 1318, -179, 892, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1298, -133, 959, -497, 997, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 877, -238, 323, -327, 823, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 820, -28, 304, -9, 850, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 820, 0, 304, 0, 850, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 820, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 304, 0, 850, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 304, 36, 850, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 501, -575,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 828, -104, 377, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 612, -399, 624, -57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -92, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 30, -256, -332, -468,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 99, -154, -436, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -278, -407, 119, 181, -507, -211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -714, -213, 270, 79, -859, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -705, 22, 278, 15, -860, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 332, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -490, 130, -666, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -339, 153, -546, 111,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -57, 102, -379, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 289, -42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 242, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 21, 81, -339, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 106, 118, 266, 11, -238, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 257, 155, 264, -38, -27, 226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 417, 111, 189, -75, 214, 209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 480, 14, 114, -38, 391, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 446, -34, 113, 8, 505, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 411, -34, 130, 17, 544, 39,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimDownSpecialAir_joint13[108] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -631, -401,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1032, -432,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1495, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1277, 109,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -1277,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 8), -1277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1277, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1382, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1188, 201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -980, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -980, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 12), -980,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -980, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1115, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1017, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -923, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1000, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1065, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1061, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -982, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -953, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -982, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1060, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1081, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1004, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -886, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -826, 59,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTCaptainAnimDownSpecialAir_joint14[48] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -5, 167, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 177, 0, 122, 0, -4, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 177, 122, -4,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 102, -233, 22,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 102, 0, -233, 0, 22, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -33, 0, 195, 0, 274, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 6, 190, 76,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTCaptainAnimDownSpecialAir_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 39,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimDownSpecialAir_joint17[10] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 255, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 50), 256, -1,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTCaptainAnimDownSpecialAir_joint18[208] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 55, -21, 81, 87, 2659, -221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 33, -111, 169, 114, 2438, -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -167, -216, 310, 65, 2122, -253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -399, -117, 299, 3, 1930, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -402, -2, 317, 16, 1908, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -403, 3, 325, -19, 1899, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -399, 318, 299, -172, 1930, 334,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 233, 379, -20, -202, 2568, 315,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 358, 49, -104, -282, 2561, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 331, -15, -584, -240, 2796, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 327, -2, -586, 0, 2801, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 327, -1, -586, 0, 2801, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 327, 51, -586, 6, 2801, -84,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 579, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -572, 49, 2632, -216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -486, 108, 2367, -211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 654, 115, -356, 322, 2210, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 809, -382, 157, 159, 2101, -248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -110, -493, -36, -12, 1712, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -177, -25, 133, 72, 2061, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -161, 6, 107, -41, 2041, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -162, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 51, -58, 2011, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1991, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -40, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -142, 19, -37, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), -23, 5, 91, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2028, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 2294, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -20, 3, 95, 3, 2304, 9,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTCaptainAnimDownSpecialAir_joint20[88] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 237, 403,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 640, 392,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1022, 251,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 1144,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 8), 1144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1144, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1082, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 850, -538,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -425,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 13), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 330,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 664, 549,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1098, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1015, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1046, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1110, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1095, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 978, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 971, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTCaptainAnimDownSpecialAir_joint22[196] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1614, 118, -1605, -27, 2121, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1669, -4,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 4), 2167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1791, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1751, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1668, 24,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -1669,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 8), -1669,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 2167,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 2167, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1699, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1751, -469, -1669, -7, 2167, -133,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1664, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 759, -257, 1901, -275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1237, 189, 1616, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1139, -47, -1495, 84, 2023, 203,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1142, 0, 2023, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -1495,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 2023, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1141, 0, -1495, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1495, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 1136, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1136, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1149, 20, -1505, -16, 2031, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1605, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 2085, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1176, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1095, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 976, 267,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1630, 295,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1567, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1711, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1605, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1597, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2052, -39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1679, -91,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1713, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1730, 1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1590, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1389, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1731, 1, -1597, 0, 1380, -8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTCaptainAnimDownSpecialAir_joint23[214] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1699, -93, 1196, -10, 795, -73,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1122, -93, 721, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1606, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1481, -73,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 2), 1458,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 999, -61, 865, 72,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 999, 865,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 1458, 865,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 999, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 999, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1458, -8, 999, 56, 865, -90,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1097, -226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1441, 58, 685, -280,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1574, -57, 305, -402,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1326, -125, 660, -217, -119, -214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1323, -2, 661, 1, -123, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), 1328, -1, -117, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 662, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 11), 659, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1326, 20, 660, 18, -119, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 772, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1369, 235, -53, 280,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1798, -137, 440, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1093, -320, 887, 83, -169, -226,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 916, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1156, 27, -12, 107,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1138, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 46, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 65, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1233, 127, 183, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1393, 127, 946, 39, 374, 160,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1122, 30, 679, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1489, 72,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1597, 12,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1149, 24, 710, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1221, 3, 797, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1607, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 1633, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1634, 0, 1223, 1, 798, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTCaptainAnimDownSpecialAir_joint25[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 875, 162,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1037, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1268, 148,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 1335,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 8), 1335,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1335, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1404, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1427, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1372, -27,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 1372,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 1372, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1366, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1239, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1217, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 982, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 977, -4,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTCaptainAnimDownSpecialAir_joint26[180] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1583, -110, 1665, 5, -1762, 73,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 12), 1677,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1694, -69, -1688, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1723, -60, -1474, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1814, -45, -1295, 89,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), -1815, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -1295,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), -1816, 1, -1295, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1814, 37, 1677, -7, -1295, -91,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1704, -159,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1626, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1742, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1910, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2039, -51, -1797, -60,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1846, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2012, 23, 1626, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1866, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1499, -23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1864, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -1905, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1843, 9, -1902, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1847, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1681, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1475, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1448, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1797, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1696, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1681, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1486, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1686, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -1937, -7,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1461, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1437, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1453, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 1468, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1441, -3, 1469, 0, -1941, -3,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
