/* AnimJoint data for relocData file 1237 (FTLinkAnimAttackAirF) */
/* 2768 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimAttackAirF_joint1[44];
extern u16 dFTLinkAnimAttackAirF_joint2[36];
extern u16 dFTLinkAnimAttackAirF_joint4[74];
extern u16 dFTLinkAnimAttackAirF_joint5[212];
extern u16 dFTLinkAnimAttackAirF_joint6[96];
extern u16 dFTLinkAnimAttackAirF_joint7[42];
extern u16 dFTLinkAnimAttackAirF_joint9[8];
extern u16 dFTLinkAnimAttackAirF_joint10[98];
extern u16 dFTLinkAnimAttackAirF_joint11[48];
extern u16 dFTLinkAnimAttackAirF_joint12[8];
extern u16 dFTLinkAnimAttackAirF_joint13[8];
extern u16 dFTLinkAnimAttackAirF_joint16[8];
extern u16 dFTLinkAnimAttackAirF_joint17[66];
extern u16 dFTLinkAnimAttackAirF_joint18[66];
extern u16 dFTLinkAnimAttackAirF_joint20[34];
extern u16 dFTLinkAnimAttackAirF_joint21[134];
extern u16 dFTLinkAnimAttackAirF_joint23[52];
extern u16 dFTLinkAnimAttackAirF_joint25[86];
extern u16 dFTLinkAnimAttackAirF_joint26[104];
extern u16 dFTLinkAnimAttackAirF_joint28[40];
extern u16 dFTLinkAnimAttackAirF_joint29[62];

/* Joint pointer table (29 entries, 116 bytes) */
AObjEvent32 * dFTLinkAnimAttackAirF_joints[] = {
	(AObjEvent32 *)dFTLinkAnimAttackAirF_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTLinkAnimAttackAirF_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLinkAnimAttackAirF_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTLinkAnimAttackAirF_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTLinkAnimAttackAirF_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLinkAnimAttackAirF_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTLinkAnimAttackAirF_joint9, /* [7] joint 9 */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTLinkAnimAttackAirF_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTLinkAnimAttackAirF_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLinkAnimAttackAirF_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLinkAnimAttackAirF_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLinkAnimAttackAirF_joint16, /* [13] joint 16 */
	NULL, /* [14] NULL */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTLinkAnimAttackAirF_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTLinkAnimAttackAirF_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTLinkAnimAttackAirF_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTLinkAnimAttackAirF_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTLinkAnimAttackAirF_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTLinkAnimAttackAirF_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTLinkAnimAttackAirF_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTLinkAnimAttackAirF_joint28, /* [26] joint 28 */
	NULL, /* [27] NULL */
	(AObjEvent32 *)dFTLinkAnimAttackAirF_joint29, /* [28] joint 29 */
};

