/* AnimJoint data for relocData file 1753 (FTNessAnimLightItemPickup) */
/* 1472 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimLightItemPickup_joint1[32];
extern u16 dFTNessAnimLightItemPickup_joint2[16];
extern u16 dFTNessAnimLightItemPickup_joint4[32];
extern u16 dFTNessAnimLightItemPickup_joint5[62];
extern u16 dFTNessAnimLightItemPickup_joint6[40];
extern u16 dFTNessAnimLightItemPickup_joint7[10];
extern u16 dFTNessAnimLightItemPickup_joint8[34];
extern u16 dFTNessAnimLightItemPickup_joint10[34];
extern u16 dFTNessAnimLightItemPickup_joint11[70];
extern u16 dFTNessAnimLightItemPickup_joint12[24];
extern u16 dFTNessAnimLightItemPickup_joint13[22];
extern u16 dFTNessAnimLightItemPickup_joint15[20];
extern u16 dFTNessAnimLightItemPickup_joint16[34];
extern u16 dFTNessAnimLightItemPickup_joint18[24];
extern u16 dFTNessAnimLightItemPickup_joint19[66];
extern u16 dFTNessAnimLightItemPickup_joint21[38];
extern u16 dFTNessAnimLightItemPickup_joint22[44];
extern u16 dFTNessAnimLightItemPickup_joint24[24];
extern u16 dFTNessAnimLightItemPickup_joint25[58];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTNessAnimLightItemPickup_joints[] = {
	(u32)dFTNessAnimLightItemPickup_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimLightItemPickup_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimLightItemPickup_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTNessAnimLightItemPickup_joint5, /* [4] joint 5 */
	(u32)dFTNessAnimLightItemPickup_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimLightItemPickup_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimLightItemPickup_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimLightItemPickup_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTNessAnimLightItemPickup_joint11, /* [10] joint 11 */
	(u32)dFTNessAnimLightItemPickup_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimLightItemPickup_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimLightItemPickup_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTNessAnimLightItemPickup_joint16, /* [15] joint 16 */
	(u32)dFTNessAnimLightItemPickup_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTNessAnimLightItemPickup_joint19, /* [18] joint 19 */
	(u32)dFTNessAnimLightItemPickup_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTNessAnimLightItemPickup_joint22, /* [21] joint 22 */
	(u32)dFTNessAnimLightItemPickup_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTNessAnimLightItemPickup_joint25, /* [24] joint 25 */
	0xFFFF016A, /* [25] END */
};

/* Joint 1 */
u16 dFTNessAnimLightItemPickup_joint1[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 540, -91, 0, -25,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 402, 0, 0, 406, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, -3, 0, 0, 0, 0, 540, 71, 0, 20,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNessAnimLightItemPickup_joint2[16] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 28, 4, -360, 9, 8, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 28, -4, -360, -9, 8, -2,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTNessAnimLightItemPickup_joint4[32] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 19, 0, -1, 0, 20,
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 8), 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 698, 118, 612,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, -16, 0, 1, 0, -18,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimLightItemPickup_joint5[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2018, -304, -1347, 119, 2024, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2323, -338, -1227, 177, 2069, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2696, -158, -991, 117, 2339, 110,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2070, -54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1294, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -2475, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2330, 138,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2079, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2044, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1332, -26, 2029, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2018, 60, -1347, -15, 2024, -5,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimLightItemPickup_joint6[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -473, 105,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -368, 232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -59, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -328, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -414, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -443, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, -30,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTNessAnimLightItemPickup_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimLightItemPickup_joint8[34] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -10, 0, 364, -3, -32, 4,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 0, 0, 300, -1, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, -268, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -10, 0, 364, -3, -32, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTNessAnimLightItemPickup_joint10[34] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 12, 0, -8, 0, 5,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 0, 0, 0, 7, 0, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, -10, 0, 7, 0, -4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTNessAnimLightItemPickup_joint11[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2024, 884, 1038, -127, -1727, 782,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -605, 243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 911, 0, -945, 545,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1037, 47, -635, 153,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 886, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -653, -153, -637, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -911, -496, -776, -398,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1645, -510, -1434, -453,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2020, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 947, 62, -1682, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1011, 45, -1744, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2024, -3, 1038, 27, -1727, 16,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimLightItemPickup_joint12[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, -245,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -804, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -823, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -583, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 24,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTNessAnimLightItemPickup_joint13[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 90, 54, 126,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 625, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 54, 126,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 6), 90,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTNessAnimLightItemPickup_joint15[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 893, -935, 681,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 75, 68, 30,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 2412, -1116, -421,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 893, -935, 681,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTNessAnimLightItemPickup_joint16[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -381, -20, -261, -57, -289, -199,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -281, 21, -346, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -508, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -463, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -376, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -381, -5, -261, 20, -289, 56,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimLightItemPickup_joint18[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 430, 209,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 721, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 693, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 491, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 430, -60,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTNessAnimLightItemPickup_joint19[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 20, 225, 13, 212, -25, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 350, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 246, 255, -9, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 531, 87, 172, 76,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 268, -134,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 0, -52,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 314, -56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 56, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 150, -92,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 45, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -33, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -35, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 20, -24, 13, -42, -25, 10,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimLightItemPickup_joint21[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -66, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -250, -85, 7, 10, 15, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -237, 1, 20, 12, 42, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -246, 28, 59, -3, 120, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -66, 0, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimLightItemPickup_joint22[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1488, 15, 1429, 37, 1458, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1482, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1544, -34, 1558, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1498, -42, 1517, -44,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1430, -5, 1434, 10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1478, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1488, 9, 1429, -1, 1458, 23,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimLightItemPickup_joint24[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 311, 267,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 680, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 666, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 389, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 311, -77,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTNessAnimLightItemPickup_joint25[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 107, -52, 28, 188, -172, -208,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 13, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 410, 84, -593, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 384, -47, -553, 60,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 63, -53, -219, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 63, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 103, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 107, 3, 28, -35, -172, 46,
	ftAnimEnd(),
	0x50EE, 0x0038, 0x0000, 0x0000, 0xFF82, 0xFFAE, 0xFFF4, 0x0801, 0x0008, 0x0000, 0x0000, 0x0000,
};
