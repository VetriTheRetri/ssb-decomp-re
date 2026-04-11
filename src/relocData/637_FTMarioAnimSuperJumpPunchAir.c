/* AnimJoint data for relocData file 637 (FTMarioAnimSuperJumpPunchAir) */
/* 3792 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimSuperJumpPunchAir_joint1[34];
extern u16 dFTMarioAnimSuperJumpPunchAir_joint2[36];
extern u16 dFTMarioAnimSuperJumpPunchAir_joint3[80];
extern u16 dFTMarioAnimSuperJumpPunchAir_joint5[58];
extern u16 dFTMarioAnimSuperJumpPunchAir_joint6[150];
extern u16 dFTMarioAnimSuperJumpPunchAir_joint7[62];
extern u16 dFTMarioAnimSuperJumpPunchAir_joint8[8];
extern u16 dFTMarioAnimSuperJumpPunchAir_joint9[22];
extern u16 dFTMarioAnimSuperJumpPunchAir_joint11[62];
extern u16 dFTMarioAnimSuperJumpPunchAir_joint12[154];
extern u16 dFTMarioAnimSuperJumpPunchAir_joint13[120];
extern u16 dFTMarioAnimSuperJumpPunchAir_joint14[68];
extern u16 dFTMarioAnimSuperJumpPunchAir_joint16[8];
extern u16 dFTMarioAnimSuperJumpPunchAir_joint17[188];
extern u16 dFTMarioAnimSuperJumpPunchAir_joint19[62];
extern u16 dFTMarioAnimSuperJumpPunchAir_joint21[170];
extern u16 dFTMarioAnimSuperJumpPunchAir_joint22[230];
extern u16 dFTMarioAnimSuperJumpPunchAir_joint24[334];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTMarioAnimSuperJumpPunchAir_joints[] = {
	(u32)dFTMarioAnimSuperJumpPunchAir_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimSuperJumpPunchAir_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimSuperJumpPunchAir_joint3, /* [2] joint 3 */
	(u32)dFTMarioAnimSuperJumpPunchAir_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTMarioAnimSuperJumpPunchAir_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimSuperJumpPunchAir_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimSuperJumpPunchAir_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimSuperJumpPunchAir_joint9, /* [8] joint 9 */
	(u32)dFTMarioAnimSuperJumpPunchAir_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTMarioAnimSuperJumpPunchAir_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimSuperJumpPunchAir_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimSuperJumpPunchAir_joint14, /* [13] joint 14 */
	(u32)dFTMarioAnimSuperJumpPunchAir_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTMarioAnimSuperJumpPunchAir_joint17, /* [16] joint 17 */
	(u32)dFTMarioAnimSuperJumpPunchAir_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTMarioAnimSuperJumpPunchAir_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTMarioAnimSuperJumpPunchAir_joint22, /* [21] joint 22 */
	(u32)dFTMarioAnimSuperJumpPunchAir_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF033C, /* [24] END */
};

