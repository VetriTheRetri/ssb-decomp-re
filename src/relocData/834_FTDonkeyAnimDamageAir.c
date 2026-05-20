/* AnimJoint data for relocData file 834 (FTDonkeyAnimDamageAir) */
/* 1520 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimDamageAir_joint1[32];
extern u16 dFTDonkeyAnimDamageAir_joint2[10];
extern u16 dFTDonkeyAnimDamageAir_joint4[38];
extern u16 dFTDonkeyAnimDamageAir_joint5[76];
extern u16 dFTDonkeyAnimDamageAir_joint6[40];
extern u16 dFTDonkeyAnimDamageAir_joint7[10];
extern u16 dFTDonkeyAnimDamageAir_joint8[20];
extern u16 dFTDonkeyAnimDamageAir_joint10[10];
extern u16 dFTDonkeyAnimDamageAir_joint11[88];
extern u16 dFTDonkeyAnimDamageAir_joint12[32];
extern u16 dFTDonkeyAnimDamageAir_joint13[10];
extern u16 dFTDonkeyAnimDamageAir_joint14[8];
extern u16 dFTDonkeyAnimDamageAir_joint16[10];
extern u16 dFTDonkeyAnimDamageAir_joint17[68];
extern u16 dFTDonkeyAnimDamageAir_joint19[40];
extern u16 dFTDonkeyAnimDamageAir_joint21[72];
extern u16 dFTDonkeyAnimDamageAir_joint22[66];
extern u16 dFTDonkeyAnimDamageAir_joint24[40];
extern u16 dFTDonkeyAnimDamageAir_joint25[40];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTDonkeyAnimDamageAir_joints[] = {
	(AObjEvent32 *)dFTDonkeyAnimDamageAir_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTDonkeyAnimDamageAir_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTDonkeyAnimDamageAir_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTDonkeyAnimDamageAir_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTDonkeyAnimDamageAir_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTDonkeyAnimDamageAir_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTDonkeyAnimDamageAir_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTDonkeyAnimDamageAir_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTDonkeyAnimDamageAir_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTDonkeyAnimDamageAir_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTDonkeyAnimDamageAir_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTDonkeyAnimDamageAir_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTDonkeyAnimDamageAir_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTDonkeyAnimDamageAir_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTDonkeyAnimDamageAir_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTDonkeyAnimDamageAir_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTDonkeyAnimDamageAir_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTDonkeyAnimDamageAir_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTDonkeyAnimDamageAir_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTDonkeyAnimDamageAir_joint1[32] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 949, -319,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 30,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 955, 42, -409, -1122,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 960, 2, -600, -101,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), 960, -3, -600, 100,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 949, -319,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTDonkeyAnimDamageAir_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -245, 10, 156, -1, -214, -154,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTDonkeyAnimDamageAir_joint4[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 791, 73, -78,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 319, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 771, -55, -3, 42, 231, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 681, -6, 157, 10, 82, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 681, 4, 157, -3, 82, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 791, 73, -78,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimDamageAir_joint5[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -24, 245, -383, 349, -149, -245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 221, -163, -33, 68, -395, 234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -351, -310, -247, -92, 318, 375,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -195, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -400, -40, 355, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -433, -27, 377, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 13), -329, 29, 285, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -176, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -382, -1,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -292, 42, 231, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -44, 29, -121, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -24, 19, -383, 0, -148, -27,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimDamageAir_joint6[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -727, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -719, -253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1234, -259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1238, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1241, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -988, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -903, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -759, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -728, 31,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTDonkeyAnimDamageAir_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -825, -308, 165, 702, 15, 17,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTDonkeyAnimDamageAir_joint8[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 393, 144, 74,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 1354, 213,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 538, 62, 449,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), 393, 144, 74,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTDonkeyAnimDamageAir_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -452, -206, 75, 0, 0, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTDonkeyAnimDamageAir_joint11[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1884, 17, 1223, -767, 1599, 190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1902, -262, 456, 61, 1790, -239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1359, -224, 1347, 490, 1119, -315,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1453, 72, 1438, 76, 1158, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1505, 40, 1500, 49, 1171, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1347, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 1318, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 1326, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1309, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1864, 32,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1353, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1228, -6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1402, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1583, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1884, 19, 1223, -4, 1599, 16,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimDamageAir_joint12[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -826, -25,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -739, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -730, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -864, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -881, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -840, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -827, 13,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTDonkeyAnimDamageAir_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, 0, 0, 702, 18, -13,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTDonkeyAnimDamageAir_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -893, -1340, 2502,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTDonkeyAnimDamageAir_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 268, 714, 1072, 0, 1046, 573,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimDamageAir_joint17[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -278, -137, -14, -127, -196, -178,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -797, -110,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -415, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -410, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -347, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -439, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -815, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -740, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -427, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 11), -454, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -350, 77, -410, 59, -760, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -280, 4, 1, 1, -171, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -278, 2, -13, -15, -195, -23,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimDamageAir_joint19[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 651, -63,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 671, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 830, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 801, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 792, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 919, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 918, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 601, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 648, 46,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTDonkeyAnimDamageAir_joint21[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -4, 227, 0, 29, 105, -64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 120, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 222, 6, 40, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 8, -68, -175, -105,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -158, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 85, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 124, 41, 115, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 289, -111,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -140, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 105, 0,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 167, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -3, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4, -1, 0, 0, 105, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimDamageAir_joint22[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -160, 139, -3027, 233, 2489, -204,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 297, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2793, 126, 2284, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2773, 14, 2367, 41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 2375, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -3026, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 282, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -156, -7,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2375, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 2489, 5,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -3025, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -160, -4, -3027, -1, 2489, 0,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimDamageAir_joint24[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1071, 47,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1119, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 980, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 962, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 951, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 1028, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1043, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1058, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1071, 12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTDonkeyAnimDamageAir_joint25[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -69, -67, -179, -1, 127, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), -179, 0, 127, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -390, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -386, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 18), -60, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -68, -7, -179, 0, 127, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
