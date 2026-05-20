/* AnimJoint data for relocData file 1137 (FTLinkAnimTeeterstart) */
/* 1184 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimTeeterstart_joint1[18];
extern u16 dFTLinkAnimTeeterstart_joint2[22];
extern u16 dFTLinkAnimTeeterstart_joint4[18];
extern u16 dFTLinkAnimTeeterstart_joint5[52];
extern u16 dFTLinkAnimTeeterstart_joint6[24];
extern u16 dFTLinkAnimTeeterstart_joint9[14];
extern u16 dFTLinkAnimTeeterstart_joint10[24];
extern u16 dFTLinkAnimTeeterstart_joint11[24];
extern u16 dFTLinkAnimTeeterstart_joint12[8];
extern u16 dFTLinkAnimTeeterstart_joint13[8];
extern u16 dFTLinkAnimTeeterstart_joint16[8];
extern u16 dFTLinkAnimTeeterstart_joint17[12];
extern u16 dFTLinkAnimTeeterstart_joint18[14];
extern u16 dFTLinkAnimTeeterstart_joint20[8];
extern u16 dFTLinkAnimTeeterstart_joint21[48];
extern u16 dFTLinkAnimTeeterstart_joint23[24];
extern u16 dFTLinkAnimTeeterstart_joint25[48];
extern u16 dFTLinkAnimTeeterstart_joint26[56];
extern u16 dFTLinkAnimTeeterstart_joint28[36];
extern u16 dFTLinkAnimTeeterstart_joint29[68];

/* Joint pointer table (29 entries, 116 bytes) */
AObjEvent32 * dFTLinkAnimTeeterstart_joints[] = {
	(AObjEvent32 *)dFTLinkAnimTeeterstart_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTLinkAnimTeeterstart_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLinkAnimTeeterstart_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTLinkAnimTeeterstart_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTLinkAnimTeeterstart_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLinkAnimTeeterstart_joint9, /* [6] joint 9 */
	NULL, /* [7] NULL */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTLinkAnimTeeterstart_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTLinkAnimTeeterstart_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLinkAnimTeeterstart_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLinkAnimTeeterstart_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLinkAnimTeeterstart_joint16, /* [13] joint 16 */
	NULL, /* [14] NULL */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTLinkAnimTeeterstart_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTLinkAnimTeeterstart_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTLinkAnimTeeterstart_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTLinkAnimTeeterstart_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTLinkAnimTeeterstart_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTLinkAnimTeeterstart_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTLinkAnimTeeterstart_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTLinkAnimTeeterstart_joint28, /* [26] joint 28 */
	NULL, /* [27] NULL */
	(AObjEvent32 *)dFTLinkAnimTeeterstart_joint29, /* [28] joint 29 */
};

/* Joint 1 */
u16 dFTLinkAnimTeeterstart_joint1[18] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 804, 86,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 680, -46, 122, -120,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 746, 24, -64, 49,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimTeeterstart_joint2[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), -107, 276,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -20, 40, 216, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 296, 8, 0, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTLinkAnimTeeterstart_joint4[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 340, 246, 180,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 383, 2, 0, -11, 0, -8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTLinkAnimTeeterstart_joint5[52] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 69, -4, -66, -16, -112, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 225, 100,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -338, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -77, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -193, -121,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -582, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 321, 81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 464, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -361, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -413, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -629, -46, -427, -14, 490, 26,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimTeeterstart_joint6[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -606, -28,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -839, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -786, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -659, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -645, 13,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimTeeterstart_joint9[14] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 288, 116, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -119, -6, 20, -1, 152, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimTeeterstart_joint10[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1959, 4, 1416, -3, 1444, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 2229, 26, 1280, -10, 1938, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2252, 23, 1272, -7, 1969, 30,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimTeeterstart_joint11[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -502, -12,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -596, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -572, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -530, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -542, -12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimTeeterstart_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimTeeterstart_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -803, 804,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTLinkAnimTeeterstart_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1527, -413, -211,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimTeeterstart_joint17[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, -163,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), -276, -4, 0, 5,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimTeeterstart_joint18[14] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -74, -316, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -71, -1, 0, 9, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTLinkAnimTeeterstart_joint20[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -66, 0, 0,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimTeeterstart_joint21[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 122, 16, -218, 2, 172, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 171, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -105, 39, -228, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -68, 30, -356, -122,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -36, -5, -631, -45,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 157, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 143, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 128, -14, -45, -8, -659, -28,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimTeeterstart_joint23[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 316, 80,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 693, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 752, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 748, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 732, -16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimTeeterstart_joint25[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -3066, -11, -504, 5, -28, -52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -343, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -3027, 72, -298, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2935, 85, -399, -84,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -2758, 3, -386, 32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -261, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -89, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2756, 2, -59, 30, -363, 23,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimTeeterstart_joint26[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 156, 51, 347, -14, -339, 34,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 266, 2, -258, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 208, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 304, 65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 25, -52,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 290, 11, -343, -75,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 117, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -395, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -17, -32, -342, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -38, -21, 106, -10, -304, 38,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimTeeterstart_joint28[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 566, -80,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 486, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 322, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 310, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 481, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 759, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 731, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 709, -22,
	ftAnimEnd(),
	0x0000,
};

/* Joint 29 */
u16 dFTLinkAnimTeeterstart_joint29[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2755, 54, -78, -13, -18, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -183, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 2799, -92, 89, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2663, -88, 205, 52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2731, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -177, 4, 195, -80,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -45, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 43, -147,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -272, -45,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2740, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2727, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2717, -9, -23, 22, -298, -26,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
