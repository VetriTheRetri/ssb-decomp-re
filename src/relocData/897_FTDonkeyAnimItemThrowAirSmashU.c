/* AnimJoint data for relocData file 897 (FTDonkeyAnimItemThrowAirSmashU) */
/* 2384 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimItemThrowAirSmashU_joint1[40];
extern u16 dFTDonkeyAnimItemThrowAirSmashU_joint2[54];
extern u16 dFTDonkeyAnimItemThrowAirSmashU_joint3[30];
extern u16 dFTDonkeyAnimItemThrowAirSmashU_joint5[42];
extern u16 dFTDonkeyAnimItemThrowAirSmashU_joint6[48];
extern u16 dFTDonkeyAnimItemThrowAirSmashU_joint7[24];
extern u16 dFTDonkeyAnimItemThrowAirSmashU_joint8[8];
extern u16 dFTDonkeyAnimItemThrowAirSmashU_joint9[26];
extern u16 dFTDonkeyAnimItemThrowAirSmashU_joint11[8];
extern u16 dFTDonkeyAnimItemThrowAirSmashU_joint12[128];
extern u16 dFTDonkeyAnimItemThrowAirSmashU_joint13[56];
extern u16 dFTDonkeyAnimItemThrowAirSmashU_joint14[34];
extern u16 dFTDonkeyAnimItemThrowAirSmashU_joint15[10];
extern u16 dFTDonkeyAnimItemThrowAirSmashU_joint17[42];
extern u16 dFTDonkeyAnimItemThrowAirSmashU_joint18[126];
extern u16 dFTDonkeyAnimItemThrowAirSmashU_joint20[62];
extern u16 dFTDonkeyAnimItemThrowAirSmashU_joint22[104];
extern u16 dFTDonkeyAnimItemThrowAirSmashU_joint23[116];
extern u16 dFTDonkeyAnimItemThrowAirSmashU_joint25[182];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTDonkeyAnimItemThrowAirSmashU_joints[] = {
	(u32)dFTDonkeyAnimItemThrowAirSmashU_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimItemThrowAirSmashU_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimItemThrowAirSmashU_joint3, /* [2] joint 3 */
	(u32)dFTDonkeyAnimItemThrowAirSmashU_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTDonkeyAnimItemThrowAirSmashU_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimItemThrowAirSmashU_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimItemThrowAirSmashU_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimItemThrowAirSmashU_joint9, /* [8] joint 9 */
	(u32)dFTDonkeyAnimItemThrowAirSmashU_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTDonkeyAnimItemThrowAirSmashU_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimItemThrowAirSmashU_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimItemThrowAirSmashU_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimItemThrowAirSmashU_joint15, /* [14] joint 15 */
	(u32)dFTDonkeyAnimItemThrowAirSmashU_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTDonkeyAnimItemThrowAirSmashU_joint18, /* [17] joint 18 */
	(u32)dFTDonkeyAnimItemThrowAirSmashU_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTDonkeyAnimItemThrowAirSmashU_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTDonkeyAnimItemThrowAirSmashU_joint23, /* [22] joint 23 */
	(u32)dFTDonkeyAnimItemThrowAirSmashU_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	0xFFFF0215, /* [25] END */
};

