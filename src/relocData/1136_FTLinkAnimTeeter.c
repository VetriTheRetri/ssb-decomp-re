/* AnimJoint data for relocData file 1136 (FTLinkAnimTeeter) */
/* 2704 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimTeeter_joint1[40];
extern u16 dFTLinkAnimTeeter_joint2[28];
extern u16 dFTLinkAnimTeeter_joint4[46];
extern u16 dFTLinkAnimTeeter_joint5[214];
extern u16 dFTLinkAnimTeeter_joint6[72];
extern u16 dFTLinkAnimTeeter_joint9[14];
extern u16 dFTLinkAnimTeeter_joint10[238];
extern u16 dFTLinkAnimTeeter_joint11[80];
extern u16 dFTLinkAnimTeeter_joint12[8];
extern u16 dFTLinkAnimTeeter_joint13[8];
extern u16 dFTLinkAnimTeeter_joint16[8];
extern u16 dFTLinkAnimTeeter_joint17[18];
extern u16 dFTLinkAnimTeeter_joint18[20];
extern u16 dFTLinkAnimTeeter_joint20[8];
extern u16 dFTLinkAnimTeeter_joint21[98];
extern u16 dFTLinkAnimTeeter_joint23[36];
extern u16 dFTLinkAnimTeeter_joint25[100];
extern u16 dFTLinkAnimTeeter_joint26[114];
extern u16 dFTLinkAnimTeeter_joint28[44];
extern u16 dFTLinkAnimTeeter_joint29[100];

/* Joint pointer table (29 entries, 116 bytes) */
u32 dFTLinkAnimTeeter_joints[] = {
	(u32)dFTLinkAnimTeeter_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimTeeter_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimTeeter_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTLinkAnimTeeter_joint5, /* [4] joint 5 */
	(u32)dFTLinkAnimTeeter_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimTeeter_joint9, /* [6] joint 9 */
	0x00000000, /* [7] NULL */
	0x00000000, /* [8] NULL */
	(u32)dFTLinkAnimTeeter_joint10, /* [9] joint 10 */
	(u32)dFTLinkAnimTeeter_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimTeeter_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimTeeter_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimTeeter_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTLinkAnimTeeter_joint17, /* [16] joint 17 */
	(u32)dFTLinkAnimTeeter_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimTeeter_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTLinkAnimTeeter_joint21, /* [20] joint 21 */
	(u32)dFTLinkAnimTeeter_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTLinkAnimTeeter_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTLinkAnimTeeter_joint26, /* [25] joint 26 */
	(u32)dFTLinkAnimTeeter_joint28, /* [26] joint 28 */
	0x00000000, /* [27] NULL */
	(u32)dFTLinkAnimTeeter_joint29, /* [28] joint 29 */
};

/* Joint 1 */
u16 dFTLinkAnimTeeter_joint1[40] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 746, 24, -64, 49,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 19), 759, -33, 280, 102,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 19), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 0, -1, 617, -33, 335, -127,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), 654, 55, -115, -171,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 13), -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, 746, -64,
	ftAnimLoop(0x6800, -78),
};

/* Joint 2 */
u16 dFTLinkAnimTeeter_joint2[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 296, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), 220, 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 13), 338, 2, 12, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 25), 296, 0,
	ftAnimLoop(0x6800, -54),
};

/* Joint 4 */
u16 dFTLinkAnimTeeter_joint4[46] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 383, 2, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 509, 19, 17, 1, 12, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 869, 8, 48, 1, 35, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 712, -19, 66, -1, 48, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 383, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 0, 0,
	ftAnimLoop(0x6800, -88),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimTeeter_joint5[214] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -629, -44, -427, -4, 490, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -599, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -913, -12, 699, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -911, 29, 705, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -854, -319, -697, -118, 658, 327,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1085, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1550, -136, 1359, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1127, 222, 933, -230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1104, -4, 899, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1538, -66, 1367, 82,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1086, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1152, 3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1589, -44, 1432, 58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1851, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1642, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1151, -2, 1749, 106,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 2207, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1073, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1952, -98,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -2522, -23,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2242, 34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2327, -3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2535, 11, -1007, 82,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -523, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2499, -276, 2301, 285,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3089, -111, 2897, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2722, 188, 2527, -196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2711, -11, 2505, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -3152, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2531, 56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2980, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -522, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -452, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3210, -48, 3055, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -3356, -86, 3241, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3459, -108, -452, 3, 3359, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -3776, -81, -425, 3, 3657, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3846, -70, -427, -2, 3707, 50,
	ftAnimLoop(0x6800, -424),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimTeeter_joint6[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -645, -26,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -650, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -535, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -355, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -370, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -350, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -318, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -554, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -775, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -730, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -355, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -371, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -380, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -345, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -614, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -645, -30,
	ftAnimLoop(0x6800, -142),
};

