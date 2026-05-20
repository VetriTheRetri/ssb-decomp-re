/* AnimJoint data for relocData file 1145 (FTLinkAnimDamaged3) */
/* 1744 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimDamaged3_joint1[38];
extern u16 dFTLinkAnimDamaged3_joint2[36];
extern u16 dFTLinkAnimDamaged3_joint4[34];
extern u16 dFTLinkAnimDamaged3_joint5[80];
extern u16 dFTLinkAnimDamaged3_joint6[44];
extern u16 dFTLinkAnimDamaged3_joint9[8];
extern u16 dFTLinkAnimDamaged3_joint10[72];
extern u16 dFTLinkAnimDamaged3_joint11[36];
extern u16 dFTLinkAnimDamaged3_joint12[8];
extern u16 dFTLinkAnimDamaged3_joint13[8];
extern u16 dFTLinkAnimDamaged3_joint16[20];
extern u16 dFTLinkAnimDamaged3_joint17[8];
extern u16 dFTLinkAnimDamaged3_joint18[26];
extern u16 dFTLinkAnimDamaged3_joint20[12];
extern u16 dFTLinkAnimDamaged3_joint21[82];
extern u16 dFTLinkAnimDamaged3_joint23[44];
extern u16 dFTLinkAnimDamaged3_joint25[74];
extern u16 dFTLinkAnimDamaged3_joint26[66];
extern u16 dFTLinkAnimDamaged3_joint28[36];
extern u16 dFTLinkAnimDamaged3_joint29[82];

/* Joint pointer table (29 entries, 116 bytes) */
AObjEvent32 * dFTLinkAnimDamaged3_joints[] = {
	(AObjEvent32 *)dFTLinkAnimDamaged3_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTLinkAnimDamaged3_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLinkAnimDamaged3_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTLinkAnimDamaged3_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTLinkAnimDamaged3_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLinkAnimDamaged3_joint9, /* [6] joint 9 */
	NULL, /* [7] NULL */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTLinkAnimDamaged3_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTLinkAnimDamaged3_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLinkAnimDamaged3_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLinkAnimDamaged3_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLinkAnimDamaged3_joint16, /* [13] joint 16 */
	NULL, /* [14] NULL */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTLinkAnimDamaged3_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTLinkAnimDamaged3_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTLinkAnimDamaged3_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTLinkAnimDamaged3_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTLinkAnimDamaged3_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTLinkAnimDamaged3_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTLinkAnimDamaged3_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTLinkAnimDamaged3_joint28, /* [26] joint 28 */
	NULL, /* [27] NULL */
	(AObjEvent32 *)dFTLinkAnimDamaged3_joint29, /* [28] joint 29 */
};

/* Joint 1 */
u16 dFTLinkAnimDamaged3_joint1[38] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 320, 901, -199, 0, -2484,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 73, 116, 864, -57, -318, -504,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 4), -378, 65,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 4), 87, 857,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 73, -117, 864, 57, -253, 504,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 901, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTLinkAnimDamaged3_joint2[36] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -107, 79, 276, -107, 0, -12,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 53, 80, 83, -19, -23, -2,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 53, -16, 83, 19, -23, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -107, 276, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTLinkAnimDamaged3_joint4[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 56,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 259, 136, 166, -137,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 534, 27, -84, -25, 73, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 534, -27, -84, 25, 73, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 259, 166, 56,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTLinkAnimDamaged3_joint5[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 280, -285, -326, 97, -86, 629,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5, -492, -229, -27, 542, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -705, -338, -381, -154, 51, -268,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -592, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -681, 7, 5, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -690, -18, 2, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -742, 21, 52, 4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -585, 64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -381, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -705, 374, 51, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5, 492, -473, 27, 207, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 280, 274, -326, 146, -86, -293,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimDamaged3_joint6[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -500, -610,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1110, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -360, 519,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -7, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -229, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -360, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -605, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, 105,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimDamaged3_joint9[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, 7, 76,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimDamaged3_joint10[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 416, 156, 123, -252, -50, 454,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 748, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -128, 50, 403, 268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 225, 200, 486, 48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 309, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 511, -19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 759, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 757, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 336, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 153, -50,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 736, -97, 486, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 562, -160, 256, -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 416, -146, 123, -29, -50, -307,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimDamaged3_joint11[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -587, -205,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -793, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -472, 197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -323, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -258, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -472, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -730, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, 142,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimDamaged3_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimDamaged3_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTLinkAnimDamaged3_joint16[20] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -536, -339,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1545, 144, -768,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 1545, 144, -768,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1697, -536, -339,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTLinkAnimDamaged3_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -163, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTLinkAnimDamaged3_joint18[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -199, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 0, 34, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 2, 0, 108, -18, 1, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, -199, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTLinkAnimDamaged3_joint20[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 276,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLinkAnimDamaged3_joint21[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1365, -7, -1364, -48, 1717, -425,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1371, -77,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1584, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1292, -273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1171, -37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1188, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1203, -158,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 963, 94,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1580, 0, 1174, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1222, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1534, 82,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1083, 132,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1426, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1171, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1421, 85, 1329, 273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1366, -60, -1364, 57, 1717, 387,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimDamaged3_joint23[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 250, 270,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 520, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 220, -257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 5, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 220, 258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 521, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, -272,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimDamaged3_joint25[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 329, 244, -161, 63, -35, -104,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -73, 91,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 999, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -139, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 129, 215,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 382, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 85, 133,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 73, -125,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 955, -59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 535, -194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 336, -49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 129, -219,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -73, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -122, -44, -155, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 329, -205, -161, -39, -34, 120,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimDamaged3_joint26[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, -176, 269, 47, -124, -428,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 174, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -140, -26, -985, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -151, -5, -1027, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -911, 86,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 23, 132,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 176, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 294, 13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -800, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -792, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 151, 123, -439, 333,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, 119, 269, -25, -125, 314,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimDamaged3_joint28[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 424, 331,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1107, 192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1142, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1170, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1139, -217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 735, -286,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 566, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, -141,
	ftAnimEnd(),
	0x0000,
};

/* Joint 29 */
u16 dFTLinkAnimDamaged3_joint29[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1181, -572, 1682, -17, -1678, 406,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1635, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 608, -175, -1272, 288,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 830, 101, -1101, 157,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -947, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 812, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 889, 75,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 788, -168,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1616, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1584, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -886, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 577, 107, -944, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1002, 221, -941, -235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1019, 89, 1703, 49, -1414, -368,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1180, 160, 1682, -21, -1678, -263,
	ftAnimEnd(),
};
