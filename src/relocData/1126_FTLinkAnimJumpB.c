/* AnimJoint data for relocData file 1126 (FTLinkAnimJumpB) */
/* 1344 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimJumpB_joint1[14];
extern u16 dFTLinkAnimJumpB_joint2[24];
extern u16 dFTLinkAnimJumpB_joint4[34];
extern u16 dFTLinkAnimJumpB_joint5[72];
extern u16 dFTLinkAnimJumpB_joint6[24];
extern u16 dFTLinkAnimJumpB_joint9[18];
extern u16 dFTLinkAnimJumpB_joint10[48];
extern u16 dFTLinkAnimJumpB_joint11[24];
extern u16 dFTLinkAnimJumpB_joint12[18];
extern u16 dFTLinkAnimJumpB_joint13[18];
extern u16 dFTLinkAnimJumpB_joint16[18];
extern u16 dFTLinkAnimJumpB_joint17[16];
extern u16 dFTLinkAnimJumpB_joint18[18];
extern u16 dFTLinkAnimJumpB_joint20[14];
extern u16 dFTLinkAnimJumpB_joint21[52];
extern u16 dFTLinkAnimJumpB_joint23[24];
extern u16 dFTLinkAnimJumpB_joint25[46];
extern u16 dFTLinkAnimJumpB_joint26[52];
extern u16 dFTLinkAnimJumpB_joint28[24];
extern u16 dFTLinkAnimJumpB_joint29[56];

/* Joint pointer table (29 entries, 116 bytes) */
AObjEvent32 * dFTLinkAnimJumpB_joints[] = {
	(AObjEvent32 *)dFTLinkAnimJumpB_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTLinkAnimJumpB_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLinkAnimJumpB_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTLinkAnimJumpB_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTLinkAnimJumpB_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLinkAnimJumpB_joint9, /* [6] joint 9 */
	NULL, /* [7] NULL */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTLinkAnimJumpB_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTLinkAnimJumpB_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLinkAnimJumpB_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLinkAnimJumpB_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLinkAnimJumpB_joint16, /* [13] joint 16 */
	NULL, /* [14] NULL */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTLinkAnimJumpB_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTLinkAnimJumpB_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTLinkAnimJumpB_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTLinkAnimJumpB_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTLinkAnimJumpB_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTLinkAnimJumpB_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTLinkAnimJumpB_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTLinkAnimJumpB_joint28, /* [26] joint 28 */
	NULL, /* [27] NULL */
	(AObjEvent32 *)dFTLinkAnimJumpB_joint29, /* [28] joint 29 */
};

/* Joint 1 */
u16 dFTLinkAnimJumpB_joint1[14] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 901,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 15), 901, -41,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 15), 744,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTLinkAnimJumpB_joint2[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -267, -377, 83,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 30), 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -377, 0, 83, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 21,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 274, 83,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimJumpB_joint4[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 648, 427, 146,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 27, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 471, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 208, -12,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 15), 259,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 13), 56,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 12), 166,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimJumpB_joint5[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 234, 0, -80, -1, -640, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -502, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 16), 257, -6, -592, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 247, -21, -561, 44,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -344, -23, 263, 50,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -526, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -364, -1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -356, -3, 298, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -304, 11, 265, -14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -370, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -377, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -297, 7, -380, -3, 256, -8,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimJumpB_joint6[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -349, -2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), -871, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -899, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -457, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -430, 26,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimJumpB_joint9[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -56, -238, 537,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 8, 2, 1, 8, 501, -15,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 4, 7, 76,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTLinkAnimJumpB_joint10[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 179, -1, 143, 0, 40, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), 360, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 21), 438, 55, 229, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 493, 51, 266, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 698, 6, 430, 6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 388, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 458, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 702, 3, 464, 6, 433, 3,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimJumpB_joint11[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -865, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -898, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -900, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -459, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -444, 15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimJumpB_joint12[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 0, -209, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, -209, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTLinkAnimJumpB_joint13[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 804, 13, -804, 0, 804, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 1209, -804, 398,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTLinkAnimJumpB_joint16[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1530, 8, -781,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 1530, 0, 8, 11, -781, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 1508, 346, -843,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTLinkAnimJumpB_joint17[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), 0, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimJumpB_joint18[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -145, 214, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -16, 4, 71, -13, -61, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, -199, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTLinkAnimJumpB_joint20[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -163,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), -163, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), 97,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimJumpB_joint21[52] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -404, 1, -195, -2, -8, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -265, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -260, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -172, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -214, -46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -706, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -231, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 19, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -231, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), 161, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 18, -1, 163, 1, -712, -5,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimJumpB_joint23[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 168, 8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 648, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 683, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 1035, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1036, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimJumpB_joint25[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1056, 1, -1750, 1, -1191, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), -1397, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), -1426, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 19), -1157, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1165, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1155, 5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1429, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1534, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1152, 3, -1425, 1, -1538, -3,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimJumpB_joint26[52] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -246, -3, -107, -3, -779, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -243, 62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 71, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -743, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -733, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -163, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -179, 65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 349, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 147, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), 250, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 355, 5, 246, -3, -155, 8,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimJumpB_joint28[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1286, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), 834, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 768, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 563, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 551, -12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 29 */
u16 dFTLinkAnimJumpB_joint29[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1110, 5, -1317, 0, 1750, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), -1481, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 28), 1856, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 18), 1127, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1052, -70,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1111, 67,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1496, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1516, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1170, 40, 1860, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1192, 22, -1518, -2, 1861, 1,
	ftAnimEnd(),
	0x0000, 0x0000,
};
