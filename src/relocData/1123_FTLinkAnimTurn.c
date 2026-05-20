/* AnimJoint data for relocData file 1123 (FTLinkAnimTurn) */
/* 1328 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimTurn_joint1[42];
extern u16 dFTLinkAnimTurn_joint2[10];
extern u16 dFTLinkAnimTurn_joint4[20];
extern u16 dFTLinkAnimTurn_joint5[24];
extern u16 dFTLinkAnimTurn_joint6[16];
extern u16 dFTLinkAnimTurn_joint9[8];
extern u16 dFTLinkAnimTurn_joint10[54];
extern u16 dFTLinkAnimTurn_joint11[28];
extern u16 dFTLinkAnimTurn_joint12[8];
extern u16 dFTLinkAnimTurn_joint13[8];
extern u16 dFTLinkAnimTurn_joint16[8];
extern u16 dFTLinkAnimTurn_joint17[12];
extern u16 dFTLinkAnimTurn_joint18[12];
extern u16 dFTLinkAnimTurn_joint20[8];
extern u16 dFTLinkAnimTurn_joint21[78];
extern u16 dFTLinkAnimTurn_joint23[48];
extern u16 dFTLinkAnimTurn_joint25[72];
extern u16 dFTLinkAnimTurn_joint26[58];
extern u16 dFTLinkAnimTurn_joint28[28];
extern u16 dFTLinkAnimTurn_joint29[64];

/* Joint pointer table (29 entries, 116 bytes) */
AObjEvent32 * dFTLinkAnimTurn_joints[] = {
	(AObjEvent32 *)dFTLinkAnimTurn_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTLinkAnimTurn_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLinkAnimTurn_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTLinkAnimTurn_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTLinkAnimTurn_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLinkAnimTurn_joint9, /* [6] joint 9 */
	NULL, /* [7] NULL */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTLinkAnimTurn_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTLinkAnimTurn_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLinkAnimTurn_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLinkAnimTurn_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLinkAnimTurn_joint16, /* [13] joint 16 */
	NULL, /* [14] NULL */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTLinkAnimTurn_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTLinkAnimTurn_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTLinkAnimTurn_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTLinkAnimTurn_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTLinkAnimTurn_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTLinkAnimTurn_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTLinkAnimTurn_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTLinkAnimTurn_joint28, /* [26] joint 28 */
	NULL, /* [27] NULL */
	(AObjEvent32 *)dFTLinkAnimTurn_joint29, /* [28] joint 29 */
};

/* Joint 1 */
u16 dFTLinkAnimTurn_joint1[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 901, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAX), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 0, 0, 0, 901, -42, 0, 106,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 134,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 1608, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 863, -1, 92, 473,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 900, 59, 236, -148,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 901, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTLinkAnimTurn_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -107, 276, 0, 0, 0, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimTurn_joint4[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 259, 166, 56,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 324, 400, 175,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 259, 166, 56,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTLinkAnimTurn_joint5[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1328, 0, -1281, 0, 1522, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -1328, 0, -1281, 0, 1522, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1328, 0, -1281, 0, 1522, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimTurn_joint6[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -500, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -500, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimTurn_joint9[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, 7, 76,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimTurn_joint10[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 416, 8, 123, 3, -50, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 227, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 517, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 241, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 297, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 137, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 214, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -9, -65,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 469, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 430, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 416, -14, 123, -13, -50, -41,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimTurn_joint11[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -587, -15,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -408, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -256, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -557, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -586, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimTurn_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimTurn_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTLinkAnimTurn_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -536, -339,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimTurn_joint17[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -163,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 46,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 7), -163,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimTurn_joint18[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -199,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 343,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 7), -199,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTLinkAnimTurn_joint20[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimTurn_joint21[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -242, -9, -244, 8, 108, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -244, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -288, 29, 186, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -242, 156, 108, -208,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 199, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -328, -26, -229, -209,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -335, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -310, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 24, -233, -353, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -268, -157, -312, 34, -154, 152,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -250, 10, 44, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -289, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -253, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -242, 11, -244, 6, 108, 64,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimTurn_joint23[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 249, -30,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 138, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 69, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, 390,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 851, 409,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1069, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 868, -194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 680, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 380, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, -130,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimTurn_joint25[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1279, 3, 1770, -1, -1643, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1279, -53, 1770, 19, -1643, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1372, -1, 1804, -70, -1818, -121,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1126, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1628, 16, -1886, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1836, -12, -1662, 70,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1771, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1116, 31, 1603, -162,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1146, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1512, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1652, 129, -1718, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1279, -132, 1770, 118, -1643, 75,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimTurn_joint26[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, 0, 269, 0, -125, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -45, 39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 140, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 256, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 299, 68,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 419, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -17, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -135, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 112, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 250, 42,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 325, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, -54, 269, 19, -125, 10,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimTurn_joint28[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 424, -3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 514, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 573, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 476, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 453, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, -28,
	ftAnimEnd(),
	0x0000,
};

/* Joint 29 */
u16 dFTLinkAnimTurn_joint29[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2036, 7, -1534, 0, -1678, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -1582, -1, -1780, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -2036, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1986, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2174, -58, -1538, -16, -1902, -71,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1876, 49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1688, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2104, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -2170, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2059, 67, -1675, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2036, 22, -1534, 140, -1678, 9,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
