/* AnimJoint data for relocData file 409 (FTLinkAnimDollFall) */
/* 3744 bytes: 120-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimDollFall_joint1[48];
extern u16 dFTLinkAnimDollFall_joint2[38];
extern u16 dFTLinkAnimDollFall_joint3[72];
extern u16 dFTLinkAnimDollFall_joint5[50];
extern u16 dFTLinkAnimDollFall_joint6[198];
extern u16 dFTLinkAnimDollFall_joint7[78];
extern u16 dFTLinkAnimDollFall_joint8[8];
extern u16 dFTLinkAnimDollFall_joint10[8];
extern u16 dFTLinkAnimDollFall_joint11[164];
extern u16 dFTLinkAnimDollFall_joint12[48];
extern u16 dFTLinkAnimDollFall_joint14[8];
extern u16 dFTLinkAnimDollFall_joint17[40];
extern u16 dFTLinkAnimDollFall_joint18[66];
extern u16 dFTLinkAnimDollFall_joint19[10];
extern u16 dFTLinkAnimDollFall_joint21[10];
extern u16 dFTLinkAnimDollFall_joint22[256];
extern u16 dFTLinkAnimDollFall_joint24[86];
extern u16 dFTLinkAnimDollFall_joint26[128];
extern u16 dFTLinkAnimDollFall_joint27[264];
extern u16 dFTLinkAnimDollFall_joint29[88];
extern u16 dFTLinkAnimDollFall_joint30[144];

/* Joint pointer table (30 entries, 120 bytes) */
u32 dFTLinkAnimDollFall_joints[] = {
	(u32)dFTLinkAnimDollFall_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimDollFall_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimDollFall_joint3, /* [2] joint 3 */
	(u32)dFTLinkAnimDollFall_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTLinkAnimDollFall_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimDollFall_joint7, /* [6] joint 7 */
	(u32)dFTLinkAnimDollFall_joint8, /* [7] joint 8 */
	(u32)dFTLinkAnimDollFall_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTLinkAnimDollFall_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimDollFall_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimDollFall_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTLinkAnimDollFall_joint17, /* [14] joint 17 */
	0x00000000, /* [15] NULL */
	0x00000000, /* [16] NULL */
	(u32)dFTLinkAnimDollFall_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimDollFall_joint19, /* [18] joint 19 */
	(u32)dFTLinkAnimDollFall_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTLinkAnimDollFall_joint22, /* [21] joint 22 */
	(u32)dFTLinkAnimDollFall_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTLinkAnimDollFall_joint26, /* [24] joint 26 */
	0x00000000, /* [25] NULL */
	(u32)dFTLinkAnimDollFall_joint27, /* [26] joint 27 */
	(u32)dFTLinkAnimDollFall_joint29, /* [27] joint 29 */
	0x00000000, /* [28] NULL */
	(u32)dFTLinkAnimDollFall_joint30, /* [29] joint 30 */
};

