/* AnimJoint data for relocData file 1074 (FTSamusAnimFSmashMidHigh) */
/* 3184 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimFSmashMidHigh_joint1[38];
extern u16 dFTSamusAnimFSmashMidHigh_joint2[30];
extern u16 dFTSamusAnimFSmashMidHigh_joint4[84];
extern u16 dFTSamusAnimFSmashMidHigh_joint5[166];
extern u16 dFTSamusAnimFSmashMidHigh_joint6[64];
extern u16 dFTSamusAnimFSmashMidHigh_joint7[42];
extern u16 dFTSamusAnimFSmashMidHigh_joint8[10];
extern u16 dFTSamusAnimFSmashMidHigh_joint11[36];
extern u16 dFTSamusAnimFSmashMidHigh_joint12[212];
extern u16 dFTSamusAnimFSmashMidHigh_joint13[80];
extern u16 dFTSamusAnimFSmashMidHigh_joint14[30];
extern u16 dFTSamusAnimFSmashMidHigh_joint16[30];
extern u16 dFTSamusAnimFSmashMidHigh_joint17[140];
extern u16 dFTSamusAnimFSmashMidHigh_joint19[72];
extern u16 dFTSamusAnimFSmashMidHigh_joint21[138];
extern u16 dFTSamusAnimFSmashMidHigh_joint22[160];
extern u16 dFTSamusAnimFSmashMidHigh_joint24[62];
extern u16 dFTSamusAnimFSmashMidHigh_joint25[148];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTSamusAnimFSmashMidHigh_joints[] = {
	(u32)dFTSamusAnimFSmashMidHigh_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimFSmashMidHigh_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimFSmashMidHigh_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimFSmashMidHigh_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimFSmashMidHigh_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimFSmashMidHigh_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimFSmashMidHigh_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimFSmashMidHigh_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimFSmashMidHigh_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimFSmashMidHigh_joint13, /* [12] joint 13 */
	(u32)dFTSamusAnimFSmashMidHigh_joint14, /* [13] joint 14 */
	(u32)dFTSamusAnimFSmashMidHigh_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTSamusAnimFSmashMidHigh_joint17, /* [16] joint 17 */
	(u32)dFTSamusAnimFSmashMidHigh_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimFSmashMidHigh_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTSamusAnimFSmashMidHigh_joint22, /* [21] joint 22 */
	(u32)dFTSamusAnimFSmashMidHigh_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTSamusAnimFSmashMidHigh_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTSamusAnimFSmashMidHigh_joint1[38] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1600, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 1189, -282, -642, 517,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1177, -24, 776, 2837,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), 1177, 11,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 3), 776,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -1505,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 1202, 125, -2, -230,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 1600, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTSamusAnimFSmashMidHigh_joint2[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 11), -402,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), 0, 100,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 27), 0, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTSamusAnimFSmashMidHigh_joint4[84] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 0, 37, -214, 46, 89, 25, -53, 50, -12, -18, -6, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 446, 111, 562, 194, 303, 53, 75, 259, -27, -29, 25, 64,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 446, 562, 303, 75, -27, 25,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -49, 16, 39,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -62, -66, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 2, -16, -361, -20, 16, -11,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 26, -85, -11, 28, 65, -15,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -42, -9, 12, 4, 3, -23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 0, 0, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimFSmashMidHigh_joint5[166] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1132, 4, -1722, 4, 1377, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1465, 35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1010, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -861, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -811, 45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -706, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1437, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1433, -13, 976, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1463, 137, 943, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -772, -32, -1157, 153, 1172, 113,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -949, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1156, 0, 1171, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1157, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1172, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1172, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1250, -71, 1102, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1465, -82, 1326, 46,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1166, -202,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1257, 172,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1532, -40, 1340, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1029, -107,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1372, 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1047, 185,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -840, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 941, -54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 928, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1374, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1721, -2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -854, -17, 929, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 1348, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -1144, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1138, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1132, 6, -1722, -1, 1377, 28,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimFSmashMidHigh_joint6[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -739, 4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -719, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -771, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -964, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -966, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -964, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -880, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -795, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -719, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -501, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -490, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -432, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -469, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -711, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, -27,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimFSmashMidHigh_joint7[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 701, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 11), 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -312, 0, 0, -26,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 18,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 27), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -49, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 16), 701, 115,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimFSmashMidHigh_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 42),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimFSmashMidHigh_joint11[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 0, -32, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -384, -96, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -384, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 23, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -57, 14, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTSamusAnimFSmashMidHigh_joint12[212] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 58, 3, -128, -21, -215, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -239, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -20, -45, 70, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -62, -23, 189, 104,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 69, -14, 358, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -193, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -72, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 26, 486, -127, 617, 397, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1042, 507, 1163, 646, 223, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1040, 0, 1166, 0, 220, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1042, -70, 1163, -99, 223, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 900, -508, 964, -72, 283, -288,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 24, -501, 1019, 45, -354, -385,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -101, -125, 1055, 10, -488, -148,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1077, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -226, -184, -652, -207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -471, -228, -904, -205,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1055, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1127, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1193, 92,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1027, -42,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1065, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1145, -53,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 989, -37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1023, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1225, -170, -1219, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1468, -297, -1437, -271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1819, -256, -1763, -231,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1909, 72, -1810, 48,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1127, 109,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1705, 32,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1831, 77, -1768, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1559, 17, -1817, -11,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1726, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1735, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1550, 9, 1737, 2, -1824, -6,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTSamusAnimFSmashMidHigh_joint13[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -595, -14,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -1026, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1064, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1117, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1183, 556,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 591,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -529, -434,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -874, -286,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1295, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1218, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1096, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1129, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -715, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -653, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -610, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, 15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTSamusAnimFSmashMidHigh_joint14[30] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 425, -203, -64,
	ftAnimSetFlags(FT_ANIM_ROTY),
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 425, -2, -203, 91, -64, 31,
	ftAnimSetFlags(0),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 420, -31, -4,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 45), 425, -203, -64,
	ftAnimBlock(0, 1),
	ftAnimSetFlagsT(FT_ANIM_ROTY, 26),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTSamusAnimFSmashMidHigh_joint16[30] = {
	ftAnimSetVal(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 423, 203, 64,
	ftAnimSetFlags(FT_ANIM_ROTY),
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 423, 203, 64,
	ftAnimSetFlags(0),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1, -99, -34,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 425, 16, 0,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 45), 423, 203, 64,
	ftAnimBlock(0, 1),
	ftAnimSetFlagsT(FT_ANIM_ROTY, 26),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimFSmashMidHigh_joint17[140] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 87, -4, -27, -4, -389, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -554, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -288, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 115, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 145, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 172, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -574, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -668, -79,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 168, -76, -304, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 18, -74, -107, 98, -771, -51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -771, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 19, 0, -107, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 67, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -56, -9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -769, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -697, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -632, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -738, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 75, 5, -770, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -704, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 68, 8,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -65, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -27, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -695, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -396, 12,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 76, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 86, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 87, 1, -27, 0, -389, 6,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTSamusAnimFSmashMidHigh_joint19[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 478, 2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 429, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 419, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 482, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 567, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 826, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 827, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 826, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 702, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 426, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 262, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 549, 216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 694, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 907, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 900, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 487, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, -8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTSamusAnimFSmashMidHigh_joint21[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1684, 1, 1637, -3, -1650, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1481, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1465, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -1780, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1824, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1859, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1840, 135, -1511, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1589, 123, -1627, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1594, -1, -1627, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1627, 63,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1638, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1465, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1542, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1501, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1289, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1173, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1664, -16, -1391, -169,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -1655, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1512, -104,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1787, 6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1535, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1629, 7,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1767, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1653, 5,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1662, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1683, -1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1635, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1684, 0, 1637, 2, -1650, 2,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimFSmashMidHigh_joint22[160] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 226, -4, 160, 6, -49, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 376, 34, -385, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 251, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 290, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 173, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 399, 10, -427, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 369, -42, -550, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 62, 34, 313, -164, -596, 574,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 242, 89, 39, -137, 597, 597,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 242, 0, 39, 0, 598, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 39, 49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 191, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 596, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 597, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 139, 64, 330, -211,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 169, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 148, -37, 173, -137,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -222, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -11, 4,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 161, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 145, 10,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -231, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -129, 31,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 221, 10,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 154, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 161, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -98, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -54, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 226, 5, 160, 0, -49, 4,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTSamusAnimFSmashMidHigh_joint24[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 442, 14,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 893, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 934, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 968, -467,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -484,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 440, 308,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 709, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 760, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 867, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 847, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 449, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 442, -7,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTSamusAnimFSmashMidHigh_joint25[148] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 142, 0, 193, -6, -213, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -30, -52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -262, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -99, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -180, -59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -144, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -76, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -64, 50,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -276, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 9, -2, -38, 32, -287, 372,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -69, -38, -79, -20, 468, 377,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -68, 0, -79, 0, 466, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -6, 63,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 219, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 464, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 468, -199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 65, -361,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -597, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 57, 50,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 107, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -630, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -568, 17,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 109, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 141, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -548, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -219, 11,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 226, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 195, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 142, 0, 193, -1, -213, 5,
	ftAnimEnd(),
	0x0000, 0x0000,
};
