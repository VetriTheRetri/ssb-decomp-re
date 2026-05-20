/* AnimJoint data for relocData file 1117 (FTLinkAnimWalk2) */
/* 1872 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimWalk2_joint1[20];
extern u16 dFTLinkAnimWalk2_joint2[12];
extern u16 dFTLinkAnimWalk2_joint4[26];
extern u16 dFTLinkAnimWalk2_joint5[76];
extern u16 dFTLinkAnimWalk2_joint6[40];
extern u16 dFTLinkAnimWalk2_joint9[26];
extern u16 dFTLinkAnimWalk2_joint10[48];
extern u16 dFTLinkAnimWalk2_joint11[32];
extern u16 dFTLinkAnimWalk2_joint12[8];
extern u16 dFTLinkAnimWalk2_joint13[8];
extern u16 dFTLinkAnimWalk2_joint16[154];
extern u16 dFTLinkAnimWalk2_joint17[8];
extern u16 dFTLinkAnimWalk2_joint18[22];
extern u16 dFTLinkAnimWalk2_joint20[26];
extern u16 dFTLinkAnimWalk2_joint21[68];
extern u16 dFTLinkAnimWalk2_joint23[40];
extern u16 dFTLinkAnimWalk2_joint25[78];
extern u16 dFTLinkAnimWalk2_joint26[78];
extern u16 dFTLinkAnimWalk2_joint28[32];
extern u16 dFTLinkAnimWalk2_joint29[76];

/* Joint pointer table (29 entries, 116 bytes) */
AObjEvent32 * dFTLinkAnimWalk2_joints[] = {
	(AObjEvent32 *)dFTLinkAnimWalk2_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTLinkAnimWalk2_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLinkAnimWalk2_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTLinkAnimWalk2_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTLinkAnimWalk2_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLinkAnimWalk2_joint9, /* [6] joint 9 */
	NULL, /* [7] NULL */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTLinkAnimWalk2_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTLinkAnimWalk2_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLinkAnimWalk2_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLinkAnimWalk2_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLinkAnimWalk2_joint16, /* [13] joint 16 */
	NULL, /* [14] NULL */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTLinkAnimWalk2_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTLinkAnimWalk2_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTLinkAnimWalk2_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTLinkAnimWalk2_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTLinkAnimWalk2_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTLinkAnimWalk2_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTLinkAnimWalk2_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTLinkAnimWalk2_joint28, /* [26] joint 28 */
	NULL, /* [27] NULL */
	(AObjEvent32 *)dFTLinkAnimWalk2_joint29, /* [28] joint 29 */
};

/* Joint 1 */
u16 dFTLinkAnimWalk2_joint1[20] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 804, 86,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), 901, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), 804, 86,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), 901, 0,
	ftAnimBlock0(0),
	ftAnimLoop(0x6800, -38),
};

/* Joint 2 */
u16 dFTLinkAnimWalk2_joint2[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -107, 276, 0,
	ftAnimBlock(0, 60),
	ftAnimLoop(0x6800, -22),
};

/* Joint 4 */
u16 dFTLinkAnimWalk2_joint4[26] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 340, 246, 180,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 310, 25, 26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 340, 246, 180,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 310, 25, 26,
	ftAnimBlock0(0),
	ftAnimLoop(0x6800, -50),
};

/* Joint 5 */
u16 dFTLinkAnimWalk2_joint5[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 69, 0, -66, -1, -112, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 31), -248, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 32), -364, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 28), 104, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 89, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 99, -17,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -246, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -63, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -361, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), -67, 2,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 80, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -109, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -41, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 68, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 69, 1, -66, 1, -112, -2,
	ftAnimLoop(0x6800, -148),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimWalk2_joint6[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -606, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), -431, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -391, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -242, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -290, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -643, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -632, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -608, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -606, 1,
	ftAnimLoop(0x6800, -78),
};

/* Joint 9 */
u16 dFTLinkAnimWalk2_joint9[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 288, 116, 138,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 30), 4, 0, 7, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 30), 76,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 288, 116, 138,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 4, 7, 76,
	ftAnimBlock0(0),
	ftAnimLoop(0x6800, -50),
};