/* Joint 1 */
u16 dFTLinkAnimDollFall_joint1[48] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 205, -72, -698, 212, -168, 52, 204, -835, 7810, -6487,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAZ), -406,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, -2, 0, 6, 0, 1, -4, -81, 6188, -1020, -406, 162,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 99), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 19), 0, 0, 0, -500, 0, 32,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 80), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 80), 0, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimDollFall_joint2[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1485, 23, 376, 46, 1482, 28, 54, 9, 24, -2, 130, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1781, 2, 1119, 7, 1867, 3, 90, 2, 1632, 128, 80, -3,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 99), 90,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 99), 1781, 1119, 1867, 1632, 80,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTLinkAnimDollFall_joint3[72] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0, 0, -199, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -295, -639, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), -356, -38, -258, -31, -856, -67, -504, -129, -1352, -394, -61, -45,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 296, 1038, 108,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 39, 3, 75,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 176, 6, -283, 0, 418, 15,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), -169, 0, -207, 0, 38, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), -504, -351, -1352, -1028, -61, -79,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 50), -504, -1352, -61,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 50), 176, -283, 418,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimDollFall_joint5[50] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -24, 0, -7, 0, 329, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 467, -12, -409, -17, 312, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -455, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -435, 311,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -409, 1, 312, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), 56, 7, 312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 15), -409,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 50), -409, 312,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 50), 56,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimDollFall_joint6[198] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2639, -16, -1106, -17, 43, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 184, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -3032, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 12), -1503, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1502, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1509, -59,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 201, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 8, -149,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3024, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2669, 374,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1592, 35, -132, -98,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1301, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2188, 414, -189, -187,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1500, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -508, -261,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -882, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1289, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1329, 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1408, 71, -985, -60,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -962, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -949, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -937, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -690, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -882, 76,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -559, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1326, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), -1283, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1278, 86, -665, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -574, 355,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -929, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -523, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -597, -276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1077, -310, 4, 397,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1211, 0, 238, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1029, -77,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1085, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1211, 0, 238, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 42), -1211, 238,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -1085,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 38), -1085,
	ftAnimBlock(0, 37),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1211, 238,
	ftAnimSetFlags(0),
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTLinkAnimDollFall_joint7[78] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1129, -3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -777, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -697, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -366, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -404, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1101, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -804, 278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -248, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -57, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -335, -272,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -551, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -453, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -453,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 42), -453,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -453,
	ftAnimSetFlags(0),
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTLinkAnimDollFall_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 59, -70, 440,
	ftAnimBlock(0, 100),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimDollFall_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 794, -27, 186,
	ftAnimBlock(0, 100),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTLinkAnimDollFall_joint11[164] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2172, 10, 1215, -12, 1771, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1187, -75,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 1163, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 2554, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2524, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 2273, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1114, -68,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 839, -2,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1173, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1031, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 852, 43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1102, 227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2298, 61,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2706, 83,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1381, 227,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1781, 46,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2752, 43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), 3128, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1042, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), 1283, -10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1827, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 2116, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1260, -45, 2110, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1125, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3130, -95, 2081, -151,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2672, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1808, -250,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1500, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2672, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 43), 2672, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1125, 0, 1500, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 39), 1128, 0, 1499, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2672, 0, 1128, 0, 1499, 0,
	ftAnimSetFlags(0),
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimDollFall_joint12[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -7, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 30), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -267, -199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -405, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -423, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -423, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), -427, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -427, 0,
	ftAnimSetFlags(0),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTLinkAnimDollFall_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 100),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimDollFall_joint17[40] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2153, -537, -1317,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 83, 0, 11,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 2153, -537, -1317,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2, 8, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 2016, -11, -113, 7, -859, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1764, -5, -280, -3, -912, -1,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 45), 1764, -280, -912,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTLinkAnimDollFall_joint18[66] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 791, 0, -407, 0, -405, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 362, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -629, -71, 0, 20, 0, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -629, -3, 0, -2, 0, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -693, 31, -50, 0, -260, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 7, -4, -17, 11, -521, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -783, -51, 175, 36, -593, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -767, 0, 522, 6, -569, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 45), -767, 522, -569,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTLinkAnimDollFall_joint19[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 78, 1,
	ftAnimBlock(0, 100),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLinkAnimDollFall_joint21[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 347, 22,
	ftAnimBlock(0, 100),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTLinkAnimDollFall_joint22[256] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 235, -1, -104, 15, 35, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 133, 73,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 447, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -150, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -248, -85,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -546, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 198, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 258, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 221, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 259, -32,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -582, -31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -639, 74,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 434, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 378, -35,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 209, 6, -527, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 308, -14, 271, -34, -568, 78,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 276, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 139, -125, -370, 159,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -155, 37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -290, -48,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 198, -92,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -563, -54,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -112, 46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), 242, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -330, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -565, -23,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -610, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -802, -32,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -588, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -758, -80,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -840, -95, 265, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -994, 264, 342, -395,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -312, 516, -849, -57, -525, -710,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -999, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 38, 377, -1078, -539,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 442, 243, -1604, -327,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 609, 214, -1796, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 954, 392, -995, -61, -2064, -280,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1355, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1395, 322, -2356, -172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1599, 133, -2408, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1661, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -2404, 0,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -1355,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 39), -1355,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 1661,
	ftAnimSetValRateT(FT_ANIM_ROTX, 35), 1661, 0,
	ftAnimBlock(0, 6),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -2404,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 28), -2404,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), -2404, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 1661,
	ftAnimSetFlags(0),
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTLinkAnimDollFall_joint24[86] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 159, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 304, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 145, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 5, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 554, 274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 555, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 414, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 386, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 218, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 240, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 344, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 363, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 829, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 840, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 45), 817,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 817, 0,
	ftAnimSetFlags(0),
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimDollFall_joint26[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 411, 18, -52, 2, 574, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 66), 217, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 82), 129, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 436, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 423, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 368, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 423, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 790, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 750, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 720, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 683, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 475, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 461, -765,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1054, -766,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1072, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -944, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -813, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -749, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -697, 812,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 876, 743,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 789, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 417, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 417, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 38), 416, 0,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 217,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 32), 217, 0,
	ftAnimBlock(0, 15),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 16), 129, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 416, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 129, 217,
	ftAnimSetFlags(0),
	ftAnimEnd(),
	0x0000,
};

/* Joint 27 */
u16 dFTLinkAnimDollFall_joint27[264] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -40, 6, -31, 23, 210, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 94, 149, 303, 251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 211, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 36, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -217, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 320, -8, 622, 287, -269, -275,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 928, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 76, 47, -767, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 415, 259, -596, 124,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 802, 302, -360, 275,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 887, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1064, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1201, 429, 32, 444,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1660, 332, 527, 384,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1866, 151, 801, 229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 2021, -36, 1227, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1991, -27, 1268, 36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1225, -108,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1715, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1083, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1290, 35,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1096, -110,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 496, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1640, -65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 1425, -4,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1326, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1919, 60,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1423, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1642, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 451, -46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 332, 138,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1975, 52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 2165, -3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1620, -57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1367, -73,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 509, 74,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 466, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1380, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1552, 146,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2147, -35, 494, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1754, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 508, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1752, 129, 373, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1895, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 475, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 475, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 43), 474, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1754, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 42), 1753, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1895, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 38), 1896, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1896, 0, 1753, 0, 474, 0,
	ftAnimSetFlags(0),
	ftAnimEnd(),
	0x0000,
};

/* Joint 29 */
u16 dFTLinkAnimDollFall_joint29[88] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 5, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 337, 275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 281, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 172, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 90, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 206, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 526, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 578, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 223, -193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -108,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 75, 194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 395, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 472, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 472, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 42), 475, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 475, 0,
	ftAnimSetFlags(0),
	ftAnimEnd(),
	0x0000,
};

/* Joint 30 */
u16 dFTLinkAnimDollFall_joint30[144] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1319, -15, 199, 0, 510, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 43), 245, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 99), 265, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1766, -340,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2197, -455,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2677, -552,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3302, -471,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -3819, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3852, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -3674, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3629, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), -3527, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3522, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -2780, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2661, 107,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2318, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 232, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 51), 147, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2227, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -2288, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2288, -182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2654, -594,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3477, -469,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3594, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3692, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -3692, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3692, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 37), -3693, 0,
	ftAnimBlock(0, 33),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 147, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 147, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3693, 0, 265, 0, 147, 0,
	ftAnimSetFlags(0),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
