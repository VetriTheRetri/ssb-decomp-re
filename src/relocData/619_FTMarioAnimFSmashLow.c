/* AnimJoint data for relocData file 619 (FTMarioAnimFSmashLow) */
/* 3232 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimFSmashLow_joint1[50];
extern u16 dFTMarioAnimFSmashLow_joint2[64];
extern u16 dFTMarioAnimFSmashLow_joint4[64];
extern u16 dFTMarioAnimFSmashLow_joint5[138];
extern u16 dFTMarioAnimFSmashLow_joint6[62];
extern u16 dFTMarioAnimFSmashLow_joint7[10];
extern u16 dFTMarioAnimFSmashLow_joint8[40];
extern u16 dFTMarioAnimFSmashLow_joint10[20];
extern u16 dFTMarioAnimFSmashLow_joint11[230];
extern u16 dFTMarioAnimFSmashLow_joint12[180];
extern u16 dFTMarioAnimFSmashLow_joint13[36];
extern u16 dFTMarioAnimFSmashLow_joint15[42];
extern u16 dFTMarioAnimFSmashLow_joint16[114];
extern u16 dFTMarioAnimFSmashLow_joint18[56];
extern u16 dFTMarioAnimFSmashLow_joint20[120];
extern u16 dFTMarioAnimFSmashLow_joint21[142];
extern u16 dFTMarioAnimFSmashLow_joint23[62];
extern u16 dFTMarioAnimFSmashLow_joint24[138];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimFSmashLow_joints[] = {
	(u32)dFTMarioAnimFSmashLow_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimFSmashLow_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimFSmashLow_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimFSmashLow_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimFSmashLow_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimFSmashLow_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimFSmashLow_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimFSmashLow_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimFSmashLow_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimFSmashLow_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimFSmashLow_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimFSmashLow_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimFSmashLow_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimFSmashLow_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimFSmashLow_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimFSmashLow_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimFSmashLow_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTMarioAnimFSmashLow_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTMarioAnimFSmashLow_joint1[50] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 540, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 223, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 16), 540,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 12), -180, 149,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), 300, 384,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 540, -64, 300, -137,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 420, -96, 41, -206,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 420, 41,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 420, 41,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 420, 53, 41, -18,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 17), 540, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimFSmashLow_joint2[64] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -71, -790, -95,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 2, 4, -1231, 34, -168, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, -231, 99, -166, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, -2, -231, -17, -166, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -32, -3, -489, -25, -133, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -32, -489, -133,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -32, -489, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -32, -2, -489, -16, -133, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), -71, -790, -95,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTMarioAnimFSmashLow_joint4[64] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 208, 258, 110,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 131, 36, 235, 12, 240, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 795, 66, 463, 22, 569, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 795, -20, 463, -53, 569, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 487, -30, -339, -80, -430, -100,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 487, -339, -430,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 487, -339, -430,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 487, -15, -339, 33, -430, 30,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 208, 258, 110,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimFSmashLow_joint5[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1741, 1, 1908, 4, -1880, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1670, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 2151, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1832, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1800, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -1188, 35,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1628, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 732, -47,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2152, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 2166, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2173, -73, -1149, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1936, -62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1208, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 709, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 582, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1893, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1849, -14,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1204, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1339, -81,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 615, 51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 1730, 19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1838, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1967, -16,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1426, -87,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1860, -34,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1949, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1915, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1741, 11, 1908, -6, -1880, -20,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimFSmashLow_joint6[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -182, 4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -120, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -9, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 16), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -358, -287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -575, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -814, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -806, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -788, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -723, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -216, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, 34,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTMarioAnimFSmashLow_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -625, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 54),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTMarioAnimFSmashLow_joint8[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 201, -4, 176,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 31), 268, 2, 520, 16, 413, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 268, 520, 413,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 268, 520, 413,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 268, -3, 520, -29, 413, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 201, -4, 176,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTMarioAnimFSmashLow_joint10[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -221, 139, -209,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 102, 280, -180,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 44), -221, 139, -209,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTMarioAnimFSmashLow_joint11[230] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2052, -412, 1056, 209, 1674, -387,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1415, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1639, 106, 1287, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2264, 646, 1945, 529,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 3584, 559,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1280, -28, 2345, 682,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1359, 39, 3311, 634,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4052, 443, 1358, 4, 3615, 290,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1324, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4471, 297, 3892, 266,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 4509, 508,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4647, 194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 4860, 423, 1265, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5493, 662, 1406, -6, 5163, 555,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 6803, 415,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1253, -22, 5620, 684,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1417, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6532, 546,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 7016, 578, 6713, 503,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7959, 409, 1245, -114, 7540, 334,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1113, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 7835, -50, 7381, -59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 7861, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7422, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 7594, 56,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 7867, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 7998, 45,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1112, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 1119, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 8054, 215, 1127, 100, 7664, 298,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1545, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 8429, 210, 8192, 369,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 8475, 22, 8403, 105,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 2), 8403,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 8521, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1545, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1219, -39,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 8403,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), 8116, -10,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 8531, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 8493, -9,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1180, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 1060, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 8486, -7, 1056, -3, 8108, -8,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimFSmashLow_joint12[180] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRate(FT_ANIM_ROTZ), -811, 811,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 0, 54, 4915, 126, 4915, 126, 4915, 126,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 12), 4915, 355, 4915, 355, 4915, 355,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -701, -199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -398, 346,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -319,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -638, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -306, 319,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -290,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -581,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 7403, 13107, 7403, 6280, 7403, 6280,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 286,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 24576, 315, 14336, 315, 14336, 315,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 8192, -2530, 8192, -1164, 8192, -1164,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 11), 5599, -432, 5599, -432, 5599, -432,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -320,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -640, -481,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -971, -165,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -971, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 5599, 5599, 5599,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 5599, 5599, 5599,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -971, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -829, 13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 5599, -167, 5599, -167, 5599, -167,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 17), 4096, 4096, 4096,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -818, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTMarioAnimFSmashLow_joint13[36] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAY | FT_ANIM_SCAZ), 143, 0, 0, 4096, 4096,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 625, 0, 0,
	ftAnimSetValBlock(FT_ANIM_SCAX), 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 0, 127, 0,
	ftAnimSetValBlockT(FT_ANIM_SCAX, 15), 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 2412,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 38), 625, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 4), 4096,
	ftAnimSetValBlockT(FT_ANIM_SCAX, 34), 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTMarioAnimFSmashLow_joint15[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, -804, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 2055, 50, -840, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 2211, 22, -809, 4, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2234, -301, -806, 2, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1608, -15, -804, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), 1608, -804, 0,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimFSmashLow_joint16[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1473, 3, -1377, 3, -1563, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1735, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), -1339, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -1795, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1780, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1793, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1739, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1686, 22,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1955, -106,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1996, -9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1700, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1802, 81,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2007, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), -1836, 36,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1341, -40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1538, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1861, 51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 27), 1503, -30,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1539, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), -1387, 7,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1799, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -1570, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1473, -29, -1377, 9, -1563, 7,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimFSmashLow_joint18[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 400, 24,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 770, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 753, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 661, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 709, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 460, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 502, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 756, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 764, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 496, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 467, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 405, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, -4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTMarioAnimFSmashLow_joint20[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1820, 7, -1597, 0, -1764, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 11), -1552, -29, -1937, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), -1408, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1385, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1497, -178,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1614, -71, -1908, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1810, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -1915, -31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1753, -252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -2086, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2106, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -2072, 16,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1824, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), -1822, -2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2053, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1745, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1948, -34, -1688, 52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1546, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), -1822, 2,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1824, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -1766, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1539, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), -1571, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1820, 1, -1597, -25, -1764, 1,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimFSmashLow_joint21[142] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 200, 1, 187, 2, 35, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 442, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 226, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -109, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -112, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -134, -20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 424, -79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 175, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 249, -21, -161, 122,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 468, 208,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -211, -34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 263, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 269, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 528, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 507, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -230, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -72, 16,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 269, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 30), 199, 1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 497, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -58, 63, 487, -98,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 142, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 301, -142,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 125, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 142, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 187, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 125, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 35, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 200, 0, 187, 0, 35, 0,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimFSmashLow_joint23[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 438, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 547, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 554, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 580, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 344, -286,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 377, 275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 550, 145,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 669,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 669, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 441, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, -2,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTMarioAnimFSmashLow_joint24[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 89, -5, -93, -7, -212, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), -66, 45, -233, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 11), -416, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -380, 131,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 209, 242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 8, 127, -233, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 467, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -139, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 331, 64, 127, 193,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 266, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 302, -13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 479, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 221, -20,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 238, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -81, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 288, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 153, -5,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 202, -14, -127, -111,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), 89, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -377, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -426, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -302, 16,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 142, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -91, -4,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -285, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -214, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 89, 0, -93, -2, -212, 2,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
