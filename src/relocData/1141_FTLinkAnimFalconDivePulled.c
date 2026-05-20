/* AnimJoint data for relocData file 1141 (FTLinkAnimFalconDivePulled) */
/* 2784 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimFalconDivePulled_joint1[40];
extern u16 dFTLinkAnimFalconDivePulled_joint2[54];
extern u16 dFTLinkAnimFalconDivePulled_joint4[62];
extern u16 dFTLinkAnimFalconDivePulled_joint5[128];
extern u16 dFTLinkAnimFalconDivePulled_joint6[48];
extern u16 dFTLinkAnimFalconDivePulled_joint9[16];
extern u16 dFTLinkAnimFalconDivePulled_joint10[158];
extern u16 dFTLinkAnimFalconDivePulled_joint11[56];
extern u16 dFTLinkAnimFalconDivePulled_joint12[8];
extern u16 dFTLinkAnimFalconDivePulled_joint13[8];
extern u16 dFTLinkAnimFalconDivePulled_joint16[8];
extern u16 dFTLinkAnimFalconDivePulled_joint17[48];
extern u16 dFTLinkAnimFalconDivePulled_joint18[26];
extern u16 dFTLinkAnimFalconDivePulled_joint20[12];
extern u16 dFTLinkAnimFalconDivePulled_joint21[154];
extern u16 dFTLinkAnimFalconDivePulled_joint23[56];
extern u16 dFTLinkAnimFalconDivePulled_joint25[114];
extern u16 dFTLinkAnimFalconDivePulled_joint26[136];
extern u16 dFTLinkAnimFalconDivePulled_joint28[48];
extern u16 dFTLinkAnimFalconDivePulled_joint29[154];

/* Joint pointer table (29 entries, 116 bytes) */
AObjEvent32 * dFTLinkAnimFalconDivePulled_joints[] = {
	(AObjEvent32 *)dFTLinkAnimFalconDivePulled_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTLinkAnimFalconDivePulled_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLinkAnimFalconDivePulled_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTLinkAnimFalconDivePulled_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTLinkAnimFalconDivePulled_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLinkAnimFalconDivePulled_joint9, /* [6] joint 9 */
	NULL, /* [7] NULL */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTLinkAnimFalconDivePulled_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTLinkAnimFalconDivePulled_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLinkAnimFalconDivePulled_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLinkAnimFalconDivePulled_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLinkAnimFalconDivePulled_joint16, /* [13] joint 16 */
	NULL, /* [14] NULL */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTLinkAnimFalconDivePulled_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTLinkAnimFalconDivePulled_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTLinkAnimFalconDivePulled_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTLinkAnimFalconDivePulled_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTLinkAnimFalconDivePulled_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTLinkAnimFalconDivePulled_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTLinkAnimFalconDivePulled_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTLinkAnimFalconDivePulled_joint28, /* [26] joint 28 */
	NULL, /* [27] NULL */
	(AObjEvent32 *)dFTLinkAnimFalconDivePulled_joint29, /* [28] joint 29 */
};

