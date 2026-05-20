/* AnimJoint data for relocData file 1125 (FTLinkAnimJumpF) */
/* 1264 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimJumpF_joint1[14];
extern u16 dFTLinkAnimJumpF_joint2[22];
extern u16 dFTLinkAnimJumpF_joint4[22];
extern u16 dFTLinkAnimJumpF_joint5[46];
extern u16 dFTLinkAnimJumpF_joint6[24];
extern u16 dFTLinkAnimJumpF_joint9[18];
extern u16 dFTLinkAnimJumpF_joint10[48];
extern u16 dFTLinkAnimJumpF_joint11[24];
extern u16 dFTLinkAnimJumpF_joint12[18];
extern u16 dFTLinkAnimJumpF_joint13[18];
extern u16 dFTLinkAnimJumpF_joint16[18];
extern u16 dFTLinkAnimJumpF_joint17[16];
extern u16 dFTLinkAnimJumpF_joint18[18];
extern u16 dFTLinkAnimJumpF_joint20[14];
extern u16 dFTLinkAnimJumpF_joint21[46];
extern u16 dFTLinkAnimJumpF_joint23[24];
extern u16 dFTLinkAnimJumpF_joint25[48];
extern u16 dFTLinkAnimJumpF_joint26[56];
extern u16 dFTLinkAnimJumpF_joint28[24];
extern u16 dFTLinkAnimJumpF_joint29[56];

/* Joint pointer table (29 entries, 116 bytes) */
AObjEvent32 * dFTLinkAnimJumpF_joints[] = {
	(AObjEvent32 *)dFTLinkAnimJumpF_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTLinkAnimJumpF_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLinkAnimJumpF_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTLinkAnimJumpF_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTLinkAnimJumpF_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLinkAnimJumpF_joint9, /* [6] joint 9 */
	NULL, /* [7] NULL */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTLinkAnimJumpF_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTLinkAnimJumpF_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLinkAnimJumpF_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLinkAnimJumpF_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLinkAnimJumpF_joint16, /* [13] joint 16 */
	NULL, /* [14] NULL */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTLinkAnimJumpF_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTLinkAnimJumpF_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTLinkAnimJumpF_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTLinkAnimJumpF_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTLinkAnimJumpF_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTLinkAnimJumpF_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTLinkAnimJumpF_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTLinkAnimJumpF_joint28, /* [26] joint 28 */
	NULL, /* [27] NULL */
	(AObjEvent32 *)dFTLinkAnimJumpF_joint29, /* [28] joint 29 */
};

/* Joint 1 */
u16 dFTLinkAnimJumpF_joint1[14] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 901,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 15), 901, -41,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 15), 744,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTLinkAnimJumpF_joint2[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 5, 276, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 5, 0, 276, 0, 0, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 32, 274, 83,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimJumpF_joint4[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -98, -46, -52,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -98, 11, -46, 7, -52, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 259, 166, 56,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimJumpF_joint5[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1640, 1, -1258, 0, 2014, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -1686, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), -1227, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 2014, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2035, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 1871, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1710, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -1902, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1905, -2, -1228, 0, 1864, -6,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimJumpF_joint6[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -154, 2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -109, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -154, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -432, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -430, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimJumpF_joint9[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 8, 1, 501,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 8, 0, 1, 0, 501, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 4, 7, 76,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTLinkAnimJumpF_joint10[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 356, -1, -4, 0, 493, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), 425, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 19), 498, 40, 44, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 537, 37, 76, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), 700, 2, 456, 15,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 423, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 432, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 702, 1, 464, 8, 433, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimJumpF_joint11[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -777, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -799, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -791, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -455, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -444, 11,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimJumpF_joint12[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 0, -209, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, -209, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTLinkAnimJumpF_joint13[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 804, 13, -804, 0, 804, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 1209, -804, 398,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTLinkAnimJumpF_joint16[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1663, -317, -293,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 1663, -5, -317, 22, -293, -18,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 1508, 346, -843,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTLinkAnimJumpF_joint17[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), 0, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimJumpF_joint18[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -77, -48, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -77, 2, -48, -5, -24, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, -199, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTLinkAnimJumpF_joint20[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -163,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 0, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), 97,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimJumpF_joint21[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 160, 0, -87, 0, 71, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), -594, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 29), 18, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 21), -16, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 0, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 160, 6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -632, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -706, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 18, 0, 163, 3, -712, -5,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimJumpF_joint23[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 235, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), 876, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 915, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1033, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1036, 2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimJumpF_joint25[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -874, 0, -1750, 0, -1191, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), -1548, 31, -1401, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 20), -690, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -700, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1138, -26,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1518, 28, -1432, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1428, 5, -1534, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1152, -13, -1425, 2, -1538, -3,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimJumpF_joint26[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -139, -1, 406, 0, -982, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 74, 50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), 280, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -782, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -701, 80,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -161, 12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 124, 48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 351, 6,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 262, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 251, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 355, 3, 246, -4, -155, 6,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimJumpF_joint28[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1252, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 900, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 834, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 563, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 551, -12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 29 */
u16 dFTLinkAnimJumpF_joint29[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 963, 0, -1655, 0, 1637, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 26), 1818, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), -1533, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 21), 935, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 946, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1184, 16,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1835, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1858, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1525, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1520, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1192, 8, -1518, 1, 1861, 3,
	ftAnimEnd(),
	0x0000, 0x0000,
};
