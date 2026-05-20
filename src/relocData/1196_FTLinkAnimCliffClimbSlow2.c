/* AnimJoint data for relocData file 1196 (FTLinkAnimCliffClimbSlow2) */
/* 1728 bytes: 120-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimCliffClimbSlow2_joint1[26];
extern u16 dFTLinkAnimCliffClimbSlow2_joint2[32];
extern u16 dFTLinkAnimCliffClimbSlow2_joint3[22];
extern u16 dFTLinkAnimCliffClimbSlow2_joint5[22];
extern u16 dFTLinkAnimCliffClimbSlow2_joint6[60];
extern u16 dFTLinkAnimCliffClimbSlow2_joint7[32];
extern u16 dFTLinkAnimCliffClimbSlow2_joint10[30];
extern u16 dFTLinkAnimCliffClimbSlow2_joint11[52];
extern u16 dFTLinkAnimCliffClimbSlow2_joint12[24];
extern u16 dFTLinkAnimCliffClimbSlow2_joint13[14];
extern u16 dFTLinkAnimCliffClimbSlow2_joint14[14];
extern u16 dFTLinkAnimCliffClimbSlow2_joint17[14];
extern u16 dFTLinkAnimCliffClimbSlow2_joint18[14];
extern u16 dFTLinkAnimCliffClimbSlow2_joint19[22];
extern u16 dFTLinkAnimCliffClimbSlow2_joint21[22];
extern u16 dFTLinkAnimCliffClimbSlow2_joint22[106];
extern u16 dFTLinkAnimCliffClimbSlow2_joint24[36];
extern u16 dFTLinkAnimCliffClimbSlow2_joint26[54];
extern u16 dFTLinkAnimCliffClimbSlow2_joint27[94];
extern u16 dFTLinkAnimCliffClimbSlow2_joint29[32];
extern u16 dFTLinkAnimCliffClimbSlow2_joint30[82];

/* Joint pointer table (30 entries, 120 bytes) */
AObjEvent32 * dFTLinkAnimCliffClimbSlow2_joints[] = {
	(AObjEvent32 *)dFTLinkAnimCliffClimbSlow2_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTLinkAnimCliffClimbSlow2_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLinkAnimCliffClimbSlow2_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTLinkAnimCliffClimbSlow2_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffClimbSlow2_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLinkAnimCliffClimbSlow2_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTLinkAnimCliffClimbSlow2_joint10, /* [7] joint 10 */
	NULL, /* [8] NULL */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffClimbSlow2_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLinkAnimCliffClimbSlow2_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLinkAnimCliffClimbSlow2_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLinkAnimCliffClimbSlow2_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTLinkAnimCliffClimbSlow2_joint17, /* [14] joint 17 */
	NULL, /* [15] NULL */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffClimbSlow2_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTLinkAnimCliffClimbSlow2_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTLinkAnimCliffClimbSlow2_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffClimbSlow2_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTLinkAnimCliffClimbSlow2_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffClimbSlow2_joint26, /* [24] joint 26 */
	NULL, /* [25] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffClimbSlow2_joint27, /* [26] joint 27 */
	(AObjEvent32 *)dFTLinkAnimCliffClimbSlow2_joint29, /* [27] joint 29 */
	NULL, /* [28] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffClimbSlow2_joint30, /* [29] joint 30 */
};

/* Joint 1 */
u16 dFTLinkAnimCliffClimbSlow2_joint1[26] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 1, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 7), 0, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 7), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 192,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 0, 360,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTLinkAnimCliffClimbSlow2_joint2[32] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -314, 157, 81, -282, -214, 74,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, 125, 370, 300, -29, 213,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), 1,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 14), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 569, 303, 131, 16,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 901, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTLinkAnimCliffClimbSlow2_joint3[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 37, 6, -32, 2, -336, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 117, -7, -9, 15, -304, 16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -107, 276, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTLinkAnimCliffClimbSlow2_joint5[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 679, 13, 209, -2, 307, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 713, -20, 93, -2, 169, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 259, 166, 56,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTLinkAnimCliffClimbSlow2_joint6[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -167, 14, -159, 7, -143, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -496, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -256, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -129, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -100, 53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 432, 17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -504, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -124, 43,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 430, -11, -287, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 308, -30, -332, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 280, -28, -326, 5, -86, 38,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTLinkAnimCliffClimbSlow2_joint7[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1004, 48,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -253, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -159, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -449, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -479, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -496, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, -4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimCliffClimbSlow2_joint10[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 590, -8, -109, -4, -316, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 181, -48, -31, 6, -174, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -137, -17, -4, 3, -24, 25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 4, 7, 76,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTLinkAnimCliffClimbSlow2_joint11[52] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1404, 52, -1584, 5, 582, 62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1940, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1300, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), -1379, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1437, -59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1727, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1960, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 2025, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1393, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1559, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2024, 0, -1732, -4, 1557, -1,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTLinkAnimCliffClimbSlow2_joint12[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -528, -88,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -1026, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -963, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -600, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, 12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimCliffClimbSlow2_joint13[14] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -261, 8, 49, -8, 311, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 0, -209, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTLinkAnimCliffClimbSlow2_joint14[14] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 4, -804, 0, 804, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 937, -804, 670,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimCliffClimbSlow2_joint17[14] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1780, 4, -360, -17, -1330, 31,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 1697, -536, -339,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTLinkAnimCliffClimbSlow2_joint18[14] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -78, 2, -15, -4, 68, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 0, -163, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTLinkAnimCliffClimbSlow2_joint19[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -122, 4, -137, 20, 95, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -51, 6, 188, -3, 4, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 0, -199, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimCliffClimbSlow2_joint21[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -179, -3, -260, 1, 55, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -260, 8, -233, 13, 114, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTLinkAnimCliffClimbSlow2_joint22[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1404, -10, -1430, 50, 1352, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1414, -38, -1380, 172, 1251, -183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1481, -427, -1085, 343, 984, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2270, -385, -693, 213, 1477, 224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2252, -30, -658, 25, 1433, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2418, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -2825, -66, -434, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2843, -5, -291, 123,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -2943, -92,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -172, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2495, 57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 2797, 133,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3042, -87,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -3417, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -228, -49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -265, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2948, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 3256, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3459, -41, -244, 21, 3325, 69,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTLinkAnimCliffClimbSlow2_joint24[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 469, 161,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 898, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 933, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1093, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1034, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 535, -174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 355, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, -105,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTLinkAnimCliffClimbSlow2_joint26[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 472, -11, 38, -11, 13, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -394, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -164, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 411, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 344, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 300, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 300, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 361, -31,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -372, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -55, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 329, -32, -161, 2, -34, 20,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTLinkAnimCliffClimbSlow2_joint27[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -460, 39, 67, -1, -830, -70,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1156, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 212, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 260, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 311, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 324, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1111, 42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -675, 84,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 231, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 93, 30,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 337, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 283, -21,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, 52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -339, 104,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 132, 42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 257, 23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -237, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -158, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, 13, 269, -14, -125, 32,
	ftAnimEnd(),
};

/* Joint 29 */
u16 dFTLinkAnimCliffClimbSlow2_joint29[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 971, 19,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1083, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1102, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 951, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 860, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 470, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, -45,
	ftAnimEnd(),
	0x0000,
};

/* Joint 30 */
u16 dFTLinkAnimCliffClimbSlow2_joint30[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2572, -23, -102, 8, 354, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -33, -4, -290, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 2449, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2616, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 2707, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2765, 60,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2823, -27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -36, 3, -321, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -136, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -69, -7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2809, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2767, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -108, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -74, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2789, 21, -74, -4, -69, 4,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
