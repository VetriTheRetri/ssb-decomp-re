/* AnimJoint data for relocData file 994 (FTSamusAnimDamaged) */
/* 1424 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimDamaged_joint1[36];
extern u16 dFTSamusAnimDamaged_joint2[16];
extern u16 dFTSamusAnimDamaged_joint4[26];
extern u16 dFTSamusAnimDamaged_joint5[68];
extern u16 dFTSamusAnimDamaged_joint6[24];
extern u16 dFTSamusAnimDamaged_joint7[20];
extern u16 dFTSamusAnimDamaged_joint8[12];
extern u16 dFTSamusAnimDamaged_joint9[20];
extern u16 dFTSamusAnimDamaged_joint11[12];
extern u16 dFTSamusAnimDamaged_joint12[58];
extern u16 dFTSamusAnimDamaged_joint14[24];
extern u16 dFTSamusAnimDamaged_joint15[74];
extern u16 dFTSamusAnimDamaged_joint17[32];
extern u16 dFTSamusAnimDamaged_joint19[44];
extern u16 dFTSamusAnimDamaged_joint20[110];
extern u16 dFTSamusAnimDamaged_joint22[52];
extern u16 dFTSamusAnimDamaged_joint23[38];

/* Joint pointer table (23 entries, 92 bytes) */
AObjEvent32 * dFTSamusAnimDamaged_joints[] = {
	(AObjEvent32 *)dFTSamusAnimDamaged_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTSamusAnimDamaged_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTSamusAnimDamaged_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTSamusAnimDamaged_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTSamusAnimDamaged_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTSamusAnimDamaged_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTSamusAnimDamaged_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTSamusAnimDamaged_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTSamusAnimDamaged_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTSamusAnimDamaged_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTSamusAnimDamaged_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTSamusAnimDamaged_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTSamusAnimDamaged_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTSamusAnimDamaged_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTSamusAnimDamaged_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTSamusAnimDamaged_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTSamusAnimDamaged_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTSamusAnimDamaged_joint1[36] = {
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 901, -168,
	ftAnimSetValBlock(FT_ANIM_ROTX), 2680,
	ftAnimSetValT(FT_ANIM_ROTX, 29), -536,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 1011, 349, 231, 160,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 1512, 210, 111, -308,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 1379, -326, -307, -149,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 901, -168,
	ftAnimLoop(0x6800, -70),
};

/* Joint 2 */
u16 dFTSamusAnimDamaged_joint2[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -65,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -860, 0, 0, -84, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 0, -65,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTSamusAnimDamaged_joint4[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 425, 417, 240, 74, -14, 57,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 19), 538, 165, -44, 80, -147, 183,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 425, 417, 240, 74, -14, 57,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimDamaged_joint5[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -622, -3, -405, 0, 677, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -604, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -433, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 281, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 233, -43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 684, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -588, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -661, 15,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -416, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -397, -6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -646, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -633, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -622, 10, -405, -8, 677, -6,
	ftAnimLoop(0x6800, -132),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimDamaged_joint6[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -917, -4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -1117, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1118, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -950, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -917, 32,
	ftAnimLoop(0x6800, -46),
};

/* Joint 7 */
u16 dFTSamusAnimDamaged_joint7[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -555, -1, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 0, 0, 0,
	ftAnimLoop(0x6800, -38),
};

/* Joint 8 */
u16 dFTSamusAnimDamaged_joint8[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -41,
	ftAnimBlock(0, 29),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTSamusAnimDamaged_joint9[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 22, 303, 12,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 480, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -27, 24, 173,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 22, 303, 12,
	ftAnimLoop(0x6800, -38),
};

/* Joint 11 */
u16 dFTSamusAnimDamaged_joint11[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 29),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimDamaged_joint12[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 42, -7, 387, 0, -180, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -461, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 355, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), -277, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -270, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 36, 12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -445, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -185, 9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 367, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 388, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 42, 6, 387, 0, -180, 4,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimDamaged_joint14[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1178, 2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -991, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1019, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -1175, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1178, -2,
	ftAnimLoop(0x6800, -46),
};

/* Joint 15 */
u16 dFTSamusAnimDamaged_joint15[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1806, -2, -1551, 3, -2155, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 1531, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -1376, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -1742, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1674, 62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1679, -64,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1518, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 1799, 12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1389, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1546, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1743, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -2083, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2120, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2145, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1806, 7, -1551, -5, -2155, -9,
	ftAnimLoop(0x6800, -144),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimDamaged_joint17[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1023, 5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 1069, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1042, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 864, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 843, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1016, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1023, 6,
	ftAnimLoop(0x6800, -62),
};

/* Joint 19 */
u16 dFTSamusAnimDamaged_joint19[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -249, 6, 91, 0, 206, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 28), 91, 0, 206, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), -74, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -68, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -174, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -202, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -243, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -249, -6, 91, 0, 206, 0,
	ftAnimLoop(0x6800, -84),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimDamaged_joint20[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 348, -5, 289, 0, 189, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 96, -102,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 194, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 130, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 100, -101,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -171, -86,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 15, -71,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -67, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -245, -65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -208, 70,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 168, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 296, 14,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -15, 59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 306, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -128, 92,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 139, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 303, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 289, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 159, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 185, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 329, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 343, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 350, 6, 288, -1, 191, 5,
	ftAnimLoop(0x6800, -216),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimDamaged_joint22[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 4, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 4, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 238, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 335, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 476, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 453, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 180, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimLoop(0x6800, -102),
};

/* Joint 23 */
u16 dFTSamusAnimDamaged_joint23[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 48, 1, 14, 0, 235, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 28), 14, 0, 235, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 23), 101, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 83, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 50, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 48, -1, 14, 0, 235, 0,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
	0x0000, 0x0000,
};
