/* AnimJoint data for relocData file 1210 (FTLinkAnimItemDrop) */
/* 1408 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimItemDrop_joint1[8];
extern u16 dFTLinkAnimItemDrop_joint2[20];
extern u16 dFTLinkAnimItemDrop_joint4[30];
extern u16 dFTLinkAnimItemDrop_joint5[68];
extern u16 dFTLinkAnimItemDrop_joint6[32];
extern u16 dFTLinkAnimItemDrop_joint9[8];
extern u16 dFTLinkAnimItemDrop_joint10[126];
extern u16 dFTLinkAnimItemDrop_joint11[64];
extern u16 dFTLinkAnimItemDrop_joint12[8];
extern u16 dFTLinkAnimItemDrop_joint13[8];
extern u16 dFTLinkAnimItemDrop_joint16[24];
extern u16 dFTLinkAnimItemDrop_joint17[8];
extern u16 dFTLinkAnimItemDrop_joint18[8];
extern u16 dFTLinkAnimItemDrop_joint20[26];
extern u16 dFTLinkAnimItemDrop_joint21[34];
extern u16 dFTLinkAnimItemDrop_joint23[16];
extern u16 dFTLinkAnimItemDrop_joint25[34];
extern u16 dFTLinkAnimItemDrop_joint26[46];
extern u16 dFTLinkAnimItemDrop_joint28[16];
extern u16 dFTLinkAnimItemDrop_joint29[62];

/* Joint pointer table (29 entries, 116 bytes) */
AObjEvent32 * dFTLinkAnimItemDrop_joints[] = {
	(AObjEvent32 *)dFTLinkAnimItemDrop_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTLinkAnimItemDrop_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLinkAnimItemDrop_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTLinkAnimItemDrop_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTLinkAnimItemDrop_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLinkAnimItemDrop_joint9, /* [6] joint 9 */
	NULL, /* [7] NULL */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTLinkAnimItemDrop_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTLinkAnimItemDrop_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLinkAnimItemDrop_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLinkAnimItemDrop_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLinkAnimItemDrop_joint16, /* [13] joint 16 */
	NULL, /* [14] NULL */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTLinkAnimItemDrop_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTLinkAnimItemDrop_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTLinkAnimItemDrop_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTLinkAnimItemDrop_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTLinkAnimItemDrop_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTLinkAnimItemDrop_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTLinkAnimItemDrop_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTLinkAnimItemDrop_joint28, /* [26] joint 28 */
	NULL, /* [27] NULL */
	(AObjEvent32 *)dFTLinkAnimItemDrop_joint29, /* [28] joint 29 */
};

/* Joint 1 */
u16 dFTLinkAnimItemDrop_joint1[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 901, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTLinkAnimItemDrop_joint2[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -107, 276, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -106, 74, -42,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -107, 276, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTLinkAnimItemDrop_joint4[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 259, 166, 56,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 174, -11, -184, -36, -127, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 116, 5, -274, 21, -163, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 259, 166, 56,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimItemDrop_joint5[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1888, -16, -1281, 3, -1694, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -1316, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 1610, -2, -1177, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1610, 0, -1167, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -1529, -67,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1820, 38,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1301, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1279, -2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1593, -58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1681, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1855, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1879, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1888, 8, -1281, -1, -1694, -12,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimItemDrop_joint6[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -500, -18,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -614, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -570, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -602, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -568, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -510, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, 9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimItemDrop_joint9[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, 7, 76,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimItemDrop_joint10[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1192, 1, 1484, 0, -1659, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1255, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1445, -24, -1845, -202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1434, 37, -2061, -246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1260, -208, 1519, -13, -2338, -344,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1672, -104, 1406, -46, -2750, -289,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1596, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1468, 129, -2917, -249,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1501, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3249, -185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -3311, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3324, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -3597, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1572, -81,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -2060, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1605, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 1574, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2133, 163, 1555, -307, -3673, 328,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1733, -230, 959, -526, -2939, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2594, -503, 501, -365, -3316, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2741, -103, 229, -189, -3243, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2800, -59, 123, -105, -3267, -24,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimItemDrop_joint11[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -587, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -582, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -342, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -295, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -583, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -541, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -599, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -915, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -922, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -981, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -831, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -772, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, 185,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimItemDrop_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimItemDrop_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTLinkAnimItemDrop_joint16[24] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -536, -339,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 1697, 14, -536, 13, -339, 24,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1992, -264, 160,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1697, -536, -339,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimItemDrop_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -163, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTLinkAnimItemDrop_joint18[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -199, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTLinkAnimItemDrop_joint20[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, -6, 296, -21, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -87, 0, -275, -21, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLinkAnimItemDrop_joint21[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -242, 0, -244, 0, 108, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 23), -242, 0, -243, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 169, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 157, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 110, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -242, 0, -244, 0, 108, -1,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimItemDrop_joint23[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 249, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 249, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimItemDrop_joint25[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 329, -1, -161, -6, -34, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 23), 328, 1, -34, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 14), -333, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -314, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), -165, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 329, 0, -161, 3, -34, 0,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimItemDrop_joint26[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, 3, 269, 0, -125, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 262, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), -126, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 376, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 360, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 272, -3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 265, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 269, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, -1, 269, 0, -125, 0,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimItemDrop_joint28[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 424, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 424, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 29 */
u16 dFTLinkAnimItemDrop_joint29[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2036, -2, 1682, 7, 1538, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -2123, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 1567, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 13), 1926, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1905, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1686, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2108, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -2037, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1559, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1539, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2036, 1, 1682, -3, 1538, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
