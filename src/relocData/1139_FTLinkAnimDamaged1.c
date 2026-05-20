/* AnimJoint data for relocData file 1139 (FTLinkAnimDamaged1) */
/* 1600 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimDamaged1_joint1[30];
extern u16 dFTLinkAnimDamaged1_joint2[44];
extern u16 dFTLinkAnimDamaged1_joint4[44];
extern u16 dFTLinkAnimDamaged1_joint5[78];
extern u16 dFTLinkAnimDamaged1_joint6[36];
extern u16 dFTLinkAnimDamaged1_joint9[16];
extern u16 dFTLinkAnimDamaged1_joint10[68];
extern u16 dFTLinkAnimDamaged1_joint11[28];
extern u16 dFTLinkAnimDamaged1_joint12[8];
extern u16 dFTLinkAnimDamaged1_joint13[8];
extern u16 dFTLinkAnimDamaged1_joint16[8];
extern u16 dFTLinkAnimDamaged1_joint17[36];
extern u16 dFTLinkAnimDamaged1_joint18[26];
extern u16 dFTLinkAnimDamaged1_joint20[12];
extern u16 dFTLinkAnimDamaged1_joint21[66];
extern u16 dFTLinkAnimDamaged1_joint23[32];
extern u16 dFTLinkAnimDamaged1_joint25[64];
extern u16 dFTLinkAnimDamaged1_joint26[58];
extern u16 dFTLinkAnimDamaged1_joint28[24];
extern u16 dFTLinkAnimDamaged1_joint29[56];

/* Joint pointer table (29 entries, 116 bytes) */
AObjEvent32 * dFTLinkAnimDamaged1_joints[] = {
	(AObjEvent32 *)dFTLinkAnimDamaged1_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTLinkAnimDamaged1_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLinkAnimDamaged1_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTLinkAnimDamaged1_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTLinkAnimDamaged1_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLinkAnimDamaged1_joint9, /* [6] joint 9 */
	NULL, /* [7] NULL */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTLinkAnimDamaged1_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTLinkAnimDamaged1_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLinkAnimDamaged1_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLinkAnimDamaged1_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLinkAnimDamaged1_joint16, /* [13] joint 16 */
	NULL, /* [14] NULL */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTLinkAnimDamaged1_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTLinkAnimDamaged1_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTLinkAnimDamaged1_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTLinkAnimDamaged1_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTLinkAnimDamaged1_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTLinkAnimDamaged1_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTLinkAnimDamaged1_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTLinkAnimDamaged1_joint28, /* [26] joint 28 */
	NULL, /* [27] NULL */
	(AObjEvent32 *)dFTLinkAnimDamaged1_joint29, /* [28] joint 29 */
};

/* Joint 1 */
u16 dFTLinkAnimDamaged1_joint1[30] = {
	ftAnimSetValAfter(FT_ANIM_TRAX), 0,
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, -343,
	ftAnimSetValBlock(FT_ANIM_TRAY), 901,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 1), -267, -361,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 1), 758,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 8), -406, 194,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 8), 673,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 3), 0, 231,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 3), 901,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTLinkAnimDamaged1_joint2[44] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -107, -21, 276, 19, 0, -11,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -122, -43, 292, 3, -9, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -369, -7, 298, -1, -13, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -180, 43, 281, -3, -11, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -107, 13, 276, 16, 0, 6,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimDamaged1_joint4[44] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 259, -104, 166, 83, 56, -86,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 281, -64, 211, -40, 43, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 66, 40, 45, -12, -249, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 650, 21, 95, 13, 3, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 259, 66, 166, -4, 56, 16,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimDamaged1_joint5[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 280, 338, -326, 551, -86, -545,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 618, 166, 225, 263, -632, -287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 613, 5, 200, -75, -661, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -604, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 336, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 49, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 32, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1, 28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -596, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -370, 169,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 189, -31, 45, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 273, 45, -327, -186, -146, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 280, 7, -326, 0, -86, 60,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimDamaged1_joint6[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -500, -307,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -807, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -635, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -614, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -646, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -815, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -862, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, 361,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimDamaged1_joint9[16] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, 7, 76,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -124, -1, 665,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 4, 7, 76,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimDamaged1_joint10[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 416, 450, 123, 220, -50, -37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -166, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 866, 195, 344, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 807, -94, 358, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 666, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 237, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -61, 46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -61, 109,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 668, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 695, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 677, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 464, -130, 79, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 416, -48, 123, -113, -50, -129,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimDamaged1_joint11[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -587, -67,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -869, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -869, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -860, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -822, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, 234,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimDamaged1_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimDamaged1_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTLinkAnimDamaged1_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -536, -339,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimDamaged1_joint17[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -192, -163, 303, 0, -58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 0, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -220, 11, 124, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -220, 11, 124, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -220, 11, 124, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 0, 72, -163, -112,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimDamaged1_joint18[26] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -199, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 108, -445, 90,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -336, 68, 84,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -109, -392, 258,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, -199, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTLinkAnimDamaged1_joint20[12] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 0, -40,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 0, -92,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimDamaged1_joint21[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -242, -36, -244, -144, 108, -410,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -374, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -361, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -301, -191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -274, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -194, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -351, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -386, -56,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -270, -59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -125, 201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -426, 39, -444, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -173, 20, -312, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -242, -68, -244, 68, 108, 234,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimDamaged1_joint23[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 249, 545,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 794, 280,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 811, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 887, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 911, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 608, -280,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, -359,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimDamaged1_joint25[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 329, 213, -161, 165, -34, -210,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 574, 27, -2, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -245, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -255, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -253, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 598, 20, -20, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 691, 23, 14, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 709, -65, 70, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 384, -115, -134, -73,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -183, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 329, -55, -161, -27, -34, 149,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimDamaged1_joint26[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, -140, 269, 91, -125, -269,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 340, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 58, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -394, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -340, 64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -154, -97,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 339, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 331, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 49, 9, -284, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 191, 60, -281, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, 79, 269, -61, -125, 156,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimDamaged1_joint28[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 424, 43,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 281, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 346, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 534, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, -109,
	ftAnimEnd(),
	0x0000,
};

/* Joint 29 */
u16 dFTLinkAnimDamaged1_joint29[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -427, -13, -74, 3, -69, 207,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), -448, -33, -68, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 182, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 224, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 332, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 314, -76,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -23, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -465, 5, -92, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -437, 18, -86, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -427, 9, -74, 12, -69, -46,
	ftAnimEnd(),
	0x0000, 0x0000,
};
