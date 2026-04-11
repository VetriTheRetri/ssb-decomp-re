/* AnimJoint data for relocData file 917 (FTDonkeyAnimFSmash) */
/* 3488 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimFSmash_joint1[50];
extern u16 dFTDonkeyAnimFSmash_joint2[42];
extern u16 dFTDonkeyAnimFSmash_joint4[62];
extern u16 dFTDonkeyAnimFSmash_joint5[206];
extern u16 dFTDonkeyAnimFSmash_joint6[64];
extern u16 dFTDonkeyAnimFSmash_joint7[8];
extern u16 dFTDonkeyAnimFSmash_joint8[42];
extern u16 dFTDonkeyAnimFSmash_joint10[34];
extern u16 dFTDonkeyAnimFSmash_joint11[204];
extern u16 dFTDonkeyAnimFSmash_joint12[88];
extern u16 dFTDonkeyAnimFSmash_joint13[106];
extern u16 dFTDonkeyAnimFSmash_joint14[10];
extern u16 dFTDonkeyAnimFSmash_joint16[42];
extern u16 dFTDonkeyAnimFSmash_joint17[156];
extern u16 dFTDonkeyAnimFSmash_joint19[64];
extern u16 dFTDonkeyAnimFSmash_joint21[144];
extern u16 dFTDonkeyAnimFSmash_joint22[152];
extern u16 dFTDonkeyAnimFSmash_joint24[220];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTDonkeyAnimFSmash_joints[] = {
	(u32)dFTDonkeyAnimFSmash_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimFSmash_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimFSmash_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTDonkeyAnimFSmash_joint5, /* [4] joint 5 */
	(u32)dFTDonkeyAnimFSmash_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimFSmash_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimFSmash_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimFSmash_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTDonkeyAnimFSmash_joint11, /* [10] joint 11 */
	(u32)dFTDonkeyAnimFSmash_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimFSmash_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimFSmash_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimFSmash_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTDonkeyAnimFSmash_joint17, /* [16] joint 17 */
	(u32)dFTDonkeyAnimFSmash_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTDonkeyAnimFSmash_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTDonkeyAnimFSmash_joint22, /* [21] joint 22 */
	(u32)dFTDonkeyAnimFSmash_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF0316, /* [24] END */
};

