/* AnimJoint data for relocData file 1188 (FTLinkAnimTaunt) */
/* 4288 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimTaunt_joint1[58];
extern u16 dFTLinkAnimTaunt_joint2[62];
extern u16 dFTLinkAnimTaunt_joint4[62];
extern u16 dFTLinkAnimTaunt_joint5[214];
extern u16 dFTLinkAnimTaunt_joint6[88];
extern u16 dFTLinkAnimTaunt_joint9[8];
extern u16 dFTLinkAnimTaunt_joint10[230];
extern u16 dFTLinkAnimTaunt_joint11[96];
extern u16 dFTLinkAnimTaunt_joint12[8];
extern u16 dFTLinkAnimTaunt_joint13[8];
extern u16 dFTLinkAnimTaunt_joint16[34];
extern u16 dFTLinkAnimTaunt_joint17[34];
extern u16 dFTLinkAnimTaunt_joint18[46];
extern u16 dFTLinkAnimTaunt_joint20[26];
extern u16 dFTLinkAnimTaunt_joint21[230];
extern u16 dFTLinkAnimTaunt_joint23[96];
extern u16 dFTLinkAnimTaunt_joint25[202];
extern u16 dFTLinkAnimTaunt_joint26[260];
extern u16 dFTLinkAnimTaunt_joint28[88];
extern u16 dFTLinkAnimTaunt_joint29[236];

/* Joint pointer table (29 entries, 116 bytes) */
AObjEvent32 * dFTLinkAnimTaunt_joints[] = {
	(AObjEvent32 *)dFTLinkAnimTaunt_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTLinkAnimTaunt_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLinkAnimTaunt_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTLinkAnimTaunt_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTLinkAnimTaunt_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLinkAnimTaunt_joint9, /* [6] joint 9 */
	NULL, /* [7] NULL */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTLinkAnimTaunt_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTLinkAnimTaunt_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLinkAnimTaunt_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLinkAnimTaunt_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLinkAnimTaunt_joint16, /* [13] joint 16 */
	NULL, /* [14] NULL */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTLinkAnimTaunt_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTLinkAnimTaunt_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTLinkAnimTaunt_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTLinkAnimTaunt_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTLinkAnimTaunt_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTLinkAnimTaunt_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTLinkAnimTaunt_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTLinkAnimTaunt_joint28, /* [26] joint 28 */
	NULL, /* [27] NULL */
	(AObjEvent32 *)dFTLinkAnimTaunt_joint29, /* [28] joint 29 */
};

