/* AnimJoint data for relocData file 818 (FTDonkeyAnimCrouchEnd) */
/* 864 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimCrouchEnd_joint1[10];
extern u16 dFTDonkeyAnimCrouchEnd_joint2[10];
extern u16 dFTDonkeyAnimCrouchEnd_joint4[10];
extern u16 dFTDonkeyAnimCrouchEnd_joint5[60];
extern u16 dFTDonkeyAnimCrouchEnd_joint6[24];
extern u16 dFTDonkeyAnimCrouchEnd_joint7[10];
extern u16 dFTDonkeyAnimCrouchEnd_joint8[10];
extern u16 dFTDonkeyAnimCrouchEnd_joint10[10];
extern u16 dFTDonkeyAnimCrouchEnd_joint11[64];
extern u16 dFTDonkeyAnimCrouchEnd_joint12[24];
extern u16 dFTDonkeyAnimCrouchEnd_joint13[8];
extern u16 dFTDonkeyAnimCrouchEnd_joint16[10];
extern u16 dFTDonkeyAnimCrouchEnd_joint17[24];
extern u16 dFTDonkeyAnimCrouchEnd_joint19[16];
extern u16 dFTDonkeyAnimCrouchEnd_joint21[24];
extern u16 dFTDonkeyAnimCrouchEnd_joint22[24];
extern u16 dFTDonkeyAnimCrouchEnd_joint24[16];
extern u16 dFTDonkeyAnimCrouchEnd_joint25[28];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTDonkeyAnimCrouchEnd_joints[] = {
	(u32)dFTDonkeyAnimCrouchEnd_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimCrouchEnd_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimCrouchEnd_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTDonkeyAnimCrouchEnd_joint5, /* [4] joint 5 */
	(u32)dFTDonkeyAnimCrouchEnd_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimCrouchEnd_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimCrouchEnd_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimCrouchEnd_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTDonkeyAnimCrouchEnd_joint11, /* [10] joint 11 */
	(u32)dFTDonkeyAnimCrouchEnd_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimCrouchEnd_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimCrouchEnd_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTDonkeyAnimCrouchEnd_joint17, /* [16] joint 17 */
	(u32)dFTDonkeyAnimCrouchEnd_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTDonkeyAnimCrouchEnd_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTDonkeyAnimCrouchEnd_joint22, /* [21] joint 22 */
	(u32)dFTDonkeyAnimCrouchEnd_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTDonkeyAnimCrouchEnd_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTDonkeyAnimCrouchEnd_joint1[10] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 689, -524,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), -24,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 1032, -402,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTDonkeyAnimCrouchEnd_joint2[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -139, -35, -26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -265, -41, -16,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTDonkeyAnimCrouchEnd_joint4[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 907, 22, 40,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 750, 24, 41,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimCrouchEnd_joint5[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1484, -69, -1275, 23, 498, 110,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1753, -171,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1359, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 609, 215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 929, 312,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1357, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1896, -73,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1697, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1405, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1497, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1370, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1235, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1671, 25, -1522, -25, 1138, -97,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimCrouchEnd_joint6[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1222, -33,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1178, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1039, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -628, 228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -415, 212,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTDonkeyAnimCrouchEnd_joint7[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -822, -326, 86,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTDonkeyAnimCrouchEnd_joint8[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -199, -78, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 174, -67, -44,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTDonkeyAnimCrouchEnd_joint10[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 61, 70, 29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -398, 70, 29,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTDonkeyAnimCrouchEnd_joint11[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1819, 66, 1272, -50, 422, 111,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1178, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1752, 163, 534, 256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1492, 225, 934, 396,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1396, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1268, 58, 1326, 256,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1376, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1448, 57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1241, -117,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1534, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1664, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1722, -58, 1434, 57, 1133, -107,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimCrouchEnd_joint12[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1269, -34,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1219, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1075, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -645, 238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -425, 220,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTDonkeyAnimCrouchEnd_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 893, 446, 268,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTDonkeyAnimCrouchEnd_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -916, -1286, 2462, 127, 93, 134,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimCrouchEnd_joint17[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 321, -23, -396, 5, -1166, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -68, -29, -398, 4, -341, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -86, -18, -394, 3, -305, 35,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimCrouchEnd_joint19[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1327, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1027, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1005, -21,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTDonkeyAnimCrouchEnd_joint21[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 95, -35, -218, 6, -251, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -66, 4, 14, 15, -376, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -63, 3, 24, 9, -377, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimCrouchEnd_joint22[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1625, 9, 1187, 27, -2533, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -1513, 7, 1387, 6, -1934, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1508, 4, 1391, 4, -1907, 27,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimCrouchEnd_joint24[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1306, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1014, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 993, -20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTDonkeyAnimCrouchEnd_joint25[28] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1799, 16, -1779, -8, 1258, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -1618, 15, -1720, 10, 1223, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1608, 10, -1714, 6, 1224, 1,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
