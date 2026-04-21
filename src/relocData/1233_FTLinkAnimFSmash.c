/* AnimJoint data for relocData file 1233 (FTLinkAnimFSmash) */
/* 3776 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimFSmash_joint1[48];
extern u16 dFTLinkAnimFSmash_joint2[70];
extern u16 dFTLinkAnimFSmash_joint4[86];
extern u16 dFTLinkAnimFSmash_joint5[228];
extern u16 dFTLinkAnimFSmash_joint6[104];
extern u16 dFTLinkAnimFSmash_joint7[50];
extern u16 dFTLinkAnimFSmash_joint9[56];
extern u16 dFTLinkAnimFSmash_joint10[186];
extern u16 dFTLinkAnimFSmash_joint11[88];
extern u16 dFTLinkAnimFSmash_joint12[22];
extern u16 dFTLinkAnimFSmash_joint13[8];
extern u16 dFTLinkAnimFSmash_joint16[42];
extern u16 dFTLinkAnimFSmash_joint17[56];
extern u16 dFTLinkAnimFSmash_joint18[52];
extern u16 dFTLinkAnimFSmash_joint20[40];
extern u16 dFTLinkAnimFSmash_joint21[114];
extern u16 dFTLinkAnimFSmash_joint23[56];
extern u16 dFTLinkAnimFSmash_joint25[120];
extern u16 dFTLinkAnimFSmash_joint26[170];
extern u16 dFTLinkAnimFSmash_joint28[56];
extern u16 dFTLinkAnimFSmash_joint29[178];

/* Joint pointer table (29 entries, 116 bytes) */
u32 dFTLinkAnimFSmash_joints[] = {
	(u32)dFTLinkAnimFSmash_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimFSmash_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimFSmash_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTLinkAnimFSmash_joint5, /* [4] joint 5 */
	(u32)dFTLinkAnimFSmash_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimFSmash_joint7, /* [6] joint 7 */
	(u32)dFTLinkAnimFSmash_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTLinkAnimFSmash_joint10, /* [9] joint 10 */
	(u32)dFTLinkAnimFSmash_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimFSmash_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimFSmash_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimFSmash_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTLinkAnimFSmash_joint17, /* [16] joint 17 */
	(u32)dFTLinkAnimFSmash_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimFSmash_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTLinkAnimFSmash_joint21, /* [20] joint 21 */
	(u32)dFTLinkAnimFSmash_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTLinkAnimFSmash_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTLinkAnimFSmash_joint26, /* [25] joint 26 */
	(u32)dFTLinkAnimFSmash_joint28, /* [26] joint 28 */
	0x00000000, /* [27] NULL */
	(u32)dFTLinkAnimFSmash_joint29, /* [28] joint 29 */
};

