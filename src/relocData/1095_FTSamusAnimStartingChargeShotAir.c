/* AnimJoint data for relocData file 1095 (FTSamusAnimStartingChargeShotAir) */
/* 1072 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimStartingChargeShotAir_joint1[8];
extern u16 dFTSamusAnimStartingChargeShotAir_joint2[10];
extern u16 dFTSamusAnimStartingChargeShotAir_joint4[38];
extern u16 dFTSamusAnimStartingChargeShotAir_joint5[60];
extern u16 dFTSamusAnimStartingChargeShotAir_joint6[32];
extern u16 dFTSamusAnimStartingChargeShotAir_joint7[36];
extern u16 dFTSamusAnimStartingChargeShotAir_joint8[8];
extern u16 dFTSamusAnimStartingChargeShotAir_joint11[10];
extern u16 dFTSamusAnimStartingChargeShotAir_joint12[98];
extern u16 dFTSamusAnimStartingChargeShotAir_joint14[56];
extern u16 dFTSamusAnimStartingChargeShotAir_joint15[24];
extern u16 dFTSamusAnimStartingChargeShotAir_joint17[16];
extern u16 dFTSamusAnimStartingChargeShotAir_joint19[24];
extern u16 dFTSamusAnimStartingChargeShotAir_joint20[24];
extern u16 dFTSamusAnimStartingChargeShotAir_joint22[16];
extern u16 dFTSamusAnimStartingChargeShotAir_joint23[30];

/* Joint pointer table (23 entries, 92 bytes) */
AObjEvent32 * dFTSamusAnimStartingChargeShotAir_joints[] = {
	(AObjEvent32 *)dFTSamusAnimStartingChargeShotAir_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTSamusAnimStartingChargeShotAir_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTSamusAnimStartingChargeShotAir_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTSamusAnimStartingChargeShotAir_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTSamusAnimStartingChargeShotAir_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTSamusAnimStartingChargeShotAir_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTSamusAnimStartingChargeShotAir_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTSamusAnimStartingChargeShotAir_joint11, /* [8] joint 11 */
	NULL, /* [9] NULL */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTSamusAnimStartingChargeShotAir_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTSamusAnimStartingChargeShotAir_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTSamusAnimStartingChargeShotAir_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTSamusAnimStartingChargeShotAir_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTSamusAnimStartingChargeShotAir_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTSamusAnimStartingChargeShotAir_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTSamusAnimStartingChargeShotAir_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTSamusAnimStartingChargeShotAir_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTSamusAnimStartingChargeShotAir_joint1[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -4, 1300, 0,
	ftAnimBlock(0, 16),
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTSamusAnimStartingChargeShotAir_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 16),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTSamusAnimStartingChargeShotAir_joint4[38] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -21, 56,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 240, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 17, 0, 3, 16, 3, -43,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -28, 177, 3,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 142, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -213, -9, 1, -7, 24, 12, -62, -28,
	ftAnimBlock0(0),
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTSamusAnimStartingChargeShotAir_joint5[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1596, 12, -1588, -50, 1674, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1446, 79,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1745, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1341, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1269, -93,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 880, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1341, 139,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -982, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1652, 41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1734, -32,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -978, 14, 990, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -953, 24, -1765, -31, 1194, 203,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimStartingChargeShotAir_joint6[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1046, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -705, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -616, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -622, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -566, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -558, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -507, 50,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimStartingChargeShotAir_joint7[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 536, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 292, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -379, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 446, 112,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 409, -41, -323, -41, 268, 81,
	ftAnimBlock0(0),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTSamusAnimStartingChargeShotAir_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 67, -17, -1474,
	ftAnimBlock(0, 16),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTSamusAnimStartingChargeShotAir_joint11[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 480, 0,
	ftAnimBlock(0, 16),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimStartingChargeShotAir_joint12[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -275, 71, 111, 95, -68, 127,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 425, 287, 16, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 302, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 337, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 457, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 759, 302, -102, -40, 419, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1497, 134,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 189, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 548, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 595, 98,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1179, 316,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1624, 122,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1988, 483,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 182, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 417, 136, 1586, 620,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2710, 512, 454, -93, 2420, 638,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3013, 261, 230, -227, 2863, 328,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3234, 220, 0, -230, 3078, 214,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimStartingChargeShotAir_joint14[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -985, -23,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -906, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -788, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -984, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -935, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -792, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -887, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -815, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -644, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -813, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -841, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -778, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -650, 128,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimStartingChargeShotAir_joint15[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 31, -6, -51, 3, -566, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 8, 2, -8, 1, -368, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 11, 2, -7, 1, -325, 43,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimStartingChargeShotAir_joint17[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1329, -35,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 544, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 452, -91,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimStartingChargeShotAir_joint19[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 34, -2, 21, -7, 48, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -27, -4, -20, -2, 267, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -32, -4, -22, -2, 293, 25,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimStartingChargeShotAir_joint20[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 38, -1, -592, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 2, 0, 18, -1, -124, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2, 0, 17, -1, -95, 29,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimStartingChargeShotAir_joint22[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1100, -11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 780, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 747, -32,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTSamusAnimStartingChargeShotAir_joint23[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -70, 0, 64, -3, 59, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 3, 5, 82, 0, 293, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 9, 5, 83, 0, 320, 26,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
