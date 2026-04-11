/* AnimJoint data for relocData file 1601 (FTCaptainAnimLightItemPickup) */
/* 1264 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimLightItemPickup_joint1[16];
extern u16 dFTCaptainAnimLightItemPickup_joint2[16];
extern u16 dFTCaptainAnimLightItemPickup_joint4[24];
extern u16 dFTCaptainAnimLightItemPickup_joint5[60];
extern u16 dFTCaptainAnimLightItemPickup_joint6[32];
extern u16 dFTCaptainAnimLightItemPickup_joint7[8];
extern u16 dFTCaptainAnimLightItemPickup_joint8[16];
extern u16 dFTCaptainAnimLightItemPickup_joint10[8];
extern u16 dFTCaptainAnimLightItemPickup_joint11[58];
extern u16 dFTCaptainAnimLightItemPickup_joint12[32];
extern u16 dFTCaptainAnimLightItemPickup_joint13[16];
extern u16 dFTCaptainAnimLightItemPickup_joint16[10];
extern u16 dFTCaptainAnimLightItemPickup_joint17[60];
extern u16 dFTCaptainAnimLightItemPickup_joint19[24];
extern u16 dFTCaptainAnimLightItemPickup_joint21[52];
extern u16 dFTCaptainAnimLightItemPickup_joint22[66];
extern u16 dFTCaptainAnimLightItemPickup_joint24[84];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTCaptainAnimLightItemPickup_joints[] = {
	(u32)dFTCaptainAnimLightItemPickup_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimLightItemPickup_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimLightItemPickup_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTCaptainAnimLightItemPickup_joint5, /* [4] joint 5 */
	(u32)dFTCaptainAnimLightItemPickup_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimLightItemPickup_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimLightItemPickup_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimLightItemPickup_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTCaptainAnimLightItemPickup_joint11, /* [10] joint 11 */
	(u32)dFTCaptainAnimLightItemPickup_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimLightItemPickup_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimLightItemPickup_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTCaptainAnimLightItemPickup_joint17, /* [16] joint 17 */
	(u32)dFTCaptainAnimLightItemPickup_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTCaptainAnimLightItemPickup_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTCaptainAnimLightItemPickup_joint22, /* [21] joint 22 */
	(u32)dFTCaptainAnimLightItemPickup_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF011E, /* [24] END */
};

/* Joint 1 */
u16 dFTCaptainAnimLightItemPickup_joint1[16] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 1600,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 2), 1038,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 6), 1600,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTCaptainAnimLightItemPickup_joint2[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 107,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 4, -76, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), -330,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), 107,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTCaptainAnimLightItemPickup_joint4[24] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 189, 0, 0, 0, -31, 47,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 357, 83, 232, 17, -99, 60,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 189, 0, 0, 0, -31, 47,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimLightItemPickup_joint5[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 239, -68, 5, -159, -524, 579,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 343, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 170, 51, -153, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 342, 64, -143, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 153, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -45, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 342, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 63, -271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 204, 42, -251, -253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 238, 17, -442, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 239, 1, 5, 50, -524, -81,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimLightItemPickup_joint6[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -797, -295,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1093, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -890, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1169, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1072, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -886, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -797, 89,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimLightItemPickup_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -781, -89, -388,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTCaptainAnimLightItemPickup_joint8[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 142, -357, -209,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTCaptainAnimLightItemPickup_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTCaptainAnimLightItemPickup_joint11[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1479, 23, 1464, -59, 2200, -335,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1405, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1502, -48, 1864, -342,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1383, -45, 1515, -144,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1506, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1706, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1864, 157,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2148, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1442, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1490, -13, 1461, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1479, -11, 1464, 3, 2200, 52,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimLightItemPickup_joint12[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1024, 215,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -809, 304,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -415, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -656, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -809, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -999, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1024, -25,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimLightItemPickup_joint13[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, 275, 62,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -19, 179, 146,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 270, 275, 62,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTCaptainAnimLightItemPickup_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimLightItemPickup_joint17[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 191, -53, 70, -115, -472, -221,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 157, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -45, -212, -693, -246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -354, -130, -964, -107,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -178, 130, -800, 107,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 126, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 182, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -45, 106, -693, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 64, 18, -510, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 191, 8, 70, 5, -472, 38,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimLightItemPickup_joint19[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 445, 357,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1051, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1018, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 512, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 445, -67,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTCaptainAnimLightItemPickup_joint21[52] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1735, 2, 1650, 24, -1528, -126,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1703, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1554, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1674, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1541, -54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1682, -5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1733, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1738, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1663, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1735, 2, 1650, -12, -1528, 26,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimLightItemPickup_joint22[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 160, -244, 110, -19, -76, -194,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -301, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -84, -282, 91, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -403, -133, -133, -94,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -228, 133,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 91, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -315, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -108, 53,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -84, 136,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 130, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 128, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 121, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 160, 29, 110, -10, -76, 31,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimLightItemPickup_joint24[84] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 541, 304,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1063, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1035, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 596, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 541, -54,
	ftAnimEnd(),
	0x0000, 0x200E, 0x00A1, 0x0025, 0x016D, 0xFFE7, 0xFEE9, 0xFF77, 0x2803, 0x0003, 0x0105, 0xFFE7, 0x2809, 0x0005, 0xFE5F, 0x0033, 0x2005, 0x0001, 0x0154, 0x0037, 0x2005, 0x0001, 0x01DB, 0x0036, 0x2805, 0x0004, 0x014E, 0x0006, 0x0801, 0x0001, 0x2003, 0x0001, 0x00E4, 0xFFE1, 0x2803, 0x0003, 0x00A6, 0xFFF8, 0x0801, 0x0001, 0x2009, 0x0001, 0xFE99, 0x0037, 0x200D, 0x0001, 0x0161, 0x000F, 0xFECF, 0x0028, 0x200F, 0x0001, 0x00A1, 0xFFFC, 0x016D, 0x000C, 0xFEE9, 0x0019, 0x0000, 0x0000, 0x0000,
};
