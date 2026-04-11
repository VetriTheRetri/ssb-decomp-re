/* AnimJoint data for relocData file 598 (FTMarioAnimHeavyItemThrowSmashB) */
/* 3072 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimHeavyItemThrowSmashB_joint1[32];
extern u16 dFTMarioAnimHeavyItemThrowSmashB_joint2[94];
extern u16 dFTMarioAnimHeavyItemThrowSmashB_joint4[42];
extern u16 dFTMarioAnimHeavyItemThrowSmashB_joint5[134];
extern u16 dFTMarioAnimHeavyItemThrowSmashB_joint6[26];
extern u16 dFTMarioAnimHeavyItemThrowSmashB_joint7[12];
extern u16 dFTMarioAnimHeavyItemThrowSmashB_joint8[30];
extern u16 dFTMarioAnimHeavyItemThrowSmashB_joint10[22];
extern u16 dFTMarioAnimHeavyItemThrowSmashB_joint11[142];
extern u16 dFTMarioAnimHeavyItemThrowSmashB_joint12[40];
extern u16 dFTMarioAnimHeavyItemThrowSmashB_joint13[10];
extern u16 dFTMarioAnimHeavyItemThrowSmashB_joint15[10];
extern u16 dFTMarioAnimHeavyItemThrowSmashB_joint16[150];
extern u16 dFTMarioAnimHeavyItemThrowSmashB_joint18[66];
extern u16 dFTMarioAnimHeavyItemThrowSmashB_joint20[142];
extern u16 dFTMarioAnimHeavyItemThrowSmashB_joint21[206];
extern u16 dFTMarioAnimHeavyItemThrowSmashB_joint23[68];
extern u16 dFTMarioAnimHeavyItemThrowSmashB_joint24[260];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTMarioAnimHeavyItemThrowSmashB_joints[] = {
	(u32)dFTMarioAnimHeavyItemThrowSmashB_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimHeavyItemThrowSmashB_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimHeavyItemThrowSmashB_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimHeavyItemThrowSmashB_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimHeavyItemThrowSmashB_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimHeavyItemThrowSmashB_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimHeavyItemThrowSmashB_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimHeavyItemThrowSmashB_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimHeavyItemThrowSmashB_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimHeavyItemThrowSmashB_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimHeavyItemThrowSmashB_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimHeavyItemThrowSmashB_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimHeavyItemThrowSmashB_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimHeavyItemThrowSmashB_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimHeavyItemThrowSmashB_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimHeavyItemThrowSmashB_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimHeavyItemThrowSmashB_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTMarioAnimHeavyItemThrowSmashB_joint24, /* [23] joint 24 */
	0xFFFF02DC, /* [24] END */
};

