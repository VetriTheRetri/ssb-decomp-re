/* AnimJoint data for relocData file 822 (FTDonkeyAnimTeeterstart) */
/* 944 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimTeeterstart_joint1[14];
extern u16 dFTDonkeyAnimTeeterstart_joint2[14];
extern u16 dFTDonkeyAnimTeeterstart_joint4[22];
extern u16 dFTDonkeyAnimTeeterstart_joint5[42];
extern u16 dFTDonkeyAnimTeeterstart_joint6[24];
extern u16 dFTDonkeyAnimTeeterstart_joint7[14];
extern u16 dFTDonkeyAnimTeeterstart_joint8[14];
extern u16 dFTDonkeyAnimTeeterstart_joint10[14];
extern u16 dFTDonkeyAnimTeeterstart_joint11[24];
extern u16 dFTDonkeyAnimTeeterstart_joint12[20];
extern u16 dFTDonkeyAnimTeeterstart_joint13[8];
extern u16 dFTDonkeyAnimTeeterstart_joint14[10];
extern u16 dFTDonkeyAnimTeeterstart_joint16[18];
extern u16 dFTDonkeyAnimTeeterstart_joint17[32];
extern u16 dFTDonkeyAnimTeeterstart_joint19[16];
extern u16 dFTDonkeyAnimTeeterstart_joint21[38];
extern u16 dFTDonkeyAnimTeeterstart_joint22[38];
extern u16 dFTDonkeyAnimTeeterstart_joint24[16];
extern u16 dFTDonkeyAnimTeeterstart_joint25[44];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTDonkeyAnimTeeterstart_joints[] = {
	(u32)dFTDonkeyAnimTeeterstart_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimTeeterstart_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimTeeterstart_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTDonkeyAnimTeeterstart_joint5, /* [4] joint 5 */
	(u32)dFTDonkeyAnimTeeterstart_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimTeeterstart_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimTeeterstart_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimTeeterstart_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTDonkeyAnimTeeterstart_joint11, /* [10] joint 11 */
	(u32)dFTDonkeyAnimTeeterstart_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimTeeterstart_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimTeeterstart_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimTeeterstart_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTDonkeyAnimTeeterstart_joint17, /* [16] joint 17 */
	(u32)dFTDonkeyAnimTeeterstart_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTDonkeyAnimTeeterstart_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTDonkeyAnimTeeterstart_joint22, /* [21] joint 22 */
	(u32)dFTDonkeyAnimTeeterstart_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTDonkeyAnimTeeterstart_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTDonkeyAnimTeeterstart_joint1[14] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 2, 1203, -538,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, -1, 1339, 1, 222, 360,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTDonkeyAnimTeeterstart_joint2[14] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -133, 10, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 753, 44, -127, -6, 12, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTDonkeyAnimTeeterstart_joint4[22] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 735, -39, 20, 0, 319, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 463, -11, -86, -2, -50, -3, -24, -9, 112, -82, -198, -16,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimTeeterstart_joint5[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1898, -8, -1556, 18, -2184, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -1278, 37, -2168, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 1526, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1440, -70,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1364, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1236, 40, -2247, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1369, 4, -1198, 38, -2320, -73,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimTeeterstart_joint6[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -383, -36,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -694, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -628, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -542, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -454, 87,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTDonkeyAnimTeeterstart_joint7[14] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -287, -14, -25, -1, -179, -8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimTeeterstart_joint8[14] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 130, -67, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, -6, 0, 3, 0, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTDonkeyAnimTeeterstart_joint10[14] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -328, 15, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -557, -11, 108, 4, -115, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTDonkeyAnimTeeterstart_joint11[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1885, 6, 1544, -13, -2436, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -1625, -2, 1219, -42, -2379, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1638, -12, 1178, -40, -2426, -47,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimTeeterstart_joint12[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -289, -33,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -769, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -768, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -756, 12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTDonkeyAnimTeeterstart_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 98, 0, 0,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTDonkeyAnimTeeterstart_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -893, -1340, 2502, 120, 120, 120,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTDonkeyAnimTeeterstart_joint16[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -404, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 1046, 573,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -1117, -39, 0, 4, 0, -9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTDonkeyAnimTeeterstart_joint17[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -331, -3, -267, -4, -152, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -238, 35, -158, 47, -740, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -208, 23, -115, 35, -807, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -190, 17, -87, 27, -847, -40,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimTeeterstart_joint19[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 866, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 772, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 754, -18,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTDonkeyAnimTeeterstart_joint21[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 31, 0, 117, 14, -437, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -348, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -104, -30, 203, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -124, -6, 156, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -118, 7, 119, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -109, 9, 95, -24, -344, 4,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimTeeterstart_joint22[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 212, 6, 284, 7, -416, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 442, -42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -941, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 361, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 327, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 213, -177, 369, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -27, -240, 110, -259, -1018, -76,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimTeeterstart_joint24[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 770, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 865, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 851, -14,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTDonkeyAnimTeeterstart_joint25[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1496, -9, -1505, 19, -1767, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1861, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 1488, 34, -1063, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1503, 4, -1053, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1496, 62, -1130, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1628, 131, -1438, -307, -1920, -59,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
