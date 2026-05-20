/* AnimJoint data for relocData file 1128 (FTLinkAnimJumpAerialB) */
/* 2016 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimJumpAerialB_joint1[40];
extern u16 dFTLinkAnimJumpAerialB_joint2[36];
extern u16 dFTLinkAnimJumpAerialB_joint4[34];
extern u16 dFTLinkAnimJumpAerialB_joint5[112];
extern u16 dFTLinkAnimJumpAerialB_joint6[60];
extern u16 dFTLinkAnimJumpAerialB_joint9[10];
extern u16 dFTLinkAnimJumpAerialB_joint10[120];
extern u16 dFTLinkAnimJumpAerialB_joint11[58];
extern u16 dFTLinkAnimJumpAerialB_joint12[10];
extern u16 dFTLinkAnimJumpAerialB_joint13[10];
extern u16 dFTLinkAnimJumpAerialB_joint16[10];
extern u16 dFTLinkAnimJumpAerialB_joint17[26];
extern u16 dFTLinkAnimJumpAerialB_joint18[26];
extern u16 dFTLinkAnimJumpAerialB_joint20[8];
extern u16 dFTLinkAnimJumpAerialB_joint21[76];
extern u16 dFTLinkAnimJumpAerialB_joint23[40];
extern u16 dFTLinkAnimJumpAerialB_joint25[76];
extern u16 dFTLinkAnimJumpAerialB_joint26[92];
extern u16 dFTLinkAnimJumpAerialB_joint28[32];
extern u16 dFTLinkAnimJumpAerialB_joint29[74];

/* Joint pointer table (29 entries, 116 bytes) */
AObjEvent32 * dFTLinkAnimJumpAerialB_joints[] = {
	(AObjEvent32 *)dFTLinkAnimJumpAerialB_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTLinkAnimJumpAerialB_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLinkAnimJumpAerialB_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTLinkAnimJumpAerialB_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTLinkAnimJumpAerialB_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLinkAnimJumpAerialB_joint9, /* [6] joint 9 */
	NULL, /* [7] NULL */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTLinkAnimJumpAerialB_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTLinkAnimJumpAerialB_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLinkAnimJumpAerialB_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLinkAnimJumpAerialB_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLinkAnimJumpAerialB_joint16, /* [13] joint 16 */
	NULL, /* [14] NULL */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTLinkAnimJumpAerialB_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTLinkAnimJumpAerialB_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTLinkAnimJumpAerialB_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTLinkAnimJumpAerialB_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTLinkAnimJumpAerialB_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTLinkAnimJumpAerialB_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTLinkAnimJumpAerialB_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTLinkAnimJumpAerialB_joint28, /* [26] joint 28 */
	NULL, /* [27] NULL */
	(AObjEvent32 *)dFTLinkAnimJumpAerialB_joint29, /* [28] joint 29 */
};

/* Joint 1 */
u16 dFTLinkAnimJumpAerialB_joint1[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 3216, 744, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 1115, 109, 0, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 2545, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1815, -149,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 0, -65,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 1019, -296,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 5), -107,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 744, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimJumpAerialB_joint2[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 32, 274, 83,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0, 0, -6, 0, -1,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -379, -10, 0, 16, 0, 4,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 32, 274, 83,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimJumpAerialB_joint4[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 259, 166, 56,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -225, 28, 0, -9, 0, -5,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 596, 23, -26, 9, -8, 3,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 315, 166, 56,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimJumpAerialB_joint5[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -297, -24, -380, -1, 256, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), -782, -31, 742, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -459, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -530, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -379, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -788, 18, -237, -64, 761, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -746, -63, -508, -424, 734, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -916, -67, -1086, -425, 893, 54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1358, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -860, 18, 833, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -843, 15, 826, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -850, -25, 829, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1357, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -1358, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -881, -234, -1359, 70, 842, 209,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1814, -299,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1217, 36, 1248, 506,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1286, -65, 1855, 353,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1916, -101, -1347, -61, 1955, 99,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimJumpAerialB_joint6[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -430, -5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -179, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -308, -396,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -799, -401,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1112, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -831, 318,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -475, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -474, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -475, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -475, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -798, -215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -905, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -744, 161,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimJumpAerialB_joint9[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, 7, 76,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 278, 266, 193,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTLinkAnimJumpAerialB_joint10[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2310, 13, 1143, -2, 2041, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 2464, -44, 2348, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1106, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1022, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1082, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1103, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1302, 187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2407, -158, 1477, -128, 2351, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2147, 105, 1045, -590, 2194, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2618, 204, 295, -520, 2625, 161,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 8, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2557, -48, 2516, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2522, -29, 2505, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 2506, 37, 2500, 12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 9, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 4, 29,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2557, 274, 2516, 232,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 3516, 324, 3362, 207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 68, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3705, 188, 60, 62, 3380, 18,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimJumpAerialB_joint11[58] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -444, 19,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -251, 179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 122,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -937, -435,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1284, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -334, 248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -333, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -334, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -334, -223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -781, -269,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -873, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -616, 256,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTLinkAnimJumpAerialB_joint12[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 0, -209, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTLinkAnimJumpAerialB_joint13[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1209, -804, 398,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 804, -804, 804,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTLinkAnimJumpAerialB_joint16[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1508, 346, -843,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 1508, 346, -843,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTLinkAnimJumpAerialB_joint17[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -163, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0, 0, 8, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 0, 0, 0, -9, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, -163, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimJumpAerialB_joint18[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -199, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0, 0, 10, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 0, 0, 0, -11, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, -199, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTLinkAnimJumpAerialB_joint20[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 97, 0, 0,
	ftAnimBlock(0, 25),
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimJumpAerialB_joint21[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 18, 7, 163, -9, -712, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -101, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -6, -25, -151, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -27, -3, -142, -70,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1085, -120,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 97, -14,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -79, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 32, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1127, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -791, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 80, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 27, 4,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 70, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 130, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 30, 2, 139, 9, -782, 8,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimJumpAerialB_joint23[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1036, -14,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 552, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 457, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 676, 266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 980, 249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1243, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1250, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1208, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1205, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimJumpAerialB_joint25[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1152, 13, -1425, -3, -1538, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -1697, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), -1470, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -1045, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1067, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -888, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -776, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1094, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1088, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -918, -24,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1691, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1483, 86,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -961, -71, -1489, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1060, -86, -1521, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1135, -74, -1425, 58, -1538, -17,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimJumpAerialB_joint26[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1253, -14, 1361, -8, -1763, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -2284, -93,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1730, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 1452, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1513, 58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1702, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2400, -129,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -2682, 15,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1714, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1586, 156,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1774, 66,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1587, -190,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2668, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -2692, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2679, 121,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2053, 285,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1339, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1401, 140, 1270, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1306, 94, 1289, 19, -1878, 174,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimJumpAerialB_joint28[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 551, 34,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 1302, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1255, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 1220, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1184, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 992, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 845, -147,
	ftAnimEnd(),
	0x0000,
};

/* Joint 29 */
u16 dFTLinkAnimJumpAerialB_joint29[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1192, -45, -1518, 0, 1861, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), 1721, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), -1519, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 803, -198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 614, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 496, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 694, 268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1033, 236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1168, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1296, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1371, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 1181, -210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 901, -166, 1759, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 848, 30, 1825, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 961, 112, -1518, 0, 1861, 35,
	ftAnimEnd(),
	0x0000, 0x0000,
};
