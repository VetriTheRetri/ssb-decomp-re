/* AnimJoint data for relocData file 1334 (FTKirbyAnimThrown2) */
/* 800 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimThrown2_joint1[8];
extern u16 dFTKirbyAnimThrown2_joint2[14];
extern u16 dFTKirbyAnimThrown2_joint3[12];
extern u16 dFTKirbyAnimThrown2_joint4[20];
extern u16 dFTKirbyAnimThrown2_joint6[14];
extern u16 dFTKirbyAnimThrown2_joint7[36];
extern u16 dFTKirbyAnimThrown2_joint8[16];
extern u16 dFTKirbyAnimThrown2_joint10[14];
extern u16 dFTKirbyAnimThrown2_joint11[36];
extern u16 dFTKirbyAnimThrown2_joint12[16];
extern u16 dFTKirbyAnimThrown2_joint14[12];
extern u16 dFTKirbyAnimThrown2_joint15[30];
extern u16 dFTKirbyAnimThrown2_joint17[16];
extern u16 dFTKirbyAnimThrown2_joint19[30];
extern u16 dFTKirbyAnimThrown2_joint20[30];
extern u16 dFTKirbyAnimThrown2_joint22[16];
extern u16 dFTKirbyAnimThrown2_joint23[34];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTKirbyAnimThrown2_joints[] = {
	(u32)dFTKirbyAnimThrown2_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimThrown2_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimThrown2_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimThrown2_joint4, /* [3] joint 4 */
	(u32)dFTKirbyAnimThrown2_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTKirbyAnimThrown2_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimThrown2_joint8, /* [7] joint 8 */
	(u32)dFTKirbyAnimThrown2_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTKirbyAnimThrown2_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimThrown2_joint12, /* [11] joint 12 */
	(u32)dFTKirbyAnimThrown2_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTKirbyAnimThrown2_joint15, /* [14] joint 15 */
	(u32)dFTKirbyAnimThrown2_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTKirbyAnimThrown2_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTKirbyAnimThrown2_joint20, /* [19] joint 20 */
	(u32)dFTKirbyAnimThrown2_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTKirbyAnimThrown2_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTKirbyAnimThrown2_joint1[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 960, 840,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -14),
};

/* Joint 2 */
u16 dFTKirbyAnimThrown2_joint2[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, -240, -480, 4096, 4096, 4096,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -26),
};

/* Joint 3 */
u16 dFTKirbyAnimThrown2_joint3[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, -312, 0,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTKirbyAnimThrown2_joint4[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -312,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -268,
	ftAnimLoop(0x6800, -36),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimThrown2_joint6[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -26),
};

/* Joint 7 */
u16 dFTKirbyAnimThrown2_joint7[36] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 560, -1, -301, 0, 639, 6,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), 557, 5, -304, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 668, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 648, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 561, 3, -298, 5, 638, -10,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTKirbyAnimThrown2_joint8[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimLoop(0x6800, -30),
};

/* Joint 10 */
u16 dFTKirbyAnimThrown2_joint10[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -26),
};

/* Joint 11 */
u16 dFTKirbyAnimThrown2_joint11[36] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1047, 3, 1310, -5, -970, 10,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), 1050, -4, 1304, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -939, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -960, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1048, -2, 1307, 2, -968, -8,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTKirbyAnimThrown2_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 14 */
u16 dFTKirbyAnimThrown2_joint14[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTKirbyAnimThrown2_joint15[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1445, 0, -1328, 1, 2274, 2,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -1444, -2, -1327, -1, 2272, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1445, -1, -1328, 0, 2274, 1,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTKirbyAnimThrown2_joint17[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 19 */
u16 dFTKirbyAnimThrown2_joint19[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -319, -3, -185, 1, -3047, 7,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -323, 6, -183, -2, -3043, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -319, 3, -185, -1, -3047, -3,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTKirbyAnimThrown2_joint20[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1445, -1, 1328, 0, 2273, -1,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 1446, 3, 1326, 1, 2276, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1445, 0, 1328, 1, 2274, -2,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimThrown2_joint22[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTKirbyAnimThrown2_joint23[34] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 319, 3, 185, -1, 169, 3,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 323, -6, 183, 2, 176, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 319, -3, 185, 1, 169, -7,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
