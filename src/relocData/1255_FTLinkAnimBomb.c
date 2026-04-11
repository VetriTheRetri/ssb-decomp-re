/* AnimJoint data for relocData file 1255 (FTLinkAnimBomb) */
/* 2400 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimBomb_joint1[34];
extern u16 dFTLinkAnimBomb_joint2[30];
extern u16 dFTLinkAnimBomb_joint4[30];
extern u16 dFTLinkAnimBomb_joint5[76];
extern u16 dFTLinkAnimBomb_joint6[32];
extern u16 dFTLinkAnimBomb_joint9[8];
extern u16 dFTLinkAnimBomb_joint10[202];
extern u16 dFTLinkAnimBomb_joint11[88];
extern u16 dFTLinkAnimBomb_joint12[24];
extern u16 dFTLinkAnimBomb_joint13[8];
extern u16 dFTLinkAnimBomb_joint16[38];
extern u16 dFTLinkAnimBomb_joint17[36];
extern u16 dFTLinkAnimBomb_joint18[34];
extern u16 dFTLinkAnimBomb_joint20[34];
extern u16 dFTLinkAnimBomb_joint21[90];
extern u16 dFTLinkAnimBomb_joint23[48];
extern u16 dFTLinkAnimBomb_joint25[88];
extern u16 dFTLinkAnimBomb_joint26[112];
extern u16 dFTLinkAnimBomb_joint28[130];

/* Joint pointer table (29 entries, 116 bytes) */
u32 dFTLinkAnimBomb_joints[] = {
	(u32)dFTLinkAnimBomb_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimBomb_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimBomb_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTLinkAnimBomb_joint5, /* [4] joint 5 */
	(u32)dFTLinkAnimBomb_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimBomb_joint9, /* [6] joint 9 */
	0x00000000, /* [7] NULL */
	0x00000000, /* [8] NULL */
	(u32)dFTLinkAnimBomb_joint10, /* [9] joint 10 */
	(u32)dFTLinkAnimBomb_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimBomb_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimBomb_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimBomb_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTLinkAnimBomb_joint17, /* [16] joint 17 */
	(u32)dFTLinkAnimBomb_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimBomb_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTLinkAnimBomb_joint21, /* [20] joint 21 */
	(u32)dFTLinkAnimBomb_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTLinkAnimBomb_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTLinkAnimBomb_joint26, /* [25] joint 26 */
	(u32)dFTLinkAnimBomb_joint28, /* [26] joint 28 */
	0x00000000, /* [27] NULL */
	0xFFFF022F, /* [28] END */
};