/* Joint 1 */
u16 dFTLinkAnimFSmash_joint1[48] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 901,
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, -267,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 10), -171, -3,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 860, -32,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 7), 860, -8,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 848, -392, -282, 111,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 370, -254, -31, 133,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 370, -1, -31, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 283, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 22), 901, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimFSmash_joint2[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -107, 276, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -205, -7, 539, 18, -99, -7,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -205, -7, 539, 18, -99, -7,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -250, 56, 446, -33, -163, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 364, 40, 206, -15, 187, 23,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 364, 0, 206, 0, 187, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -31, 4, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), -107, 276, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimFSmash_joint4[86] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 259, 166, 56,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 321, 6, 9, -15, 32, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 321, -21, 9, -7, 32, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 62, -20, -81, -21, -113, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 180, 89, -142, -14, -17, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 420, 98, -141, 0, -108, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 476, 27, -145, -4, -75, 2,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 476, 0, -145, 0, -75, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -14, 20, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 635, -9, 56, 14, -44, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 259, 166, 56,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimFSmash_joint5[228] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2936, -221, -326, -127, 3130, 265,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3158, -406, -454, -1, 3396, 277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3750, -522, -330, 5, 3686, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -530, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4203, -284, 3375, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4318, -112, 3426, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4429, -142, -592, -58, 3541, 162,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -519, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4603, -40, 3751, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -4218, 91, 3439, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4203, -20, -442, 52, 3375, -85,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -546, -262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4258, -52, 3269, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4308, -198, 3146, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4656, -195, -941, -466, 3411, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4699, -33, -1480, -391, 3379, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 3712, 96,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -4542, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1724, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1817, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1872, -12, 3731, 107,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 4069, 70,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1847, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4452, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4542, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4539, 2, 4069, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 14), -4539, -2, 4068, 0,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1847, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1726, 18,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4542, -28, 4069, 58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -4326, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 4270, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4274, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 4458, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1712, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1404, 41,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4303, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -4540, -8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1366, 34, 4522, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1283, 3, 4731, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4545, -4, -1281, 1, 4739, 7,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimFSmash_joint6[104] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -500, -212,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -750, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -512, 188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -213, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -42, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -307, -235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -512, -225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1039, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -910, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -652, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -532, 228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -196, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -246, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -219, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -219, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -221, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -367, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -103, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -110, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -549, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -540, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -508, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, 8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTLinkAnimFSmash_joint7[50] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, 7, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -258, -26, -382, -38, 294, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -258, 8, -382, 10, 294, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -121, 4, -200, 5, 31, -8,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -121, 0, -200, 0, 31, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 8, 13, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), 4, 7, 76,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTLinkAnimFSmash_joint9[56] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_SCAZ), -3208, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY), 804, 1, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_SCAZ, 16), 4096, 221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -3225, 320,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, 205,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 261, 8,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_SCAZ, 4), 6307, 152,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ | FT_ANIM_SCAZ), 0, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_SCAZ, 16), 261, 0, 6307, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_SCAZ), -110,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), -16,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 22), 8,
	ftAnimSetValRateBlockT(FT_ANIM_SCAZ, 1), 4096, -294,
	ftAnimSetTargetRateBlock(FT_ANIM_SCAZ), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAZ, 21), 4096,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTLinkAnimFSmash_joint10[186] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2024, 57, 1484, 73, 1557, 63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1683, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 2352, 0, 1800, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2346, -8, 1802, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 2347, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 1782, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1787, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2357, -25, 1483, -434, 1654, -76,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1353, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2408, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 918, -368,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 745, -195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 527, -212,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 148, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1362, 162,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2022, 272,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2515, 98,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 2760, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 67, -9, 2223, 243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 111, -9, 2672, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 111, 0, 2672, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 2672, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 126, -10,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2760, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 2920, 90,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2672, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 2912, -5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3014, 94, 107, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 121, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 3630, 5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2901, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 2976, 47,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 134, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 124, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3023, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 3156, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3633, 3, 123, 0, 3166, 9,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimFSmash_joint11[88] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -587, -101,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -838, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -803, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -849, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1074, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -813, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -839, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -790, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -812, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -402, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -598, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -569, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -569, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -569, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -570, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -457, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -392, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -326, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -387, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -579, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, -8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimFSmash_joint12[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -209, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 537, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 453, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 16), 453, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 22), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimFSmash_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 58),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTLinkAnimFSmash_joint16[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -536, -339,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 1492, -19, 21, 14, -959, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1308, -8, -238, -12, -671, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 1308, 4, -238, -7, -671, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 1440, 17, -460, -13, -586, 15,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 1697, -536, -339,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTLinkAnimFSmash_joint17[56] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -163, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 362, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 35, 3, -274, -11, 71, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 35, -4, -274, 16, 71, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -43, -8, 0, 10, 0, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 16), -181, 0, 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 16), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 22), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), -22, 8, -79, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), 0, -163,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTLinkAnimFSmash_joint18[52] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -199, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -15, -1, -132, 6, 43, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -15, 3, -132, 7, 43, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 49, -9, 0, 5, 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -263, -1, 0, -4, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 20, 11, -113, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 0, -199, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTLinkAnimFSmash_joint20[40] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -194, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -164, 27, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 111, 4, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -164, -3, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimFSmash_joint21[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -242, 59, -244, -35, 108, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -42, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -361, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 110, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 222, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 173, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -14, 27, 111, -58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 176, 63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -210, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -354, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -245, 18,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 241, 42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 127, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -270, -51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -355, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -237, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 39), -245, 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 128, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 12, -19,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -355, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 26), 106, 5,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -6, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), -239, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -242, -2, -244, 1, 109, 3,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimFSmash_joint23[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 249, -16,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 232, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 88, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 621, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 764, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 886, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 886, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 762, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 735, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 255, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimFSmash_joint25[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 329, -24, -161, 12, -34, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 234, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -145, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 106, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 48, -48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -149, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 241, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 119, -75,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -183, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -313, 38,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 45, -38, -194, -46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 171, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -269, -6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -276, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -270, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 171, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 30), 304, 7,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -277, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), -37, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -261, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -162, 0,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 311, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 328, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 329, 1, -161, 0, -34, 3,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimFSmash_joint26[170] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, -1, 269, -4, -125, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 389, 45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -405, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 301, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 274, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -104, -40,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 431, 34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 87, -203,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -573, -149,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -841, -191,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -137, -87,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -471, -224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1088, -214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1269, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -726, -127, -103, -95, -1122, 74,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -103, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1120, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -727, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -728, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -730, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -103, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -104, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1119, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -1118, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -730, 76, -104, 41, -1118, -56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 266, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -491, 71, -1255, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -432, 53, -1234, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -236, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 268, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 312, 40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 272, -5,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -198, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -131, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, 2, 269, -3, -125, 5,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimFSmash_joint28[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 424, -5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 268, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 226, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 786, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 873, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 950, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1072, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1118, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1117, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 802, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 758, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 432, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 425, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 29 */
u16 dFTLinkAnimFSmash_joint29[178] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1180, 16, -1534, -62, 1538, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1684, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 1328, -17, -1792, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1311, -16, -1786, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1615, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 1336, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1291, -84, 1697, 44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1110, 42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1994, -80,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1520, 77,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1542, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1252, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1234, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1401, 71, 1820, -172,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1365, 179,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1606, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1563, -61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1663, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1666, 142,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1649, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1663, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1654, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1659, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1667, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1607, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 1509, -20,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1666, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1677, -90, -1653, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -1533, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1484, -144,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1298, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1489, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 1536, 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1298, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), 1186, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1180, -5, -1534, 0, 1538, 2,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
