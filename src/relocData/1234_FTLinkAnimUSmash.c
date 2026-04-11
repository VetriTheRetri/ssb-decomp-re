/* AnimJoint data for relocData file 1234 (FTLinkAnimUSmash) */
/* 3728 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimUSmash_joint1[84];
extern u16 dFTLinkAnimUSmash_joint2[70];
extern u16 dFTLinkAnimUSmash_joint4[94];
extern u16 dFTLinkAnimUSmash_joint5[286];
extern u16 dFTLinkAnimUSmash_joint6[104];
extern u16 dFTLinkAnimUSmash_joint9[82];
extern u16 dFTLinkAnimUSmash_joint10[84];
extern u16 dFTLinkAnimUSmash_joint11[48];
extern u16 dFTLinkAnimUSmash_joint12[8];
extern u16 dFTLinkAnimUSmash_joint13[8];
extern u16 dFTLinkAnimUSmash_joint16[8];
extern u16 dFTLinkAnimUSmash_joint17[34];
extern u16 dFTLinkAnimUSmash_joint18[58];
extern u16 dFTLinkAnimUSmash_joint20[74];
extern u16 dFTLinkAnimUSmash_joint21[150];
extern u16 dFTLinkAnimUSmash_joint23[64];
extern u16 dFTLinkAnimUSmash_joint25[128];
extern u16 dFTLinkAnimUSmash_joint26[174];
extern u16 dFTLinkAnimUSmash_joint28[248];

/* Joint pointer table (29 entries, 116 bytes) */
u32 dFTLinkAnimUSmash_joints[] = {
	(u32)dFTLinkAnimUSmash_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimUSmash_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimUSmash_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTLinkAnimUSmash_joint5, /* [4] joint 5 */
	(u32)dFTLinkAnimUSmash_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimUSmash_joint9, /* [6] joint 9 */
	0x00000000, /* [7] NULL */
	0x00000000, /* [8] NULL */
	(u32)dFTLinkAnimUSmash_joint10, /* [9] joint 10 */
	(u32)dFTLinkAnimUSmash_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimUSmash_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimUSmash_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimUSmash_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTLinkAnimUSmash_joint17, /* [16] joint 17 */
	(u32)dFTLinkAnimUSmash_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimUSmash_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTLinkAnimUSmash_joint21, /* [20] joint 21 */
	(u32)dFTLinkAnimUSmash_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTLinkAnimUSmash_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTLinkAnimUSmash_joint26, /* [25] joint 26 */
	(u32)dFTLinkAnimUSmash_joint28, /* [26] joint 28 */
	0x00000000, /* [27] NULL */
	0xFFFF0344, /* [28] END */
};

