/* AnimJoint data for relocData file 1256 (FTLinkAnimBombAir) */
/* 2352 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimBombAir_joint1[8];
extern u16 dFTLinkAnimBombAir_joint2[30];
extern u16 dFTLinkAnimBombAir_joint4[30];
extern u16 dFTLinkAnimBombAir_joint5[104];
extern u16 dFTLinkAnimBombAir_joint6[48];
extern u16 dFTLinkAnimBombAir_joint9[8];
extern u16 dFTLinkAnimBombAir_joint10[198];
extern u16 dFTLinkAnimBombAir_joint11[78];
extern u16 dFTLinkAnimBombAir_joint12[34];
extern u16 dFTLinkAnimBombAir_joint13[8];
extern u16 dFTLinkAnimBombAir_joint16[54];
extern u16 dFTLinkAnimBombAir_joint17[34];
extern u16 dFTLinkAnimBombAir_joint18[34];
extern u16 dFTLinkAnimBombAir_joint20[34];
extern u16 dFTLinkAnimBombAir_joint21[86];
extern u16 dFTLinkAnimBombAir_joint23[40];
extern u16 dFTLinkAnimBombAir_joint25[92];
extern u16 dFTLinkAnimBombAir_joint26[84];
extern u16 dFTLinkAnimBombAir_joint28[40];
extern u16 dFTLinkAnimBombAir_joint29[74];

/* Joint pointer table (29 entries, 116 bytes) */
u32 dFTLinkAnimBombAir_joints[] = {
	(u32)dFTLinkAnimBombAir_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimBombAir_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimBombAir_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTLinkAnimBombAir_joint5, /* [4] joint 5 */
	(u32)dFTLinkAnimBombAir_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimBombAir_joint9, /* [6] joint 9 */
	0x00000000, /* [7] NULL */
	0x00000000, /* [8] NULL */
	(u32)dFTLinkAnimBombAir_joint10, /* [9] joint 10 */
	(u32)dFTLinkAnimBombAir_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimBombAir_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimBombAir_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimBombAir_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTLinkAnimBombAir_joint17, /* [16] joint 17 */
	(u32)dFTLinkAnimBombAir_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimBombAir_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTLinkAnimBombAir_joint21, /* [20] joint 21 */
	(u32)dFTLinkAnimBombAir_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTLinkAnimBombAir_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTLinkAnimBombAir_joint26, /* [25] joint 26 */
	(u32)dFTLinkAnimBombAir_joint28, /* [26] joint 28 */
	0x00000000, /* [27] NULL */
	(u32)dFTLinkAnimBombAir_joint29, /* [28] joint 29 */
};

/* Joint 1 */
u16 dFTLinkAnimBombAir_joint1[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 744, 0,
	ftAnimBlock(0, 45),
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTLinkAnimBombAir_joint2[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 32, 274, 83,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -56, -3, 5, -9, 62, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -56, 2, 5, 7, 62, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 32, 274, 83,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimBombAir_joint4[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 315, 166, 56,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 666, 12, -48, -7, -175, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 666, -9, -48, 5, -175, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 315, 166, 56,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimBombAir_joint5[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1300, -17, -1347, -9, -1261, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1361, 62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1030, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1022, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1041, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -1042, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1293, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1315, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1018, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 31), 1249, 21,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1315, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1296, 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1044, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -1188, -29,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1295, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 11), -1428, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1410, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1349, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1269, 18, -1217, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1296, 7, -1256, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1300, 3, -1347, 1, -1261, -5,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimBombAir_joint6[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -744, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -481, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -321, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -253, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -338, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -746, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -744, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimBombAir_joint9[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 278, 266, 193,
	ftAnimBlock(0, 45),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimBombAir_joint10[198] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2097, 165, 1548, -78, 1771, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2262, -213, 1469, -302, 1821, -508,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1669, -512, 943, -183, 754, -831,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -242, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1237, -260, 1101, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1149, -78, 1259, 104,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1428, 114,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1211, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -393, -160,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -777, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1540, 80,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1661, 7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1217, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 1210, -5,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1668, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1610, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -783, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -681, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1205, -32, 1589, -139, -659, 163,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1222, 91, -40, 281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1332, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1367, -41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1153, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1328, 59, 208, 201,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1269, -26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 385, 25,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1157, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1167, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1226, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1305, 65,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 441, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 618, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1383, 146, 690, 160,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2081, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1144, 38, 938, 359,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1473, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1409, 382,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1704, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2097, 15, 1548, 74, 1771, 67,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimBombAir_joint11[78] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -616, -460,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1077, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -911, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1004, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -948, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -935, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -948, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -705, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -709, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -744, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -129, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 64,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -210, -286,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -580, -247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -706, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -616, 89,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTLinkAnimBombAir_joint12[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0, -209, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 0, 49, -209, 5, 0, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 1317, 65, -62, 19, -192, -25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 1091, 108, -417,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTLinkAnimBombAir_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1114, -804, 494,
	ftAnimBlock(0, 45),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTLinkAnimBombAir_joint16[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1508, 346, -843,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 83, 0, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1998, -61, -4, -188, -80, 450,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1261, -200, -407, -29, 959, 294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 797, -19, -181, 9, 1686, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 797, 0, -181, 2, 1686, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 785, 42, -118, 31, 1646, -152,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 1508, 346, -843,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTLinkAnimBombAir_joint17[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -163, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 5, 0, -4, 5, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 5, 0, -4, 5, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 4, 0, 111, -9, 1, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, -163, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimBombAir_joint18[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -199, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 111, 3, -355, -5, -36, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 111, -5, -355, 13, -36, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -20, -6, -46, 9, 20, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, -199, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTLinkAnimBombAir_joint20[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 97, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -193, -10, -219, -7, 88, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -193, 0, -219, 7, 88, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -174, 17, 9, 13, 0, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 97, 0, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLinkAnimBombAir_joint21[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 30, -23, 139, -38, -782, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -887, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), -10, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 9, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 24, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 27), -124, -24,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -886, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 26), -694, 32,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -9, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 36, -14,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -146, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 0, 47,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -664, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -784, -8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 25, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 107, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 30, 30, 139, 32, -782, 1,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimBombAir_joint23[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1205, -4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 882, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 865, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 509, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 485, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 681, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 792, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1168, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1205, 36,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimBombAir_joint25[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2743, 43, -183, 0, 70, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 348, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -238, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -2792, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2847, -43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -2950, 6,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 369, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), 371, -44,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -238, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -187, 4,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2942, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), -2666, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2630, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -2614, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -187, -1, 325, -42,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -190, 7, 77, -12,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2699, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2743, -44, -183, 6, 70, -7,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimBombAir_joint26[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 301, -18, 318, 4, -270, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 21, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 142, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -529, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -524, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), -530, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 17, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), 58, 20,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 139, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), 315, 4,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -528, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -236, -11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 82, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 300, 1,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -248, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -267, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 301, 0, 318, 2, -270, -2,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimBombAir_joint28[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 845, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 625, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 585, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 582, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 587, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 681, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 743, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 831, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 845, 13,
	ftAnimEnd(),
	0x0000,
};

/* Joint 29 */
u16 dFTLinkAnimBombAir_joint29[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2255, 10, 1698, -4, 1861, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 2023, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 35), -2143, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 14), 1560, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1560, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), 1694, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2021, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), 1958, -2,
	ftAnimBlock(0, 18),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2135, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -2246, -15,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1951, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1866, -8,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1697, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2255, -8, 1698, 0, 1861, -4,
	ftAnimEnd(),
	0x0000, 0x0000,
};
