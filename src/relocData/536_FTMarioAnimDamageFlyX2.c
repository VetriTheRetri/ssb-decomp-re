/* AnimJoint data for relocData file 536 (FTMarioAnimDamageFlyX2) */
/* 2560 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimDamageFlyX2_joint1[58];
extern u16 dFTMarioAnimDamageFlyX2_joint2[38];
extern u16 dFTMarioAnimDamageFlyX2_joint4[32];
extern u16 dFTMarioAnimDamageFlyX2_joint5[112];
extern u16 dFTMarioAnimDamageFlyX2_joint6[20];
extern u16 dFTMarioAnimDamageFlyX2_joint7[10];
extern u16 dFTMarioAnimDamageFlyX2_joint8[42];
extern u16 dFTMarioAnimDamageFlyX2_joint10[30];
extern u16 dFTMarioAnimDamageFlyX2_joint11[150];
extern u16 dFTMarioAnimDamageFlyX2_joint12[72];
extern u16 dFTMarioAnimDamageFlyX2_joint13[58];
extern u16 dFTMarioAnimDamageFlyX2_joint15[20];
extern u16 dFTMarioAnimDamageFlyX2_joint16[136];
extern u16 dFTMarioAnimDamageFlyX2_joint18[72];
extern u16 dFTMarioAnimDamageFlyX2_joint20[112];
extern u16 dFTMarioAnimDamageFlyX2_joint21[124];
extern u16 dFTMarioAnimDamageFlyX2_joint23[54];
extern u16 dFTMarioAnimDamageFlyX2_joint24[92];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimDamageFlyX2_joints[] = {
	(u32)dFTMarioAnimDamageFlyX2_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimDamageFlyX2_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimDamageFlyX2_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimDamageFlyX2_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimDamageFlyX2_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimDamageFlyX2_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimDamageFlyX2_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimDamageFlyX2_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimDamageFlyX2_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimDamageFlyX2_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimDamageFlyX2_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimDamageFlyX2_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimDamageFlyX2_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimDamageFlyX2_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimDamageFlyX2_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimDamageFlyX2_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimDamageFlyX2_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTMarioAnimDamageFlyX2_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTMarioAnimDamageFlyX2_joint1[58] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 2, 0, 1,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY), 0, 223, 0, 540,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, -13, -16, -7, 597, 26, -268, -126,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 0, -28, 0, 0, 0, 0, 597, -1, -268, 103,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 16), -16,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -804, -6, -19,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -16, 14, 592, -158, 28, 215,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 5, 360, 54,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimDamageFlyX2_joint2[38] = {
	ftAnimSetValRate(FT_ANIM_ROTY), -790, 1,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), -71, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 296, 21, 0, 46, 0, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 296, -35, 0, 2, 0, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -519, -24, 49, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 323,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -66, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTMarioAnimDamageFlyX2_joint4[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 208, 0, 258, 0, 110, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 296, 0, 0, -15, 0, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 204, -23, 0, -7, 0, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -356, 14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -221, 75,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimDamageFlyX2_joint5[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1475, 222, -1308, 35, 1336, -567,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1047, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1252, 101, 768, -276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1271, -24, 782, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1751, -211, 1286, 222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1982, -195, -1067, -35, 1529, 208,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), -2296, -49, -1402, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 2049, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2071, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2504, 146,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2376, -157, -1372, 38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1330, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2612, -346,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3070, -392,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -4023, -226,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2645, 113,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2527, -123,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4264, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4361, -60, -1402, -54, 2408, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4384, -22, -1438, -35, 2358, -50,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimDamageFlyX2_joint6[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -182, 173,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -9, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 25), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimDamageFlyX2_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -625, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 29),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTMarioAnimDamageFlyX2_joint8[42] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 201, 0, -4, 0, 176, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 10, 5, 0, 0, 0, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 291, -28, 0, -3, 0, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -559, -27, -68, 28, 104, 12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -34, 341, 153,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTMarioAnimDamageFlyX2_joint10[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -221, 139, -209,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 13, 0, -8, 0, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 0, -7, 0, 4, 0, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -221, 139, -209,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimDamageFlyX2_joint11[150] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1164, 620, 1056, -697, -1542, 679,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -544, 310, 358, -342, -863, 330,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -544, 2, 372, 15, -881, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 557, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -538, -11, -1035, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -548, 144, -1088, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -248, 47, 747, 154, -828, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1254, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -453, 12, -1092, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -223, 179, -922, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -93, 112, -841, 76,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 141, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -676, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1353, 67, -502, 73,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -542, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1123, -22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 125, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 393, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -541, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -8, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 571, -182, 1100, -183, 135, -167,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -645, -452,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 757, -241, -343, -347,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 618, -263, -558, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -877, -131, 229, -349, -550, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -908, -30, -80, -310, -474, 75,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimDamageFlyX2_joint12[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -811, 802,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 401,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -9, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -110, -237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -484, -259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -628, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -372, 279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -336,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -672, -439,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -879, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -542, 435,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 533,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTMarioAnimDamageFlyX2_joint13[58] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), 625,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, -6, 297, 80,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 103,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 93, -28, -48, -1, 642, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -356, -57, -2, 5, 410, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -543, 57, 10, 6, 344, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -124, 116, 23, -1, 282, -34,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 625, 0, 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTMarioAnimDamageFlyX2_joint15[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, -804, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 71, 0, 35,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 975, -935, 681,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 28), 1608, -804, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTMarioAnimDamageFlyX2_joint16[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -135, 307, -230, 316, 45, -1143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 172, 162, 85, 133, -1098, -532,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 189, 6, 35, -71, -1019, 126,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -300, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -130, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -844, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -849, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -732, 22,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -312, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 24, 127,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -706, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -536, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -135, -64, -584, 59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -287, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -417, 202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 170, 151, -179, 479,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 84, 221, 327, 59, 540, 426,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 153, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 289, -32, 673, 60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 29, -352,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 661, -243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -45, -112, 185, -439,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -99, -1, -540, -223,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -465, -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -73, 25, -508, -43, -664, -123,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimDamageFlyX2_joint18[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 400, 170,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 571, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 383, -281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 52, 242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 484, 235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 523, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 601, -257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 655, 518,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1068, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 996, -71,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTMarioAnimDamageFlyX2_joint20[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -212, 192, -11, -200, -156, 466,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -19, 94, -211, -100, 310, 259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -22, 17, -213, 0, 363, 51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 622, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -3, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -290, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -286, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -94, 42,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 582, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -13, -266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -7, -176, -102,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -140, -127, -115, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -65, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -262, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 38, 137, -272, -52, 81, 127,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 66, 45, 206, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 11, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 74, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -56, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 321, 209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 363, 42, 91, 25, 206, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimDamageFlyX2_joint21[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 200, -116, 187, -88, 35, -761,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 106, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 161, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -725, -373,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -711, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -638, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -664, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -816, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 111, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 121, -26,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 175, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 313, 27,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 81, -127, -821, -94,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1123, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -555, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 340, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 263, 75,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1053, 102,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -221, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -608, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 43, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 364, 78,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 49, -74,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -125, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 120, 55, -6, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 153, 32, -17, -67, 147, 153,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimDamageFlyX2_joint23[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 438, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 161, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -80,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 611, 250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 802, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 860, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 770, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 324, -294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -324,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTMarioAnimDamageFlyX2_joint24[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 94, -226, -93, 30, -212, 511,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 28, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -131, -95, 298, 282,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -95, 40, 351, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), 35, -13, 503, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 20, 0, 17, -18, 483, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 68, 42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -76, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 196, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 42, -177,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -263, -33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 128, 58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 222, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -226, 37, -27, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -188, 20, 3, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -185, 2, 14, 11, 235, 13,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
