/* AnimJoint data for relocData file 809 (FTDonkeyAnimTurnRun) */
/* 2896 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimTurnRun_joint1[14];
extern u16 dFTDonkeyAnimTurnRun_joint2[60];
extern u16 dFTDonkeyAnimTurnRun_joint3[30];
extern u16 dFTDonkeyAnimTurnRun_joint5[20];
extern u16 dFTDonkeyAnimTurnRun_joint6[122];
extern u16 dFTDonkeyAnimTurnRun_joint7[60];
extern u16 dFTDonkeyAnimTurnRun_joint8[20];
extern u16 dFTDonkeyAnimTurnRun_joint9[14];
extern u16 dFTDonkeyAnimTurnRun_joint11[22];
extern u16 dFTDonkeyAnimTurnRun_joint12[108];
extern u16 dFTDonkeyAnimTurnRun_joint13[48];
extern u16 dFTDonkeyAnimTurnRun_joint14[20];
extern u16 dFTDonkeyAnimTurnRun_joint15[10];
extern u16 dFTDonkeyAnimTurnRun_joint17[30];
extern u16 dFTDonkeyAnimTurnRun_joint18[166];
extern u16 dFTDonkeyAnimTurnRun_joint20[64];
extern u16 dFTDonkeyAnimTurnRun_joint22[156];
extern u16 dFTDonkeyAnimTurnRun_joint23[198];
extern u16 dFTDonkeyAnimTurnRun_joint25[64];
extern u16 dFTDonkeyAnimTurnRun_joint26[170];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTDonkeyAnimTurnRun_joints[] = {
	(u32)dFTDonkeyAnimTurnRun_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimTurnRun_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimTurnRun_joint3, /* [2] joint 3 */
	(u32)dFTDonkeyAnimTurnRun_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTDonkeyAnimTurnRun_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimTurnRun_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimTurnRun_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimTurnRun_joint9, /* [8] joint 9 */
	(u32)dFTDonkeyAnimTurnRun_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTDonkeyAnimTurnRun_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimTurnRun_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimTurnRun_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimTurnRun_joint15, /* [14] joint 15 */
	(u32)dFTDonkeyAnimTurnRun_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTDonkeyAnimTurnRun_joint18, /* [17] joint 18 */
	(u32)dFTDonkeyAnimTurnRun_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTDonkeyAnimTurnRun_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTDonkeyAnimTurnRun_joint23, /* [22] joint 23 */
	(u32)dFTDonkeyAnimTurnRun_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTDonkeyAnimTurnRun_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTDonkeyAnimTurnRun_joint1[14] = {
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 1739,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 28), 1680,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 6), 0, -1610,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTDonkeyAnimTurnRun_joint2[60] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -5, 65, -20, 1450, -332, -209, -646,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), -580, -47,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -9, -63, 1037, -443, -1096, -241,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 896, -113, -510, 321,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 4), -14,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -9, -9, 881, 73, -654, -78,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -30, -26, 1015, 268, -639, 406,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1608, -129,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), -65, 1450, 209,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTDonkeyAnimTurnRun_joint3[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 317, -52, -88, -1, -77, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -265, -34, -41, 2, -16, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -265, 20, -41, -1, -16, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 317, -88, -77,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTDonkeyAnimTurnRun_joint5[20] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 457, 33, 58, 2, -5, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 34), 457, -32,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), 62, 36,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 58, -5,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimTurnRun_joint6[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 187, -10, 62, -7, -509, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -93, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 14, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -541, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -441, 67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -628, -9,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -107, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -123, 4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -16, -39, -613, 45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -272, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -273, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -125, -9, -253, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -159, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -216, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -149, 68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -39, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -109, 41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -309, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -182, 90,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 180, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -55, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 58, 14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -476, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -512, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 187, 6, 62, 3, -509, 2,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTDonkeyAnimTurnRun_joint7[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -4, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -271, -210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -654, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -661, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -806, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -909, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -1112, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1127, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -620, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -418, 268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -84, 206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimTurnRun_joint8[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 702, 15, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), -837, -164, 154,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTDonkeyAnimTurnRun_joint9[14] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 151, 4, -67, 1, -17, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 34), 280, -1, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTDonkeyAnimTurnRun_joint11[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -269, -4, 151, -5, 8, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), -541, -3, -257, -2, 567, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -398, 70, 29,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTDonkeyAnimTurnRun_joint12[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -381, 0, -3, 1, -959, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 253, 38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 17, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -703, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -661, 42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 42, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 291, 37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 444, -6,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 90, 71,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 410, -9,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 439, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 480, 8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 386, -46, 24, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -302, -60, -679, -93,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 477, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 120, -104,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -348, -35, -764, -83,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -383, -4, -959, -56,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -381, 1, -3, -5, -959, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTDonkeyAnimTurnRun_joint13[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -4, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -112, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -235, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -857, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -889, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -965, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -940, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -453, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -277, 224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTDonkeyAnimTurnRun_joint14[20] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 357, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 23), 779, 0, 427, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 23), -149,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 357, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTDonkeyAnimTurnRun_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -893, -1340, 2502, 120, 120, 120,
	ftAnimBlock(0, 34),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimTurnRun_joint17[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -742, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 1046, 573,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), -395, 11, 734, 20, 565, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -431, -23, 545, -48, 451, -37,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -742, 0, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTDonkeyAnimTurnRun_joint18[166] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1243, 38, -1118, 11, -2278, -71,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 1325, 61, -2191, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1183, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1319, -135,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1477, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1383, 56, -1968, 166,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1482, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1858, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1459, 27, -1841, -136,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1386, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1636, 115, -2131, -188,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1815, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2218, -54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2264, -5,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1844, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1821, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2270, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2437, -75,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1307, 106,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1094, 49,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2495, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2556, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1072, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1084, 6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1837, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1541, -97,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2562, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -2366, 30,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1078, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1089, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1445, -86,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1277, -35,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2333, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1243, -34, -1118, -29, -2278, 55,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTDonkeyAnimTurnRun_joint20[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1012, -5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 541, -311,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 154, -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 280,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 566, 404,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 814, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 923, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 914, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 812, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 810, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1025, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1026, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1016, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1012, -4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTDonkeyAnimTurnRun_joint22[156] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1268, 80, -1529, -59, -1705, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1890, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1049, 99, -1572, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -988, -37, -1410, 150,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1049, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1125, -211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1411, -192,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1576, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1870, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1979, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1014, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1276, -231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1625, -46, -1477, -156,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1938, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1664, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1679, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1555, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1950, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1965, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1924, 52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1556, 41,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1525, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1582, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1566, -24, -1893, 79,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1647, -50,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1535, 158,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1621, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1700, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1709, -57, -1623, 65,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -1596, 63, -1673, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1340, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -1179, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1268, -88, -1529, 66, -1705, -32,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTDonkeyAnimTurnRun_joint23[198] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1524, -77, 1308, -11, -1779, -183,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1235, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1601, -39, -1963, -196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1603, 189, -2172, -57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -783, 207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1007, -63, -2078, 200,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1267, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1770, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -806, -33, -1797, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -933, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1381, 24, -1808, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1247, -10, -1950, -115,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1162, -244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1422, -184, 1296, 54, -2066, -64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2106, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1215, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1532, -61,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1200, 147,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2112, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1885, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1173, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1319, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1060, 106,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1263, -81,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1907, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -2280, -42,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1339, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1296, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1347, -82,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1415, 140,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2323, -42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2264, 156,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1234, 145, 1260, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1383, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1319, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2063, 204,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1674, -33,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1346, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1524, -204, 1308, -38, -1779, -105,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTDonkeyAnimTurnRun_joint25[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 673, 212,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1052, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 895, -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 505, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 643, 177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1023, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1091, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 960, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 977, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 946, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 907, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 966, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 828, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 696, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 673, -23,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTDonkeyAnimTurnRun_joint26[170] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1585, -11, -1339, -43, -1376, -42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1471, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1468, -235, -1478, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1103, -271, -1554, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1370, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 972, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1528, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1575, -104,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1365, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1561, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1026, 108,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1591, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1710, -130,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1882, 34,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1600, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1024, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1518, 54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1270, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1836, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1553, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1107, 89, -1318, -61, -1647, -100,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 1590, 53, -1642, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1879, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1828, 56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1524, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1629, 17, -1595, 62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1331, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1506, -174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1275, -204,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1103, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1347, -10, -1474, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1326, -2, -1376, 23,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1301, 241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1585, 283, -1339, -12, -1376, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
