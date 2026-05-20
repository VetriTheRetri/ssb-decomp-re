/* AnimJoint data for relocData file 1096 (FTSamusAnimShootingAir) */
/* 1632 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimShootingAir_joint1[10];
extern u16 dFTSamusAnimShootingAir_joint2[12];
extern u16 dFTSamusAnimShootingAir_joint4[52];
extern u16 dFTSamusAnimShootingAir_joint5[100];
extern u16 dFTSamusAnimShootingAir_joint6[56];
extern u16 dFTSamusAnimShootingAir_joint7[52];
extern u16 dFTSamusAnimShootingAir_joint8[10];
extern u16 dFTSamusAnimShootingAir_joint11[12];
extern u16 dFTSamusAnimShootingAir_joint12[84];
extern u16 dFTSamusAnimShootingAir_joint14[48];
extern u16 dFTSamusAnimShootingAir_joint15[50];
extern u16 dFTSamusAnimShootingAir_joint17[32];
extern u16 dFTSamusAnimShootingAir_joint19[70];
extern u16 dFTSamusAnimShootingAir_joint20[50];
extern u16 dFTSamusAnimShootingAir_joint22[32];
extern u16 dFTSamusAnimShootingAir_joint23[100];

/* Joint pointer table (23 entries, 92 bytes) */
AObjEvent32 * dFTSamusAnimShootingAir_joints[] = {
	(AObjEvent32 *)dFTSamusAnimShootingAir_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTSamusAnimShootingAir_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTSamusAnimShootingAir_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTSamusAnimShootingAir_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTSamusAnimShootingAir_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTSamusAnimShootingAir_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTSamusAnimShootingAir_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTSamusAnimShootingAir_joint11, /* [8] joint 11 */
	NULL, /* [9] NULL */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTSamusAnimShootingAir_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTSamusAnimShootingAir_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTSamusAnimShootingAir_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTSamusAnimShootingAir_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTSamusAnimShootingAir_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTSamusAnimShootingAir_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTSamusAnimShootingAir_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTSamusAnimShootingAir_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTSamusAnimShootingAir_joint1[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -4, 1300, 0,
	_FT_ANIM_CMD(11, 0, 1), 16,
	ftAnimBlock(0, 29),
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTSamusAnimShootingAir_joint2[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 16,
	ftAnimBlock(0, 29),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTSamusAnimShootingAir_joint4[52] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -28, -75, 17, 0, 3, 16, 3, -43,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 177, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -213, -9, 1, -7, 24, 12, -62, -28,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 142, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), -213, 19, 1, 0, 32, -15, -62, 41,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 142, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 240, 0, -21, 56,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTSamusAnimShootingAir_joint5[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -953, 12, -1765, 63, 1194, 104,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1169, -80,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -1561, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1134, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 968, -170,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 619, -23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1238, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1237, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 598, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 593, 3,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1237, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1193, 1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1536, 2, 621, 86,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1037, 116,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1609, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1213, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1560, -37,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1160, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1622, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1596, -36, -1588, 20, 1674, 52,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimShootingAir_joint6[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -507, -93,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -601, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -831, -185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -972, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -824, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -804, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -795, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -907, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -935, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -882, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -995, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1055, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1046, 9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimShootingAir_joint7[52] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 446, 112, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 409, -41, -323, -41, 268, 81,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 25, -19,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), 536, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 16, 0, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -45, -7, 25, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -104, 5, 64, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimShootingAir_joint8[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 67, -17, -1474,
	_FT_ANIM_CMD(11, 0, 1), 16,
	ftAnimBlock(0, 29),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTSamusAnimShootingAir_joint11[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 480, 0,
	_FT_ANIM_CMD(11, 0, 1), 16,
	ftAnimBlock(0, 29),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimShootingAir_joint12[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 17, -99, 0, 47, -138, 148,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -173, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 111, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -55, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -347, -326,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -707, -194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -737, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -370, 144,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -175, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -268, -25,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 134, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 138, -24,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -219, 127,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -67, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -287, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -290, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -275, 14, 111, -26, -68, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimShootingAir_joint14[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -650, -54,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -705, -175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1002, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1089, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -913, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1009, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1019, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -1138, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1218, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1011, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -985, 25,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimShootingAir_joint15[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 11, 2, -7, 1, -325, -99,
	ftAnimSetValRateT(FT_ANIM_ROTX, 27), 30, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), -50, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -929, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -933, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -811, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -775, 41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -581, 26,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 31, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 31, 0, -51, 0, -566, 14,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimShootingAir_joint17[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 452, 146,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1039, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1029, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 1172, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1217, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1327, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1329, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimShootingAir_joint19[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -32, 5, -22, -2, 293, -122,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 9, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -227, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -223, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -244, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 7, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 29, 8,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -231, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 54, 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 7, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 20, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 51, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 34, 4, 21, 1, 48, -2,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimShootingAir_joint20[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2, -4, 17, 0, -95, -105,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 28), -1, 1, 38, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -666, -222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -852, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -882, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -871, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -737, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -668, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -616, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 1, 38, 0, -592, 23,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimShootingAir_joint22[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 747, 118,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1000, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 863, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 764, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 806, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1112, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1100, -11,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTSamusAnimShootingAir_joint23[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 9, -16, 83, 10, 320, -118,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 118, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -58, -123, 41, -242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -253, -30, -283, -209,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -257, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -119, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -54, 39, 90, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -14, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 76, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -289, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -300, -36,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -91, 13,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 67, -7, -329, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 56, 4, -63, 106,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -79, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -70, 9, 64, 7, 59, 122,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
