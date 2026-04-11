/* AnimJoint data for relocData file 926 (FTDonkeyAnimAttackAirD) */
/* 2544 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimAttackAirD_joint1[18];
extern u16 dFTDonkeyAnimAttackAirD_joint2[26];
extern u16 dFTDonkeyAnimAttackAirD_joint4[42];
extern u16 dFTDonkeyAnimAttackAirD_joint5[178];
extern u16 dFTDonkeyAnimAttackAirD_joint6[56];
extern u16 dFTDonkeyAnimAttackAirD_joint7[8];
extern u16 dFTDonkeyAnimAttackAirD_joint8[8];
extern u16 dFTDonkeyAnimAttackAirD_joint10[30];
extern u16 dFTDonkeyAnimAttackAirD_joint11[182];
extern u16 dFTDonkeyAnimAttackAirD_joint12[56];
extern u16 dFTDonkeyAnimAttackAirD_joint13[12];
extern u16 dFTDonkeyAnimAttackAirD_joint14[8];
extern u16 dFTDonkeyAnimAttackAirD_joint16[10];
extern u16 dFTDonkeyAnimAttackAirD_joint17[104];
extern u16 dFTDonkeyAnimAttackAirD_joint19[56];
extern u16 dFTDonkeyAnimAttackAirD_joint21[128];
extern u16 dFTDonkeyAnimAttackAirD_joint22[122];
extern u16 dFTDonkeyAnimAttackAirD_joint24[178];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTDonkeyAnimAttackAirD_joints[] = {
	(u32)dFTDonkeyAnimAttackAirD_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimAttackAirD_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimAttackAirD_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTDonkeyAnimAttackAirD_joint5, /* [4] joint 5 */
	(u32)dFTDonkeyAnimAttackAirD_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimAttackAirD_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimAttackAirD_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimAttackAirD_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTDonkeyAnimAttackAirD_joint11, /* [10] joint 11 */
	(u32)dFTDonkeyAnimAttackAirD_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimAttackAirD_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimAttackAirD_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimAttackAirD_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTDonkeyAnimAttackAirD_joint17, /* [16] joint 17 */
	(u32)dFTDonkeyAnimAttackAirD_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTDonkeyAnimAttackAirD_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTDonkeyAnimAttackAirD_joint22, /* [21] joint 22 */
	(u32)dFTDonkeyAnimAttackAirD_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF0243, /* [24] END */
};