/* Joint 1 */
u16 dFTDonkeyAnimItemThrowAirSmashU_joint1[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 180, 0, 88, 0, 302,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 541, 291, 908, 803,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 583, -25, 0, -12, 1607, -43,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTDonkeyAnimItemThrowAirSmashU_joint2[54] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 30, 949, -319,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 40, 25,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), 95, -2806,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), -24, 3018, -71, 1120,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 1162, 3206, 100, 2595,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 777, -3434, -453, -1633, 577, 1910,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -125, -417, -517, 579, 816, -524,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 203, 69, 343, 651, -144, -505,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 30, 949, -319,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTDonkeyAnimItemThrowAirSmashU_joint3[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -257, -28, 131,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -214, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -424, 2, -889, 25, 148, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -243, 7, 123, 39, 62, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), -257, -28, 131,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimItemThrowAirSmashU_joint5[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 791, 73, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 745, -4, -3, 2, -207, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 773, 12, 81, 31, 119, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 794, 8, 121, 49, 245, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 818, 0, 329, -2, 468, -18,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 791, 73, -78,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimItemThrowAirSmashU_joint6[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -24, 75, -383, 32, -149, -78,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -380, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 140, -1, -340, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 137, -3, -336, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 19), -23, -1, -150, 1,
	ftAnimBlock(0, 17),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -382, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -382, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -24, 0, -383, 0, -149, 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTDonkeyAnimItemThrowAirSmashU_joint7[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -727, -73,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -815, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -813, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -728, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -727, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimItemThrowAirSmashU_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -825, -308, 165,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTDonkeyAnimItemThrowAirSmashU_joint9[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 393, 144, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -83, -51, 244, -77, -548, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 84, 22, -319, -4, 211, 29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 393, 144, 74,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTDonkeyAnimItemThrowAirSmashU_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -452, -206, 75,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTDonkeyAnimItemThrowAirSmashU_joint12[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 276, -51, -2832, -114, -8, -73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -3004, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 247, 266, -15, 263,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 758, 393, 445, 321,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 936, -481,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2860, 140, 628, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -2589, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 506, -511,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 71, -581, -394, -617,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -360, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2710, -125, -728, -245,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1071, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -3151, 13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -449, -55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -50, 29,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1074, 44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -719, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -3101, 34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -2952, 67,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -625, 101,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -22, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -20, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 266, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2885, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -2831, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 276, 9, -2832, -1, -8, 13,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTDonkeyAnimItemThrowAirSmashU_joint13[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -826, -17,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -933, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -983, 213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -507, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -682, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -473, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -342, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -4, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -207, -182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -834, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -826, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTDonkeyAnimItemThrowAirSmashU_joint14[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 893, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1644, 36, 263, -4, 787, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1182, -123, -38, -174, 108, -297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1273, -18, -259, 2, -104, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 893, 0, 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTDonkeyAnimItemThrowAirSmashU_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -893, -1340, 2502, 120, 120, 120,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimItemThrowAirSmashU_joint17[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 268, 714, 1072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 268, -629, 714, -443, 1072, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -2249, -222, -1060, -174, 1460, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1065, 202, -332, 176, 377, -215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -830, 83, 177, 65, -49, 43,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 268, 714, 1072,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTDonkeyAnimItemThrowAirSmashU_joint18[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1887, 144, -1593, 140, 1411, -80,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1957, -282,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1453, 620, 1331, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -352, 506, 1548, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -439, -113, 1631, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2363, -488, -579, -33, 1934, 397,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -303, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2935, -385, 2427, 329,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3134, -149, 2594, 139,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 3046, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -3264, 35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -249, 45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -209, 16,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3032, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2756, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3229, 59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -3108, -144,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -193, 14, 2725, -33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2767, 123,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -83, 79,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3304, -174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3456, -95, 2937, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3495, -39, -14, 68, 3020, 82,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTDonkeyAnimItemThrowAirSmashU_joint20[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 651, 441,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1092, 278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1207, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 542, -204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 351, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 207, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -103,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 270, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 356, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 662, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 775, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 725, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 651, -73,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimItemThrowAirSmashU_joint22[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -4, -127, 0, 85, 105, -188,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -89, 83,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 260, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -83, -225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -345, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -300, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -189, 150,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 438, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 7, 68,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -242, -58,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 233, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 202, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 457, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 199, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -308, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -552, 16,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 161, -41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 6, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 172, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 108, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -525, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -47, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4, 42, 0, -5, 105, -3,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTDonkeyAnimItemThrowAirSmashU_joint23[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -160, 192, 189, 24, -727, 276,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 205, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 565, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -132, 197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -56, 116,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 797, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 233, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 96, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 528, -48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 310, -120,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 90, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 492, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 899, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 696, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 602, -116,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -85, -288,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 148, -195,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -276, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -346, -215,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -727, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 392, -92,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 192, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -263, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -165, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -160, 4, 189, -3, -727, 0,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTDonkeyAnimItemThrowAirSmashU_joint25[182] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1071, -257,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 813, -310,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 450, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 596, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 746, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 619, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 374, -209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 200, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 388, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 1201, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1156, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1083, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1071, -11,
	ftAnimEnd(),
	0x0000, 0x200E, 0xFFBB, 0xFFEE, 0xFF4D, 0xFFB0, 0x007F, 0x005E, 0x2807, 0x0002, 0xFED4, 0xFED5, 0xFE4C, 0xFF70, 0x2009, 0x0001, 0x00DD, 0x00B6, 0x2009, 0x0001, 0x01EC, 0x0003, 0x200F, 0x0001, 0xFD51, 0x003D, 0xFDDB, 0x0062, 0x00E4, 0xFE31, 0x200F, 0x0001, 0xFF4E, 0x01C0, 0xFF10, 0x0108, 0xFE4E, 0xFE8A, 0x200F, 0x0001, 0x00D0, 0x00F0, 0xFFEB, 0x007F, 0xFDF7, 0xFFDA, 0x2805, 0x0004, 0xFF4B, 0xFFEA, 0x200B, 0x0001, 0x012E, 0xFEE1, 0xFE01, 0x0030, 0x2809, 0x0004, 0xFF22, 0x001B, 0x2003, 0x0001, 0xFE92, 0xFF6D, 0x2003, 0x0001, 0x0006, 0x0111, 0x2003, 0x0001, 0x00B4, 0x0086, 0x2803, 0x0002, 0x01CC, 0x00C1, 0x2005, 0x0001, 0xFF45, 0xFFFA, 0x2805, 0x000D, 0xFF4C, 0x0001, 0x2009, 0x0001, 0xFF3E, 0x001D, 0x2809, 0x000C, 0x007C, 0x0006, 0x2003, 0x0001, 0x0296, 0x0093, 0x2003, 0x0003, 0x023B, 0xFF1A, 0x2003, 0x0001, 0x010A, 0xFEE8, 0x2003, 0x0006, 0xFFAF, 0x000A, 0x2003, 0x0001, 0xFFB7, 0x0005, 0x200F, 0x0001, 0xFFBB, 0x0003, 0xFF4D, 0x0000, 0x007F, 0x0003, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