/* Joint 1 */
u16 dFTMarioAnimSuperJumpPunchAir_joint1[34] = {
	ftAnimSetVal(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValAfter(FT_ANIM_TRAX), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 5), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 5), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 2053,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 6415,
	ftAnimSetValRateT(FT_ANIM_TRAY, 40), 3371, -882,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 14), 2369, 876,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 26), 3620, 217,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimSuperJumpPunchAir_joint2[36] = {
	ftAnimSetVal(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ), 223, 540, 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_TRAZ, 6), 223, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 1), 360,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 5), 360,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 106,
	ftAnimSetValT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 34), 240, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1072, 84,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 8), 1072,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 24), 3082,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTMarioAnimSuperJumpPunchAir_joint3[80] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), -71, -790, -95, 0, 0,
	ftAnimSetValAfter(FT_ANIM_TRAY), 0,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 3), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 66, -790, -95,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 66, -790, -95,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 3), 66, -790, -95, 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 30, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 66, -790, -95,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 3), 120, 360,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 4), 120, 360,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 7), 120, 360,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 66, -38, -790, 43, -95, 8,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 6), 120, 360,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -698, -3, 87, 39, 65, 4,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 9), 66, 198,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 5), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTMarioAnimSuperJumpPunchAir_joint5[58] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 208, 258, 110,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 40), 20, 115, -24,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 694, 362, 213,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 694, 362, 213,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 50, 343, 89,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -51, -8, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -33, -4, 250, -5, -111, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -33, 28, 250, -12, -111, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 536, 1, 0, -12, 0, 5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTMarioAnimSuperJumpPunchAir_joint6[150] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 133, -619, -300, 191, 2944, 1004,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -486, -309, -108, 95, 3949, 502,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -486, 0, -108, 0, 3949, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -320, -154,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 4051, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -597, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -689, -90,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -778, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -499, -119,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -499, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4077, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 4074, 6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -499, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -445, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -778, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -797, -17,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4078, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 3777, 44,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -821, -33, -450, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -512, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -864, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -944, -306, 3845, 321,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1478, -352, -641, -8, 4420, 408,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -431, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1649, -92, 4662, 166,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1645, 13, 4786, 19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -372, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1636, 8, -346, 26, 4793, 6,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimSuperJumpPunchAir_joint7[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -182, -394,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -576, -197,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -576,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -616, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -553, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -271, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -282, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -397, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -400, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -393, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -358, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 174,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimSuperJumpPunchAir_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -625, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTMarioAnimSuperJumpPunchAir_joint9[22] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 201, -4, 176, 0, 288, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), 0, -4, 0, 0, 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 40), 0, 288, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTMarioAnimSuperJumpPunchAir_joint11[62] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -17,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -221, 139, -209,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 40), 0, 54, -18,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -221, 139, -209,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -221, 139, -209,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -22, -78, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -401, -25, -491, -90, 204, 59,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -401, -491, 204,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -401, -491, 204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -401, 20, -491, 24, 204, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 0, 37, 0, 24, 0, -10,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimSuperJumpPunchAir_joint12[154] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2052, -488, 1056, 593, 1674, -430,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1564, -243, 1650, 297, 1243, -215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1565, 1, 1652, 2, 1243, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1573, 3, 1663, 5, 1244, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1577, 186, 1668, -663, 1245, 202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1946, 105, 336, -660, 1650, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1787, -107, 346, 4, 1460, -128,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 1613, -108, 301, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1329, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1252, -212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1451, -97, 193, -72, 903, -217,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 1575, 18, 297, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 818, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1218, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1268, 50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 1443, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1595, 14, 311, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 16), 1697, 65, 466, 28,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1473, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1669, 80,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1777, 53, 496, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 1822, -50, 327, -32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1797, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1832, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1769, -53, 309, -18, 1797, -35,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimSuperJumpPunchAir_joint13[120] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTZ), -811, -7,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -819, 0,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 6144, 6144, 6144,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 6144, 6144, 6144,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -819, 405,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 8192, 8192, 8192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 409,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 8192, 8192, 8192,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -322, -220,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 7), 8192, 8192, 8192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -447, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 128,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -8, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 8192, 8192, 8192,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 14), 4096, 4096, 4096,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -70, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTMarioAnimSuperJumpPunchAir_joint14[68] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), 625,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 7), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 625,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 5), 625,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 1697,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 76, 0, -16,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 1161,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 1), 153,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), -33, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 840,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 0, -4, 0, 1,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 25), 1337,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 6), 1697,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTMarioAnimSuperJumpPunchAir_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, -804, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTMarioAnimSuperJumpPunchAir_joint17[188] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1743, 344, -1377, -47, 1653, -491,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1425, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1399, 172, 1162, -245,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1399, 1162,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1399, 31,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 1162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1162, 106,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1746, 525,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1336, -40, -1382, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1479, -290, -1233, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1916, -214, -1314, -72, 2425, 330,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1562, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1908, 6, 2408, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1903, 4, 2400, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 2398, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -1874, -9,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1565, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1589, 57,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2400, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2494, -31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1893, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2032, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1528, 129,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -997, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2392, -55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2390, -72,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2093, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1981, -178, -848, 145, 2238, 141,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -325, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2451, -253, 2673, 216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2488, -66, 2670, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2725, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2583, -70,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2993, -112,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -204, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -122, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3094, -101, -101, 20, 2822, 96,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTMarioAnimSuperJumpPunchAir_joint19[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 400, 596,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 996, 298,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 996, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 996, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1027, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 789, -513,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -394,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 17), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, 259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 518, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 903, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 748, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 518, -229,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTMarioAnimSuperJumpPunchAir_joint21[170] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -212, -66, -11, -142, -156, -230,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -278, 0, -153, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -386, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -386, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -386, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -278, 101, -153, 106, -386, 91,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 649, 60, 235, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 179, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 85, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 267, 118, 539, -110, 325, 50,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 242, 0, 244, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 321, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 272, 5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 242, 0, 243, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 232, 13, 104, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 277, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 354, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 339, -58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -86, -192,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 260, 44, 66, -98,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -142, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 330, -294,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -294, -94,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 168, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -145, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 288, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 190, -283, 382, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -398, -323, -43, -289,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -455, 8, -11, -207, -196, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -299, 75, -94, -5, -105, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -229, 69, -96, -1, 9, 115,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTMarioAnimSuperJumpPunchAir_joint22[230] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 200, -242, 187, 77, 35, -510,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 269, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -42, -120, -474, -255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -41, 0, -475, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -39, -1, -475, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -42, -146, 264, -41, -474, -302,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -332, -3, 187, 36, -1080, -288,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -49, 188, 337, 49, -1052, 63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1103, -186,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -259, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 291, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 300, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 215, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1344, -151,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1352, 25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -258, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -370, -128,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1324, 31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1027, 89,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -543, -103, 155, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 346, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -578, 21, -981, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -940, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -501, 525,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 472, 617,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 733, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 499, -421, 383, 33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 460, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -109, -423,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -517, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1015, -42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1189, -142,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -615, -125,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1174, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 510, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 244, -199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1366, -169,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1620, 83,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1295, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -856, 312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1361, 210,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1022, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 20, -169,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -63, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -480, 277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -302, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -234, 68, 14, 77, -826, 196,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTMarioAnimSuperJumpPunchAir_joint24[334] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 438, 602,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1040, 301,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 1040,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1040, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 973, -351,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 338, -486,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 196, 283,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 575, 242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 682, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 672, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 385, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 247, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 216, 226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 841, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 823, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1286, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1254, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1030, -289,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 675, -354,
	ftAnimEnd(),
	0x200E, 0x06A1, 0x0014, 0xFA16, 0xFFD9, 0xF8E3, 0xFEFF, 0x2805, 0x0005, 0xF9F4, 0xFFFE, 0x2803, 0x0006, 0x06B6, 0xFFFD, 0x2009, 0x0001, 0xF7E1, 0xFF80, 0x2009, 0x0001, 0xF7E1, 0x0000, 0x2009, 0x0003, 0xF7E1, 0x0000, 0x200D, 0x0001, 0xF9EF, 0x0027, 0xF7E1, 0x009F, 0x2805, 0x0002, 0xFACC, 0x0019, 0x200B, 0x0001, 0x06AF, 0xFFAA, 0xF920, 0x00BF, 0x2803, 0x0002, 0x05C0, 0xFFEF, 0x2009, 0x0001, 0xF960, 0x009C, 0x200D, 0x0001, 0xFA76, 0xFFEC, 0xFA58, 0x0065, 0x2805, 0x0004, 0xFB10, 0x000F, 0x200B, 0x0001, 0x05E7, 0x0038, 0xFA2B, 0xFFB2, 0x2803, 0x0007, 0x0614, 0x000D, 0x2009, 0x0002, 0xF9A6, 0x001F, 0x2009, 0x0001, 0xF9FC, 0x0025, 0x2809, 0x0005, 0xF9D7, 0xFFF9, 0x2005, 0x0001, 0xFB12, 0x0001, 0x2805, 0x0006, 0xFA56, 0xFF52, 0x0801, 0x0003, 0x2003, 0x0001, 0x0625, 0x0019, 0x2803, 0x0004, 0x06D0, 0xFFD1, 0x2009, 0x0001, 0xF9CD, 0xFFF3, 0x2809, 0x0003, 0xF9F8, 0x0034, 0x0801, 0x0001, 0x2005, 0x0001, 0xF974, 0xFF72, 0x2005, 0x0001, 0xF93A, 0x0000, 0x200F, 0x0001, 0x0681, 0xFDE7, 0xF973, 0x0160, 0xFA33, 0x01B9, 0x200F, 0x0001, 0x029D, 0xFD36, 0xFBFB, 0x00F0, 0xFD6C, 0x023F, 0x200F, 0x0001, 0x00EC, 0xFFC2, 0xFB55, 0xFFF0, 0xFEB2, 0x000D, 0x200F, 0x0001, 0x0221, 0x0243, 0xFBDA, 0xFFE7, 0xFD86, 0xFDD4, 0x200F, 0x0001, 0x0574, 0x020A, 0xFB21, 0xFF76, 0xFA58, 0xFE10, 0x2805, 0x0006, 0xFC4E, 0x0058, 0x200B, 0x0001, 0x0636, 0x00B7, 0xF9A5, 0xFF72, 0x200B, 0x0001, 0x06E2, 0x00A3, 0xF93C, 0xFFA0, 0x200B, 0x0003, 0x0880, 0x00AB, 0xF831, 0xFF77, 0x200B, 0x0001, 0x0955, 0x01A3, 0xF77D, 0xFE82, 0x200F, 0x0001, 0x0BC7, 0x0238, 0xFC8C, 0x0000, 0xF534, 0xFDF6, 0x200F, 0x0001, 0x0DC6, 0x01A6, 0xFC4D, 0x005F, 0xF367, 0xFE82, 0x200F, 0x0001, 0x0F14, 0x002F, 0xFD4A, 0x011A, 0xF237, 0xFFF1, 0x2805, 0x0003, 0x00DA, 0x0070, 0x200B, 0x0001, 0x0E26, 0xFF39, 0xF349, 0x00BD, 0x200B, 0x0002, 0x0D24, 0xFFAF, 0xF3A7, 0x000F, 0x200F, 0x0001, 0x0CE1, 0xFFBE, 0x00F8, 0x001E, 0xF3D1, 0x0029, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
