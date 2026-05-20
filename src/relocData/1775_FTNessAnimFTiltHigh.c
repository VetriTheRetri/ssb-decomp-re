/* AnimJoint data for relocData file 1775 (FTNessAnimFTiltHigh) */
/* 3648 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimFTiltHigh_joint1[30];
extern u16 dFTNessAnimFTiltHigh_joint2[80];
extern u16 dFTNessAnimFTiltHigh_joint3[26];
extern u16 dFTNessAnimFTiltHigh_joint5[34];
extern u16 dFTNessAnimFTiltHigh_joint6[184];
extern u16 dFTNessAnimFTiltHigh_joint7[70];
extern u16 dFTNessAnimFTiltHigh_joint8[10];
extern u16 dFTNessAnimFTiltHigh_joint9[26];
extern u16 dFTNessAnimFTiltHigh_joint11[38];
extern u16 dFTNessAnimFTiltHigh_joint12[132];
extern u16 dFTNessAnimFTiltHigh_joint13[76];
extern u16 dFTNessAnimFTiltHigh_joint14[10];
extern u16 dFTNessAnimFTiltHigh_joint16[10];
extern u16 dFTNessAnimFTiltHigh_joint17[188];
extern u16 dFTNessAnimFTiltHigh_joint19[62];
extern u16 dFTNessAnimFTiltHigh_joint20[182];
extern u16 dFTNessAnimFTiltHigh_joint22[90];
extern u16 dFTNessAnimFTiltHigh_joint23[150];
extern u16 dFTNessAnimFTiltHigh_joint25[106];
extern u16 dFTNessAnimFTiltHigh_joint26[204];
extern u16 dFTNessAnimFTiltHigh_joint27[62];

/* Joint pointer table (27 entries, 108 bytes) */
AObjEvent32 * dFTNessAnimFTiltHigh_joints[] = {
	(AObjEvent32 *)dFTNessAnimFTiltHigh_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTNessAnimFTiltHigh_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTNessAnimFTiltHigh_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTNessAnimFTiltHigh_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTNessAnimFTiltHigh_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTNessAnimFTiltHigh_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTNessAnimFTiltHigh_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTNessAnimFTiltHigh_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTNessAnimFTiltHigh_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTNessAnimFTiltHigh_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTNessAnimFTiltHigh_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTNessAnimFTiltHigh_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTNessAnimFTiltHigh_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTNessAnimFTiltHigh_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTNessAnimFTiltHigh_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTNessAnimFTiltHigh_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTNessAnimFTiltHigh_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTNessAnimFTiltHigh_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTNessAnimFTiltHigh_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTNessAnimFTiltHigh_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTNessAnimFTiltHigh_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTNessAnimFTiltHigh_joint1[30] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), 12, 25,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), 1020, 490,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 9), 1032, -345,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 11), 72, -352,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), 0, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 5), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTNessAnimFTiltHigh_joint2[80] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, -73, -16, 0, 537, 4,
	ftAnimSetValBlock(FT_ANIM_TRAZ), -28,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 6), -2, 75, 713, 5,
	ftAnimSetValT(FT_ANIM_TRAZ, 35), -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -302, -109,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -2088, -750,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_TRAY, 10), 716, 2,
	ftAnimSetValRateT(FT_ANIM_TRAX, 11), -276, -272,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), -40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -2578, -44,
	ftAnimBlock(0, 9),
	ftAnimSetValRateT(FT_ANIM_TRAY, 14), 552, -44,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAX, 18), -16, 0,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -3067, -124,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), -40,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 13), -3216,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 537, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTNessAnimFTiltHigh_joint3[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 28, 0, -360, 0, 8, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 209, -303, -286,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 28), 28, 0, -360, 0, 8, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTNessAnimFTiltHigh_joint5[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 184, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY, 35), 0, 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), -723,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 28), 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimFTiltHigh_joint6[184] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -410, 122, -261, -107, 415, -176,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -409, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -287, 286, 239, -387,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 162, 322, -358, -450,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 358, 139, -287, 71, -660, -207,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -259, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 440, 172, -773, -183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 702, 224, -1026, -200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 889, 97, -232, 9, -1175, -77,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -260, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 896, 7, -1181, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 905, 8, -1190, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -1196, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 882, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -268, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), -372, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -400, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -625, -47,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1190, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1123, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 872, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 747, -103,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1050, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 609, -217, -668, -36, -903, 229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 311, -458, -698, 10, -591, 482,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -308, -377, -648, 86, 60, 416,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -444, -71, -526, 106, 242, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -450, 5, -435, 80, 299, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -414, 11, -311, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 336, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 372, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -410, 4, -261, 49, 415, 43,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimFTiltHigh_joint7[70] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -473, -144,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -618, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -241, 309,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -192, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -335, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -435, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, -38,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimFTiltHigh_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 35),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTNessAnimFTiltHigh_joint9[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -10, 0, 364, 0, -32, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 35), -10, 0, 364, 0, -32, 0, 0, 0, 300, -2, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimFTiltHigh_joint11[38] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 7, 0, -26, 0, -19,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 47, 0, -156, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 35), 0, 0, 0, 12, 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), -100,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 28), 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 28), 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimFTiltHigh_joint12[132] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -415, 36, 569, 42, -119, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 651, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -394, -56, -185, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -464, -62, -271, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -555, -49, -368, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -618, -24, 596, -23, -433, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 611, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -603, 15, -415, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -586, 17, -393, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -443, 16, -198, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 617, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 593, -15,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -428, 9, -168, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), -471, -19, -167, -21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 579, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 509, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -491, 49, 488, 28, -190, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -373, 86, 567, 49, -52, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -318, 32, 588, 12, 8, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -367, -43, 582, -10, -57, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -415, -48, 569, -12, -119, -61,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimFTiltHigh_joint13[76] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, 20,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -374, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -296, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -157, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -293, -211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -431, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -576, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 17,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTNessAnimFTiltHigh_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 90, 54, 126, 143, 0, 0,
	ftAnimBlock(0, 35),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimFTiltHigh_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 35),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTNessAnimFTiltHigh_joint17[188] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -365, 5, -279, 0, -297, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -360, -17, -280, 45, -239, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -401, 20, -189, 26, -58, 110,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -260, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -318, 174, -19, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -52, 93, 26, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -132, -529, -214, 95, 126, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1111, -1066, -68, -144, -252, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2265, -606, -503, -232, -194, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2325, -58, -532, -21, -150, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), -2739, -40, 132, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -546, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), -492, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2779, -108, -473, 35, 128, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -303, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2955, -171, 183, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3123, -157, 216, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -3392, -86, 239, -19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -248, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -250, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3444, -49, 197, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -3595, -14, -45, -27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -258, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -234, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3609, 0, -212, -4, -69, -52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -3580, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -271, -17, -227, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -278, -4, -268, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3581, -1, -280, 0, -291, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3582, -1, -279, 0, -297, -6,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTNessAnimFTiltHigh_joint19[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 396, -49,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 347, -194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 7, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 153, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 291, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 388, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 396, 8,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTNessAnimFTiltHigh_joint20[182] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 5, 13, 12, -25, 26, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 68, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 19, 28, -13, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 61, -55, -37, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -92, -129, 171, 87, 178, 271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -197, -28, 137, -41, 611, 259,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 67, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -149, 540, 696, 53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 720, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 883, 1155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2161, 675, 53, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2234, 66,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 2514, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 715, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 632, -20,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -6, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -133, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2540, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2557, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2655, 103,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2979, 83,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 610, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 71, -45,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3041, 57, -126, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 3120, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3121, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 3244, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3251, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 3217, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 11, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3219, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3222, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3222, 0, 12, 0, 26, -44,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimFTiltHigh_joint22[90] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -66, -16, 0, 0, 0, -14,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 38, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -109, 0, -37, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -63, 16, 20, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -59, -3, 21, 22, -192, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -70, -41, 83, 17, 77, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -226, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 136, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 56, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 128, 5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -153, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 93, 89,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 15), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 293, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 105, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -66, -17,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTNessAnimFTiltHigh_joint23[150] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1481, -78, 1472, -40, 1397, -115,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1344, -53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1343, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1282, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1237, -33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1164, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1295, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1217, -142, 1292, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1010, -221, 1270, -62, 996, -170,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 603, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1168, -105, 823, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1059, -42, 660, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 620, 6, 1083, 9, 679, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1065, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 639, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 675, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 722, 27,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1075, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1259, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 665, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1196, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 752, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 1225, 42,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1281, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1456, 15,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1246, 48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1470, 12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1267, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1389, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1481, 10, 1472, 15, 1397, 7,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTNessAnimFTiltHigh_joint25[106] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTZ), 407, 114,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 521, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 485, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 363, 22,
	ftAnimSetTargetRateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 490, 197, 174,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4830, 0, 4543, -2, 4454, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 451, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 333, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 128, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 174, 17,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 16), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 163, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 208, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 262, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 570, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 595, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 478, -37,
	ftAnimBlock(0, 2),
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 11), 4096, 4096, 4096,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 441, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 388, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 407, 18,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimFTiltHigh_joint26[204] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1532, -10, 1583, -41, -1810, 53,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1487, -57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1484, 213,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1542, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1617, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1654, 9, 1426, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1598, 59, 1408, 50, -1232, 258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1534, 0, 1527, 129, -968, 206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1597, -57, 1667, 104, -819, 95,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -778, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1653, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 1735, 31, 6079, 899, 12974, 5481, 8977, 2066,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1717, -16,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 6344, -566, 17800, -2536, 9263, -1394,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -779, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -793, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1627, 26, 1697, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1580, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1560, -8,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 21), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1584, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1411, 14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1553, -7, -805, -21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1115, -139,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1522, 9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1409, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1457, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1264, -144,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1642, -47,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1534, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1581, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1469, -13, -1682, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -1547, 10, -1801, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1532, 15, 1583, 1, -1810, -9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 27 */
u16 dFTNessAnimFTiltHigh_joint27[62] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 56, -69, 0, 7, 0, -93,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -108, -19, 66, 14, -244, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -43, 27, 74, -2, -481, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, -5, 56, 2, -808, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), -357, 44,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 28), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 19), -162, 7,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 9), 56,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, 74,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