/* Joint 9 */
u16 dFTLinkAnimTeeter_joint9[14] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -119, -6, 20, -1, 152, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 50), -119, 20, 152,
	ftAnimLoop(0x6800, -26),
};

/* Joint 10 */
u16 dFTLinkAnimTeeter_joint10[238] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 644, 22, 335, 5, 360, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 902, 99, 714, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 479, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 561, 82,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1152, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1007, 101, 833, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1105, -24, 936, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 958, 21, 788, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1149, 121, 972, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1201, 45, 1016, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 1454, 115, 1230, 117,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1163, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1261, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1575, 114, 1356, 118,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 2021, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1626, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1668, 52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1969, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1267, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1125, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2093, 68,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 2418, 54,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2009, 43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2229, 39,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2475, 38, 1038, -89,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 2249, -468, 866, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2247, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1991, -480,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1558, -410, 890, 55, 1286, -425,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1122, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1427, -75, 1141, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1408, -10, 1109, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 1530, 88, 1241, 107,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1165, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1243, 17,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1627, 94, 1359, 112,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1622, 37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 2039, 75,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1257, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1275, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1668, 58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1937, 43,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2113, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 2226, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2252, 26, 1272, -2, 1969, 31,
	ftAnimLoop(0x6800, -472),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimTeeter_joint11[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -542, -59,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -790, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -759, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -482, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -419, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -427, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -382, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -410, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -454, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -692, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -757, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -482, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -419, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -428, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -382, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -396, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -450, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -520, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -542, -21,
	ftAnimLoop(0x6800, -158),
};

/* Joint 12 */
u16 dFTLinkAnimTeeter_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimBlock(0, 50),
	ftAnimLoop(0x6800, -14),
};

/* Joint 13 */
u16 dFTLinkAnimTeeter_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -803, 804,
	ftAnimBlock(0, 50),
	ftAnimLoop(0x6800, -14),
};

/* Joint 16 */
u16 dFTLinkAnimTeeter_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1527, -413, -211,
	ftAnimBlock(0, 50),
	ftAnimLoop(0x6800, -14),
};

/* Joint 17 */
u16 dFTLinkAnimTeeter_joint17[18] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), -276, -4, 0, 5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 25), -143, 13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 25), -276, 0,
	ftAnimLoop(0x6800, -32),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimTeeter_joint18[20] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -71, -1, 0, 9, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), -133, 25, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), -71, 0, 0,
	ftAnimLoop(0x6800, -36),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTLinkAnimTeeter_joint20[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -66, 0, 0,
	ftAnimBlock(0, 50),
	ftAnimLoop(0x6800, -14),
};

/* Joint 21 */
u16 dFTLinkAnimTeeter_joint21[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 128, -15, -45, -13, -659, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 31), -145, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 32), 68, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -370, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -371, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -392, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -400, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -836, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -143, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -42, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 78, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 145, -22,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -40, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -68, 14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 118, -10, -833, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 129, 0, -673, 23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -55, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -46, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 128, 0, -45, 0, -659, 13,
	ftAnimLoop(0x6800, -192),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimTeeter_joint23[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 732, -2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 686, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 681, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 952, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 967, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 774, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 744, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 732, -12,
	ftAnimLoop(0x6800, -70),
};

/* Joint 25 */
u16 dFTLinkAnimTeeter_joint25[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2756, -1, -59, 30, -363, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), 71, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 31), -2816, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -383, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -381, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -509, 20,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 66, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -26, -2,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2818, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -2781, 8,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -485, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -346, -9,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -26, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 22, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2779, 3, -3, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -2759, 4, -55, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -355, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -361, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2756, 2, -59, -3, -363, -1,
	ftAnimLoop(0x6800, -196),
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimTeeter_joint26[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -38, 0, 106, -1, -304, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), 24, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), 126, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 193, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 191, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 252, 17,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 28, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -4, -17,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 267, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -165, -63,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 129, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 131, -6,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -21, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -49, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -228, -61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -416, 23,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 125, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 107, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -384, 34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -317, 21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -41, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -38, 3, 106, 0, -304, 12,
	ftAnimLoop(0x6800, -224),
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimTeeter_joint28[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 709, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 581, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 591, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 515, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 504, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 1013, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1015, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 787, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 732, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 709, -22,
	ftAnimLoop(0x6800, -86),
};

/* Joint 29 */
u16 dFTLinkAnimTeeter_joint29[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2717, -7, -23, 4, -298, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 7, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -102, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 16), 2629, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2643, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 2709, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 8, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -35, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -104, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), -43, 8,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -49, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -353, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2703, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 2718, 0,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -357, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -304, 9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -34, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -24, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2717, 0, -23, 1, -298, 5,
	ftAnimLoop(0x6800, -188),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
