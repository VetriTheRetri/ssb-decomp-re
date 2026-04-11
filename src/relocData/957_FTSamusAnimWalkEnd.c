/* AnimJoint data for relocData file 957 (FTSamusAnimWalkEnd) */
/* 848 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimWalkEnd_joint2[18];
extern u16 dFTSamusAnimWalkEnd_joint4[26];
extern u16 dFTSamusAnimWalkEnd_joint5[48];
extern u16 dFTSamusAnimWalkEnd_joint6[24];
extern u16 dFTSamusAnimWalkEnd_joint7[12];
extern u16 dFTSamusAnimWalkEnd_joint8[10];
extern u16 dFTSamusAnimWalkEnd_joint11[8];
extern u16 dFTSamusAnimWalkEnd_joint12[34];
extern u16 dFTSamusAnimWalkEnd_joint14[16];
extern u16 dFTSamusAnimWalkEnd_joint15[24];
extern u16 dFTSamusAnimWalkEnd_joint17[24];
extern u16 dFTSamusAnimWalkEnd_joint19[24];
extern u16 dFTSamusAnimWalkEnd_joint20[46];
extern u16 dFTSamusAnimWalkEnd_joint22[64];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTSamusAnimWalkEnd_joints[] = {
	(u32)dFTSamusAnimWalkEnd_joint2, /* [0] joint 2 */
	0x00000000, /* [1] NULL */
	(u32)dFTSamusAnimWalkEnd_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimWalkEnd_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimWalkEnd_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimWalkEnd_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimWalkEnd_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimWalkEnd_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimWalkEnd_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimWalkEnd_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimWalkEnd_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimWalkEnd_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimWalkEnd_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimWalkEnd_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimWalkEnd_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	0xFFFF00C0, /* [22] END */
};

/* Joint 2 */
u16 dFTSamusAnimWalkEnd_joint2[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 1750, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 0, 1530, -120, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 0, 1600, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTSamusAnimWalkEnd_joint4[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 37, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAX, 3), 29, -3, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 3), 107, 40,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ, 7), 0, 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTSamusAnimWalkEnd_joint5[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1177, -28, -1746, 88, 1414, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1431, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -1374, 27, -1466, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1332, 49, -1500, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -1142, 20, -1705, -29,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1405, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1385, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1132, 10, -1722, -17, 1377, -8,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimWalkEnd_joint6[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -665, -103,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -920, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -919, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -760, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, 21,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimWalkEnd_joint7[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 701,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 580,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 7), 701,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTSamusAnimWalkEnd_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimWalkEnd_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTSamusAnimWalkEnd_joint12[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 39, -5, -84, 54, -97, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), 48, 8, -200, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 107, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 69, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -115, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 55, 6, -126, -11, -215, -15,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimWalkEnd_joint14[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -708, 2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -617, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, 22,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimWalkEnd_joint15[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 15, 23, -57, 5, -308, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 88, -2, -26, -1, -392, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 87, -1, -27, -1, -389, 3,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimWalkEnd_joint17[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 176, 144,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 571, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 565, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 486, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimWalkEnd_joint19[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -37, -8, -12, -6, -46, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -77, 1, -29, 1, -44, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -75, 1, -28, 0, -41, 2,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimWalkEnd_joint20[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 15, -18, 107, 3, -19, -70,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 86, 59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 165, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -309, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -293, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -74, 40,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 149, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 202, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 226, 24, 160, -4, -49, 24,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimWalkEnd_joint22[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 670, 109,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 996, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 925, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 487, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 442, -44,
	ftAnimEnd(),
	0x0000, 0x200E, 0xFFE1, 0x001A, 0x000B, 0x0018, 0xFFF5, 0xFFA5, 0x2807, 0x0009, 0x008B, 0x0006, 0x00C0, 0x0001, 0x2009, 0x0004, 0xFE87, 0x0015, 0x2009, 0x0001, 0xFEA7, 0x0023, 0x2009, 0x0004, 0xFF24, 0x000D, 0x200F, 0x0001, 0x008E, 0x0002, 0x00C1, 0x0000, 0xFF2B, 0x0007, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
