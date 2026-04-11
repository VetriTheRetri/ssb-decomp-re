/* AnimJoint data for relocData file 2108 (FTBossAnimChargeStart1) */
/* 1456 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTBossAnimChargeStart1_joint1[12];
extern u16 dFTBossAnimChargeStart1_joint3[22];
extern u16 dFTBossAnimChargeStart1_joint4[16];
extern u16 dFTBossAnimChargeStart1_joint5[18];
extern u16 dFTBossAnimChargeStart1_joint7[34];
extern u16 dFTBossAnimChargeStart1_joint8[48];
extern u16 dFTBossAnimChargeStart1_joint10[30];
extern u16 dFTBossAnimChargeStart1_joint11[58];
extern u16 dFTBossAnimChargeStart1_joint12[30];
extern u16 dFTBossAnimChargeStart1_joint14[30];
extern u16 dFTBossAnimChargeStart1_joint15[46];
extern u16 dFTBossAnimChargeStart1_joint16[30];
extern u16 dFTBossAnimChargeStart1_joint17[30];
extern u16 dFTBossAnimChargeStart1_joint19[24];
extern u16 dFTBossAnimChargeStart1_joint20[64];
extern u16 dFTBossAnimChargeStart1_joint21[26];
extern u16 dFTBossAnimChargeStart1_joint23[30];
extern u16 dFTBossAnimChargeStart1_joint24[62];
extern u16 dFTBossAnimChargeStart1_joint25[66];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTBossAnimChargeStart1_joints[] = {
	(u32)dFTBossAnimChargeStart1_joint1, /* [0] joint 1 */
	(u32)dFTBossAnimChargeStart1_joint3, /* [1] joint 3 */
	0x00000000, /* [2] NULL */
	(u32)dFTBossAnimChargeStart1_joint4, /* [3] joint 4 */
	(u32)dFTBossAnimChargeStart1_joint5, /* [4] joint 5 */
	(u32)dFTBossAnimChargeStart1_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTBossAnimChargeStart1_joint8, /* [7] joint 8 */
	(u32)dFTBossAnimChargeStart1_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTBossAnimChargeStart1_joint11, /* [10] joint 11 */
	(u32)dFTBossAnimChargeStart1_joint12, /* [11] joint 12 */
	(u32)dFTBossAnimChargeStart1_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTBossAnimChargeStart1_joint15, /* [14] joint 15 */
	(u32)dFTBossAnimChargeStart1_joint16, /* [15] joint 16 */
	(u32)dFTBossAnimChargeStart1_joint17, /* [16] joint 17 */
	(u32)dFTBossAnimChargeStart1_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTBossAnimChargeStart1_joint20, /* [19] joint 20 */
	(u32)dFTBossAnimChargeStart1_joint21, /* [20] joint 21 */
	(u32)dFTBossAnimChargeStart1_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTBossAnimChargeStart1_joint24, /* [23] joint 24 */
	(u32)dFTBossAnimChargeStart1_joint25, /* [24] joint 25 */
	0xFFFF015A, /* [25] END */
};

/* Joint 1 */
u16 dFTBossAnimChargeStart1_joint1[12] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 25), 2400,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTBossAnimChargeStart1_joint3[22] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 600, -1200,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 30), -600, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 25), 2400,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 3960,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTBossAnimChargeStart1_joint4[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), -982, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 30), 0, 804,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTBossAnimChargeStart1_joint5[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 25), -536,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -178,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTBossAnimChargeStart1_joint7[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 683, -1280, 155, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -357, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 11, -357, 35, 0, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 178, 178, 178,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTBossAnimChargeStart1_joint8[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -696, 0, -1177, 0, -1273, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), -625, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), -1244, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 24), -1175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -625, -31, -1175, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -669, 21, -1558, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1249, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1089, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -653, 16, -1589, -31, -1045, 43,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTBossAnimChargeStart1_joint10[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -178, 2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 0, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -188, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -347, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -480, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -536, -55,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTBossAnimChargeStart1_joint11[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1549, 0, -67, -1, 370, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), 1623, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), -178, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), -70, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -42, 35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 516, 204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1608, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1512, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -162, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -18, 31,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 710, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1519, 6, 0, 18, 804, 94,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTBossAnimChargeStart1_joint12[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -187, 2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 22), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -229, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -395, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -525, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -577, -52,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTBossAnimChargeStart1_joint14[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -215, 2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 18), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -68, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -746, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -840, -93,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTBossAnimChargeStart1_joint15[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -9, 0, -1583, 0, -1426, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 28), -30, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), -1600, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), -1683, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1672, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1331, 192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1124, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -28, 2, -948, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -26, 2, -1605, -5, -867, 80,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTBossAnimChargeStart1_joint16[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -390, 4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 19), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -109, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -617, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -676, -58,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTBossAnimChargeStart1_joint17[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -348, 5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 0, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 0, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -32, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -664, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -753, -89,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTBossAnimChargeStart1_joint19[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -44,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, -99, -2025, 512, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 15), 0, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), 0, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), -178,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTBossAnimChargeStart1_joint20[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -1635, 0, 1616, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), -1661, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), -165, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 1542, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1541, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1876, 191,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1671, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1787, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -156, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -21, 39,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2085, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2268, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4, 25, -1789, -1, 2353, 84,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTBossAnimChargeStart1_joint21[26] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -421, 4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 18), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -619, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -678, -58,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTBossAnimChargeStart1_joint23[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -384, 5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 0, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 0, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -31, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -662, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -751, -89,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTBossAnimChargeStart1_joint24[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 33, 0, -1691, -1, 1808, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), -1775, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), -173, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), 1533, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1544, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1912, 218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1779, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1796, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -165, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 76, 47,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2150, 228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2369, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 106, 29, -1777, 18, 2479, 109,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTBossAnimChargeStart1_joint25[66] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -196, 2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 22), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -226, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -376, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -487, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -529, -41,
	ftAnimEnd(),
	0x0000, 0x2808, 0xFF1D, 0x0003, 0x4806, 0x0000, 0x0000, 0x3809, 0x0012, 0x0000, 0x3809, 0x0001, 0x0000, 0x2009, 0x0006, 0x0000, 0xFFE0, 0x2009, 0x0001, 0xFFC0, 0xFF77, 0x2009, 0x0003, 0xFD00, 0xFF5D, 0x2009, 0x0001, 0xFC9E, 0xFF9F, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
