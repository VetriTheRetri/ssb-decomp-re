/* AnimJoint data for relocData file 913 (FTDonkeyAnimUTilt) */
/* 2576 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimUTilt_joint1[22];
extern u16 dFTDonkeyAnimUTilt_joint2[32];
extern u16 dFTDonkeyAnimUTilt_joint4[42];
extern u16 dFTDonkeyAnimUTilt_joint5[190];
extern u16 dFTDonkeyAnimUTilt_joint6[64];
extern u16 dFTDonkeyAnimUTilt_joint7[16];
extern u16 dFTDonkeyAnimUTilt_joint8[16];
extern u16 dFTDonkeyAnimUTilt_joint10[16];
extern u16 dFTDonkeyAnimUTilt_joint11[144];
extern u16 dFTDonkeyAnimUTilt_joint12[56];
extern u16 dFTDonkeyAnimUTilt_joint13[26];
extern u16 dFTDonkeyAnimUTilt_joint14[8];
extern u16 dFTDonkeyAnimUTilt_joint16[34];
extern u16 dFTDonkeyAnimUTilt_joint17[142];
extern u16 dFTDonkeyAnimUTilt_joint19[32];
extern u16 dFTDonkeyAnimUTilt_joint21[106];
extern u16 dFTDonkeyAnimUTilt_joint22[144];
extern u16 dFTDonkeyAnimUTilt_joint24[148];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTDonkeyAnimUTilt_joints[] = {
	(u32)dFTDonkeyAnimUTilt_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimUTilt_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimUTilt_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTDonkeyAnimUTilt_joint5, /* [4] joint 5 */
	(u32)dFTDonkeyAnimUTilt_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimUTilt_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimUTilt_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimUTilt_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTDonkeyAnimUTilt_joint11, /* [10] joint 11 */
	(u32)dFTDonkeyAnimUTilt_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimUTilt_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimUTilt_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimUTilt_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTDonkeyAnimUTilt_joint17, /* [16] joint 17 */
	(u32)dFTDonkeyAnimUTilt_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTDonkeyAnimUTilt_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTDonkeyAnimUTilt_joint22, /* [21] joint 22 */
	(u32)dFTDonkeyAnimUTilt_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF024A, /* [24] END */
};

