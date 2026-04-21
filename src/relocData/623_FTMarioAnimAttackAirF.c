/* AnimJoint data for relocData file 623 (FTMarioAnimAttackAirF) */
/* 3936 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimAttackAirF_joint1[50];
extern u16 dFTMarioAnimAttackAirF_joint2[50];
extern u16 dFTMarioAnimAttackAirF_joint4[104];
extern u16 dFTMarioAnimAttackAirF_joint5[208];
extern u16 dFTMarioAnimAttackAirF_joint6[96];
extern u16 dFTMarioAnimAttackAirF_joint7[14];
extern u16 dFTMarioAnimAttackAirF_joint8[8];
extern u16 dFTMarioAnimAttackAirF_joint10[44];
extern u16 dFTMarioAnimAttackAirF_joint11[192];
extern u16 dFTMarioAnimAttackAirF_joint12[108];
extern u16 dFTMarioAnimAttackAirF_joint13[16];
extern u16 dFTMarioAnimAttackAirF_joint15[10];
extern u16 dFTMarioAnimAttackAirF_joint16[194];
extern u16 dFTMarioAnimAttackAirF_joint18[118];
extern u16 dFTMarioAnimAttackAirF_joint20[200];
extern u16 dFTMarioAnimAttackAirF_joint21[200];
extern u16 dFTMarioAnimAttackAirF_joint23[112];
extern u16 dFTMarioAnimAttackAirF_joint24[196];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimAttackAirF_joints[] = {
	(u32)dFTMarioAnimAttackAirF_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimAttackAirF_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimAttackAirF_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimAttackAirF_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimAttackAirF_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimAttackAirF_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimAttackAirF_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimAttackAirF_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimAttackAirF_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimAttackAirF_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimAttackAirF_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimAttackAirF_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimAttackAirF_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimAttackAirF_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimAttackAirF_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimAttackAirF_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimAttackAirF_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTMarioAnimAttackAirF_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTMarioAnimAttackAirF_joint1[50] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAZ), 4096,
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY), 0, 0, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_SCAZ, 7), 0, 3, 2621, -327,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_SCAZ, 2), 0, 3, 2621, 1081,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 620,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 27), 9650, 71,
	ftAnimSetValRateBlockT(FT_ANIM_SCAZ, 3), 5324, 421,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAZ, 4), 4096,
	ftAnimSetValT(FT_ANIM_SCAZ, 24), 4096,
	ftAnimBlock(0, 20),
	ftAnimSetValRateBlock(FT_ANIM_ROTZ), 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimAttackAirF_joint2[50] = {
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 0, -30,
	ftAnimSetValBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValT(FT_ANIM_TRAZ, 9), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -634, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -634, 126,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 0, 30,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), 0, 960,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), 360, 137,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 19), 360, -102,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 18), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 10), 0,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 9), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTMarioAnimAttackAirF_joint4[104] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 134, 23, 0, 15, 0, -9, -14, 21, -92, -7,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 318, 20, -49, -5, 43, 4, 40, 49, -111, -16,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 7), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 318, 325, -49, -292, 43, -438, 0, 0, 40, -321, -111, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 0, -160, -76, -111, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1293, -342, -926, -172, -1273, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -366, -1053, -395, 528, -208, 1020,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -813, -21, 129, 20, 766, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 18), -775, 33, 0, -4, 0, -27, 0, 0, -160, 41, -111, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 134, 69, 0, 4, 0, -4, 0, 0, -14, 89, -92, 11,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTMarioAnimAttackAirF_joint5[208] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2918, -48, -487, -10, 3115, 59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -407, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2967, -81, 3174, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3082, -117, 3313, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -3280, -54, 3559, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3311, -20, -297, 122, 3598, 23,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 3), -3317,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -162, 124, 3607, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -47, 149, 3615, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -47, -591,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 3570,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3317, 232, 3615, -247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2852, -19, -1047, -560, 3074, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3357, -184, -1168, -100, 3747, 253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3221, 66, -1247, -41, 3582, -80,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1245, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3224, -11, 3586, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -3294, -4, 3653, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1236, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1234, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3288, 4, 3645, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -3292, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 3643, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3639, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 3694, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1233, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1153, 18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3297, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -3486, -94,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3726, 43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 3958, 125,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3605, -142, -1137, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3770, -185, -1127, 33, 4098, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3976, -270, -1070, 45, 4256, 224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4311, -275, -1036, -25, 4548, 234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4527, -215, -1121, -84, 4724, 175,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimAttackAirF_joint6[96] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -384, -67,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -451, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -975, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1022, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1029, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -824, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1029, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -842, 514,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 421,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -166, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -362, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -384, -21,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimAttackAirF_joint7[14] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -625, -9, 0, 2, 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), -625, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimAttackAirF_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 127, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTMarioAnimAttackAirF_joint10[44] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 9, 0, 3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 53, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 189, 21, 64, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 189, 20, 64, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 292, 4, 0, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 276, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 18), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 0, -21,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTMarioAnimAttackAirF_joint11[192] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -326, 10, 494, 4, -108, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 358, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -254, 78, -37, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -158, 107, 22, 49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 59, 70,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 57, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 225, -118,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 63, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 99, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 96, -27, 53, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 44, 0, 14, 0, 112, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -116, -532,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 63, 192, 53, -245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 399, 187, -378, -589,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -969, -416, 438, -1, -1126, -390,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -949, 4, 397, -25, -1159, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 397, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -960, -14, -1172, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -989, 8, -1175, -4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 400, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 397, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -979, 12, -1178, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), -831, 7, -1140, 10,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 399, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 464, 13,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -822, 13, -1128, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -560, 116, -840, 125,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 478, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 509, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -427, 61, -695, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -437, 4, -476, 228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -419, 55, 553, -7, -239, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -326, 93, 494, -58, -108, 130,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimAttackAirF_joint12[108] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -384, -36,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -421, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -505, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -808, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -837, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -858, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -837, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, 414,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -133, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -351, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -384, -32,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimAttackAirF_joint13[16] = {
	ftAnimSetVal(FT_ANIM_ROTX), 625,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 12), 804,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 16), 804,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 12), 625,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTMarioAnimAttackAirF_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimAttackAirF_joint16[194] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 95, 0, -6, 11, -247, -50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 136, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -49, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -297, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -387, -90,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -768, -122,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 170, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -163, -98, 174, 27, -904, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -247, 0, 224, -2, -863, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 95, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -162, 125, -903, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3, 135, -1105, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 107, 64, 63, -13, -964, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 139, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 52, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1034, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1060, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -884, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 151, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 160, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 19, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -28, -23, -731, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -28, 0, -732, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -26, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -730, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -718, 16,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 160, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 113, -9,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -701, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -21, 19, -699, -45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 24, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -792, -53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -787, 33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 29, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 6, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 105, -7, -739, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 95, 0, -367, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 95, 0, -6, -12, -247, 119,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimAttackAirF_joint18[118] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTZ), 229, 102,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 528, 206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1418, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1443, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1193, -399,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4915, 4915, 4915,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 619, -301,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 591, -10,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 598, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 481, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 296, -237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -144,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 24), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 8), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 47, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 306, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 433, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 516, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 376, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 229, -146,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTMarioAnimAttackAirF_joint20[200] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1359, -9, -1574, 14, 2044, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1304, -20, -1466, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1943, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1835, -116,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1460, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1287, -2, -1412, 46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1388, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1369, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1511, 158, 1358, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1685, 41, -1424, 0, 1349, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1594, -87, -1387, 9, 1358, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1510, -58, -1405, -23, 1398, 33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1452, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1478, -154, 1426, 217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1201, -109, 1832, 211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1259, 46, 1849, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1346, 72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1830, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1442, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1413, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1438, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1438, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1444, 4, 1829, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1462, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 1830, 27,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1414, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1523, -19,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1435, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1359, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1158, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1066, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1117, 73, 1860, 31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2021, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1214, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1277, 48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1344, 14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1542, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1560, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1359, 14, -1574, -14, 2044, 22,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimAttackAirF_joint21[200] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1542, -17, 1445, 6, 1262, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -1852, -110, 890, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 1472, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1507, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1972, -87, 1587, 29, 781, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1566, 0, 865, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -2027,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1972, 173, 1587, -142, 781, -228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1680, 427, 1280, -160, 407, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1117, 303, 1267, 0, 776, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1073, 25, 1278, 6, 720, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1067, 16, 1279, 35, 706, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 812, 66,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1010, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1350, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1446, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1588, 69, 884, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1011, -1, 1585, 0, 881, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -1014, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1589, 1, 881, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 1583, -2, 892, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1581, -51, 906, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1365, -98,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 861, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1020, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1230, -99,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1284, -69,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1224, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 864, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 955, 80,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1338, -98,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1521, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1280, 61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1404, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1052, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1161, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1542, -21, 1445, 41, 1262, 100,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTMarioAnimAttackAirF_joint23[112] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTZ), 716, 28,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 819, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 928, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1404, 46,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 1419,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1203, -392,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4915, 4915, 4915,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 619, -303,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 595, -8,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 601, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 480, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 294, -240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -143,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 24), 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 435, 198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 599, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 848, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 790, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 716, -73,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTMarioAnimAttackAirF_joint24[196] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 57, 12, -134, 0, 164, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -132, 6, 207, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 91, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 127, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 239, 142, -120, 63, 217, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 412, 52, -6, 198, 82, -494,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 344, -65, 276, 215, -772, -489,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 280, 0, 425, 0, -897, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 344, -237, 276, -482, -772, 347,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -194, -458, -539, -357, -202, 575,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -572, -214, -437, 85, 379, 332,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -623, -23, -367, 28, 463, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -433, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -379, -35, 450, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -567, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 340, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -203, 108, 237, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -215, -7, -572, -5, 240, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -552, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 187, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -219, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -191, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -169, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -305, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -527, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -158, 28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -317, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -147, 80,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 181, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 166, -2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -64, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 5, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 57, 51, -134, 24, 164, -1,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
