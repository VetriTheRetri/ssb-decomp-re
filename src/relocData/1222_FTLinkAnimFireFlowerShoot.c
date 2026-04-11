/* AnimJoint data for relocData file 1222 (FTLinkAnimFireFlowerShoot) */
/* 2032 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimFireFlowerShoot_joint1[40];
extern u16 dFTLinkAnimFireFlowerShoot_joint2[44];
extern u16 dFTLinkAnimFireFlowerShoot_joint4[62];
extern u16 dFTLinkAnimFireFlowerShoot_joint5[90];
extern u16 dFTLinkAnimFireFlowerShoot_joint6[56];
extern u16 dFTLinkAnimFireFlowerShoot_joint9[8];
extern u16 dFTLinkAnimFireFlowerShoot_joint10[110];
extern u16 dFTLinkAnimFireFlowerShoot_joint11[48];
extern u16 dFTLinkAnimFireFlowerShoot_joint12[32];
extern u16 dFTLinkAnimFireFlowerShoot_joint13[10];
extern u16 dFTLinkAnimFireFlowerShoot_joint16[8];
extern u16 dFTLinkAnimFireFlowerShoot_joint17[8];
extern u16 dFTLinkAnimFireFlowerShoot_joint18[58];
extern u16 dFTLinkAnimFireFlowerShoot_joint20[40];
extern u16 dFTLinkAnimFireFlowerShoot_joint21[60];
extern u16 dFTLinkAnimFireFlowerShoot_joint23[32];
extern u16 dFTLinkAnimFireFlowerShoot_joint25[76];
extern u16 dFTLinkAnimFireFlowerShoot_joint26[74];
extern u16 dFTLinkAnimFireFlowerShoot_joint28[102];

/* Joint pointer table (29 entries, 116 bytes) */
u32 dFTLinkAnimFireFlowerShoot_joints[] = {
	(u32)dFTLinkAnimFireFlowerShoot_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimFireFlowerShoot_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimFireFlowerShoot_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTLinkAnimFireFlowerShoot_joint5, /* [4] joint 5 */
	(u32)dFTLinkAnimFireFlowerShoot_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimFireFlowerShoot_joint9, /* [6] joint 9 */
	0x00000000, /* [7] NULL */
	0x00000000, /* [8] NULL */
	(u32)dFTLinkAnimFireFlowerShoot_joint10, /* [9] joint 10 */
	(u32)dFTLinkAnimFireFlowerShoot_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimFireFlowerShoot_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimFireFlowerShoot_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimFireFlowerShoot_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTLinkAnimFireFlowerShoot_joint17, /* [16] joint 17 */
	(u32)dFTLinkAnimFireFlowerShoot_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimFireFlowerShoot_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTLinkAnimFireFlowerShoot_joint21, /* [20] joint 21 */
	(u32)dFTLinkAnimFireFlowerShoot_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTLinkAnimFireFlowerShoot_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTLinkAnimFireFlowerShoot_joint26, /* [25] joint 26 */
	(u32)dFTLinkAnimFireFlowerShoot_joint28, /* [26] joint 28 */
	0x00000000, /* [27] NULL */
	0xFFFF01DD, /* [28] END */
};

