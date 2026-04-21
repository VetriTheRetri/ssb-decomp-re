/* AnimJoint data for relocData file 1150 (FTLinkAnimDamaged7) */
/* 2736 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimDamaged7_joint1[26];
extern u16 dFTLinkAnimDamaged7_joint2[56];
extern u16 dFTLinkAnimDamaged7_joint4[68];
extern u16 dFTLinkAnimDamaged7_joint5[192];
extern u16 dFTLinkAnimDamaged7_joint6[86];
extern u16 dFTLinkAnimDamaged7_joint9[32];
extern u16 dFTLinkAnimDamaged7_joint10[204];
extern u16 dFTLinkAnimDamaged7_joint11[88];
extern u16 dFTLinkAnimDamaged7_joint12[32];
extern u16 dFTLinkAnimDamaged7_joint13[8];
extern u16 dFTLinkAnimDamaged7_joint16[8];
extern u16 dFTLinkAnimDamaged7_joint17[22];
extern u16 dFTLinkAnimDamaged7_joint18[22];
extern u16 dFTLinkAnimDamaged7_joint20[12];
extern u16 dFTLinkAnimDamaged7_joint21[116];
extern u16 dFTLinkAnimDamaged7_joint23[48];
extern u16 dFTLinkAnimDamaged7_joint25[88];
extern u16 dFTLinkAnimDamaged7_joint26[86];
extern u16 dFTLinkAnimDamaged7_joint28[40];
extern u16 dFTLinkAnimDamaged7_joint29[76];

/* Joint pointer table (29 entries, 116 bytes) */
u32 dFTLinkAnimDamaged7_joints[] = {
	(u32)dFTLinkAnimDamaged7_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimDamaged7_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimDamaged7_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTLinkAnimDamaged7_joint5, /* [4] joint 5 */
	(u32)dFTLinkAnimDamaged7_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimDamaged7_joint9, /* [6] joint 9 */
	0x00000000, /* [7] NULL */
	0x00000000, /* [8] NULL */
	(u32)dFTLinkAnimDamaged7_joint10, /* [9] joint 10 */
	(u32)dFTLinkAnimDamaged7_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimDamaged7_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimDamaged7_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimDamaged7_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTLinkAnimDamaged7_joint17, /* [16] joint 17 */
	(u32)dFTLinkAnimDamaged7_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimDamaged7_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTLinkAnimDamaged7_joint21, /* [20] joint 21 */
	(u32)dFTLinkAnimDamaged7_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTLinkAnimDamaged7_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTLinkAnimDamaged7_joint26, /* [25] joint 26 */
	(u32)dFTLinkAnimDamaged7_joint28, /* [26] joint 28 */
	0x00000000, /* [27] NULL */
	(u32)dFTLinkAnimDamaged7_joint29, /* [28] joint 29 */
};

