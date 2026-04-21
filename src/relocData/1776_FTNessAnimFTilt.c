/* AnimJoint data for relocData file 1776 (FTNessAnimFTilt) */
/* 3680 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimFTilt_joint1[30];
extern u16 dFTNessAnimFTilt_joint2[80];
extern u16 dFTNessAnimFTilt_joint3[20];
extern u16 dFTNessAnimFTilt_joint5[34];
extern u16 dFTNessAnimFTilt_joint6[184];
extern u16 dFTNessAnimFTilt_joint7[92];
extern u16 dFTNessAnimFTilt_joint8[10];
extern u16 dFTNessAnimFTilt_joint9[26];
extern u16 dFTNessAnimFTilt_joint11[38];
extern u16 dFTNessAnimFTilt_joint12[152];
extern u16 dFTNessAnimFTilt_joint13[70];
extern u16 dFTNessAnimFTilt_joint14[10];
extern u16 dFTNessAnimFTilt_joint16[10];
extern u16 dFTNessAnimFTilt_joint17[204];
extern u16 dFTNessAnimFTilt_joint19[60];
extern u16 dFTNessAnimFTilt_joint20[196];
extern u16 dFTNessAnimFTilt_joint22[74];
extern u16 dFTNessAnimFTilt_joint23[148];
extern u16 dFTNessAnimFTilt_joint25[106];
extern u16 dFTNessAnimFTilt_joint26[194];
extern u16 dFTNessAnimFTilt_joint27[48];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTNessAnimFTilt_joints[] = {
	(u32)dFTNessAnimFTilt_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimFTilt_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimFTilt_joint3, /* [2] joint 3 */
	(u32)dFTNessAnimFTilt_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTNessAnimFTilt_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimFTilt_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimFTilt_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimFTilt_joint9, /* [8] joint 9 */
	(u32)dFTNessAnimFTilt_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTNessAnimFTilt_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimFTilt_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimFTilt_joint14, /* [13] joint 14 */
	(u32)dFTNessAnimFTilt_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTNessAnimFTilt_joint17, /* [16] joint 17 */
	(u32)dFTNessAnimFTilt_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTNessAnimFTilt_joint20, /* [19] joint 20 */
	(u32)dFTNessAnimFTilt_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTNessAnimFTilt_joint23, /* [22] joint 23 */
	(u32)dFTNessAnimFTilt_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTNessAnimFTilt_joint26, /* [25] joint 26 */
	(u32)dFTNessAnimFTilt_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTNessAnimFTilt_joint1[30] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), 12, 22,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), 1020, 394,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 9), 1032, -300,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 11), 72, -462,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), 0, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 5), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTNessAnimFTilt_joint2[80] = {
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
u16 dFTNessAnimFTilt_joint3[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 28, 0, -360, 0, 8, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 35), 28, 0, -360, 0, 8, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimFTilt_joint5[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 234, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY, 35), 0, 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), -856,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 28), 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimFTilt_joint6[184] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -410, 122, -261, -107, 415, -176,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -409, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -287, 286, 239, -387,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 162, 321, -358, -448,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 355, 139, -289, 71, -656, -207,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -255, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 440, 173, -773, -185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 702, 224, -1027, -200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 889, 97, -232, 5, -1175, -77,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -260, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 897, 8, -1182, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 906, 8, -1191, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -1195, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 882, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -268, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), -343, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -368, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -625, -47,
	ftAnimBlock(0, 2),
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
u16 dFTNessAnimFTilt_joint7[92] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -473, -144,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -618, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -241, 304,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -192, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -335, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -391, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -435, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, -38,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimFTilt_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 35),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTNessAnimFTilt_joint9[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -10, 0, 364, 0, -32, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 35), -10, 0, 364, 0, -32, 0, 0, 0, 300, -2, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimFTilt_joint11[38] = {
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
u16 dFTNessAnimFTilt_joint12[152] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -415, 36, 569, 42, -119, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 672, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -394, -56, -185, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -464, -62, -271, -72,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -555, -51, -368, -53,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 651, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -621, -26, 592, -25, -436, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -607, 15, 600, 7, -419, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 582, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -591, 17, -398, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -488, 16, -263, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -469, 22, -235, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -111, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -425, -7,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 566, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 506, -20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -110, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -172, -23,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -437, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -475, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -494, 51, 485, 30, -194, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -373, 88, 567, 51, -52, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -318, 32, 588, 12, 8, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -367, -43, 582, -10, -57, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -415, -48, 569, -12, -119, -61,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimFTilt_joint13[70] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, 20,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -374, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -296, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -226, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -157, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 78,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -293, -215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -431, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -576, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 17,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTNessAnimFTilt_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 90, 54, 126, 143, 0, 0,
	ftAnimBlock(0, 35),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimFTilt_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 35),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTNessAnimFTilt_joint17[204] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -365, -9, -279, 18, -297, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -374, -32, -261, 74, -226, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -429, -29, -130, 73, -50, 107,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -431, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -115, 21, -12, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -86, 59, 27, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -434, -263, 3, 119, 110, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -959, -824, 152, -117, -246, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2083, -772, -231, -203, -115, 80,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2568, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -254, -19, -85, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -302, 2, 99, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2608, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -2942, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3016, -128, -298, 20, 108, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -167, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3198, -158, 160, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3333, -117, 195, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 232, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -3592, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -122, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -144, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 198, -33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -44, -26,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -164, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -202, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3599, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -3612, 15,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -188, -6, -66, -44,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -259, -29, -219, -66,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3590, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -3582, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -274, -9, -265, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -279, -2, -290, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3582, 0, -279, 0, -297, -7,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTNessAnimFTilt_joint19[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 396, -64,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 331, -198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -162,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 281, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 352, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 387, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 396, 9,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTNessAnimFTilt_joint20[196] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 5, 23, 12, -25, 26, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 68, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 29, 47, -13, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 100, 21, -37, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 71, 44, 171, 87, 178, 271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 188, 76, 137, -41, 611, 259,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 67, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 224, 270, 696, 53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 720, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 728, 828,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1881, 819, 53, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2367, 279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2441, 58, 715, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 632, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2485, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 2661, 44,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -6, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -133, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2709, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2749, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2784, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2890, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2967, 70,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 3159, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 610, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 71, -45,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -126, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3168, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3081, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3201, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3280, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3275, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 3223, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 11, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3222, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3222, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3222, 0, 12, 0, 26, -44,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimFTilt_joint22[74] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -66, -16, 0, 0, 0, -14,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 11, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -109, 0, -37, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -61, 0, -273, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -226, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 136, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 56, 8,
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
u16 dFTNessAnimFTilt_joint23[148] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1481, -112, 1472, -41, 1397, -165,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1338, -69, 995, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1368, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1211, -163,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 658, -82,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1252, -82, 912, -88,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 660, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1174, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1087, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 603, -19, 1059, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 620, 6, 1083, 9, 679, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1065, 5, 678, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 616, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 695, 31,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1075, 14, 696, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1259, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 967, 31,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 727, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1246, 48,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1281, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1456, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 999, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1342, 32,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1293, 44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1470, 12,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1371, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1389, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1481, 10, 1472, 15, 1397, 7,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTNessAnimFTilt_joint25[106] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTZ), 407, 203,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 610, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 702, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 677, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 540, -148,
	ftAnimSetTargetRateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 490, 197, 174,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4830, 0, 4543, -2, 4454, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 380, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 196, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 128, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 174, 17,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 16), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 149, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 140, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 326, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 389, 59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 551, -32,
	ftAnimBlock(0, 7),
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 11), 4096, 4096, 4096,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 516, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 388, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 407, 18,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimFTilt_joint26[194] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1532, 39, 1583, -49, -1810, 50,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1488, -9, 1447, -101, -1663, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1510, 34, 1330, -81, -1462, 246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1420, 35, 1285, 51, -1169, 264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1440, -82, 1434, 175, -933, 178,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -778, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1585, -104, 1636, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), -1650, -31, 1735, 47, 6079, 899, 12974, 5481, 8977, 2066,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1632, 17,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 6344, -566, 17800, -2536, 9263, -1394,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1730, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1717, -16, -779, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 1560, -8, -793, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1614, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1580, -5,
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
u16 dFTNessAnimFTilt_joint27[48] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 56, -69, 0, 7, 0, -93,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -126, -82, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 56, 2, -808, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -123, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 0, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), -357, 44,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 28), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 19), -162, 7,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 9), 56,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, 74,
	ftAnimEnd(),
	0x0000, 0x0000,
};
