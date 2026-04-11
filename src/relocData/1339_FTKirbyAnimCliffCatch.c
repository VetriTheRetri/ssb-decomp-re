/* AnimJoint data for relocData file 1339 (FTKirbyAnimCliffCatch) */
/* 768 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimCliffCatch_joint1[10];
extern u16 dFTKirbyAnimCliffCatch_joint2[16];
extern u16 dFTKirbyAnimCliffCatch_joint3[10];
extern u16 dFTKirbyAnimCliffCatch_joint4[14];
extern u16 dFTKirbyAnimCliffCatch_joint6[16];
extern u16 dFTKirbyAnimCliffCatch_joint7[28];
extern u16 dFTKirbyAnimCliffCatch_joint8[16];
extern u16 dFTKirbyAnimCliffCatch_joint10[16];
extern u16 dFTKirbyAnimCliffCatch_joint11[44];
extern u16 dFTKirbyAnimCliffCatch_joint12[16];
extern u16 dFTKirbyAnimCliffCatch_joint14[10];
extern u16 dFTKirbyAnimCliffCatch_joint15[28];
extern u16 dFTKirbyAnimCliffCatch_joint17[16];
extern u16 dFTKirbyAnimCliffCatch_joint19[28];
extern u16 dFTKirbyAnimCliffCatch_joint20[28];
extern u16 dFTKirbyAnimCliffCatch_joint22[42];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTKirbyAnimCliffCatch_joints[] = {
	(u32)dFTKirbyAnimCliffCatch_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimCliffCatch_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimCliffCatch_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimCliffCatch_joint4, /* [3] joint 4 */
	(u32)dFTKirbyAnimCliffCatch_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTKirbyAnimCliffCatch_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimCliffCatch_joint8, /* [7] joint 8 */
	(u32)dFTKirbyAnimCliffCatch_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTKirbyAnimCliffCatch_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimCliffCatch_joint12, /* [11] joint 12 */
	(u32)dFTKirbyAnimCliffCatch_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTKirbyAnimCliffCatch_joint15, /* [14] joint 15 */
	(u32)dFTKirbyAnimCliffCatch_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTKirbyAnimCliffCatch_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTKirbyAnimCliffCatch_joint20, /* [19] joint 20 */
	(u32)dFTKirbyAnimCliffCatch_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	0xFFFF00B2, /* [22] END */
};

/* Joint 1 */
u16 dFTKirbyAnimCliffCatch_joint1[10] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), -1200, -840,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -1320, -600,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimCliffCatch_joint2[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 357,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, -67, -120, 600, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimCliffCatch_joint3[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 0, 0, -312, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTKirbyAnimCliffCatch_joint4[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -357, 268, 0, 0, 432, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimCliffCatch_joint6[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 357, -285, -120, -60, -180, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTKirbyAnimCliffCatch_joint7[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 752, -1, -1353, 24, -87, 24,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 741, -3, -1231, 30, 9, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 739, -2, -1213, 17, 14, 4,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTKirbyAnimCliffCatch_joint8[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimCliffCatch_joint10[16] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX), 180,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 357, 120, 60, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 4), 120, -13,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimCliffCatch_joint11[44] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2335, -81, 1075, -36, -42, -49,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 992, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2253, -227, -92, -204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1879, -318, -452, -331,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1617, -146, 1092, 80, -755, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1586, -31, 1153, 60, -806, -51,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTKirbyAnimCliffCatch_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTKirbyAnimCliffCatch_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTKirbyAnimCliffCatch_joint15[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -128, 3, -281, -20, 308, -3,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -100, 12, -384, -27, 278, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -87, 12, -401, -17, 263, -15,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTKirbyAnimCliffCatch_joint17[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTKirbyAnimCliffCatch_joint19[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -52, -8, 178, 8, -2683, 6,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3481, 3686, 3891,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -99, -15, 211, 5, -2657, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -110, -10, 213, 1, -2661, -3,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTKirbyAnimCliffCatch_joint20[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -177, 21, 283, -11, -215, 9,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -78, 27, 209, -24, -212, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -61, 17, 192, -16, -224, -11,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimCliffCatch_joint22[42] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000, 0x280E, 0xFA45, 0xFFF2, 0xFA70, 0xFFF8, 0xFCA7, 0x0009, 0x4F00, 0x0D99, 0x0E66, 0x0F33, 0x200F, 0x0003, 0xF9F6, 0xFFE7, 0xFA3D, 0xFFEE, 0xFCCE, 0x000B, 0x200F, 0x0001, 0xF9E5, 0xFFF0, 0xFA30, 0xFFF4, 0xFCD6, 0x0007, 0x0000,
};