/* Joint 1 */
u16 dFTLinkAnimFalconDivePulled_joint1[40] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 901,
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, -343,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 758, -137, -267, -144,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 19), -360, -47,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 13), 660, -106,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 6), 505, -117,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 512, 316, -403, 288,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 6), 0, 231,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 6), 901,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTLinkAnimFalconDivePulled_joint2[54] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -107, -21, 276, 19, 0, -11,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -122, -45, 292, -95, -9, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -245, -14, -9, 0, 170, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), -402, -7, 298, 12, -14, -7,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -14, 29, 296, -2, -12, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -107, 13, 276, 16, 0, 6,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimFalconDivePulled_joint4[62] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 259, -104, 166, 83, 56, -86,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 380, -119, 124, -128, 74, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -97, -34, -220, 13, -162, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -178, 3, 339, 16, -364, 8,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 650, 70, 95, -27, 3, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 528, -48, 67, 8, 71, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 259, 66, 166, -4, 56, 16,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimFalconDivePulled_joint5[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 280, 375, -326, 323, -86, -392,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1054, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 656, 157, -3, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 594, -28, -40, -86,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 590, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -176, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -166, 12, -1034, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -542, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 171, 18,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 592, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 628, -6,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -524, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -514, -24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 184, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -470, -58,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 624, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 517, -127,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -539, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -319, 160,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -517, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -400, 70,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 380, -109, -152, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 272, -9, -41, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 280, 7, -326, 74, -86, -45,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimFalconDivePulled_joint6[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -500, -243,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -856, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -838, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -657, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -582, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -324, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -455, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -834, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -836, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -624, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, 123,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimFalconDivePulled_joint9[16] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, 7, 76,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -124, -1, 665,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), 4, 7, 76,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimFalconDivePulled_joint10[158] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 416, 450, 123, 220, -50, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 866, 182, 344, 117, -88, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 780, -94, 358, -3, -167, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 329, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 677, 12, -61, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 805, 151, -43, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1332, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 453, 53,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 347, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 32, -27,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1327, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1276, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 500, 43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 568, -67,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 4, -37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -41, 88,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 493, -80,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -21, -87,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1274, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1093, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 70, 113,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 326, 29,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 992, -156, -87, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 499, -195, 65, 29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 368, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 156, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 389, -61, 42, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 392, 19, -50, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 416, 24, 123, -32, -50, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimFalconDivePulled_joint11[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -587, -67,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -846, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -727, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -439, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -391, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -203, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -134, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -782, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -709, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -436, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -491, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -531, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, -56,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimFalconDivePulled_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimFalconDivePulled_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTLinkAnimFalconDivePulled_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -536, -339,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimFalconDivePulled_joint17[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -192, -163, 303, 0, -58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -19, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -220, 11, 124, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -12, 13, 32, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -12, -11, 32, 5, -19, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 0, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -220, 11, 124, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), 0, 72, -163, -112,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimFalconDivePulled_joint18[26] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -199, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 108, -445, 90,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -339, -94, 209,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 84, -516, 209,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 0, -199, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTLinkAnimFalconDivePulled_joint20[12] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 0, -40,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 30), 0, -92,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimFalconDivePulled_joint21[154] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -242, -36, -244, -144, 108, -410,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -367, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -388, -17, -301, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -279, 94, -97, 154,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 0, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -228, -7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -357, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -172, 42,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 12, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -236, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -409, -30,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 59, 48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 209, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -132, 37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 17, 64,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 266, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 164, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -431, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -314, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 81, 58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 238, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 121, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -170, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -222, -82,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -427, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -267, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -301, 43,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 173, -120,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -150, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -259, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -27, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -242, -92, -244, 57, 108, 136,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimFalconDivePulled_joint23[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 249, 545,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 794, 271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 792, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 813, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 779, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 905, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 956, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1046, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1018, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 928, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 709, -231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 464, -229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, -215,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimFalconDivePulled_joint25[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1279, 213, 1770, -165, -1643, -210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1065, 75, 1605, 15, -1854, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1127, -50, 1800, 151, -1875, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1133, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -1913, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 1908, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1902, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 1818, 29,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1127, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1491, -19,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1933, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1857, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1510, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1434, 72,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1848, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1750, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1772, 83,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1660, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1353, 61,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1300, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1771, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1279, 20, 1770, 0, -1643, 17,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimFalconDivePulled_joint26[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, -140, 269, 91, -125, -269,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 156, 101,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 362, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -394, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -421, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -413, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 332, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 299, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 265, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -210, -49,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 355, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 223, -44,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -437, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -497, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -256, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -466, -104,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 171, -59, -493, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 149, 186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -589, 29, -449, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -406, 359, -583, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 129, 331, 477, 152, -659, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 272, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 453, -54, -521, 143,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -208, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 369, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 271, 0, 297, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, -1, 269, -27, -125, 83,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimFalconDivePulled_joint28[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 424, 43,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 462, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 466, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 665, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 702, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 681, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 634, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 605, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 538, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 458, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, -33,
	ftAnimEnd(),
	0x0000,
};

/* Joint 29 */
u16 dFTLinkAnimFalconDivePulled_joint29[154] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -427, -13, -74, 3, -69, 207,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -640, -291,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -70, -88, 137, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -250, -148, 237, 173,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -334, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1024, -187, 484, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1015, 21, 481, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 178, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -981, 43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -486, 38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -318, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -22, 14,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -449, 37, 159, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -216, 52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 206, 50,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -3, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 82, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -153, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -46, 129, 258, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 105, -18, 169, 29, 306, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -83, -331, 140, -165, 224, -72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -42, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -557, -228, -160, -159,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -136, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -539, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -476, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -441, 24, -97, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -427, 14, -74, 23, -69, -27,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
