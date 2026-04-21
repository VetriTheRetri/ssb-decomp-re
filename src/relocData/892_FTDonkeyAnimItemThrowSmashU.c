/* AnimJoint data for relocData file 892 (FTDonkeyAnimItemThrowSmashU) */
/* 2000 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimItemThrowSmashU_joint1[20];
extern u16 dFTDonkeyAnimItemThrowSmashU_joint2[40];
extern u16 dFTDonkeyAnimItemThrowSmashU_joint4[34];
extern u16 dFTDonkeyAnimItemThrowSmashU_joint5[46];
extern u16 dFTDonkeyAnimItemThrowSmashU_joint6[40];
extern u16 dFTDonkeyAnimItemThrowSmashU_joint7[8];
extern u16 dFTDonkeyAnimItemThrowSmashU_joint8[26];
extern u16 dFTDonkeyAnimItemThrowSmashU_joint10[8];
extern u16 dFTDonkeyAnimItemThrowSmashU_joint11[126];
extern u16 dFTDonkeyAnimItemThrowSmashU_joint12[64];
extern u16 dFTDonkeyAnimItemThrowSmashU_joint13[26];
extern u16 dFTDonkeyAnimItemThrowSmashU_joint14[10];
extern u16 dFTDonkeyAnimItemThrowSmashU_joint16[34];
extern u16 dFTDonkeyAnimItemThrowSmashU_joint17[100];
extern u16 dFTDonkeyAnimItemThrowSmashU_joint19[32];
extern u16 dFTDonkeyAnimItemThrowSmashU_joint21[84];
extern u16 dFTDonkeyAnimItemThrowSmashU_joint22[108];
extern u16 dFTDonkeyAnimItemThrowSmashU_joint24[32];
extern u16 dFTDonkeyAnimItemThrowSmashU_joint25[112];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTDonkeyAnimItemThrowSmashU_joints[] = {
	(u32)dFTDonkeyAnimItemThrowSmashU_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimItemThrowSmashU_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimItemThrowSmashU_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTDonkeyAnimItemThrowSmashU_joint5, /* [4] joint 5 */
	(u32)dFTDonkeyAnimItemThrowSmashU_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimItemThrowSmashU_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimItemThrowSmashU_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimItemThrowSmashU_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTDonkeyAnimItemThrowSmashU_joint11, /* [10] joint 11 */
	(u32)dFTDonkeyAnimItemThrowSmashU_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimItemThrowSmashU_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimItemThrowSmashU_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimItemThrowSmashU_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTDonkeyAnimItemThrowSmashU_joint17, /* [16] joint 17 */
	(u32)dFTDonkeyAnimItemThrowSmashU_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTDonkeyAnimItemThrowSmashU_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTDonkeyAnimItemThrowSmashU_joint22, /* [21] joint 22 */
	(u32)dFTDonkeyAnimItemThrowSmashU_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTDonkeyAnimItemThrowSmashU_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTDonkeyAnimItemThrowSmashU_joint1[20] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1032, -402,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), -24,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 1032, -123, -402, 165,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 908, -236,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 1032, -402,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTDonkeyAnimItemThrowSmashU_joint2[40] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -265, -41, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -497, 0, -475, 22, 402, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -257, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 135, 36, -127, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 73, -11, -75, 6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -49, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -265, -41, -16,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTDonkeyAnimItemThrowSmashU_joint4[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 750, 24, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 756, -22, -11, 28, 153, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 448, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 570, -27, 230, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 452, 11, 67, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 750, 24, 41,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimItemThrowSmashU_joint5[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -62, -21, -84, -11, -473, 70,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -529, 7, -39, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -315, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -336, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -87, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -510, 21, -59, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), -65, 4, -466, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -62, 2, -84, 2, -473, -6,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimItemThrowSmashU_joint6[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -407, -148,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -984, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -938, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -617, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -619, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -516, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -477, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -417, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -407, 9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTDonkeyAnimItemThrowSmashU_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimItemThrowSmashU_joint8[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 174, -67, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 163, -54, 374, -53, -298, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -265, 0, -493, -22, 303, 12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 174, -67, -44,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTDonkeyAnimItemThrowSmashU_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -398, 70, 29,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTDonkeyAnimItemThrowSmashU_joint11[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1492, 56, 1436, -32, 1129, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 2016, 367, 1362, 55, 1686, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2431, 200, 1476, 55, 1836, 73,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 2423, 234, 1838, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1473, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1177, -112,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1357, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2886, 405, 2110, 303,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2630, 130,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 3627, 190,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1430, 59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1533, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2707, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 3043, 258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3885, 239, 3353, 264,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 4005, 136,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 4618, 54,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1510, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1433, 5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4135, 116,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 4347, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4666, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4698, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4709, 11, 1436, 3, 4346, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimItemThrowSmashU_joint12[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -416, -221,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -985, -308,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1254, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -941, 504,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -271, 318,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -303, -185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -642, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -526, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -475, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -610, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -515, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -621, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -573, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -444, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, 27,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTDonkeyAnimItemThrowSmashU_joint13[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 98, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 103, 209, 0, -16, 0, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1775, 0, -129, 0, 327, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 98, 0, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTDonkeyAnimItemThrowSmashU_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -893, -1340, 2502, 120, 119, 119,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTDonkeyAnimItemThrowSmashU_joint16[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -404, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -566, 0, -258, -40, -369, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -409, -53, -322, 21, -245, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -1256, 0, 26, 20, -233, 15,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -404, 0, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimItemThrowSmashU_joint17[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -86, -120, -394, 36, -304, 162,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -124, -82,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -290, 224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 99, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 99, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 154, -152,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -269, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 33, 277, -391, -24, -150, -296,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -537, -87,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 298, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -317, 58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -454, 38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -612, -65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -550, 112,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 275, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -79, -12,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -421, 26, -434, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -401, 13, -342, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -86, -7, -394, 6, -304, 37,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimItemThrowSmashU_joint19[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1004, -44,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 838, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 965, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1142, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1123, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1010, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1004, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTDonkeyAnimItemThrowSmashU_joint21[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -62, -5, 24, -55, -377, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -226, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -264, 125, -390, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -94, 156, -456, -49,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 151, 15, -383, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -189, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 70, 59,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 169, 19, -375, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 139, -65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -375, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 126, 49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 14, -63,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 78, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -40, -38, 38, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -62, -22, 24, -14, -377, -2,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimItemThrowSmashU_joint22[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1708, -93, 1391, 10, 1310, -66,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1322, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1483, -18, 1083, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1576, 120, 920, -81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 994, 192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1725, -78, 1144, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1419, -147, 1518, 153,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1799, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1450, -44, 1307, 305,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1504, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1671, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1834, 29, 1642, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1861, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 1266, 29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1493, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1367, 22,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1836, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1718, -18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1385, 12, 1296, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1708, -9, 1391, 6, 1310, 13,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimItemThrowSmashU_joint24[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 993, 29,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1105, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1138, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 996, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 987, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 992, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 993, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTDonkeyAnimItemThrowSmashU_joint25[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1609, 22, -1713, 29, -1992, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1735, 216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1619, -136, -1573, 201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1359, -305, -1280, 221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1008, 106, -1129, -99, -1470, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1573, 342, -1479, -279, -1876, -290,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1718, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1860, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2050, -139,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2145, 12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1719, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1507, -24,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1841, 21, -2132, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1710, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1995, 5,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1487, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1598, 20,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1714, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1609, 10, -1713, 0, -1992, 3,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
