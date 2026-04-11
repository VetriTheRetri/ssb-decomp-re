/* AnimJoint data for relocData file 1224 (FTLinkAnimJab2) */
/* 2224 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimJab2_joint1[58];
extern u16 dFTLinkAnimJab2_joint2[58];
extern u16 dFTLinkAnimJab2_joint4[56];
extern u16 dFTLinkAnimJab2_joint5[126];
extern u16 dFTLinkAnimJab2_joint6[56];
extern u16 dFTLinkAnimJab2_joint9[58];
extern u16 dFTLinkAnimJab2_joint10[66];
extern u16 dFTLinkAnimJab2_joint11[40];
extern u16 dFTLinkAnimJab2_joint12[8];
extern u16 dFTLinkAnimJab2_joint13[8];
extern u16 dFTLinkAnimJab2_joint16[44];
extern u16 dFTLinkAnimJab2_joint17[46];
extern u16 dFTLinkAnimJab2_joint18[46];
extern u16 dFTLinkAnimJab2_joint20[46];
extern u16 dFTLinkAnimJab2_joint21[60];
extern u16 dFTLinkAnimJab2_joint23[24];
extern u16 dFTLinkAnimJab2_joint25[70];
extern u16 dFTLinkAnimJab2_joint26[80];
extern u16 dFTLinkAnimJab2_joint28[104];

/* Joint pointer table (29 entries, 116 bytes) */
u32 dFTLinkAnimJab2_joints[] = {
	(u32)dFTLinkAnimJab2_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimJab2_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimJab2_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTLinkAnimJab2_joint5, /* [4] joint 5 */
	(u32)dFTLinkAnimJab2_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimJab2_joint9, /* [6] joint 9 */
	0x00000000, /* [7] NULL */
	0x00000000, /* [8] NULL */
	(u32)dFTLinkAnimJab2_joint10, /* [9] joint 10 */
	(u32)dFTLinkAnimJab2_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimJab2_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimJab2_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimJab2_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTLinkAnimJab2_joint17, /* [16] joint 17 */
	(u32)dFTLinkAnimJab2_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimJab2_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTLinkAnimJab2_joint21, /* [20] joint 21 */
	(u32)dFTLinkAnimJab2_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTLinkAnimJab2_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTLinkAnimJab2_joint26, /* [25] joint 26 */
	(u32)dFTLinkAnimJab2_joint28, /* [26] joint 28 */
	0x00000000, /* [27] NULL */
	0xFFFF0206, /* [28] END */
};