/* Joint 1 */
u16 dFTLinkAnimUSmash_joint1[84] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 901, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 516, -433, 41, 46,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 4), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, -15, 467, 187, 46, 80,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 703, 495, 121, -53,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 4), -15,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 134, 901, 95, 0, -151,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 119, 10, 798, -56, -30, -62,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 10, -253, 844, -35, -62, -57,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -39, -45, 776, 16, -66, 23,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -29, 87, 859, 58, -41, -87,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 70, 9, 850, 13, -175, 13,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 0, 901, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimUSmash_joint2[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -107, 276, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 213, 45, -198, -66, 9, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 253, -29, -258, 43, 11, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -107, -22, 276, 48, 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -18, 1, 319, -50, -26, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -94, -7, -232, -41, 69, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -95, -3, -95, 60, 50, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -130, 0, 368, 14, -67, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -107, 276, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimUSmash_joint4[94] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 259, 166, 56,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 558, 42, -118, -40, -215, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 595, -46, -154, 7, -249, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 186, -54, -60, 38, 495, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 217, 16, 117, 0, 24, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 315, -24, -56, -44, -255, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 18, 19, -241, -77, 39, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 415, 53, -444, 0, -96, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 395, -53, -235, 45, -52, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 37, -68, -128, 75, 147, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 55, 9, 143, 12, -147, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 259, 166, 56,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimUSmash_joint5[286] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1888, 14, -1281, 31, -1694, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1398, -235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 2115, 352, -2006, -412,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2608, 409, -2543, -318,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2586, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2996, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1692, -184,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1781, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2584, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2655, -127,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2975, -33, -1765, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1325, 91,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 2750, -56,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2856, -162,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -3256, -171,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1237, 77,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -905, 28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2701, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2776, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3464, -205,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -3993, -229,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2762, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 3002, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -855, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -603, 404, -4277, -199,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -4447, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2919, -43, -46, 365,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 3081, 233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 127, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 244, 64, -4478, 105,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -261, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3382, 209, -4237, 192,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 3763, 253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4093, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -4019, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4106, 295, -4227, -206,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 4290, -185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -303, -80, -4432, -256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -423, -45, -4740, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3983, -53, -395, -14, -4771, -69,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -669, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4184, 149, -4880, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -4730, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4283, 63,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 4459, 179,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4798, -99,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -5646, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4669, 238,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 5892, 210,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -666, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -333, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5804, -160,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -6433, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 6098, 192,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 6713, 2,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6457, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -6517, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 6714, 0, -326, 6, -6520, -2,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimUSmash_joint6[104] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -500, -150,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -628, 285,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -213, 310,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -319, -205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -189, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -260, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -423, -212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -708, -174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -772, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -428, 281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -285, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -481, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -931, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1008, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -711, 219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -568, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -189, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -298, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -523, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -493, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -500, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimUSmash_joint9[82] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, 7, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -289, -41, 34, 3, 604, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -326, 14, 37, 0, 670, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -130, 0, 26, 10, 557, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -329, 21, 162, 41, 161, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 45, 50, 362, 35, 811, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -75, -20, 341, -46, 551, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -95, 28, 36, -55, 361, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 120, -6, -49, -1, 748, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -130, -5, 26, 2, 557, -29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 4, 7, 76,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTLinkAnimUSmash_joint10[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 416, -3, 123, -15, -50, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -383, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 34), 454, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), -219, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -205, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 127, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -356, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), 10, 28,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 120, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 189, -7,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 33, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), -49, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 454, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 416, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 181, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 12), 124, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 416, 0, 123, 0, -50, -1,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimUSmash_joint11[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -587, -24,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -725, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -688, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -377, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -313, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -455, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -369, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -437, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -458, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -586, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimUSmash_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimBlock(0, 55),
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimUSmash_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 55),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTLinkAnimUSmash_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -536, -339,
	ftAnimBlock(0, 55),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimUSmash_joint17[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, -163,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 12), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 92, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 291, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 0, -5, 108, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 55, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -40,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 35), 0, -163,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimUSmash_joint18[58] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -199, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 680, 48,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, -34, 388, -35, 0, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -381, -36, 288, -8, -66, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -288, 8, 320, -19, 97, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -207, 0, -107, -20, 109, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -267, 10, -190, -4, 47, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, -199, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTLinkAnimUSmash_joint20[74] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, -317, 38, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 17, 307, 44, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 189, -6, 177, -13, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -74, -33, 144, -5, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -149, 14, 120, -25, 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 74, 24, -105, 12, -29, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 100, 2, 244, -31, 47, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 96, -5, -422, -12, -79, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLinkAnimUSmash_joint21[150] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -242, 62, -244, -29, 108, -104,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -232, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -174, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -113, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -177, -55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -98, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -235, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -89, 62,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -183, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -250, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -30, 43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -56, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -116, -42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -243, 11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -263, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -274, 51,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -230, 9, -141, -71,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 93, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -371, -2,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -218, 40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -280, -39,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 120, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 61, -34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -370, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -120, 49,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -311, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -245, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -86, 19, 35, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 19), -241, -2, 108, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -242, -1, -244, 0, 108, 0,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimUSmash_joint23[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 249, 184,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 970, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1008, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 747, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 632, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 355, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 465, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 587, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 517, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 558, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 498, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 392, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 389, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 250, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimUSmash_joint25[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 329, -111, -161, -70, -34, -76,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -84, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -22, 43, -533, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 37, 55, -542, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -236, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -38, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -89, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 214, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 347, 99, -149, 73, -56, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -223, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 348, -31, -283, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 308, -41, -220, 67,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 158, 34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -126, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -339, -103,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -170, 8,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 200, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 276, 5,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -137, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), -35, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -162, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -161, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 281, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), 328, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 329, 0, -161, 0, -34, 0,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimUSmash_joint26[174] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, -53, 269, 30, -125, -155,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 152, -192,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -228, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -613, -330,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -941, -255,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1198, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -89, -200,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -114, 160,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1185, 36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -94, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -156, 64,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 250, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 52, 148,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 307, 28,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -123, -46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -391, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 215, -40, 336, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 205, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 155, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 204, 33, -401, -34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -456, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 221, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 275, -92, 206, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 36, -134, 39, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 6, 2, 31, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 208, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 294, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -413, 41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -114, 1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 217, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 270, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 295, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 270, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -113, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -125, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, 0, 269, 0, -125, 0,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimUSmash_joint28[248] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 424, 142,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1022, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1042, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 766, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 575, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 558, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 517, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 631, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 607, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 308, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 316, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 424, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, 0,
	ftAnimEnd(),
	0x0000, 0x200E, 0xF80C, 0xFFD6, 0xFA02, 0x0031, 0x0602, 0xFFD3, 0x2809, 0x000A, 0x0570, 0xFFC5, 0x2007, 0x0003, 0xF7B7, 0x0056, 0xFA8B, 0xFFD7, 0x2007, 0x0001, 0xF855, 0x0095, 0xFA36, 0xFFB8, 0x2805, 0x0009, 0xFA53, 0xFFE2, 0x2003, 0x0004, 0xF8F5, 0xFF9B, 0x2003, 0x0001, 0xF872, 0xFF8C, 0x2803, 0x0005, 0xF7DA, 0x001E, 0x0801, 0x0001, 0x2009, 0x0001, 0x0537, 0xFFD9, 0x2809, 0x0005, 0x0610, 0x0000, 0x0801, 0x0002, 0x2005, 0x0001, 0xFA2E, 0xFFD8, 0x2805, 0x0008, 0xFA7D, 0x0075, 0x2003, 0x0001, 0xF80C, 0x0055, 0x2803, 0x0003, 0xF8F1, 0xFFF1, 0x0801, 0x0001, 0x2009, 0x0001, 0x0604, 0xFFF0, 0x2809, 0x0007, 0x06BF, 0x0047, 0x0801, 0x0001, 0x2003, 0x0001, 0xF8C0, 0xFFCB, 0x2803, 0x0005, 0xF6DE, 0xFF84, 0x0801, 0x0003, 0x2005, 0x0001, 0xFAEF, 0x005E, 0x2805, 0x0002, 0xFB6E, 0xFFC5, 0x0801, 0x0001, 0x200B, 0x0001, 0xF658, 0x0041, 0x0713, 0xFFD4, 0x200F, 0x0001, 0xF760, 0x0096, 0xFAC3, 0xFF9E, 0x0666, 0xFFA0, 0x2805, 0x0004, 0xFAC2, 0xFFEF, 0x200B, 0x0001, 0xF785, 0x0010, 0x0653, 0xFFF8, 0x2803, 0x0006, 0xF7E3, 0x004C, 0x2809, 0x000D, 0x0689, 0xFFF5, 0x0801, 0x0003, 0x2005, 0x0001, 0xFAA4, 0xFFD1, 0x2805, 0x0005, 0xF999, 0xFFFA, 0x0801, 0x0002, 0x2003, 0x0001, 0xF83F, 0x0043, 0x2803, 0x0004, 0xF853, 0x000F, 0x0801, 0x0002, 0x2005, 0x0001, 0xF995, 0xFFFE, 0x2805, 0x0011, 0xFA01, 0x0001, 0x0801, 0x0001, 0x2003, 0x0001, 0xF864, 0x000D, 0x2803, 0x000F, 0xF80D, 0xFFFF, 0x0801, 0x0001, 0x2009, 0x0001, 0x067D, 0xFFF4, 0x2009, 0x000D, 0x0603, 0xFFFF, 0x200F, 0x0001, 0xF80C, 0x0000, 0xFA02, 0x0001, 0x0602, 0x0000, 0x0000, 0x0000, 0x0000,
};
