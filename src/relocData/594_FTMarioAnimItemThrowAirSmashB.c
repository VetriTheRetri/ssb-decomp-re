/* AnimJoint data for relocData file 594 (FTMarioAnimItemThrowAirSmashB) */
/* 2816 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimItemThrowAirSmashB_joint1[50];
extern u16 dFTMarioAnimItemThrowAirSmashB_joint2[44];
extern u16 dFTMarioAnimItemThrowAirSmashB_joint4[76];
extern u16 dFTMarioAnimItemThrowAirSmashB_joint5[120];
extern u16 dFTMarioAnimItemThrowAirSmashB_joint6[60];
extern u16 dFTMarioAnimItemThrowAirSmashB_joint7[10];
extern u16 dFTMarioAnimItemThrowAirSmashB_joint8[44];
extern u16 dFTMarioAnimItemThrowAirSmashB_joint10[22];
extern u16 dFTMarioAnimItemThrowAirSmashB_joint11[138];
extern u16 dFTMarioAnimItemThrowAirSmashB_joint12[62];
extern u16 dFTMarioAnimItemThrowAirSmashB_joint13[34];
extern u16 dFTMarioAnimItemThrowAirSmashB_joint15[10];
extern u16 dFTMarioAnimItemThrowAirSmashB_joint16[104];
extern u16 dFTMarioAnimItemThrowAirSmashB_joint18[64];
extern u16 dFTMarioAnimItemThrowAirSmashB_joint20[124];
extern u16 dFTMarioAnimItemThrowAirSmashB_joint21[168];
extern u16 dFTMarioAnimItemThrowAirSmashB_joint23[70];
extern u16 dFTMarioAnimItemThrowAirSmashB_joint24[160];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimItemThrowAirSmashB_joints[] = {
	(u32)dFTMarioAnimItemThrowAirSmashB_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimItemThrowAirSmashB_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimItemThrowAirSmashB_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimItemThrowAirSmashB_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimItemThrowAirSmashB_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimItemThrowAirSmashB_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimItemThrowAirSmashB_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimItemThrowAirSmashB_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimItemThrowAirSmashB_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimItemThrowAirSmashB_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimItemThrowAirSmashB_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimItemThrowAirSmashB_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimItemThrowAirSmashB_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimItemThrowAirSmashB_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimItemThrowAirSmashB_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimItemThrowAirSmashB_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimItemThrowAirSmashB_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTMarioAnimItemThrowAirSmashB_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTMarioAnimItemThrowAirSmashB_joint1[50] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -13, 0, 0, 0, 0, 600, 116, 0, -44,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 0, 551, -62, -60, 323,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 0, 553, -107, 242, 491,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 0, 484, 20, 247, -107,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 0, 0, 600, 13, 0, -20,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimItemThrowAirSmashB_joint2[44] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 7, 0, -44, 0, 4,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 20, 20, -1323, -63, -44, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 103, -10, -319, 661, -165, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -5, 0, 16, 0, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 0, -1, 0, -9, 0, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTMarioAnimItemThrowAirSmashB_joint4[76] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY), 134, -72, 0, 13, 0, -63, -14, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, -92,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 465, -44, 224, 38, 104, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -44, -146, 154, 12, 158, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 26, 131, 260, 42, 11, 74,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 480, 104, 323, 7, 454, 55,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 17), 0, -14, -92,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 759, -21, 312, -20, 403, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 134, -9, 0, -2, 0, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTMarioAnimItemThrowAirSmashB_joint5[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 247, 132, -474, -56, -88, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 379, 246, -530, -86, -196, -207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 740, 411, -647, -45, -502, -367,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1202, 202, -622, 62, -930, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1144, -29, -521, 10, -843, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1143, -43, -602, -78, -864, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1057, -123, -679, -62, -796, 110,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -712, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 742, -103, -491, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 687, -50, -437, 50,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 11), 465, -15, -290, -2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -698, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), -472, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 445, -62, -440, -2, -288, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 340, -83, -478, -19, -176, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 278, -46, -479, 1, -116, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 247, -31, -474, 5, -88, 28,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimItemThrowAirSmashB_joint6[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -384, -32,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -472, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -367, 236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 179,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -224, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -330, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -384, -53,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimItemThrowAirSmashB_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTMarioAnimItemThrowAirSmashB_joint8[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 127, 0,
	ftAnimSetValRate(FT_ANIM_ROTY), 0, 107,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, -27, 805, -92, 0, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -552, -367,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -35, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 9, -662, 30, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 127, 3, 0, 9, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTMarioAnimItemThrowAirSmashB_joint10[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 0, -4, 0, 3, 0, -2,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimItemThrowAirSmashB_joint11[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1407, -178, 1146, 49, 1530, -197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1229, -82, 1195, 9, 1333, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1242, -2, 1164, -37, 1371, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1223, -53, 1121, -77, 1380, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1135, 94, 1009, -452, 1341, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1413, 160, 215, -329, 1534, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1457, 114, 350, 139, 1678, 197,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1845, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 494, 95, 1929, 233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 540, 28, 2145, 167,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 508, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1968, 127, 2264, 120,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2441, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2385, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 2669, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2490, 46, 2703, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 2756, 36, 2862, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 500, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 411, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2789, 73, 391, 14, 2878, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2903, 112, 439, 35, 3007, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3015, 112, 462, 22, 3138, 130,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimItemThrowAirSmashB_joint12[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -384, 384,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 187,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -212, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -384, -172,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTMarioAnimItemThrowAirSmashB_joint13[34] = {
	ftAnimSetValAfter(FT_ANIM_ROTY), 0,
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), 625,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 5), 1824,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 4), 1340,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 3), 580,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 12), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 12), 625,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTMarioAnimItemThrowAirSmashB_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimItemThrowAirSmashB_joint16[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1498, -35, 1611, 57, 1361, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1534, -113, 1669, 153, 1278, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1724, -466, 1919, 124, 1374, 395,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2467, -462, 1918, -174, 2069, 415,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2650, -251, 1570, 376, 2205, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2970, -228, 2670, 807, 2080, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3108, -41, 3185, 295, 2545, 213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3053, 50, 3261, 72, 2507, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3006, 31, 3330, 50, 2479, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -3066, -19, 3327, -12, 2552, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3083, -14, 3315, -11, 2585, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -3108, 1, 3219, -6, 2953, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3107, 1, 3213, -5, 2969, 16,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimItemThrowAirSmashB_joint18[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 229, 220,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 450, 217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 664, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 565, -206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 250, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 676, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 511, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 667, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 735, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 722, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 703, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 340, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 292, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 253, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 229, -23,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTMarioAnimItemThrowAirSmashB_joint20[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -260, 1, -33, -9, 436, -101,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 51, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -258, 48, 334, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -162, 108, 112, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -41, 41, 327, 184, 16, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -79, 28, 420, -11, 111, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 14, -64, 305, -297, 233, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -209, -126, -173, -277, 29, -140,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -238, -38, -250, -68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -331, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -285, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -309, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -283, 23, -311, 22, -7, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -254, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -31, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 152, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 203, 51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 420, 22,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -255, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -257, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -260, -2, -33, -2, 436, 15,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimItemThrowAirSmashB_joint21[168] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 65, -120, 162, -45, -346, -60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 4, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -55, -181, -406, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -297, -191, -528, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -437, -85, -183, -151, -628, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -468, 109, -299, 169, -682, 362,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -217, 94, 155, 160, 97, 687,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -279, -64, 21, -80, 692, 331,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -442, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -6, -29, 759, 67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -165, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 826, 59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 870, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -535, -67,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -349, 150,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -314, -113, 810, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -427, -3, 588, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -181, 154, -398, 63, 414, -166,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -39, 106, -11, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 37, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 61, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -3, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 48, 69, -156, -138,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -419, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 157, 9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -5, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 34, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -420, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 164, 2, -393, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 65, 31, 162, -1, -346, 47,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimItemThrowAirSmashB_joint23[70] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 716, 33,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 736, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 563, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 472, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 527, -236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -263,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 150, 212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, 218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 587, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 731, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1158, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1107, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 826, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 716, -109,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTMarioAnimItemThrowAirSmashB_joint24[160] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 57, -33, -134, -88, 164, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 152, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 24, -153, -222, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -248, 9, -371, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 43, 164, -87, 66, 236, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 80, 114, -238, 202, 291, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 271, 568, 316, 398, -19, 223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1218, 226, 557, 131, 737, 399,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 723, -230, 580, 45, 778, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 757, 161, 649, 55, 916, 224,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 769, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1047, 264, 1228, 246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1286, 154, 1410, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1355, 76, 1349, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1439, -6, 1356, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1342, -7, 852, 101, 1185, -78,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1422, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1425, 67, 1199, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1607, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1188, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1307, 88,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1523, 86,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1731, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1641, 29, 1408, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 1677, -8, 1722, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1666, -11, 1742, 11, 1773, 50,
	ftAnimEnd(),
};