/* Joint 1 */
u16 dFTLinkAnimJab2_joint1[58] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAZ), -7, 0, 80, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAY), 720,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -7, 0, 720, 0, 80, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 111, 36, -44,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 117, 111, 761, 36, 30, -44,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 2, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 117, 0, 761, 0, 30, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -58, 69, -15,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 0, -16, 901, 19, 0, -4,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 48), 0, 901, 0,
	ftAnimBlock0(0),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimJab2_joint2[58] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 61, 4,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -154, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 61, -3, -154, 0, 53, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -9, 63, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -25, -8, 419, 57, -8, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -25, -6, 419, -11, -8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -107, 22, 276, -13, 0, 23,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 48), -107, 276, 0,
	ftAnimBlock0(0),
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTLinkAnimJab2_joint4[56] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 304, 0, -562, 0, -121, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 304, 0, -562, 0, -121, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 299, -15, 225, 85, 180, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 146, 0, 290, 0, 54, -9,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 7, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 259, 2, 166, -2, 56, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 48), 259, 166, 56,
	ftAnimBlock0(0),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimJab2_joint5[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 605, 20, 161, -28, -495, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 605, -12, -495, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 82, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 161, -48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -713, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 616, 161, -580, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 928, 181, -833, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 980, 41, -889, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1012, -65, -902, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 849, -88, -695, 56, -716, 107,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 890, 19, -720, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -608, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -597, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -691, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 902, 35, -723, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 862, -217, -672, 227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 526, -264, -324, 276,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 288, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -80, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -612, 85,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -361, 51,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 283, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 280, -3, -326, 34, -86, -6,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimJab2_joint6[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -310, -35,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -406, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -310, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -467, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -537, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -562, 195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -266, 277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -7, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -266, -194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -528, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, 28,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimJab2_joint9[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1270, 0, 200, 0, -419, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1270, 0, 200, 0, -419, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 163, -29, 267,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -289, 129, 25, -40, 1186, 213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -185, -1, 0, -3, 649, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -185, 14, 0, 0, 649, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 4, 3, 7, 0, 76, -10,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 48), 4, 7, 76,
	ftAnimBlock0(0),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTLinkAnimJab2_joint10[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 397, -13, 156, -9, -120, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 595, 130, 115, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -20, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 89, 92,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -25, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 735, 130, 100, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 547, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 201, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 174, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 118, 8,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 481, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 436, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 416, -20, 123, 5, -50, -24,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimJab2_joint11[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -718, 13,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -785, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -814, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -356, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -373, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -694, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -657, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -613, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, 26,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimJab2_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimBlock(0, 22),
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimJab2_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 22),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTLinkAnimJab2_joint16[44] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -536, -339,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1697, 54, -536, -5, -339, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 2187, 48, -586, -5, -850, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 2187, -37, -586, 3, -850, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 1697, -8, -536, 0, -339, 9,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 48), 1697, -536, -339,
	ftAnimBlock0(0),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimJab2_joint17[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -35, 0, 220, -26, 0, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -33, 0, -49, -49, 15, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -33, 0, -224, -21, 25, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -33, 2, -224, 4, 25, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0, -163, 1, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 48), 0, -163, 0,
	ftAnimBlock0(0),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimJab2_joint18[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -49, -14, 130, 9, -111, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -196, 11, 224, -65, -65, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 58, 31, -455, -84, -37, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 58, -4, -455, 19, -37, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, -1, -199, 4, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 48), 0, -199, 0,
	ftAnimBlock0(0),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTLinkAnimJab2_joint20[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 6, 0, -21, 0, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 90, 14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -298, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 86, -16, 0, 66, 0, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -60, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 300, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 0, 1, 0, -5, 0, 1,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 48), 0, 0, 0,
	ftAnimBlock0(0),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLinkAnimJab2_joint21[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -100, 1, -20, 1, -16, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -173, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -1, 61, -105, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 61, 55, -138, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -85, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -266, 19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -211, -31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 84, 35,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -119, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -200, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -242, -42, -244, 22, 108, 24,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimJab2_joint23[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 582, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 668, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 627, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 292, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, -42,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimJab2_joint25[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1677, 2, -933, 1, 1643, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1137, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1546, 115, 1515, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1443, 84, 1417, -78,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1306, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1274, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1230, -85,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1434, -6,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1323, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1553, 29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1281, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1303, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1279, 23, -1446, -11, 1573, 20,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimJab2_joint26[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -155, -10, -28, -8, -740, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -584, 96,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 102, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -250, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -306, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -125, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -482, 105,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -267, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 176, 58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 288, 5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -110, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 269, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -282, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -116, 3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 292, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 261, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, 1, 269, 8, -125, -9,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimJab2_joint28[104] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 714, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 625, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 631, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 470, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 437, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, -12,
	ftAnimEnd(),
	0x0000, 0x200E, 0xFE21, 0x000C, 0xFFB7, 0x000A, 0xFFDD, 0x0000, 0x2803, 0x0005, 0xFE64, 0x0039, 0x2809, 0x000F, 0xFF6E, 0xFFFC, 0x2005, 0x0003, 0xFFCF, 0xFFF5, 0x2005, 0x0001, 0xFFB7, 0x002F, 0x2805, 0x0004, 0x012A, 0x002F, 0x0801, 0x0001, 0x2003, 0x0001, 0xFE93, 0x0022, 0x2803, 0x000E, 0xFDF7, 0x0009, 0x0801, 0x0002, 0x2005, 0x0001, 0x014C, 0x0014, 0x2805, 0x000C, 0xFFC8, 0xFFE9, 0x0801, 0x0006, 0x2009, 0x0001, 0xFF6D, 0x0001, 0x2809, 0x0005, 0xFFB1, 0x000C, 0x0801, 0x0004, 0x2003, 0x0001, 0xFE11, 0x002E, 0x200F, 0x0001, 0xFE55, 0x0043, 0xFFB6, 0xFFEF, 0xFFBB, 0x0009, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
