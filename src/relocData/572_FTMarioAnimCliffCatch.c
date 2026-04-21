/* AnimJoint data for relocData file 572 (FTMarioAnimCliffCatch) */
/* 1008 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimCliffCatch_joint1[32];
extern u16 dFTMarioAnimCliffCatch_joint2[28];
extern u16 dFTMarioAnimCliffCatch_joint5[24];
extern u16 dFTMarioAnimCliffCatch_joint6[62];
extern u16 dFTMarioAnimCliffCatch_joint8[8];
extern u16 dFTMarioAnimCliffCatch_joint9[24];
extern u16 dFTMarioAnimCliffCatch_joint11[8];
extern u16 dFTMarioAnimCliffCatch_joint12[64];
extern u16 dFTMarioAnimCliffCatch_joint13[16];
extern u16 dFTMarioAnimCliffCatch_joint14[30];
extern u16 dFTMarioAnimCliffCatch_joint16[10];
extern u16 dFTMarioAnimCliffCatch_joint17[34];
extern u16 dFTMarioAnimCliffCatch_joint19[16];
extern u16 dFTMarioAnimCliffCatch_joint21[30];
extern u16 dFTMarioAnimCliffCatch_joint22[24];
extern u16 dFTMarioAnimCliffCatch_joint24[16];
extern u16 dFTMarioAnimCliffCatch_joint25[28];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTMarioAnimCliffCatch_joints[] = {
	(u32)dFTMarioAnimCliffCatch_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimCliffCatch_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimCliffCatch_joint5, /* [2] joint 5 */
	0x00000000, /* [3] NULL */
	0x00000000, /* [4] NULL */
	(u32)dFTMarioAnimCliffCatch_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimCliffCatch_joint8, /* [6] joint 8 */
	0x00000000, /* [7] NULL */
	(u32)dFTMarioAnimCliffCatch_joint9, /* [8] joint 9 */
	(u32)dFTMarioAnimCliffCatch_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTMarioAnimCliffCatch_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimCliffCatch_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimCliffCatch_joint14, /* [13] joint 14 */
	(u32)dFTMarioAnimCliffCatch_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTMarioAnimCliffCatch_joint17, /* [16] joint 17 */
	(u32)dFTMarioAnimCliffCatch_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTMarioAnimCliffCatch_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTMarioAnimCliffCatch_joint22, /* [21] joint 22 */
	(u32)dFTMarioAnimCliffCatch_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTMarioAnimCliffCatch_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTMarioAnimCliffCatch_joint1[32] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -240, -1320,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 4), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -900, -2039, -960, 2160,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -1260, -52, -240, 85,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 53), -376,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 53), 0, 0, -1260, 6,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTMarioAnimCliffCatch_joint2[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY), 536, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY, 4), 0, -8, 0, 0, 0, 84,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_TRAY, 53), 71, 600,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 74), -44, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTMarioAnimCliffCatch_joint5[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAY), 634, 600,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY, 4), 0, -9, 600, -84,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 53), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 74), -134, 1,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimCliffCatch_joint6[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -876, 354, -883, -145, 247, -387,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -522, 174, -1028, -240, -139, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -528, -100, -1364, -238, -82, 129,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1489, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -829, -63, 187, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -849, -19, 201, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -884, -15, 225, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1487, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1484, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -898, -14, -1481, 2, 235, 10,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTMarioAnimCliffCatch_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTMarioAnimCliffCatch_joint9[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -389, -188, 169,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -357, -1, 0, 3, 0, -2,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 53), -491, 0, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimCliffCatch_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 44, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTMarioAnimCliffCatch_joint12[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2908, 25, -1818, 15, -215, 44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 32, 191,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1794, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2883, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2652, 245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2392, 124, 213, 86,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 218, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2403, 7, -1739, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -2330, 21, -1727, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 229, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 240, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2310, 19, -1718, 8, 248, 8,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimCliffCatch_joint13[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTMarioAnimCliffCatch_joint14[30] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -268, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -84, 148, -25, -49, 409, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 474, 267, -247, 5, 450, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1251, 3, 0, 2, 0, -4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTMarioAnimCliffCatch_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTMarioAnimCliffCatch_joint17[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 377, 13, -402, 43, 88, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 390, 0, -15, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -36, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -30, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -27, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 389, 0, -22, 4, -19, -4,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTMarioAnimCliffCatch_joint19[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTMarioAnimCliffCatch_joint21[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -800, 16, -350, 0, 711, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -351, 0, 711, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -582, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -579, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -581, -1, -351, 0, 712, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTMarioAnimCliffCatch_joint22[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -9, 0, 42, 0, -13, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -8, 0, 40, -1, -13, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -7, 0, 38, -1, -13, 0,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTMarioAnimCliffCatch_joint24[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTMarioAnimCliffCatch_joint25[28] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 216, -1, 187, 0, 488, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 213, -1, 186, 0, 488, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 212, -1, 186, 0, 487, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