/* Joint 1 */
u16 dFTLinkAnimFireFlowerShoot_joint1[40] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 901, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 184, 123, 752, -98, -6, -3,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 184, 123, 752, -98, -6, -109,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 162, -92, 770, 74, -115, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 0, 901, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimFireFlowerShoot_joint2[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -107, 276, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -77, -20, 193, -2, 5, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -311, -23, 246, 5, -137, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -311, 246, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -311, 12, 246, 1, -137, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -107, 276, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTLinkAnimFireFlowerShoot_joint4[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 259, 166, 56,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 342, 10, -47, 10, 175, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 359, 1, 272, 35, 414, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 359, -25, 272, -56, 414, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 208, -53, -64, -35, -4, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 40, -23, 56, 39, -122, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 67, 21, 172, 10, -58, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 259, 166, 56,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimFireFlowerShoot_joint5[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1888, 0, -1281, 0, -1694, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 1934, 24, -1270, 6, -1750, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1954, 0, -1254, 38, -1770, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1015, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1932, -169, -1724, 212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1614, -256, -1345, 289,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1209, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1418, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1476, 58, -1002, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1537, 89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1256, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1274, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1259, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1649, 105, -1377, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 1872, 27, -1664, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1888, 16, -1281, -25, -1694, -30,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimFireFlowerShoot_joint6[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -500, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -531, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -494, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -385, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -498, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -304, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -190, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -304, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -281, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -374, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -467, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -499, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimFireFlowerShoot_joint9[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, 7, 76,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimFireFlowerShoot_joint10[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1192, 23, 1484, 47, 1557, 55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -903, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 1854, -54, 1894, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1777, -89, 1861, -37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1571, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1737, 37,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -887, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -839, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -860, -164, 1604, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1464, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1618, -60, 1822, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1713, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1483, -69,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1553, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1474, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1197, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1697, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 1559, -2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1564, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1488, -7,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1193, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1192, 1, 1484, -3, 1557, -1,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimFireFlowerShoot_joint11[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -587, -83,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -890, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -859, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -897, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -871, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -897, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1095, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1021, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -982, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -596, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, 8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimFireFlowerShoot_joint12[32] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 199, 14, 69, 19, -11, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 199, 69, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 199, -12, 69, -17, -11, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 0, -209, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimFireFlowerShoot_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 804, -804, 804, 83, 0, 12,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTLinkAnimFireFlowerShoot_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -536, -339,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimFireFlowerShoot_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -163, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTLinkAnimFireFlowerShoot_joint18[58] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -199, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -225, -9, -80, -14, -14, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -99, 12, -342, -26, 74, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -99, 14, -342, 41, 74, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 3, 27, -50, 32, 167, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 62, -24, -146, -20, 140, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -164, -6, -193, -5, 28, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, -199, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTLinkAnimFireFlowerShoot_joint20[40] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -73, -5, -12, 0, -16, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -73, -12, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -73, 23, -12, 4, -16, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 42, 5, 8, 0, 7, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimFireFlowerShoot_joint21[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -242, -4, -244, 1, 108, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 151, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -314, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -132, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -115, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -238, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 172, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 39, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 10, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 102, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -311, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), -247, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -242, -3, -244, 3, 108, 6,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimFireFlowerShoot_joint23[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 249, 18,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 662, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 651, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 703, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 669, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 265, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, -16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimFireFlowerShoot_joint25[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 329, 0, -161, -5, -34, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -361, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -232, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 334, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 326, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 396, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -359, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -97, 32,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -220, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -162, 1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 384, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 331, -4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -66, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -43, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 329, -2, -161, 0, -34, 8,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimFireFlowerShoot_joint26[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, -4, 269, 7, -125, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 216, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 269, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -186, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -138, 49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -34, -40,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 224, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 185, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 263, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 271, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -52, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -126, 1,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 196, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 268, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, 2, 269, -1, -125, 1,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimFireFlowerShoot_joint28[102] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 424, 5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 288, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 239, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 112, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 311, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 405, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 423, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 427, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, -2,
	ftAnimEnd(),
	0x0000, 0x200E, 0xFE55, 0x000C, 0xFFB6, 0xFFF3, 0xFFBB, 0x0004, 0x280B, 0x000D, 0xFEF7, 0xFFF8, 0x00DB, 0x002C, 0x2005, 0x0007, 0xFF82, 0x0010, 0x2005, 0x0001, 0xFF91, 0x000D, 0x2805, 0x0015, 0xFFB7, 0x0000, 0x0801, 0x0005, 0x200B, 0x0001, 0xFEF5, 0x0008, 0x010E, 0xFFD4, 0x2803, 0x000F, 0xFE56, 0xFFFE, 0x2009, 0x0002, 0x0028, 0xFFE0, 0x2009, 0x0001, 0x0042, 0x000E, 0x2009, 0x000B, 0xFFBE, 0xFFFD, 0x2009, 0x0001, 0xFFBB, 0xFFFF, 0x200F, 0x0001, 0xFE55, 0xFFFF, 0xFFB6, 0x0000, 0xFFBB, 0x0000, 0x0000,
};
