/* AnimJoint data for relocData file 876 (FTDonkeyAnimCliffSlow) */
/* 2704 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimCliffSlow_joint1[22];
extern u16 dFTDonkeyAnimCliffSlow_joint2[48];
extern u16 dFTDonkeyAnimCliffSlow_joint3[56];
extern u16 dFTDonkeyAnimCliffSlow_joint5[56];
extern u16 dFTDonkeyAnimCliffSlow_joint6[140];
extern u16 dFTDonkeyAnimCliffSlow_joint7[40];
extern u16 dFTDonkeyAnimCliffSlow_joint8[26];
extern u16 dFTDonkeyAnimCliffSlow_joint9[8];
extern u16 dFTDonkeyAnimCliffSlow_joint11[20];
extern u16 dFTDonkeyAnimCliffSlow_joint12[178];
extern u16 dFTDonkeyAnimCliffSlow_joint13[48];
extern u16 dFTDonkeyAnimCliffSlow_joint14[38];
extern u16 dFTDonkeyAnimCliffSlow_joint17[8];
extern u16 dFTDonkeyAnimCliffSlow_joint18[222];
extern u16 dFTDonkeyAnimCliffSlow_joint20[56];
extern u16 dFTDonkeyAnimCliffSlow_joint22[74];
extern u16 dFTDonkeyAnimCliffSlow_joint23[144];
extern u16 dFTDonkeyAnimCliffSlow_joint25[56];
extern u16 dFTDonkeyAnimCliffSlow_joint26[60];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTDonkeyAnimCliffSlow_joints[] = {
	(AObjEvent32 *)dFTDonkeyAnimCliffSlow_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTDonkeyAnimCliffSlow_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTDonkeyAnimCliffSlow_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTDonkeyAnimCliffSlow_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTDonkeyAnimCliffSlow_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTDonkeyAnimCliffSlow_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTDonkeyAnimCliffSlow_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTDonkeyAnimCliffSlow_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTDonkeyAnimCliffSlow_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTDonkeyAnimCliffSlow_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTDonkeyAnimCliffSlow_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTDonkeyAnimCliffSlow_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTDonkeyAnimCliffSlow_joint17, /* [14] joint 17 */
	NULL, /* [15] NULL */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTDonkeyAnimCliffSlow_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTDonkeyAnimCliffSlow_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTDonkeyAnimCliffSlow_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTDonkeyAnimCliffSlow_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTDonkeyAnimCliffSlow_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTDonkeyAnimCliffSlow_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTDonkeyAnimCliffSlow_joint1[22] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), -3004, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 62), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 25), -2588,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 8), -3004, 323,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 7), -1974, 950,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTDonkeyAnimCliffSlow_joint2[48] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1032, 0, -397, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX), -24,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 32), -397, 1,
	ftAnimSetValRateT(FT_ANIM_TRAY, 33), 1036, -28,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 22), -24,
	ftAnimSetValRateT(FT_ANIM_TRAX, 12), -37, -59,
	ftAnimBlock(0, 10),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 1,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 8), -427, 4,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -28,
	ftAnimSetValRateT(FT_ANIM_TRAY, 7), 1032, -37,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), -59,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 6), -475, -102,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTDonkeyAnimCliffSlow_joint3[56] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 135, -52, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 125, -6, 116, -7, 10, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 73, -129, -136,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 125, 116, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 73, -10, -129, -16, -136, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 17, 4, -53, 5, -28, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -31, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 135, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 17, -11, -53, 0, -105, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTDonkeyAnimCliffSlow_joint5[56] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -230, 17, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -211, 0, -22, 2, -82, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -221, 40, 114,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -211, -22, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -221, 15, 40, 3, 114, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -56, 0, 15, -1, 7, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -230, 3, 17, 12, 6, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -9, 36, 211, 2, -148, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTDonkeyAnimCliffSlow_joint6[140] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -42, 14, -195, 16, -673, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 230, 40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -611, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -181, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -306, -119,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -302, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 253, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 138, 20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -565, 28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -344, 90,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -177, 90,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -562, 5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 147, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -160, -25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -248, 75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -470, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -522, 68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -143, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -178, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -13, 14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -146, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -108, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -518, -47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -560, 43,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 38, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -516, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -97, 9, -477, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 47, 9, -89, 7, -446, 31,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTDonkeyAnimCliffSlow_joint7[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -911, 8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -837, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -881, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -965, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1000, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -1020, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -981, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -1052, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1080, -27,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimCliffSlow_joint8[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -258, -178, -100,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), -258, -178, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -258, 6, -178, 10, -100, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -153, 6, -26, 20, -213, 6,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTDonkeyAnimCliffSlow_joint9[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 393, 144, 74,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTDonkeyAnimCliffSlow_joint11[20] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -822, -174, 94,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), -724, -183, 91,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -822, -174, 94,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -603, -188, 324,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimCliffSlow_joint12[178] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1661, -27, 1500, -83, 952, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 985, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1207, -258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1417, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1147, -275,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 742, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 989, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 768, -243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 940, -527, 733, -54, 501, -542,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 176, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 152, -441, -317, -482,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 57, -50, -462, -91,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 76, 37, -428, 77,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 90, -56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 296, 156,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 131, 107, -336, 140,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 448, 17, 22, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 465, 105,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 77, -51,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 327, -131, -94, -125,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -415, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 112, 1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 44, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 56, -9,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -463, -49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -639, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 114, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -174, -89,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 49, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 307, -1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -642, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -711, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -266, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -431, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -486, -55, 303, -3, -734, -23,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTDonkeyAnimCliffSlow_joint13[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -904, -18,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -886, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -797, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1158, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1153, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -891, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -962, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -956, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -925, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -808, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -797, 10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTDonkeyAnimCliffSlow_joint14[38] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 446, 178, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 914, 4, 390, 3, 704, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 572, -16, 264, -7, 64, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 446, 38, 178, -17, 89, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 1161, 67, 0, -16, 268, 16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTDonkeyAnimCliffSlow_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -893, -1340, 2502,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTDonkeyAnimCliffSlow_joint18[222] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -72, 80, -543, 0, 2343, -86,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -407, 132,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 418, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 2058, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1895, -88,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1915, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -247, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 427, -17, -179, -57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 175, -269,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -362, -168, 1875, 82,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -473, 47, 2648, 137,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -155, -259,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -132, 271,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -438, 0, 2711, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -498, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 2412, -295,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 204, 259, 2052, -261,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1948, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 218, -239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -319, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -150, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -303, -163, 1900, 48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -525, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2619, 166,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -94, -266,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -372, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -477, 43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -691, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2711, 41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2449, -288,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -235, 244,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 348, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2054, -324,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1800, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 259, -149, -692, 4, 1901, 168,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -487, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -265, -90, 2514, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -327, -47, 2609, 77,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -258, 99, 2503, -133,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -540, -55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -687, -18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -126, 181, 2336, -215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 104, 237, 2073, -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 348, 244, -691, -3, 1800, -272,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTDonkeyAnimCliffSlow_joint20[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1049, 33,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1155, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1018, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 888, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1028, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1040, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 900, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1189, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1169, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 831, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 911, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1143, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1189, 45,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTDonkeyAnimCliffSlow_joint22[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 158, -4, 9, 0, 41, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 39), 9, 0, 41, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -47, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -144, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 63, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 136, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 122, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 13, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -203, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -10, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 238, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 289, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 187, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 215, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 337, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 377, 40, 9, 0, 41, 0,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTDonkeyAnimCliffSlow_joint23[144] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -196, 35, 248, 12, 2205, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 37, -99, 292, 0, 2290, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -79, -111, 279, -30, 2158, -116,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -80, 109, 2166, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 231, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 277, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 285, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 35, 97, 2298, 116,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2202, -116,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -151, -91,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 282, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 198, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2087, -89,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 2024, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -227, -63,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -108, 130,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 265, 58, 2091, 95,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 2826, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 183, 61,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 28, 124,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 188, -80,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2791, -59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2109, -121,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 249, 59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 274, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 86, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -210, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -316, -106, 198, -75, 2024, -84,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTDonkeyAnimCliffSlow_joint25[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1083, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1131, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1194, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1055, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1025, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1249, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1243, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 734, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 594, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 487, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 632, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1148, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1190, 42,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTDonkeyAnimCliffSlow_joint26[60] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 1638, -18, -1270, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), 1738,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 39), 1738,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 39), -1270, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 1548, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1590, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 1506, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1518, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 1578, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1544, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 1523, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1522, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1572, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1619, 46, 1738, 0, -1270, 0,
	ftAnimEnd(),
	0x0000,
};
