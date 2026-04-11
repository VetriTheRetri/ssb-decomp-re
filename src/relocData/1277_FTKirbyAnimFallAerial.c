/* AnimJoint data for relocData file 1277 (FTKirbyAnimFallAerial) */
/* 800 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimFallAerial_joint1[12];
extern u16 dFTKirbyAnimFallAerial_joint2[12];
extern u16 dFTKirbyAnimFallAerial_joint3[22];
extern u16 dFTKirbyAnimFallAerial_joint5[14];
extern u16 dFTKirbyAnimFallAerial_joint6[38];
extern u16 dFTKirbyAnimFallAerial_joint7[16];
extern u16 dFTKirbyAnimFallAerial_joint9[14];
extern u16 dFTKirbyAnimFallAerial_joint10[38];
extern u16 dFTKirbyAnimFallAerial_joint11[16];
extern u16 dFTKirbyAnimFallAerial_joint13[12];
extern u16 dFTKirbyAnimFallAerial_joint14[32];
extern u16 dFTKirbyAnimFallAerial_joint16[14];
extern u16 dFTKirbyAnimFallAerial_joint18[30];
extern u16 dFTKirbyAnimFallAerial_joint19[34];
extern u16 dFTKirbyAnimFallAerial_joint21[52];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimFallAerial_joints[] = {
	(u32)dFTKirbyAnimFallAerial_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimFallAerial_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimFallAerial_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimFallAerial_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimFallAerial_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimFallAerial_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimFallAerial_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimFallAerial_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimFallAerial_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimFallAerial_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimFallAerial_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimFallAerial_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimFallAerial_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimFallAerial_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimFallAerial_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	0xFFFF00B6, /* [21] END */
};

/* Joint 1 */
u16 dFTKirbyAnimFallAerial_joint1[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 600, 0,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimFallAerial_joint2[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -268, 0, 0, -312, 0,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimFallAerial_joint3[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_SCAZ), 268, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY), 0, 0, 0, 312, 0, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAZ, 4), 223, 3891,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAZ, 4), 268, 4096,
	ftAnimLoop(0x6800, -40),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTKirbyAnimFallAerial_joint5[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 178, -120, -120, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -26),
};

/* Joint 6 */
u16 dFTKirbyAnimFallAerial_joint6[38] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -572, -4, -609, -13, 1325, 8,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -619, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -599, 25, 1366, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -580, 13, 1338, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -572, 8, -609, 10, 1325, -12,
	ftAnimLoop(0x6800, -72),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimFallAerial_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 9 */
u16 dFTKirbyAnimFallAerial_joint9[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, -178, 120, -120, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -26),
};

/* Joint 10 */
u16 dFTKirbyAnimFallAerial_joint10[38] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 572, 8, 609, 10, -1891, 12,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 619, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 603, -25, -1846, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 580, -15, -1878, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 572, -8, 609, -10, -1891, -12,
	ftAnimLoop(0x6800, -72),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimFallAerial_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 13 */
u16 dFTKirbyAnimFallAerial_joint13[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimFallAerial_joint14[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 242, -9, -430, 1, -209, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 229, 21, -430, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -164, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -195, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 242, 13, -430, 0, -209, -13,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimFallAerial_joint16[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimLoop(0x6800, -26),
};

/* Joint 18 */
u16 dFTKirbyAnimFallAerial_joint18[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2118, 4, 1980, -2, -1218, -11,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -2114, -6, 1978, 3, -1226, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2118, -4, 1980, 2, -1218, 7,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimFallAerial_joint19[34] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), -242, 13, -209, 13,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), 430,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 429, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -204, -27, -169, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -232, -19, -200, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -242, -9, 430, 1, -209, -9,
	ftAnimLoop(0x6800, -64),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimFallAerial_joint21[52] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
	0x280E, 0xFBB6, 0xFFFC, 0xF844, 0x0002, 0xFB3E, 0xFFF9, 0x4F00, 0x0E66, 0x0E66, 0x0E66, 0x200F, 0x0007, 0xFBB2, 0x0006, 0xF846, 0xFFFD, 0xFB33, 0x000D, 0x200F, 0x0001, 0xFBB6, 0x0004, 0xF844, 0xFFFE, 0xFB3E, 0x000B, 0x6800, 0xFFC8, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
