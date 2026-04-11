/* AnimJoint data for relocData file 1029 (FTSamusAnimCliffCatch) */
/* 816 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimCliffCatch_joint1[36];
extern u16 dFTSamusAnimCliffCatch_joint2[28];
extern u16 dFTSamusAnimCliffCatch_joint3[20];
extern u16 dFTSamusAnimCliffCatch_joint5[10];
extern u16 dFTSamusAnimCliffCatch_joint6[32];
extern u16 dFTSamusAnimCliffCatch_joint7[16];
extern u16 dFTSamusAnimCliffCatch_joint8[20];
extern u16 dFTSamusAnimCliffCatch_joint9[10];
extern u16 dFTSamusAnimCliffCatch_joint12[8];
extern u16 dFTSamusAnimCliffCatch_joint13[32];
extern u16 dFTSamusAnimCliffCatch_joint15[16];
extern u16 dFTSamusAnimCliffCatch_joint16[24];
extern u16 dFTSamusAnimCliffCatch_joint18[16];
extern u16 dFTSamusAnimCliffCatch_joint20[24];
extern u16 dFTSamusAnimCliffCatch_joint21[24];
extern u16 dFTSamusAnimCliffCatch_joint23[44];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTSamusAnimCliffCatch_joints[] = {
	(u32)dFTSamusAnimCliffCatch_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimCliffCatch_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimCliffCatch_joint3, /* [2] joint 3 */
	(u32)dFTSamusAnimCliffCatch_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTSamusAnimCliffCatch_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimCliffCatch_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimCliffCatch_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimCliffCatch_joint9, /* [8] joint 9 */
	(u32)dFTSamusAnimCliffCatch_joint12, /* [9] joint 12 */
	0x00000000, /* [10] NULL */
	0x00000000, /* [11] NULL */
	(u32)dFTSamusAnimCliffCatch_joint13, /* [12] joint 13 */
	(u32)dFTSamusAnimCliffCatch_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTSamusAnimCliffCatch_joint16, /* [15] joint 16 */
	(u32)dFTSamusAnimCliffCatch_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTSamusAnimCliffCatch_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTSamusAnimCliffCatch_joint21, /* [20] joint 21 */
	(u32)dFTSamusAnimCliffCatch_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	0xFFFF00BE, /* [23] END */
};

/* Joint 1 */
u16 dFTSamusAnimCliffCatch_joint1[36] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), -2457, -758,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -2536, -972, -687, 884,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -2700, -1240, -537, 1195,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -2846, -828, -388, 935,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -2907, -8, -303, 11,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 56), -2907, -303,
	ftAnimBlock0(0),
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTSamusAnimCliffCatch_joint2[28] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1600, 0,
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 1582, -8, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 4), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), 208,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 15), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 15), 240, 0, 1581, 2,
	ftAnimBlock0(0),
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTSamusAnimCliffCatch_joint3[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 268, -151,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), -241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 0, -14, 357, 8,
	ftAnimSetValT(FT_ANIM_ROTX, 15), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 56), 357, 8,
	ftAnimBlock0(0),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimCliffCatch_joint5[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimCliffCatch_joint6[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1500, 59, -1772, 67, 257, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 31, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -1237, 201, -1477, 215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1037, 150, -1272, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -936, 101, -1281, -8, -69, -101,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTSamusAnimCliffCatch_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -163, -91,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -251, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 246,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimCliffCatch_joint8[20] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 828, -8, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 453, -6, 277, 4, 293, 2,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 56), 453, 277, 293,
	ftAnimBlock0(0),
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTSamusAnimCliffCatch_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimCliffCatch_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTSamusAnimCliffCatch_joint13[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 160, -62, 87, 71, 634, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 454, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -85, -215, 397, -255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -332, -174, 77, -233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -434, -101, 461, 6, -70, -148,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTSamusAnimCliffCatch_joint15[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1093, -31,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1109, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1068, 41,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTSamusAnimCliffCatch_joint16[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 87, -104, -27, -9, -389, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -244, -40, 64, 70, -149, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -251, -6, 121, 56, -67, 82,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTSamusAnimCliffCatch_joint18[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 478, 44,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 438, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 338, -99,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTSamusAnimCliffCatch_joint20[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -107, 63, -48, 14, 259, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 34, -14, 32, 24, 259, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 6, -28, 48, 15, 259, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTSamusAnimCliffCatch_joint21[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 224, -137, 159, -16, -46, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -250, -70, 137, 33, -275, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -276, -25, 173, 36, -276, 0,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTSamusAnimCliffCatch_joint23[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 439, 43,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 424, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 341, -82,
	ftAnimEnd(),
	0x0000, 0x200E, 0xFFDF, 0x003D, 0x0029, 0x0006, 0x00F1, 0x000B, 0x200F, 0x0003, 0x005B, 0xFFED, 0x004C, 0x0009, 0x012B, 0x0010, 0x200F, 0x0001, 0x0044, 0xFFEA, 0x0051, 0x0005, 0x0134, 0x0009, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