/* Joint 1 */
u16 dFTLinkAnimBomb_joint1[34] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 901, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 915, -90, -37, -90,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 810, -42, -90, -46,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 787, -15, -176, 10,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 753, 53, -53, 83,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 901, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimBomb_joint2[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -107, 276, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -163, -2, -25, -10, 60, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -163, 1, -25, 8, 60, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), -107, 276, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimBomb_joint4[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 259, 166, 56,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 390, 4, -48, -7, -175, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 390, -3, -48, 5, -175, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 259, 166, 56,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimBomb_joint5[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1888, -11, -1281, 7, -1694, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1208, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 1626, -7, -1305, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1622, -4, -1299, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), -1324, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), 1680, 17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1208, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 32), -1275, -5,
	ftAnimBlock(0, 19),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1339, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -1690, -7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1699, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1886, 4,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1279, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1888, 2, -1281, -1, -1694, -3,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimBomb_joint6[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -500, -11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -564, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -541, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 28), -582, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -581, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -503, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, 2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimBomb_joint9[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, 7, 76,
	ftAnimBlock(0, 45),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimBomb_joint10[202] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1192, 98, 1484, -121, 1557, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1093, -177, 1363, -270, 1647, -401,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1547, -459, 943, -136, 754, -763,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2012, -260, 1091, 158, 120, -414,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2067, -61, 1259, 110, -74, -181,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -563, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2136, -10, 1311, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2089, 49, 1428, 114,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1652, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1970, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -659, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -763, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1660, 7, -777, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 1609, -18, -687, 26,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1969, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -2002, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2011, 64, 1589, -176, -659, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1874, -15, 1256, -201, -396, 243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2042, -139, 1187, -103, -172, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2153, 11, 1050, -61, -27, 224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2020, 108, 1065, 51, 277, 202,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 430, 45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1711, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1153, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1158, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1144, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 468, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 729, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1643, 71, 835, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1569, 156, 1155, 50, 938, 213,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1414, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1331, 179, 1262, 276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1210, 69, 1491, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1192, 18, 1484, 70, 1557, 66,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimBomb_joint11[88] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -587, -430,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1018, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -911, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -996, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1045, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -924, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -900, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -921, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -948, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1130, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1065, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -636, 240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -375, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -322, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -264, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -152, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -185, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -210, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -463, -195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -601, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, 13,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimBomb_joint12[24] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, -209, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 0, 25, -209, 1, 0, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 928, -159, -199,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimBomb_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 45),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTLinkAnimBomb_joint16[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -536, -339,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 83, 0, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 816, -31, -132, 14, 1578, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 816, -1, -132, 0, 1578, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 785, 51, -118, -23, 1646, -112,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 1697, -536, -339,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTLinkAnimBomb_joint17[36] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -163, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 5, 0, -4, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 8), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 5, 0, -4, 5, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 4, 0, 111, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, -163, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimBomb_joint18[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -199, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 111, 3, -355, -5, -36, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 111, -5, -355, 14, -36, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -20, -6, -46, 9, 20, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, -199, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTLinkAnimBomb_joint20[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -193, -6, -219, -7, 88, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -193, 0, -219, 7, 88, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -174, 11, 9, 12, 0, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLinkAnimBomb_joint21[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -242, -11, -244, 11, 108, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -301, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -161, -14, 203, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -178, -15, 170, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 75, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -225, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -299, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 28), -163, 18,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 69, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -60, -3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -229, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -252, 12,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -146, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -232, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -60, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 91, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -242, -9, -244, 8, 108, 17,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimBomb_joint23[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 249, -21,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 158, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 281, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 569, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 582, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 717, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 723, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 459, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 369, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 287, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, -37,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimBomb_joint25[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 329, 1, -161, -6, -34, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -368, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 279, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -51, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -106, -45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -173, -1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -373, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 30), -192, 12,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -174, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), -231, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 282, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 19), 291, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 290, 1, -226, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 327, 2, -52, 27,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -180, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -164, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 329, 1, -161, 2, -34, 17,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimBomb_joint26[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, -4, 269, -5, -125, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 37, -59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 120, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -210, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -289, -72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -421, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -13, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -48, 3,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -423, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -465, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -43, 4, 120, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -7, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 302, 13,
	ftAnimBlock(0, 16),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -468, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -228, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -6, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 194, 43,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 313, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 276, -10,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 233, 33, -176, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 260, 18, -139, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, 10, 269, -6, -125, 14,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimBomb_joint28[130] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 424, -17,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 402, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 485, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 571, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 565, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 620, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 653, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 630, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 566, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 447, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, -22,
	ftAnimEnd(),
	0x0000, 0x200E, 0xF80C, 0xFFF5, 0x0692, 0x0004, 0x0602, 0x000B, 0x2803, 0x0009, 0xF7DE, 0x0000, 0x2805, 0x0025, 0x06A8, 0xFFF9, 0x2009, 0x0006, 0x0637, 0xFFF5, 0x2009, 0x0001, 0x0630, 0xFFFD, 0x2809, 0x001A, 0x0635, 0xFFE4, 0x0801, 0x0002, 0x2003, 0x0001, 0xF7DE, 0x0000, 0x2803, 0x001A, 0xF7DF, 0x0007, 0x0801, 0x0017, 0x2009, 0x0001, 0x0618, 0xFFE4, 0x2809, 0x0009, 0x05E8, 0x0013, 0x0801, 0x0002, 0x2003, 0x0001, 0xF7E5, 0x0006, 0x2803, 0x0007, 0xF80A, 0x0003, 0x2005, 0x0001, 0x06A1, 0xFFFB, 0x2805, 0x0006, 0x0692, 0x0000, 0x0801, 0x0005, 0x2009, 0x0001, 0x05FA, 0x000D, 0x200F, 0x0001, 0xF80C, 0x0002, 0x0692, 0x0000, 0x0602, 0x0008, 0x0000, 0x0000, 0x0000,
};