/* Joint 1 */
u16 dFTLinkAnimDamaged7_joint1[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAY), 3216, 744,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 3216, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 744, 50,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 18), 865,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -107,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY, 11), 0, 744,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimDamaged7_joint2[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 32, -23, 274, -63, 83, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -52, -49, 69, 51, 60, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -214, -9, 531, 25, -200, -14,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -214, 0, 531, 0, -200, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2, -27, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -256, 22, 0, -23, 0, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 32, 27, 274, 33, 83, 6,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimDamaged7_joint4[68] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 259, 115, 166, -34, 56, 29,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 645, -269, 38, -160, 155, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -549, -103, -316, -22, 298, -20,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -24, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -697, -2, -316, 0, 298, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 78, 10, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 714, 260, 0, 32, 0, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 865, -75, -122, 27, -142, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 259, -84, 166, 54, 56, -23,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimDamaged7_joint5[192] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1311, 296, -1228, -388, -1352, 35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1176, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1608, 105, -1616, -202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1522, -223, -1632, -90,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 784, -249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1798, -35, -1175, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1703, 141, -1348, -79,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1351, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 661, -90, -1334, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 481, -63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1096, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1299, 56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1185, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 405, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 562, 71,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1096, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1204, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1190, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1388, -82,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1281, -59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1358, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 658, 141, -1491, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 846, 418, -1443, 206, -1321, -250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1494, 527, -1078, 66, -1859, -499,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1901, 221, -1311, -178, -2320, -276,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2330, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1938, 2, -1435, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1763, -253,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1192, -29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2091, 352,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1327, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1400, -288,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1191, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1299, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1297, 35, -1277, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1311, 120, -1228, 69, -1352, -74,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimDamaged7_joint6[86] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -430, -655,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1086, -368,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1168, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -548, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -452, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -190, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -180, -189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -385, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -855, -323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1196, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1174, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -839, 285,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -604, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -694, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1043, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -946, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -691, 257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -430, 260,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTLinkAnimDamaged7_joint9[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, -51, 7, -6, 76, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -166, -16, 7, 4, 93, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), -414, 5, 129, 0, 215, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 4, 38, 7, -42, 76, -8,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTLinkAnimDamaged7_joint10[204] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2310, -181, 1143, 479, 2041, -319,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2129, -28, 1622, 260, 1722, -183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2254, 153, 1664, -13, 1673, -55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1203, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2435, 52, 1610, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2359, -166, 1897, 332,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2103, -171, 2275, 198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2015, -68, 2293, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1899, -113, 2206, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1172, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1110, 18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1738, -79, 2021, -89,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1760, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 2036, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2035, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2018, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1762, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1776, 72,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2010, 79,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2293, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1919, 119, 1152, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2135, 185,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1220, -162,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2442, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2387, 590, 2598, 381,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 4199, 523,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 941, 5, 3205, 653,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1231, 244, 3906, 363,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4363, 233, 1430, 127, 3932, 84,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 4970, 202,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 4498, 348,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1487, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1539, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 5071, 177, 1276, -195,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 5452, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1149, -69, 4923, 312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1137, -2, 5124, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5527, 74, 1143, 6, 5258, 133,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimDamaged7_joint11[88] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -444, -677,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1122, -327,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1099, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -447, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -360, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -244, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -234, -223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -447, -274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1118, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1099, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -530, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -616, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -891, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -792, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -577, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -444, 132,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimDamaged7_joint12[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -5, -209, 8, 0, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -17, 4, -183, 0, 353, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 112, 0, -189, 0, 320, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 0, -209,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTLinkAnimDamaged7_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTLinkAnimDamaged7_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1508, 346, -843,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimDamaged7_joint17[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -37, -163, 62, 0, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -113, 38, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), 0, 3, -163, -34, 0, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTLinkAnimDamaged7_joint18[22] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, -199,
	ftAnimSetValAfter(FT_ANIM_ROTZ), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 0, -199,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 348, 40,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -350, -2,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 24), 0, -199,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTLinkAnimDamaged7_joint20[12] = {
	ftAnimSetVal(FT_ANIM_ROTX), 97,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 291,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 29), 97,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLinkAnimDamaged7_joint21[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 18, -183, 163, -111, -712, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 128, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -149, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -165, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -156, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -78, -3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 118, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -55, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -141, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -443, -49,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -81, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 73, 48,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -504, -77,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -802, -91,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 117, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 113, -230, -41, -29, -887, 80,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 19, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -343, -225, -642, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -337, 25, -623, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -711, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -291, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -98, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 16, 114, 160, 140, -712, -1,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimDamaged7_joint23[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1036, 83,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1022, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 875, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 348, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 324, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 642, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 707, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1032, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1019, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1028, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1036, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimDamaged7_joint25[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 456, 424, -183, 95, 70, 125,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 200, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -82, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 880, 224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 905, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 772, -3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 201, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), 88, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -80, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -169, -13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 770, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 630, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 553, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 546, 296,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1147, 292,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1132, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1073, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 700, -240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 459, -240, -183, -13, 70, -18,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimDamaged7_joint26[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 355, -223, 246, 9, -155, -129,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 281, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -865, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -256, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -295, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -230, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 272, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 151, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -852, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -559, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -610, -72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -861, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -252, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 264, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 93, -40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 290, -27,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -747, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -274, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 355, 90, 246, -43, -155, 119,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimDamaged7_joint28[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 551, -75,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 476, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 595, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 469, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 481, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1043, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1060, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 712, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 551, -160,
	ftAnimEnd(),
	0x0000,
};

/* Joint 29 */
u16 dFTLinkAnimDamaged7_joint29[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -415, 138, -89, -1, 252, 57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 272, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), -86, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -218, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -239, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -433, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 266, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 243, 14,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -439, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -495, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -481, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -514, 51,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 254, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -415, 98, -89, -3, 252, -1,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