/* Joint 10 */
u16 dFTLinkAnimWalk2_joint10[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 350, -5, 192, 1, -164, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 44), 99, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 59), -164, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 41), 274, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 291, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 356, -6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 110, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 14), 190, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 350, -5, 192, 1, -164, 0,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimWalk2_joint11[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -502, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 31), -664, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -671, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), -537, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -524, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -512, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -502, 10,
	ftAnimLoop(0x6800, -62),
};

/* Joint 12 */
u16 dFTLinkAnimWalk2_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimBlock(0, 60),
	ftAnimLoop(0x6800, -14),
};

/* Joint 13 */
u16 dFTLinkAnimWalk2_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 60),
	ftAnimLoop(0x6800, -14),
};

/* Joint 16 */
u16 dFTLinkAnimWalk2_joint16[154] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1527, -3, -413, 3, -211, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1523, 1, -406, 0, -249, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1535, 4, -408, -1, -274, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1544, 1, -412, -1, -275, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1545, -1, -421, -1, -253, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1532, -4, -429, -1, -203, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1507, -6, -433, 0, -155, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1506, -3, -432, -1, -138, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1492, 0, -439, 0, -107, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1502, 5, -435, -1, -99, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1535, 5, -454, -5, -96, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1544, 4, -476, -7, -69, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1559, 8, -493, -4, -80, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1603, 1, -509, 0, -112, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1579, -3, -488, 6, -124, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1573, -3, -460, 9, -154, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1559, -6, -441, 6, -167, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1527, -3, -413, 3, -211, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1523, 1, -406, 0, -249, -7,
	ftAnimBlock0(0),
	ftAnimLoop(0x6800, -306),
};

/* Joint 17 */
u16 dFTLinkAnimWalk2_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -163, 0,
	ftAnimBlock(0, 60),
	ftAnimLoop(0x6800, -14),
};

/* Joint 18 */
u16 dFTLinkAnimWalk2_joint18[22] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -74, -316, -15,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), -97, -19, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), -74, -316, -15,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), -97, -19, 7,
	ftAnimBlock0(0),
	ftAnimLoop(0x6800, -42),
};

/* Joint 20 */
u16 dFTLinkAnimWalk2_joint20[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -66, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 30), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 25, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), -66, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 30), 0, 2,
	ftAnimBlock0(0),
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLinkAnimWalk2_joint21[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 122, -2, -218, -4, 172, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 150, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -225, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -247, -21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), -235, 6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 135, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 38), 129, -6,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 4, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), -211, -7,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -228, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 153, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 122, -6, -218, -6, 172, 19,
	ftAnimLoop(0x6800, -132),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimWalk2_joint23[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 316, -5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 705, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 720, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 401, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 389, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), 492, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 474, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 338, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 316, -21,
	ftAnimLoop(0x6800, -78),
};

/* Joint 25 */
u16 dFTLinkAnimWalk2_joint25[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 150, -3, -504, 3, -28, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -467, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 46), -84, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), 336, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 339, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), 482, -13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -478, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 38), -508, 1,
	ftAnimBlock(0, 18),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 467, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), 154, -5,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -89, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -40, 11,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -507, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -505, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 150, -4, -504, 1, -28, 11,
	ftAnimLoop(0x6800, -152),
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimWalk2_joint26[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 156, 2, 347, -2, -339, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 31), 214, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 45), 158, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 29), 77, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 76, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 355, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 202, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), -383, 18,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 135, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 151, 8,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 357, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 350, -2,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -365, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -349, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 156, 5, 347, -2, -339, 10,
	ftAnimLoop(0x6800, -152),
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimWalk2_joint28[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 566, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), 329, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 307, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), 818, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 821, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 568, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 566, -2,
	ftAnimLoop(0x6800, -62),
};

/* Joint 29 */
u16 dFTLinkAnimWalk2_joint29[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -461, 4, -78, 0, -18, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 32), -406, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 54), 36, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), -299, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -294, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -96, 26,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -421, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -472, 21,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -70, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -7, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -450, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -458, -7,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 33, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -67, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -461, -2, -78, -10, -18, -10,
	ftAnimLoop(0x6800, -148),
	ftAnimEnd(),
};