/* Joint 1 */
u16 dFTDonkeyAnimUTilt_joint1[22] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1032, -402,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), -24,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 612, -119, -600, -35,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 19), 585, 68, -533, 32,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), 1032, -402,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTDonkeyAnimUTilt_joint2[32] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -265, -41, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -122, 10, -289, 14, 199, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 20), -34, -2, 281, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 291, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 203, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 37), -265, -41, -16,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTDonkeyAnimUTilt_joint4[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 750, 24, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 726, -11, 134, 20, 229, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 511, -15, 425, 16, -142, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 383, 8, 489, -3, -279, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 727, 12, 348, -15, -89, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 750, 24, 41,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimUTilt_joint5[190] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 3154, 61, -84, -30, -473, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 3479, 54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -334, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -653, -185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -855, -133,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -998, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3475, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 3697, 511,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -429, -126,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -595, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1215, -476,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4511, 541, -1951, -475,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 4856, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -472, 81, -2166, -150,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2434, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -430, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4897, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 4786, 59,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2434, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2386, -70,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -426, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -200, 19,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4867, 78, -2484, -93,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 5605, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), -3090, -39,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -182, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -455, -31,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 5614, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 6070, 77,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3137, -54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -3537, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -481, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -100, 15,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 6141, 64,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 6367, 6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3560, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -3678, -20,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -88, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 6371, 3, -84, 3, -3690, -11,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimUTilt_joint6[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -407, -131,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -623, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -606, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -744, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -723, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -93, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -183, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -204, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -595, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -655, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -866, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -846, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -435, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -407, 27,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTDonkeyAnimUTilt_joint7[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, -36, -183,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 52), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimUTilt_joint8[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 174, -67, -44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -199, -78, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 52), 174, -67, -44,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTDonkeyAnimUTilt_joint10[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -398, 70, 29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 35, 524, 41,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 52), -398, 70, 29,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTDonkeyAnimUTilt_joint11[144] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1492, 69, 1436, -63, 1129, 166,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1704, 249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1759, 326, 1241, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2214, 395, 1030, -134,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2949, 182,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 981, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1972, 232,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2785, 120,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3113, 121,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 3429, 78,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 994, 14, 2888, 111,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 3800, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1203, -16,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3511, 79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 4187, 64,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3819, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 4202, 53,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1185, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 1212, 19,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4254, 68,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 4736, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4255, 49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), 4347, -2,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1231, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 1435, 2,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4734, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 4710, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4709, 0, 1436, 1, 4346, -1,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimUTilt_joint12[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -416, -337,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -754, -367,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1151, -253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1173, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1120, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -447, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -345, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -462, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -497, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), -532, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -508, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -420, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, 3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTDonkeyAnimUTilt_joint13[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 98, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 123, 57, 259, 51, 175, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 562, 0, 415, -4, 331, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 52), 98, 0, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTDonkeyAnimUTilt_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -893, -1340, 2502,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTDonkeyAnimUTilt_joint16[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -404, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -713, -21, -230, 5, -255, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -920, 18, 121, 37, 6, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -345, 14, 527, -3, 331, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), -404, 0, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimUTilt_joint17[142] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1695, -93, -1214, -8, 1303, 61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1145, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1434, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -2072, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2086, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -2058, 14,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1113, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -629, 20,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1472, 35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1518, -35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2035, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1920, -222, 1434, 249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2479, -160, 2018, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2240, 141, 1797, -125,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1759, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2196, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -2671, -43,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -615, 7, 1777, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), -551, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 2374, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2716, -46, 2414, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 14), -3324, -5, 2893, 3,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -532, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -395, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3327, -2, 2896, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), -3304, 0, 2912, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3303, 0, -394, 1, 2912, 0,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimUTilt_joint19[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1004, -17,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1132, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1175, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 1191, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1195, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), 1006, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1004, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTDonkeyAnimUTilt_joint21[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -62, 12, 24, -41, -377, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 13, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), -370, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -114, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -155, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -307, -36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 46, 34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 483, -25,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -343, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), -304, 32,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -359, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), -510, 8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 459, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), 106, -17,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -271, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -62, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -501, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -378, 1,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 88, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 25, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -62, 0, 24, -1, -377, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimUTilt_joint22[144] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 99, -67, 216, 0, -297, -131,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -5, -188,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -288, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -429, -200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -698, -211,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -988, -96,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -204, -138,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -433, -98,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -266, 22, -1098, -109,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -443, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1266, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -525, -53, -1152, 94,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -377, 43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1017, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -544, -82,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -815, 2,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -331, 47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 114, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1024, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 26), -502, 23,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -809, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -160, 23,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 117, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 216, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -137, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 98, 2,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -478, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -299, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 99, 1, 216, 0, -297, 1,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimUTilt_joint24[148] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 993, 33,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 1427, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1442, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 37), 1040, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1027, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 994, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 993, -1,
	ftAnimEnd(),
	0x0000, 0x200E, 0xF9B9, 0xFFDF, 0xF94F, 0x0028, 0x04C8, 0x0015, 0x2809, 0x0008, 0x066C, 0x002E, 0x2007, 0x0003, 0xF9CF, 0x007A, 0xF96F, 0xFF89, 0x2007, 0x0001, 0xFA6B, 0x0058, 0xF8D0, 0xFF9E, 0x2807, 0x0005, 0xF9C7, 0x0040, 0xF8E9, 0xFFFF, 0x0801, 0x0004, 0x2009, 0x0001, 0x069D, 0x003F, 0x2809, 0x0017, 0x0574, 0xFFE9, 0x2007, 0x0001, 0xFA4E, 0x0094, 0xF8E1, 0x0001, 0x2805, 0x0011, 0xF977, 0xFFE8, 0x2003, 0x0009, 0xFB47, 0xFFF5, 0x2003, 0x0001, 0xFB3B, 0xFFF3, 0x2803, 0x0015, 0xFA43, 0xFFEE, 0x0801, 0x0007, 0x2005, 0x0001, 0xF95D, 0xFFE4, 0x2805, 0x000F, 0xF863, 0x000F, 0x0801, 0x0004, 0x2009, 0x0001, 0x055C, 0xFFE9, 0x2809, 0x001A, 0x04C8, 0x0000, 0x0801, 0x0008, 0x2003, 0x0001, 0xFA31, 0xFFEF, 0x2803, 0x0011, 0xF9B9, 0x0000, 0x0801, 0x0001, 0x2005, 0x0001, 0xF874, 0x0011, 0x2005, 0x000F, 0xF94D, 0x0002, 0x200F, 0x0001, 0xF9B9, 0x0000, 0xF94F, 0x0001, 0x04C8, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
