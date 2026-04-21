/* AnimJoint data for relocData file 1336 (FTKirbyAnimThrownFoxB) */
/* 656 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimThrownFoxB_joint2[14];
extern u16 dFTKirbyAnimThrownFoxB_joint3[10];
extern u16 dFTKirbyAnimThrownFoxB_joint4[14];
extern u16 dFTKirbyAnimThrownFoxB_joint6[14];
extern u16 dFTKirbyAnimThrownFoxB_joint7[26];
extern u16 dFTKirbyAnimThrownFoxB_joint8[14];
extern u16 dFTKirbyAnimThrownFoxB_joint10[14];
extern u16 dFTKirbyAnimThrownFoxB_joint11[26];
extern u16 dFTKirbyAnimThrownFoxB_joint12[14];
extern u16 dFTKirbyAnimThrownFoxB_joint14[10];
extern u16 dFTKirbyAnimThrownFoxB_joint15[16];
extern u16 dFTKirbyAnimThrownFoxB_joint17[8];
extern u16 dFTKirbyAnimThrownFoxB_joint19[26];
extern u16 dFTKirbyAnimThrownFoxB_joint20[28];
extern u16 dFTKirbyAnimThrownFoxB_joint22[16];
extern u16 dFTKirbyAnimThrownFoxB_joint23[32];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTKirbyAnimThrownFoxB_joints[] = {
	0x00000000, /* [0] NULL */
	(u32)dFTKirbyAnimThrownFoxB_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimThrownFoxB_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimThrownFoxB_joint4, /* [3] joint 4 */
	(u32)dFTKirbyAnimThrownFoxB_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTKirbyAnimThrownFoxB_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimThrownFoxB_joint8, /* [7] joint 8 */
	(u32)dFTKirbyAnimThrownFoxB_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTKirbyAnimThrownFoxB_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimThrownFoxB_joint12, /* [11] joint 12 */
	(u32)dFTKirbyAnimThrownFoxB_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTKirbyAnimThrownFoxB_joint15, /* [14] joint 15 */
	(u32)dFTKirbyAnimThrownFoxB_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTKirbyAnimThrownFoxB_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTKirbyAnimThrownFoxB_joint20, /* [19] joint 20 */
	(u32)dFTKirbyAnimThrownFoxB_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTKirbyAnimThrownFoxB_joint23, /* [22] joint 23 */
};

/* Joint 2 */
u16 dFTKirbyAnimThrownFoxB_joint2[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, -240, -480, 4096, 4096, 4096,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimThrownFoxB_joint3[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, -312, 0,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTKirbyAnimThrownFoxB_joint4[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -268, 0, 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimThrownFoxB_joint6[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTKirbyAnimThrownFoxB_joint7[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 561, 2918, -2579,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 561, 0, 2918, 1, -2579, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 561, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2918, -2579,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTKirbyAnimThrownFoxB_joint8[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimThrownFoxB_joint10[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimThrownFoxB_joint11[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2656, 0, 300, 0, 639, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 2655, 298, 637,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2656, 0, 300, 2, 639, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTKirbyAnimThrownFoxB_joint12[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimThrownFoxB_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTKirbyAnimThrownFoxB_joint15[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 162,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -280, -2551, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 9), 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 162, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTKirbyAnimThrownFoxB_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 7,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTKirbyAnimThrownFoxB_joint19[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1289, 1793, -1438,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1289, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 1793, -1438,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1793, 0, -1438, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 1289,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTKirbyAnimThrownFoxB_joint20[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1445, 0, -1888, 0, -942, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 1445, 0, -1888, 0, -942, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1445, 0, -1888, 0, -942, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimThrownFoxB_joint22[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTKirbyAnimThrownFoxB_joint23[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 319,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 185, 0, 169, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 319, 0, 185, 0, 169, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 319, 0, 185, 0, 169, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
