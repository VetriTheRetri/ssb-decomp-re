/* AnimJoint data for relocData file 819 (FTDonkeyAnimLandingAirX) */
/* 1120 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimLandingAirX_joint1[16];
extern u16 dFTDonkeyAnimLandingAirX_joint2[8];
extern u16 dFTDonkeyAnimLandingAirX_joint4[18];
extern u16 dFTDonkeyAnimLandingAirX_joint5[46];
extern u16 dFTDonkeyAnimLandingAirX_joint6[20];
extern u16 dFTDonkeyAnimLandingAirX_joint7[22];
extern u16 dFTDonkeyAnimLandingAirX_joint8[18];
extern u16 dFTDonkeyAnimLandingAirX_joint10[18];
extern u16 dFTDonkeyAnimLandingAirX_joint11[50];
extern u16 dFTDonkeyAnimLandingAirX_joint12[20];
extern u16 dFTDonkeyAnimLandingAirX_joint13[18];
extern u16 dFTDonkeyAnimLandingAirX_joint14[10];
extern u16 dFTDonkeyAnimLandingAirX_joint16[14];
extern u16 dFTDonkeyAnimLandingAirX_joint17[58];
extern u16 dFTDonkeyAnimLandingAirX_joint19[20];
extern u16 dFTDonkeyAnimLandingAirX_joint21[42];
extern u16 dFTDonkeyAnimLandingAirX_joint22[54];
extern u16 dFTDonkeyAnimLandingAirX_joint24[58];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTDonkeyAnimLandingAirX_joints[] = {
	(u32)dFTDonkeyAnimLandingAirX_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimLandingAirX_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimLandingAirX_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTDonkeyAnimLandingAirX_joint5, /* [4] joint 5 */
	(u32)dFTDonkeyAnimLandingAirX_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimLandingAirX_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimLandingAirX_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimLandingAirX_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTDonkeyAnimLandingAirX_joint11, /* [10] joint 11 */
	(u32)dFTDonkeyAnimLandingAirX_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimLandingAirX_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimLandingAirX_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimLandingAirX_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTDonkeyAnimLandingAirX_joint17, /* [16] joint 17 */
	(u32)dFTDonkeyAnimLandingAirX_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTDonkeyAnimLandingAirX_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTDonkeyAnimLandingAirX_joint22, /* [21] joint 22 */
	(u32)dFTDonkeyAnimLandingAirX_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF0105, /* [24] END */
};

/* Joint 1 */
u16 dFTDonkeyAnimLandingAirX_joint1[16] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 902, -585,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), -24,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 704, 130, -585, 183,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 1032, -402,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTDonkeyAnimLandingAirX_joint2[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -265, -41, -16,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTDonkeyAnimLandingAirX_joint4[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 894, 22, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 894, -18, 22, 0, 40, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 750, 24, 41,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimLandingAirX_joint5[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1656, -49, -1343, -8, 1163, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1860, 122, 1406, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -1503, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1444, 34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1496, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1720, 94, 1339, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1671, 24, 1211, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1671, 0, -1523, -26, 1134, -76,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimLandingAirX_joint6[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -853, -36,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -769, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -547, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -407, 139,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTDonkeyAnimLandingAirX_joint7[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -822, -326, 86,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 702, 15, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -822, 102, -326, 40, 86, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTDonkeyAnimLandingAirX_joint8[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -199, -78, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -199, 46, -78, 1, 6, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 174, -67, -44,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTDonkeyAnimLandingAirX_joint10[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -110, 64, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 170, -35, 60, 0, 23, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -398, 70, 29,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTDonkeyAnimLandingAirX_joint11[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1640, 55, 1252, 5, 1145, 51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1429, -143,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1362, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1379, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1416, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1315, 31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1607, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1699, -58, 1392, 60, 1212, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1724, -24, 1436, 43, 1129, -82,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimLandingAirX_joint12[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -893, -42,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -815, 218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -569, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, 152,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTDonkeyAnimLandingAirX_joint13[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 893, 446, 268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 709, -99, 312, -55, 314, -33,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 98, 0, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTDonkeyAnimLandingAirX_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -893, -1340, 2502, 127, 93, 134,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTDonkeyAnimLandingAirX_joint16[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1191, 678, -427,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 1046, 573,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -404, 0, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimLandingAirX_joint17[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -110, 68, -630, -20, -558, -92,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -559, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 195, 281, -945, -339,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 519, 162, -1330, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 519, -149, -1326, 216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 221, -237, -897, 377,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -52, -65, -376, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -469, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -415, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -86, -34, -394, 21, -304, 71,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimLandingAirX_joint19[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1100, 29,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1154, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1054, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1004, -49,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTDonkeyAnimLandingAirX_joint21[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 108, 24, -85, 3, -328, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -339, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 14, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 271, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 263, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -43, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -66, -9, -370, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -62, 3, 24, 9, -377, -6,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimLandingAirX_joint22[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1350, 1, 1137, -33, -2035, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1432, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 928, -44, -2157, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 930, 99, -2271, -45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1293, 120,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1959, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1522, -46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1514, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1368, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1508, 5, 1391, 23, -1906, 53,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimLandingAirX_joint24[58] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1084, 30,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1143, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1043, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 993, -49,
	ftAnimEnd(),
	0x0000, 0x200E, 0xF908, 0xFFEE, 0xF96D, 0x000E, 0x04ED, 0xFFFC, 0x2809, 0x0007, 0x04C9, 0xFFFA, 0x2007, 0x0005, 0xF8E1, 0x007A, 0xF982, 0xFFBB, 0x2007, 0x0001, 0xF95E, 0x0060, 0xF950, 0xFFE6, 0x2007, 0x0001, 0xF9A1, 0x002D, 0xF94C, 0x0000, 0x200F, 0x0001, 0xF9B9, 0x0017, 0xF94F, 0x0002, 0x04C8, 0x0000, 0x0000,
};
