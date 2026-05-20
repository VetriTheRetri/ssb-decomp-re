/* AnimJoint data for relocData file 1144 (FTLinkAnimDamageX3) */
/* 3328 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimDamageX3_joint1[44];
extern u16 dFTLinkAnimDamageX3_joint2[70];
extern u16 dFTLinkAnimDamageX3_joint4[86];
extern u16 dFTLinkAnimDamageX3_joint5[128];
extern u16 dFTLinkAnimDamageX3_joint6[56];
extern u16 dFTLinkAnimDamageX3_joint9[20];
extern u16 dFTLinkAnimDamageX3_joint10[126];
extern u16 dFTLinkAnimDamageX3_joint11[56];
extern u16 dFTLinkAnimDamageX3_joint12[68];
extern u16 dFTLinkAnimDamageX3_joint13[8];
extern u16 dFTLinkAnimDamageX3_joint16[20];
extern u16 dFTLinkAnimDamageX3_joint17[52];
extern u16 dFTLinkAnimDamageX3_joint18[58];
extern u16 dFTLinkAnimDamageX3_joint20[64];
extern u16 dFTLinkAnimDamageX3_joint21[166];
extern u16 dFTLinkAnimDamageX3_joint23[76];
extern u16 dFTLinkAnimDamageX3_joint25[126];
extern u16 dFTLinkAnimDamageX3_joint26[166];
extern u16 dFTLinkAnimDamageX3_joint28[72];
extern u16 dFTLinkAnimDamageX3_joint29[144];

/* Joint pointer table (29 entries, 116 bytes) */
AObjEvent32 * dFTLinkAnimDamageX3_joints[] = {
	(AObjEvent32 *)dFTLinkAnimDamageX3_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTLinkAnimDamageX3_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLinkAnimDamageX3_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTLinkAnimDamageX3_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTLinkAnimDamageX3_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLinkAnimDamageX3_joint9, /* [6] joint 9 */
	NULL, /* [7] NULL */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTLinkAnimDamageX3_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTLinkAnimDamageX3_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLinkAnimDamageX3_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLinkAnimDamageX3_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLinkAnimDamageX3_joint16, /* [13] joint 16 */
	NULL, /* [14] NULL */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTLinkAnimDamageX3_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTLinkAnimDamageX3_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTLinkAnimDamageX3_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTLinkAnimDamageX3_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTLinkAnimDamageX3_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTLinkAnimDamageX3_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTLinkAnimDamageX3_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTLinkAnimDamageX3_joint28, /* [26] joint 28 */
	NULL, /* [27] NULL */
	(AObjEvent32 *)dFTLinkAnimDamageX3_joint29, /* [28] joint 29 */
};

