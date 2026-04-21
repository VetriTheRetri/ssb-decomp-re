/* AnimJoint data for relocData file 996 (FTSamusAnimCeilingBonk) */
/* 1248 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimCeilingBonk_joint1[58];
extern u16 dFTSamusAnimCeilingBonk_joint2[10];
extern u16 dFTSamusAnimCeilingBonk_joint4[36];
extern u16 dFTSamusAnimCeilingBonk_joint5[68];
extern u16 dFTSamusAnimCeilingBonk_joint6[28];
extern u16 dFTSamusAnimCeilingBonk_joint7[36];
extern u16 dFTSamusAnimCeilingBonk_joint8[16];
extern u16 dFTSamusAnimCeilingBonk_joint11[16];
extern u16 dFTSamusAnimCeilingBonk_joint12[56];
extern u16 dFTSamusAnimCeilingBonk_joint14[36];
extern u16 dFTSamusAnimCeilingBonk_joint15[42];
extern u16 dFTSamusAnimCeilingBonk_joint17[28];
extern u16 dFTSamusAnimCeilingBonk_joint19[42];
extern u16 dFTSamusAnimCeilingBonk_joint20[34];
extern u16 dFTSamusAnimCeilingBonk_joint22[28];
extern u16 dFTSamusAnimCeilingBonk_joint23[44];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTSamusAnimCeilingBonk_joints[] = {
	(u32)dFTSamusAnimCeilingBonk_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimCeilingBonk_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimCeilingBonk_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimCeilingBonk_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimCeilingBonk_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimCeilingBonk_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimCeilingBonk_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimCeilingBonk_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimCeilingBonk_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimCeilingBonk_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimCeilingBonk_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimCeilingBonk_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimCeilingBonk_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimCeilingBonk_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimCeilingBonk_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTSamusAnimCeilingBonk_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTSamusAnimCeilingBonk_joint1[58] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 1300, 0, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), -4,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4915, -163, 3072, 327, 4915, -163,
	ftAnimSetValAfterT(FT_ANIM_TRAX, 8), -4,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1577, 2082, -230, -1264,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 1535, -317, -165, 1103,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 3686, -273, 4915, 341, 3686, -273,
	ftAnimBlock(0, 2),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), -1278, 965,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 1300, 0,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimCeilingBonk_joint2[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTSamusAnimCeilingBonk_joint4[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 240, -21, 56,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX, 8), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 476, 58, -155, 0, 112, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 476, -33, -155, 154, 112, -63,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 240, -21, 56,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTSamusAnimCeilingBonk_joint5[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1596, -282, -1588, 280, 1674, 251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1879, -120, -1307, 163, 1926, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1837, -32, -1261, 18, 1789, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1938, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1373, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1966, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2047, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1907, 112, 2084, -90,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1613, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1867, -193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1524, -107, 1697, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1596, 16, -1588, -63, 1674, -23,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimCeilingBonk_joint6[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1046, -190,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1264, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1181, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1081, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1046, 35,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimCeilingBonk_joint7[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 536, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetValAfterT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 424, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 0, 0, 151, 231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0, 0, 0, 151, -51,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 536, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimCeilingBonk_joint8[16] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 67, -17, -1474, 98, 60, -42,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimCeilingBonk_joint11[16] = {
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 71,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 7), 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimCeilingBonk_joint12[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -275, 137, -3105, 228, -68, -107,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -75, -49, -2796, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -175, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -102, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -83, 62,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -130, -32, -2837, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -263, -31, -3057, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 9, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -52, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -275, -11, -3105, -48, -68, -16,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimCeilingBonk_joint14[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -985, 183,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -802, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -928, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -872, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1003, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1017, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -985, 31,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimCeilingBonk_joint15[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 31, 8, -51, -5, -566, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 34, -3, -49, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -584, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -709, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -387, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -446, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -530, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 31, -2, -51, -1, -566, -35,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimCeilingBonk_joint17[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1329, 38,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1433, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1371, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1342, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1329, -12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimCeilingBonk_joint19[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 34, 10, 21, 26, 48, -147,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 23, 15, 28, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -99, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -51, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -270, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -166, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -22, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 34, 11, 21, -6, 48, 71,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimCeilingBonk_joint20[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -11, 38, 0, -592, -124,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -3, 5, 36, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -809, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -668, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -596, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 3, 38, 1, -592, 4,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimCeilingBonk_joint22[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1100, 131,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1305, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1267, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1135, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1100, -34,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTSamusAnimCeilingBonk_joint23[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -70, -67, 64, -46, 59, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -91, 44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 54, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 101, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -18, -85,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 29, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -54, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -62, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -70, -8, 64, 9, 59, 29,
	ftAnimEnd(),
};
