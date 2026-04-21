/* AnimJoint data for relocData file 1151 (FTLinkAnimDamageFlyX1) */
/* 2256 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimDamageFlyX1_joint1[38];
extern u16 dFTLinkAnimDamageFlyX1_joint2[44];
extern u16 dFTLinkAnimDamageFlyX1_joint4[44];
extern u16 dFTLinkAnimDamageFlyX1_joint5[106];
extern u16 dFTLinkAnimDamageFlyX1_joint6[40];
extern u16 dFTLinkAnimDamageFlyX1_joint9[26];
extern u16 dFTLinkAnimDamageFlyX1_joint10[94];
extern u16 dFTLinkAnimDamageFlyX1_joint11[42];
extern u16 dFTLinkAnimDamageFlyX1_joint12[26];
extern u16 dFTLinkAnimDamageFlyX1_joint13[26];
extern u16 dFTLinkAnimDamageFlyX1_joint16[26];
extern u16 dFTLinkAnimDamageFlyX1_joint17[40];
extern u16 dFTLinkAnimDamageFlyX1_joint18[26];
extern u16 dFTLinkAnimDamageFlyX1_joint20[28];
extern u16 dFTLinkAnimDamageFlyX1_joint21[78];
extern u16 dFTLinkAnimDamageFlyX1_joint23[40];
extern u16 dFTLinkAnimDamageFlyX1_joint25[90];
extern u16 dFTLinkAnimDamageFlyX1_joint26[108];
extern u16 dFTLinkAnimDamageFlyX1_joint28[52];
extern u16 dFTLinkAnimDamageFlyX1_joint29[96];

/* Joint pointer table (29 entries, 116 bytes) */
u32 dFTLinkAnimDamageFlyX1_joints[] = {
	(u32)dFTLinkAnimDamageFlyX1_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimDamageFlyX1_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimDamageFlyX1_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTLinkAnimDamageFlyX1_joint5, /* [4] joint 5 */
	(u32)dFTLinkAnimDamageFlyX1_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimDamageFlyX1_joint9, /* [6] joint 9 */
	0x00000000, /* [7] NULL */
	0x00000000, /* [8] NULL */
	(u32)dFTLinkAnimDamageFlyX1_joint10, /* [9] joint 10 */
	(u32)dFTLinkAnimDamageFlyX1_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimDamageFlyX1_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimDamageFlyX1_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimDamageFlyX1_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTLinkAnimDamageFlyX1_joint17, /* [16] joint 17 */
	(u32)dFTLinkAnimDamageFlyX1_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimDamageFlyX1_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTLinkAnimDamageFlyX1_joint21, /* [20] joint 21 */
	(u32)dFTLinkAnimDamageFlyX1_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTLinkAnimDamageFlyX1_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTLinkAnimDamageFlyX1_joint26, /* [25] joint 26 */
	(u32)dFTLinkAnimDamageFlyX1_joint28, /* [26] joint 28 */
	0x00000000, /* [27] NULL */
	(u32)dFTLinkAnimDamageFlyX1_joint29, /* [28] joint 29 */
};