/* Joint 1 */
u16 dFTLinkAnimDamageX3_joint1[44] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 901, -134, 0, -812,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 765, -54, -315, -1754,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 880, -49, -657, -197,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 17), 648, -172, -784, -57,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 449, -142, -802, 115,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 523, 516, -683, 917,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 901, -134, 0, -812,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimDamageX3_joint2[70] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -107, -63, 276, -15, 0, -35,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -172, -667, 260, -143, -34, -761,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1442, -141, -9, -30, -1522, -165,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), -1442, -9, -1522,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1442, 46, -9, 121, -1522, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1208, 317, 597, 88, -1294, 349,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -173, 220, 342, -64, -123, 258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -107, -63, 276, -15, 0, -35,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTLinkAnimDamageX3_joint4[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 259, 128, 166, -52, 56, 89,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 550, -348, 639, 147,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 94,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -437, -109, 351, -32,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -37,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), -437, 0, 351, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 12), -37,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 51, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 304, 97, 280, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), 2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 735, 63, 282, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), -134,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 751, 32, 225, -67,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -116,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 799, -163, 147, -56,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 259, 128, 166, -52, 56, 89,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTLinkAnimDamageX3_joint5[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 288, 243, -333, 32, -94, -287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 531, -206, -300, -43, -382, 343,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -124, -292, -420, -76, 591, 427,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -587, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -53, 77, 473, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 31, -9, 315, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -299, -69, 651, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -350, -39, 709, 39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 568, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -494, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -575, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -154, -3,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 558, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 406, -54,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -149, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 127, -18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -532, -51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -592, 120,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 374, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -356, 302, 37, -220, 482, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 13, 322, -312, -185, 277, -288,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 288, 274, -333, -20, -94, -372,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimDamageX3_joint6[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -494, -189,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -683, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -483, 229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -97, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -411, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -449, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -777, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -784, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -852, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -864, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -671, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -494, 176,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimDamageX3_joint9[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 4, 128,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 7, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 20), -281, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -281, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 4, 128,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimDamageX3_joint10[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1193, -117, 1493, -865, -1661, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1310, -322, 627, -605, -1824, -242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1839, -286, 282, -235, -2146, -243,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 188, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2229, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1847, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1808, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1713, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 207, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 308, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2183, 45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -2432, -166,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1812, -134,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -2530, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2625, -175,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -3150, -86,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 296, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 162, -69,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2546, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -2404, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2353, 22, -3241, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2358, -144, -3287, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2642, -221, 68, -23, -3201, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2801, -159, 115, 46, -3269, -68,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimDamageX3_joint11[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -599, 149,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -450, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -472, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -130, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -206, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -631, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -661, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -449, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -491, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -582, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -591, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -697, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -599, 97,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimDamageX3_joint12[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -9, -209, 14, 0, 54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -129, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), 249, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 13, 37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 329, 24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), -130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 329, -10, -130, 9, 249, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 266, -38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 111, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -82, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -188, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 0, -9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -209, 14, 0, 54,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTLinkAnimDamageX3_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTLinkAnimDamageX3_joint16[20] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -536, -339,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1612, 180, -704,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1724, -40, -763,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), 1697, -536, -339,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTLinkAnimDamageX3_joint17[52] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 57, -163, 22, 0, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 4, 4, -107, 8, 65, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -1, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), -34, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 35, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), -87, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -87, -23, -1, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -275, 12, -60, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 57, -163, 22, 0, 27,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimDamageX3_joint18[58] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -199, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 125, -17, -580, 73, -80, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -51, -18, 21, 68, -89, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -110, -26, 312, -21, -145, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -503, -43, -345, -73, 705, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -503, 42, -345, 18, 705, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -163, 71, -199, 20, 0, -100,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, -199, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTLinkAnimDamageX3_joint20[64] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 26,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 307, 154,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 463, 39,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -290, -306,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 542, -31,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 379, 449,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -67, -26,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 425, -160,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 114, 67,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -315, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 338, -16,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 0, 26,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimDamageX3_joint21[166] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -242, 189, -244, 97, 108, -535,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 111, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -52, -8, -426, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -260, -45, -80, 281,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 189, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -143, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -94, 48, 113, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), 242, 18, 169, 26,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 205, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 232, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 261, -67, 194, 74, 210, -203,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 6, -63, 339, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -174, -325,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -440, -225,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -918, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -20, 4, 347, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 239, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 79, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -74, -174,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -314, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -990, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 152, 368, -1061, -384,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -275, -79, 976, 513, -1760, -437,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -473, -188, 1179, 286, -1936, -129,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1961, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -651, -337, -2019, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1597, -372,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1949, 215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1588, 324,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1893, -126, 1828, -54, -1299, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1850, 42, 1852, 24, -1499, -199,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimDamageX3_joint23[76] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 249, 507,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 756, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 357, -375,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 113, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 186, 279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 673, 323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 833, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 889, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 996, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1117, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1059, -270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 577, -526,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, 243,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimDamageX3_joint25[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 329, 283, -161, 8, -34, -61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 370, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -13, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 612, 301,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 932, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 723, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 805, 62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 873, 11,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 371, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -80, -10,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 882, 7, -16, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -2, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 639, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 618, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 888, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 920, -471, -8, -68, -80, 55,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -155, -9, 50, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -54, -569,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -218, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -375, 476, -159, -1, 83, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -158, -2, 66, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 735, 626,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 877, -204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 325, -274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 329, 3, -161, -3, -34, -101,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimDamageX3_joint26[166] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, -23, 269, 97, -125, -239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 247, 48, 367, -231, -364, 230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 368, 53, -193, -244, 335, 348,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -57, -174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 109, 176, 115, -198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 231, 72, -64, -161,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 250, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -246, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -200, -109,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -236, 55,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 269, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 395, -7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -237, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 227, 161,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -175, 98,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 350, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 374, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -92, -195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 268, -26, -279, -55, 429, 95,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 286, -169, 294, -226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -202, 235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 190, 308,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -42, -156, 415, 71, -32, -286,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -27, -141, 334, -109, -278, -290,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 195, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -326, -143, -613, -174,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -359, 251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -314, 207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 89, 292, 340, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, 181, 269, -70, -125, 234,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimDamageX3_joint28[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 424, -68,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 356, -209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 510, 384,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 939, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 930, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 954, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 974, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 477, -329,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 95, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 466, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 563, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 607, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 697, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 610, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, -185,
	ftAnimEnd(),
	0x0000,
};

/* Joint 29 */
u16 dFTLinkAnimDamageX3_joint29[144] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -427, -1245, -74, 39, -69, 514,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -73, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1673, -591, 444, 272,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1610, 62, 475, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 331, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1403, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1202, 208,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -382, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -68, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -14, 45,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -331, 42, 266, -57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 110, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -213, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -165, -44, 34, 39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 150, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -301, -253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -671, -229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -681, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -705, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -348, 452,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 199, -31, 192, -57, 113, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -109, -79,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -123, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -410, -231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -263, 42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -358, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -123, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -96, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -427, -68, -74, 22, -69, 53,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