/* Joint 1 */
u16 dFTLinkAnimAttackAirF_joint1[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -3216, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 744, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 20), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 16), -3216, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 0, 80,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 21), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 11), 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimAttackAirF_joint2[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 32, 274, 83,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 134, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 48, -11, -7, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 95, 4, 10, 1,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 248, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), 32, 274, 83,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimAttackAirF_joint4[74] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 315, 166, 56,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 782, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -356, -168, 0, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -233, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -677, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 11), -524, 60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 844, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 703, -86, -152, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 435, -69, -161, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), -134, -28, -490, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -505, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), -134, 844,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -134, 28, 844, -42, -505, 35,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 315, 166, 56,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimAttackAirF_joint5[212] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1301, 182, -1346, 104, -1263, -265,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1349, -172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1483, 298, -1528, -390,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1898, 278, -2044, -304,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 2130, 95, -2225, -146,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1614, -198,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1636, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2232, 73, -2429, -187,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 2061, 5, -2670, -67,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1591, 58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1233, -46,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2089, 42, -2758, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 2433, 82, -3274, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2501, 136, -1311, 59, -3347, -170,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -908, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2706, 486, -3615, -491,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3475, 583, -4329, -535,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 4151, 149, -4706, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1047, -121,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1273, 7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4298, 131, -4656, 45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -4584, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 4104, -49,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1264, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -919, 30,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4552, 34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -4177, 10,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4055, -53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 4002, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -911, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -911, -7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4167, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -4228, -77,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 4006, 48, -920, -52,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 4488, 54, -1328, -33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4300, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -4462, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4518, 30, -1346, -17, -4480, -17,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimAttackAirF_joint6[96] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -743, -37,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -781, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -590, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -789, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -853, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -784, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -765, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -425, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -175, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -282, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -243, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -316, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -425, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -720, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -668, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -191, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -176, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -190, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -208, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -686, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -741, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -748, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -743, 5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTLinkAnimAttackAirF_joint7[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 278, 266, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 16, -13, -21, 3, 852, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 35), -278, -6, 391, 9, 229, -13,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -278, 0, 391, 0, 229, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 34, -7, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 278, 266, 193,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTLinkAnimAttackAirF_joint9[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 1, 8,
	ftAnimBlock(0, 56),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimAttackAirF_joint10[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1119, 0, 1548, 0, -1443, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), -1100, 29, -1420, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 14), 1548, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1520, -54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1021, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1060, 49, -1380, 55,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -711, -3, -913, -3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1036, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 1522, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -720, -11, -923, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 22), -963, -1, -1220, 1,
	ftAnimBlock(0, 18),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1510, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1553, -4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -967, -7, -1222, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), -1116, -5, -1437, -11,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1549, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1119, -2, 1548, -1, -1443, -6,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimAttackAirF_joint11[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -617, 2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -681, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -744, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -459, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -475, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -533, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -484, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -369, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -420, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -619, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -617, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimAttackAirF_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimBlock(0, 56),
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimAttackAirF_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 56),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTLinkAnimAttackAirF_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1508, 346, -843,
	ftAnimBlock(0, 56),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimAttackAirF_joint17[66] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -163, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -13, 0, 376, 41, -5, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 11, -14, 337, -2, -110, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -169, -14, 350, -36, -39, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -107, 9, 46, -31, 74, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -84, -5, 66, -33, 54, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -183, -3, -449, -20, 181, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -183, 8, -449, 13, 181, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, -163, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimAttackAirF_joint18[66] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -199, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 214, 11, 465, 39, 63, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 124, -35, 238, -26, -108, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -173, -23, 179, -28, -53, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -89, 13, -21, 12, 79, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -47, -2, 288, -29, 51, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -126, -3, -458, -29, 223, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -126, 6, -458, 12, 223, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, -199, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTLinkAnimAttackAirF_joint20[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 97, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 113, 1, -275, 20, -59, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 112, 0, 245, 0, 52, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 112, 0, -269, -5, -55, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 35), 97, 0, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLinkAnimAttackAirF_joint21[134] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1577, -29, -1748, 60, 825, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1276, 91,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1855, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -1330, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1308, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), -1716, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1354, 57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1290, -43,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1835, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -1584, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1238, -61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 469, -1,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1580, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1489, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 475, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), 540, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1719, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -1770, -16,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1492, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -1569, -10,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 540, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 514, 89,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1783, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1758, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 638, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1576, -3, 769, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1577, -1, -1748, 10, 825, 56,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimAttackAirF_joint23[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1205, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 1098, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1054, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1137, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1147, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 548, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 547, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 548, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 549, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1191, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1208, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1205, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimAttackAirF_joint25[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 473, 119, -183, 0, 70, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 43), 188, 0, 285, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 593, 197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 867, 232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 997, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 982, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 685, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 697, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 466, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 426, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 278, 7,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 185, -7, 282, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -177, -11, 73, -7,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 281, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 298, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 407, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 473, 65, -183, -6, 70, -3,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimAttackAirF_joint26[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 301, -12, 318, 4, -270, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 114, -99,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -217, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -828, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -905, -57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -1073, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 22, -69,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 175, 19,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -182, 38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), 219, 38,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 195, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 269, -10,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1055, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -430, 56,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 256, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 302, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -378, 46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -269, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 262, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 15), 317, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 301, 0, 318, 0, -270, 0,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimAttackAirF_joint28[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 845, 16,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1029, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 990, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 761, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 784, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 1020, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1005, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 846, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 845, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 29 */
u16 dFTLinkAnimAttackAirF_joint29[62] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), -647, -23, 252, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), -89,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 55), -89, 0, 252, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -636, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -519, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -356, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -415, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 20), -801, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -861, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 18), -698, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -671, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -653, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -647, 6, -89, 0, 252, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
