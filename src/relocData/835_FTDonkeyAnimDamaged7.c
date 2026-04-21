/* AnimJoint data for relocData file 835 (FTDonkeyAnimDamaged7) */
/* 1744 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimDamaged7_joint1[36];
extern u16 dFTDonkeyAnimDamaged7_joint2[10];
extern u16 dFTDonkeyAnimDamaged7_joint4[38];
extern u16 dFTDonkeyAnimDamaged7_joint5[106];
extern u16 dFTDonkeyAnimDamaged7_joint6[40];
extern u16 dFTDonkeyAnimDamaged7_joint7[10];
extern u16 dFTDonkeyAnimDamaged7_joint8[32];
extern u16 dFTDonkeyAnimDamaged7_joint10[10];
extern u16 dFTDonkeyAnimDamaged7_joint11[96];
extern u16 dFTDonkeyAnimDamaged7_joint12[32];
extern u16 dFTDonkeyAnimDamaged7_joint13[10];
extern u16 dFTDonkeyAnimDamaged7_joint14[8];
extern u16 dFTDonkeyAnimDamaged7_joint16[10];
extern u16 dFTDonkeyAnimDamaged7_joint17[84];
extern u16 dFTDonkeyAnimDamaged7_joint19[48];
extern u16 dFTDonkeyAnimDamaged7_joint21[92];
extern u16 dFTDonkeyAnimDamaged7_joint22[80];
extern u16 dFTDonkeyAnimDamaged7_joint24[32];
extern u16 dFTDonkeyAnimDamaged7_joint25[48];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTDonkeyAnimDamaged7_joints[] = {
	(u32)dFTDonkeyAnimDamaged7_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimDamaged7_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimDamaged7_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTDonkeyAnimDamaged7_joint5, /* [4] joint 5 */
	(u32)dFTDonkeyAnimDamaged7_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimDamaged7_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimDamaged7_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimDamaged7_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTDonkeyAnimDamaged7_joint11, /* [10] joint 11 */
	(u32)dFTDonkeyAnimDamaged7_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimDamaged7_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimDamaged7_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimDamaged7_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTDonkeyAnimDamaged7_joint17, /* [16] joint 17 */
	(u32)dFTDonkeyAnimDamaged7_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTDonkeyAnimDamaged7_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTDonkeyAnimDamaged7_joint22, /* [21] joint 22 */
	(u32)dFTDonkeyAnimDamaged7_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTDonkeyAnimDamaged7_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTDonkeyAnimDamaged7_joint1[36] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 949, -319,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 30,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 955, 28, -409, -748,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 960, 2, -600, -140,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -140,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 17), 960, -3, -600, -140,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -140,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 949, -319,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTDonkeyAnimDamaged7_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -245, 10, 156, -1, -214, -154,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTDonkeyAnimDamaged7_joint4[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 791, 73, -78,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 319, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 771, -45, 3, -40, -231, -248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 653, -6, -47, -2, -823, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 653, 5, -47, 4, -823, 27,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 791, 73, -78,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimDamaged7_joint5[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1632, 48, -1225, 182, 1458, -209,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -843, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1584, 8, 1248, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1615, 268, 1218, -326,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -448, 336, -16, -349,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -373, 44, -876, -32, -103, -54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1055, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), -491, -20, 0, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -511, -20, 22, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -662, -84, 193, 93,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1018, 47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -951, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -785, -227, 329, 246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1507, -268, 1118, 315,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1654, -90, -1030, -76, 1318, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1640, 13, -1217, -14, 1460, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1632, 7, -1225, -7, 1458, -2,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimDamaged7_joint6[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -727, -97,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1081, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1059, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -653, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -686, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -833, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -785, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -744, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -727, 17,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTDonkeyAnimDamaged7_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -825, -308, 165, 702, 15, 17,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTDonkeyAnimDamaged7_joint8[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 393, 144, 74,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 1354, 213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 722, -1, 572, 19, 74, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 23), 357, -11, 603, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 23), 112,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 393, 144, 74,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTDonkeyAnimDamaged7_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -452, -206, 75, 0, 0, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTDonkeyAnimDamaged7_joint11[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 276, 17, 384, 767, 3208, 190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 293, 90, 1151, 406, 3399, 205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 457, 533, 1197, 97, 3618, 468,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1476, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1359, 490, 4336, 375,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1437, 62, 4370, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 1311, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), 4493, 63,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1514, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1353, 0,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1308, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1875, 18,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1349, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1225, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4559, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 4809, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1884, 9, 1223, -1, 4816, 7,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimDamaged7_joint12[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -826, -25,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -736, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -728, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -871, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -882, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -833, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -826, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTDonkeyAnimDamaged7_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, 0, 0, 702, 18, -13,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTDonkeyAnimDamaged7_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -893, -1340, 2502,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTDonkeyAnimDamaged7_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 268, 714, 1072, 0, 1046, 573,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimDamaged7_joint17[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -278, -137, -14, -127, -196, -178,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -807, -94,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -415, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -377, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -337, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -391, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -818, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -737, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -424, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -210, 72,
	ftAnimBlock(0, 16),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -328, 46, -718, 43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -172, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -280, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -137, 70,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -5, -9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -278, 1, -14, -9, -196, -13,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimDamaged7_joint19[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 651, -63,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 588, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 770, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 824, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 822, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 844, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 848, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 710, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 617, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 623, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 651, 28,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTDonkeyAnimDamaged7_joint21[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -4, 227, 0, 16, 105, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 175, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 246, -78, -1, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 66, -89, -175, -109,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -341, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 69, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 73, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 131, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 182, 6, -371, -26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 7, 49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 5, -6,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 117, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -3, -2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 47, 34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 105, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4, -1, 0, 0, 105, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimDamaged7_joint22[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -160, 139, -3027, 233, 2489, -204,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 297, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2793, 131, 2284, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2764, 16, 2308, 37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -2884, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), 2301, 19,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 299, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 126, -4,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2900, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -3025, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 123, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -158, -5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2322, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 2493, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -160, -2, -3027, -2, 2489, -4,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimDamaged7_joint24[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1071, 47,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 976, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 971, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 984, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 984, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1059, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1071, 11,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTDonkeyAnimDamaged7_joint25[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -69, -68, -179, 0, 127, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), -179, 0, 127, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -397, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -409, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), -328, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -318, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -55, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -62, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -69, -7, -179, 0, 127, 0,
	ftAnimEnd(),
	0x0000, 0x0000,
};