/* Joint 1 */
u16 dFTDonkeyAnimAttackAirD_joint1[18] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 949,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 30, -319,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 6), 729, -58,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 24), 729, 32,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 30), 949,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTDonkeyAnimAttackAirD_joint2[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -257, -28, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -222, 1, -109, -2, -31, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), -222, 0, -109, 1, -31, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), -257, -28, 131,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTDonkeyAnimAttackAirD_joint4[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 791, 73, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 783, -111, 55, -3, -127, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 119, -24, 51, 0, 14, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 119, 17, 51, 0, 14, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 783, 22, 55, 0, -127, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 791, 73, -78,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimAttackAirD_joint5[178] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -24, 55, -383, 53, -149, -52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -198, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 30, 139, -202, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 254, 158, -452, -223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 347, 35, -46, 30, -650, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 324, 311, -138, -287, -764, -529,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 970, 574, -621, -196, -1709, -770,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1473, 258, -530, 53, -2304, -309,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1486, 11, -514, 14, -2327, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), -545, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1495, 7, -2342, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), 1473, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), -2321, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2304, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1869, 284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1451, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1114, -248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -568, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -532, 107,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 807, -291, -1521, 337,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 338, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -667, 16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -400, 128,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -329, -17,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 344, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 66, -40,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -650, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -150, 2,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 30, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -23, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -346, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -380, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -24, 0, -383, -2, -149, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimAttackAirD_joint6[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -727, -123,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -898, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -833, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1122, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1063, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -979, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -989, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -956, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -914, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -817, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -784, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -734, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -727, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTDonkeyAnimAttackAirD_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -825, -308, 165,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimAttackAirD_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 393, 144, 74,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTDonkeyAnimAttackAirD_joint10[30] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -452, -206, 75,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -270, -196, 73,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -182, -144, 53,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), -182, -144, 53,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -270, -196, 73,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -452, -206, 75,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTDonkeyAnimAttackAirD_joint11[182] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1332, -104, 1223, 23, -1617, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1436, -215, 1246, 98, -1676, -191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1764, -280, 1421, 127, -1999, -306,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1454, -227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1996, -84, -2288, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1933, 27, -2328, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1941, 142, 1046, -279, -2509, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 882, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1648, 175, -2326, 112,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2184, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1536, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1489, 42, 879, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), -1648, -43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), 905, 14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2162, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), -2407, -14,
	ftAnimBlock(0, 19),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1697, -56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1907, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 924, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1490, -25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2413, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -2375, -44,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1893, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -2061, 34,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2418, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -1657, 29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1459, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1225, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2019, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1335, 7,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1635, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1618, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1225, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1224, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1332, 3, 1223, 0, -1617, 1,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimAttackAirD_joint12[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -826, -145,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1009, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -873, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1122, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1126, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 26), -1125, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1118, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -712, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -680, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -982, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -968, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -834, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -826, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTDonkeyAnimAttackAirD_joint13[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 893,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 1161,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 50), 893,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTDonkeyAnimAttackAirD_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -893, -1340, 2502,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTDonkeyAnimAttackAirD_joint16[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -375, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 60), 268, 714, 1072,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimAttackAirD_joint17[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -278, -14, -14, -37, -196, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -229, 62, -138, 44, -407, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -185, 21, -88, 49, -182, 216,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 13), -184, 0, -19, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 134, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 133, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 122, -2,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -184, 0, -19, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), -169, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), -298, -13,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 120, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -489, 12,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -175, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -16, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -309, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -279, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -201, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -278, 0, -14, 1, -196, 4,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimAttackAirD_joint19[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 651, 102,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 815, -205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 521, -314,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 40, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 104, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 185, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 910, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 893, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 657, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 651, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTDonkeyAnimAttackAirD_joint21[128] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -4, 32, 0, 16, 105, -35,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4095, 4095, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4, -28, 4095, 1092, 4095, 1092, 4096, 1092,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -248, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -21, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -94, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), -16, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 92, 29,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 7372, 7372, 7372,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 24), 4095, -121, 4095, -121, 4096, -121,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), 1, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 61, -19, -253, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 47), 69, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 18), 17, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), 78, -10,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 30), 4095, 4095, 4096,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 7, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), 1, -1,
	ftAnimBlock(0, 16),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 67, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -2, -3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 81, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 103, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4, -1, 0, 0, 105, 1,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimAttackAirD_joint22[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -160, -19, 189, -22, -727, -68,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -19, 130, 179, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -887, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -620, 308,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -33, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 110, 88, 130, -60,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 166, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 27, 70,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 124, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 166, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 30), -85, -27,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 124, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 107, -20,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 179, 0,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 69, -50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -763, -56,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 176, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 188, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -111, -23, -815, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 16), -161, 2, -731, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -160, 1, 189, 1, -727, 3,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimAttackAirD_joint24[178] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1071, 25,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 958, -239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 618, -348,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 261, -233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 152, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 333, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 415, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 1111, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1115, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 1073, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1071, -1,
	ftAnimEnd(),
	0x0000, 0x280E, 0xF972, 0x0015, 0x06FB, 0x0004, 0xFA38, 0xFFF9, 0x3F00, 0x0FFF, 0x1000, 0x1000, 0x2F01, 0x0005, 0x0FFF, 0x0444, 0x1000, 0x0444, 0x1000, 0x0444, 0x2803, 0x001C, 0xF9DE, 0xFFF0, 0x2805, 0x0023, 0x06FA, 0x0004, 0x2009, 0x0004, 0xF98A, 0xFF8C, 0x2009, 0x0001, 0xF903, 0xFF98, 0x2809, 0x0006, 0xF88F, 0xFFFB, 0x3F01, 0x0001, 0x1CCC, 0x1CCC, 0x1CCC, 0x2F01, 0x0018, 0x0FFF, 0xFF87, 0x1000, 0xFF87, 0x1000, 0xFF87, 0x0801, 0x0005, 0x2009, 0x0001, 0xF88A, 0xFFFC, 0x2809, 0x001D, 0xF9A7, 0x0016, 0x0801, 0x0010, 0x2003, 0x0001, 0xF9D9, 0xFFFC, 0x2803, 0x001E, 0xF973, 0xFFFF, 0x0801, 0x0001, 0x4701, 0x001E, 0x0FFF, 0x1000, 0x1000, 0x0801, 0x0005, 0x2005, 0x0001, 0x06FE, 0x0004, 0x2805, 0x0017, 0x06FC, 0x0000, 0x0801, 0x0005, 0x2009, 0x0001, 0xF9BC, 0x0013, 0x2009, 0x0011, 0xFA38, 0x0000, 0x200F, 0x0001, 0xF972, 0xFFFF, 0x06FB, 0x0000, 0xFA38, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