/* Joint 1 */
u16 dFTLinkAnimDamageFlyX1_joint1[38] = {
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 901, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValT(FT_ANIM_ROTX, 8), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 887, -261,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 901, 57, 0, 88,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 1053, -8,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 16), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 901, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 5), -536,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTLinkAnimDamageFlyX1_joint2[44] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), -107, 276,
	ftAnimSetValBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 1), -138,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), 0, 15,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 7), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -307, -7,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 7), 0,
	ftAnimSetValT(FT_ANIM_ROTZ, 21), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 21), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 17), -307, -26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), -860,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTLinkAnimDamageFlyX1_joint4[44] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 259, 166,
	ftAnimSetValBlock(FT_ANIM_ROTZ), 56,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 893, -50, 0, 30,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -145, -51, 409, 11,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 7), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 17), -343, 40, 280, -7,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 17), -309,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 709, 242,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 4), 522,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimDamageFlyX1_joint5[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 280, 138, -326, 48, -86, -1006,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -461, -128,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 275, -282,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1092, -510,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1108, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -745, 385,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -591, -76,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -541, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -110, -269, -243, 396,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -120, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 98, -15,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -553, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -553, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -96, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -124, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 85, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 143, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -553, 26, 135, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -429, 24, -65, -45,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -98, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -99, -1, -410, 19, -94, -29,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimDamageFlyX1_joint6[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -500, 14,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -645, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -789, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -619, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -585, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -662, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -633, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -506, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -472, 34,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimDamageFlyX1_joint9[26] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, 7, 76,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -143, 0, 245,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 340, -61, 543,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 340, -61, 543,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 445, 0, -209,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimDamageFlyX1_joint10[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2024, -550, 1484, -131, 1557, -941,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1167, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1474, -283, 616, -480,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1458, 14, 596, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1684, 331, 844, 318,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1026, -98,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1070, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2166, 417, 1297, 381,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 2863, 39, 1895, 38,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1066, -4,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 19), 1070,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2899, 29, 1930, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 2768, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 1804, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1804, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2768, 1804,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), 1070, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2768, 1804,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTLinkAnimDamageFlyX1_joint11[42] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -587, 178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -409, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -794, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -750, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -375, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -360, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -553, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -553,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -553, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTLinkAnimDamageFlyX1_joint12[26] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimDamageFlyX1_joint13[26] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 937, -804, 670,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, -804, 804,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 804, -804, 804,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 804, -804, 804,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 804, -803, 804,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTLinkAnimDamageFlyX1_joint16[26] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -536, -339,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1697, -536, -339,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 1697, -536, -339,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 1697, -536, -339,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1697, -536, -339,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimDamageFlyX1_joint17[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, -163,
	ftAnimSetValBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 1), -470,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), 0, -83,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 0, -83,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 24), -470,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 7), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 0, -83,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 17), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimDamageFlyX1_joint18[26] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -199, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 0, 0,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 17), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 4), 271,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTLinkAnimDamageFlyX1_joint20[28] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValT(FT_ANIM_ROTZ, 8), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 460, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 153, 0,
	ftAnimSetValT(FT_ANIM_ROTY, 21), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 17), 153, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 343, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimDamageFlyX1_joint21[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -242, -39, -244, 112, 108, -726,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -135, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -149, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -617, -351,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -593, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -408, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -297, 90,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -99, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -129, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -181, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -154, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -72, 21,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -103, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -227, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -297, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -528, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -59, 13, -186, -4, -580, -51,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimDamageFlyX1_joint23[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 249, 70,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 414, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 536, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 429, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 401, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 461, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 491, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 880, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 929, 49,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimDamageFlyX1_joint25[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 329, 523, -161, 552, -34, 97,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 227, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 852, 265, 390, 267,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 860, -1, 373, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 804, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), 280, 8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 300, 67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 604, 14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 816, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 918, -4,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 617, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 534, -95,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 295, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 343, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 905, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 878, -21, 432, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 862, -15, 349, 5, 384, -47,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimDamageFlyX1_joint26[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, -40, 269, -191, -125, -49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -170, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 86, 40, -214, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 160, 52, -439, -186,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 110, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -939, -1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -234, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -192, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 118, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 103, -12,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -940, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -925, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -191, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -222, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -234, -50, 88, -41, -918, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -273, 133, -524, 382,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 19, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 167, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -57, 152, 263, 38, -68, 321,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 31, 88, 244, -18, 118, 187,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimDamageFlyX1_joint28[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 424, -419,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 368, 276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 552, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 856, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 856, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 870, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 872, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1150, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 953, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 789, -164,
	ftAnimEnd(),
	0x0000,
};

/* Joint 29 */
u16 dFTLinkAnimDamageFlyX1_joint29[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -427, -270, -74, -114, -69, 685,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -159, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -698, -133, 615, 352,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -695, -12, 635, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 439, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -571, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -495, 31, -161, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -554, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -368, 16,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 441, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 516, -14,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -560, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -560, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -548, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -603, -225, -334, 56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -177, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -998, -274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1152, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1137, 14, -142, 35, 508, -8,
	ftAnimEnd(),
};