/* Joint 1 */
u16 dFTLinkAnimTaunt_joint1[58] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 901, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 58, 15, 480, -92, -97, -26,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 58, 0, 480, 1, -97, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 58, 168, -85,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 204, 38, 975, 125, -312, -52,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1, 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 23), 204, -1, 975, 0, -312, 1,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -54, -19, 83,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 901, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimTaunt_joint2[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -107, 276, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 54, 5, 637, 12, 52, 1,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 54, 0, 637, 0, 52, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -7, 19, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -87, -4, 1027, 13, 7, -1,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), -87, 0, 1027, 0, 7, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -25, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -107, 276, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimTaunt_joint4[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 259, 166, 56,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 270, 0, 414, 9, 328, 10,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 270, 0, 414, 0, 328, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -3, -37, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 202, 0, -343, -19, 305, 2,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), 202, 0, -343, 0, 305, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 16, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 259, 166, 56,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTLinkAnimTaunt_joint5[214] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 280, -13, -326, -14, -86, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -105, -185, 296, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -477, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -517, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -430, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -315, -212, 466, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -700, -144, 718, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -819, -96, 766, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -980, -12, 822, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -423, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -413, 17,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -988, -2, 829, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -825, 34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 689, -38,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -395, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -490, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -793, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -802, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 649, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 525, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -503, -12, 513, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 510, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -590, 11,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -819, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -900, 10,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 515, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 558, 26,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -888, 14, -577, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -458, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -750, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -699, 65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -218, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -444, 2, 590, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -500, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 558, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 433, -150,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 101, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -22, 175,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 266, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -455, 52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -346, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -64, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 280, 13, -326, 19, -86, -21,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimTaunt_joint6[88] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -500, -35,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -535, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -621, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1075, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1097, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1075, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1078, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1086, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1052, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -673, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -563, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -427, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -394, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -224, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -249, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -455, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -494, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -770, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -740, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -530, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, 29,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimTaunt_joint9[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, 7, 76,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimTaunt_joint10[230] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 416, 10, 123, 1, -50, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 326, 64, 306, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 586, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 680, 99,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1141, 143,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 395, 69, 374, 78,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 520, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 463, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1295, 76, 587, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1295, 0, 520, 0, 587, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 535, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1295, 0, 587, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1297, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 587, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 587, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 173, -73,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1297, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1170, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 544, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 568, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 110, -46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 55, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1164, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1343, 19,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 55, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 197, 14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 576, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 572, -22,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1362, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1258, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 209, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 49, -21,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1215, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 911, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 547, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 190, -44,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 35, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 56, -21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 801, -110,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 458, -42,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 157, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 124, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 26, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -38, -20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 426, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 416, -10, 123, 0, -50, -11,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimTaunt_joint11[96] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -587, -22,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -662, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -718, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -626, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -504, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -358, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -203, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -203, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -203, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -203, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -203, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -381, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -438, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -519, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -509, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -477, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -503, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -654, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -721, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -718, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -660, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -609, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, 21,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimTaunt_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimTaunt_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTLinkAnimTaunt_joint16[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -536, -339,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 1580, -4, -313, 8, -516, -7,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 1580, 0, -313, 0, -516, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2, -4, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), 1697, -536, -339,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTLinkAnimTaunt_joint17[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -163,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), -399, -9,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), -399, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -287, 1,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 23), -287, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), -163,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTLinkAnimTaunt_joint18[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, -199,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -353, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 0, 0, -353, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), -10, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -209, -6, -248, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 23), -209, 0, -248, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 6, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 0, -199,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTLinkAnimTaunt_joint20[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 168, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -40, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -105, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), 155, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimTaunt_joint21[230] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -242, 16, -244, -14, 108, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -69, 63,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -319, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 70, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -18, -101,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -848, -69,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4, 63,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 184, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -301, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -255, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -901, -26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -901, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 184, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 184, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -255, 0, -901, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -256, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -901, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 184, -41, -901, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 29, -49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -547, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -247, 53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -34, 85,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -49, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 22, 33, -401, 151,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 41, 15, -89, 150,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -81, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -84, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 62, 10, 54, 71,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 63, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 54, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 53, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), 54, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -81, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -72, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 63, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 16), 63, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -86, -18, 62, -8, 54, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -170, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -236, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -74, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -98, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 34, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -166, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -201, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -229, -20, -243, -3, 87, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -242, -12, -244, 0, 108, 21,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimTaunt_joint23[96] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 249, 59,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 309, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 432, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1109, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1162, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1191, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1191, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1191, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1191, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 774, -185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 572, -215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 343, -237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 97, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 98, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 99, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 98, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 97, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 225, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 282, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 333, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 300, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 265, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, -16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimTaunt_joint25[202] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 329, 6, -161, 9, -34, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 389, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 141, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -118, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -178, -57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -327, 7,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 389, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 399, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 163, 11, -318, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -318, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 162, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 162, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 163, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 399, 28, -318, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -334, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 456, 51, 164, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 74, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 502, 45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 641, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 104, 59, -290, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 284, 70, -123, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 642, 0, 335, 25, -12, 55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 334, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), 647, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -12, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -13, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), -13, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 332, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 19), 322, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 335, -3, -12, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -105, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 75, -80,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 649, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 462, -60,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -111, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -44, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -5, -74,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -151, -19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 401, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 350, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 329, -21, -161, -10, -34, 10,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimTaunt_joint26[260] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, -9, 269, 15, -125, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 378, 50,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 82, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -207, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -295, -99,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -609, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 427, 39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 432, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -51, -143,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -446, -75,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -612, 28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -491, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 428, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 478, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -496, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -509, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -459, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -458, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 478, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 478, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -509, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -509, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -458, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -458, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -509, 11, 478, -7, -459, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 296, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -317, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -555, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -576, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -604, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 278, -24, -606, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -696, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 118, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -335, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -401, 6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -716, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -716, 14,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 112, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 259, 19,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -394, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -317, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -701, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -636, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 278, 12, -606, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -607, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 331, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -274, 60,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 101, 76,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -565, 59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -240, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 347, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 277, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 165, 53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 262, 14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -141, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, 8, 269, -7, -125, 16,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimTaunt_joint28[88] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 424, 26,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 511, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 580, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 666, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 629, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 552, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 552, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 552, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 552, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 875, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 956, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1012, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1032, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 1056, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1054, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1008, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 993, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 638, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 539, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 458, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, -33,
	ftAnimEnd(),
	0x0000,
};

/* Joint 29 */
u16 dFTLinkAnimTaunt_joint29[236] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -427, 24, -74, 4, -69, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1, 53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 70, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -342, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -272, 66,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -69, 98,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 61, 71,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 321, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 48, 125, 125, 45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 165, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 269, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 300, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 302, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 321, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 320, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 165, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 165, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 302, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 299, -86, 165, -29, 320, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -364, -160, -35, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 226, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 220, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 372, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -459, -48, -86, -40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -182, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -423, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -393, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), -372, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 393, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 512, -7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -193, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -168, 17,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 504, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 393, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -393, -36, -149, 38, 372, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -699, -177,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 134, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 343, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 272, -87,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -12, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -901, -205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1111, -153, 127, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -59, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1207, 100,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -532, 232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -56, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -72, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -444, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -427, 16, -74, -14, -69, 2,
	ftAnimEnd(),
};