/* Joint 1 */
u16 dFTMarioAnimHeavyItemThrowSmashB_joint1[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 531, 209,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 19), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 531, 1, 209, -41,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 35), 540, 0,
	ftAnimBlock(0, 14),
	ftAnimSetValBlockT(FT_ANIM_ROTY, 5), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 16), 223,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimHeavyItemThrowSmashB_joint2[94] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0, -223,
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_SCAY), -120, 164, 4096, 450,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 11), 0, -223,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAY, 5), -120, -119, 4096, -327,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAY, 6), -284, -164, 2293, -450,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAY, 2), 0, 0, -284, 655, -223, 397, 2293, 768,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, 5, 371, 560, 173, 598,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAY, 3), 4096,
	ftAnimSetValT(FT_ANIM_SCAY, 24), 4096,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -3, 0, -37, 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 5, 0, 206, -834, 300, -133,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, -2, -150, -82, 90, -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), -71, -790, -95, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTMarioAnimHeavyItemThrowSmashB_joint4[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ), 534, 0, 0, -104,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 5), 534, -16, -104, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 14), 222, -9, 0, 23,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 21), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 357, 0, 0, 12, 0, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 208, 258, 110,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTMarioAnimHeavyItemThrowSmashB_joint5[134] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4648,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1529, -4, -93, 2, 524, 7,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -363, -48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 1136, 153,
	ftAnimSetValRateT(FT_ANIM_SCAX, 20), 5120, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -1492, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1516, -42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -2165, -75,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -405, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -354, 24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1286, 135,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1747, 117,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2236, -66,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2529, -291,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 20), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1911, 204,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2390, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2880, -265, -311, 51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -3086, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -267, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2409, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 2797, 40,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3069, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -2977, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3003, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3024, -40, -272, -16, 2834, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3083, -59, -300, -27, 2944, 110,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimHeavyItemThrowSmashB_joint6[26] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 24), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, -182,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimHeavyItemThrowSmashB_joint7[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 40,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTMarioAnimHeavyItemThrowSmashB_joint8[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 327, 4, 2,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 327, 15, 4, 0, 2, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 599, -3, 0, 0, 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), 201, -4, 176,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTMarioAnimHeavyItemThrowSmashB_joint10[22] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -17,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -5, 0, 3, 0, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 35), -221, 139, -209,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimHeavyItemThrowSmashB_joint11[142] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4648,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1552, 3, 93, -2, 524, 7,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 311, 37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 994, 144,
	ftAnimSetValRateT(FT_ANIM_SCAX, 20), 5120, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 1578, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1631, 71,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 2269, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 344, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 189, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1143, 141,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1736, 113,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2351, 160,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 3045, 88,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 20), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1892, 199,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2360, 40,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3079, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 2941, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2378, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 2418, 22,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 196, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 410, 98,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2947, 136, 2466, 196,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 3444, 194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 531, 75, 2810, 297,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 558, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3061, 208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3605, 108, 3227, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3660, 55, 551, -6, 3282, 55,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimHeavyItemThrowSmashB_joint12[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -104, -263,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -535, -298,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -785, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, -25,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTMarioAnimHeavyItemThrowSmashB_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTMarioAnimHeavyItemThrowSmashB_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 72, 0, 36,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimHeavyItemThrowSmashB_joint16[150] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 156, 35, -214, 32, -440, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 430, 43, -69, 27, -603, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 472, 120, -39, 86, -623, 83,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 53, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 671, 12, -435, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 496, -219, -643, -74,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -294, 344,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -217, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -243, -168,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -144, 31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 103, 214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -263, -32, 134, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -220, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -120, 18, 158, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -268, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 305, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -184, 118, 304, -158,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 114, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -12, -216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -129, -62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -34, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 118, -3, -266, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -112, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -232, 2,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -17, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 39, 9,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -120, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -132, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -135, -2, -230, 1, 45, 5,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimHeavyItemThrowSmashB_joint18[66] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 717, 29,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 998, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1034, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 587, -442,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -293,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 524, 350,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 708, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 759, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 745, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 455, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 416, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, -15,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTMarioAnimHeavyItemThrowSmashB_joint20[142] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -243, -8, -77, -42, -196, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -486, -40, -89, 5, -151, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -525, -140, -87, -89, -140, 60,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -5, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -768, 0, -269, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -523, 236, -123, 158,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -229, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 48, 78, -161, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 32, 1, -154, 119,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 26, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -162, 73, 76, 167,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -16, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 276, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 342, -47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 36, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -104, -67,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -212, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 0, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -250, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -97, -193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -351, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -407, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -291, 21,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -226, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -17, 12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -267, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -164, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -212, 0, -11, 6, -156, 8,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimHeavyItemThrowSmashB_joint21[206] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1859, -51, 1485, 49, -2059, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -2295, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 1725, 47, -2020, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1773, 42, -1970, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2406, -207, 1810, -35, -1875, 225,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2661, 406,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1702, -19, -1519, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1772, -120, -1567, -360,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1897, 494, 1461, -208, -2239, -191,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1461, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1672, 236, -1951, 345,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1424, 151, -1547, 221,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1391, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1507, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1486, 19, -1474, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1313, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1428, -55,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1408, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1440, -131, -1310, -185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1671, -192, 1354, -15, -1683, -269,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2002, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1590, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1848, -114,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2020, -65,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2008, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1880, 310, 1521, -228, -2117, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1387, 364, 1132, -208, -2124, 76,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1266, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1105, 16, -1964, 96,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1810, 57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1394, 19,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1311, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1405, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1749, 62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1588, 28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1410, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1418, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1408, -3, 1421, 2, -1572, 15,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimHeavyItemThrowSmashB_joint23[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 707, 30,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 966, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 988, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 792, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 587, -392,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -290,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 293,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 595, 385,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 778, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 780, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 752, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 498, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 455, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, -17,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTMarioAnimHeavyItemThrowSmashB_joint24[260] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 258, 31, 230, 65, -127, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 795, 138, 383, 10, 189, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 949, 351, 393, -26, 318, 248,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 767, -333,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1498, 222, 329, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1393, -609, 358, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 279, -602, 66, -158, 20, -441,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 96, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 188, -77, 42, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 37, 38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 49, 63,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 174, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 311, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 123, 54, 149, -144,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -96, -188,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 331, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 90, 41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 251, -14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -354, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -304, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -256, 46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -184, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 324, -44, 220, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 242, -243, 26, -381,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -162, -371, -542, -318, 63, 266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -500, -129, -611, -27, 348, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -421, 113, -596, 30, 236, -143,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 23, 40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -108, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -198, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -218, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -215, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 58, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 81, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 89, 8, -93, 14, -212, 3,
	ftAnimEnd(),
	0x4002, 0xFCDC, 0x28E0, 0x0000, 0x0000, 0x00FB, 0xFDFA, 0xFF2F, 0x0015, 0x480C, 0x0000, 0x0000, 0x20E3, 0x0005, 0xFCDC, 0x000E, 0x0000, 0x0000, 0x00FB, 0xFF00, 0xFF2F, 0xFF46, 0x2803, 0x000E, 0xFDEC, 0x0007, 0x20E1, 0x0006, 0x0000, 0x0000, 0xFF9C, 0xFEBE, 0xFE2F, 0xFEAA, 0x20E1, 0x0002, 0x0000, 0x0000, 0xFFBA, 0x0355, 0xFDD9, 0x0381, 0x20E1, 0x0003, 0x0000, 0x0000, 0x01B1, 0x0507, 0x005F, 0x0667, 0x20E1, 0x0003, 0x0000, 0xFD45, 0x037F, 0x052B, 0x02A5, 0x05CC, 0x38E3, 0x0015, 0xFDEC, 0xF7CD, 0x1134, 0x11C6, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