/* Joint 1 */
u16 dFTDonkeyAnimFSmash_joint1[50] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -29, 1031, -400,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 94, 39, 1003, -8, -100, 33,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 94, 29, 1003, 0, -100, 33,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 177, 40, 1004, 11, 654, 476,
	ftAnimSetValRateT(FT_ANIM_TRAX, 22), 217, -49,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), 1025, 24, 793, 8,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 1071, 2, 678, -477,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), -29, 1031, -400,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTDonkeyAnimFSmash_joint2[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -265, -41, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -86, 7, -390, -13, 63, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -86, -3, -390, 2, 63, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -157, -3, -338, 0, 13, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), -167, -3, -399, 9, 28, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -265, -41, -16,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTDonkeyAnimFSmash_joint4[62] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 750, 24, 41, 0, 319, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 174, -27, -291, -12, -103, -5, -20, -5, 120, -63, -176, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 56, 30, -295, 24, -86, 9, -16, 3, 120, 28, -172, 2,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 35), 0, 319, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 851, 14, 246, 10, 104, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 1110, 7, 493, 5, 467, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 750, 24, 41,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimFSmash_joint5[206] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1671, -36, -1523, 24, 1134, 73,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1240, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -1997, -135, -1308, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2098, -50, -1123, 151,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -881, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1504, 230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1182, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 791, -217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -876, -3, 539, -235,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 109, 65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -942, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1289, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -1037, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1082, -60,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1687, -208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 190, 104,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1086, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -919, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -961, -39,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1881, -162,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2098, -84,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1005, -320, 1182, 194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2183, 215, -1601, -338, 1475, 343,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1668, 291, -1682, -9, 1868, 189,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1567, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1600, 57, 1854, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -1675, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1834, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 1776, -29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1562, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -1610, 19,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1698, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1744, 20,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1746, -31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1178, -38,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1590, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1523, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1724, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1673, 4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1146, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1671, 2, -1523, 0, 1134, -12,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimFSmash_joint6[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -407, -158,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -858, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -754, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -216, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -165, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -562, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -636, -293,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1150, -198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1033, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -1033, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1036, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -608, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -537, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -426, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -407, 18,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTDonkeyAnimFSmash_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimFSmash_joint8[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 174, -67, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -31, -8, -60, 0, 29, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -31, 10, -60, 0, 29, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 208, 6, -69, 0, -197, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), 130, -1, -67, 0, -172, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 174, -67, -44,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTDonkeyAnimFSmash_joint10[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -398, 70, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -441, -1, 215, 5, -161, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -441, -1, 215, -2, -161, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -506, 1, 100, -4, -61, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -398, 70, 29,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTDonkeyAnimFSmash_joint11[204] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 3101, 113, 172, 48, 2737, 193,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 3581, 505,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 206, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2931, 251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3240, 200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4224, 509, 3331, 216,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 4761, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 303, 54, 3673, 278,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 3900, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 331, -2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4765, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 4736, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3901, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 3882, 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 328, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 12), 307, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4744, 104, 315, 52, 3887, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4945, 316, 411, -161, 4109, 508,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5377, 210, -7, -272, 4904, 443,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -169, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 5367, -4, 4996, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 5368, 3, 5023, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 4986, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 5470, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -183, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 32, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 76, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 108, 34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5001, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 5175, 126,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 5473, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 6080, 46,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 143, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 173, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5312, 131,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 5969, -12,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 6121, 38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 6317, 0,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5959, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 6318, 0, 172, -1, 5954, -4,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimFSmash_joint12[88] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -416, -308,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -725, -366,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1149, -218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1161, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -750, 352,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -457, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -453, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -460, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -457, -208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -877, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -202, 436,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -308, -231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -558, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -552, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -823, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -789, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -429, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, 13,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTDonkeyAnimFSmash_joint13[106] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 103, 0, 1, 4095, 4095, 4095,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 26), 4095, 91, 4095, 91, 4095, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 1383, 51, 67, 2, -88, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 1383, 36, 67, -9, -88, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1857, 79, -50, -19, 60, 24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 5324, 491, 5324, 491, 6144, 819,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 1857, -18, -50, 2, 60, -12, 5324, -491, 5324, -491, 6144, -819,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 1617, -25, -19, 6, -108, -12,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4096, -273, 4096, -273, 4096, -455,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 4096, 0, 4096, 0, 4096, 0,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 4095, 4095, 4095,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 1403, -75, 62, 0, -161, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 103, 0, 1,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTDonkeyAnimFSmash_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 565, -904, 634, 120, 120, 120,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTDonkeyAnimFSmash_joint16[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -404, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), -134, -17, -402, -5, -625, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -1040, -81, -202, 81, -263, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -1117, 11, 580, 21, -357, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -848, 39, 134, -32, -53, 19,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -404, 0, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimFSmash_joint17[156] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -60, -36, -392, -14, -329, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -560, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -320, 71, -350, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -218, 88, -518, -148,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -369, -10, -525, 8,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -550, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -530, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -379, -9, -516, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), -423, -1, -485, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -424, 180, -522, 45, -485, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -61, 199, -440, 153, -712, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -25, 6, -216, 116, -651, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -93, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -612, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -199, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -191, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), -368, -14,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -89, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -109, -20,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -620, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -444, 44,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -126, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -66, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -403, 36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -331, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -381, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -389, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -60, 5, -392, -3, -329, 1,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimFSmash_joint19[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1026, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 724, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 606, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 426, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 428, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 427, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 420, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 790, 293,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1008, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1046, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1051, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 1035, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1038, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1028, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1026, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTDonkeyAnimFSmash_joint21[144] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1494, 43, 1593, 13, 1238, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1354, 106,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1909, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1622, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1595, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1678, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1462, 103,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 1786, 4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1922, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1906, -18,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1674, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1795, 27,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1885, -63, 1794, -80,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1766, -11, 1404, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1815, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1596, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1597, 0, 1755, -7, 1370, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 1568, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), 1729, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 1487, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1504, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1239, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1571, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1532, -22,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1698, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1597, -6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1512, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1499, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1494, -4, 1593, -3, 1238, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimFSmash_joint22[152] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 104, -18, 217, 8, -295, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 264, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -151, 8, -707, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -142, 8, -730, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 17), -88, -12, -638, -23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 276, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 15), 256, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -103, -218, 265, -114, -667, 194,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 95, 186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -526, -260, 28, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -623, -48, 297, 155,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 374, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -662, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 125, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 100, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 401, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 415, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -685, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -837, 33,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 407, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 219, 24,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -801, 37, 87, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -486, 132, -145, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -361, 110, -238, -71,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 95, 17, -295, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 244, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 221, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 104, 8, 217, -4, -295, 0,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimFSmash_joint24[220] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 994, 8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 1115, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1118, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 977, -262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 596, -228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 451, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 392, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 224, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 221, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 820, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 888, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 995, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 994, 0,
	ftAnimEnd(),
	0x0000, 0x200E, 0xF9C0, 0xFFED, 0x05E0, 0x001D, 0xF835, 0xFFFD, 0x2809, 0x0012, 0xF7E5, 0xFFF5, 0x2007, 0x0007, 0xF9B8, 0xFFEA, 0x06BD, 0x0005, 0x2007, 0x0001, 0xF9A2, 0xFFED, 0x06C0, 0x0000, 0x2807, 0x0010, 0xF99C, 0x0002, 0x063D, 0x0015, 0x0801, 0x000A, 0x2009, 0x0001, 0xF7DA, 0xFFF8, 0x2809, 0x0006, 0xF813, 0x002E, 0x0801, 0x0005, 0x2007, 0x0001, 0xF99D, 0x00F1, 0x0658, 0xFF99, 0x200F, 0x0001, 0xFB7E, 0x00A5, 0x056F, 0xFFBE, 0xF852, 0xFFEB, 0x200F, 0x0001, 0xFAE8, 0xFFA6, 0x05D2, 0x003A, 0xF7E8, 0xFFCE, 0x2803, 0x0005, 0xFA84, 0xFFF4, 0x2805, 0x0009, 0x056F, 0xFFE1, 0x2009, 0x0001, 0xF7ED, 0x0005, 0x2809, 0x000B, 0xF746, 0xFFDF, 0x0801, 0x0004, 0x2003, 0x0001, 0xFA77, 0xFFF3, 0x2803, 0x000D, 0xFA38, 0x0030, 0x0801, 0x0003, 0x2005, 0x0001, 0x0550, 0xFFE4, 0x2805, 0x000B, 0x050C, 0x0000, 0x0801, 0x0002, 0x2009, 0x0001, 0xF728, 0xFFEA, 0x2809, 0x000D, 0xF851, 0xFFF8, 0x0801, 0x0006, 0x2003, 0x0001, 0xFA6D, 0x0037, 0x2803, 0x0006, 0xFAC0, 0xFFC4, 0x0801, 0x0001, 0x2005, 0x0001, 0x050F, 0x001B, 0x2805, 0x0005, 0x0658, 0x0003, 0x0801, 0x0004, 0x200B, 0x0001, 0xFA82, 0xFFC4, 0xF848, 0xFFF7, 0x280B, 0x0005, 0xF9C5, 0xFFF7, 0xF835, 0x0000, 0x2005, 0x0001, 0x0650, 0xFFF1, 0x2005, 0x0004, 0x05E8, 0xFFF1, 0x200F, 0x0001, 0xF9C0, 0xFFFC, 0x05E0, 0xFFF8, 0xF835, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
