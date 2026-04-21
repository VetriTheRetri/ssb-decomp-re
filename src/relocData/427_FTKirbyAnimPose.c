/* AnimJoint data for relocData file 427 (FTKirbyAnimPose) */
/* 512 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimPose_joint1[14];
extern u16 dFTKirbyAnimPose_joint2[10];
extern u16 dFTKirbyAnimPose_joint3[14];
extern u16 dFTKirbyAnimPose_joint5[14];
extern u16 dFTKirbyAnimPose_joint6[20];
extern u16 dFTKirbyAnimPose_joint7[8];
extern u16 dFTKirbyAnimPose_joint9[14];
extern u16 dFTKirbyAnimPose_joint10[20];
extern u16 dFTKirbyAnimPose_joint11[8];
extern u16 dFTKirbyAnimPose_joint13[10];
extern u16 dFTKirbyAnimPose_joint14[10];
extern u16 dFTKirbyAnimPose_joint16[8];
extern u16 dFTKirbyAnimPose_joint18[10];
extern u16 dFTKirbyAnimPose_joint19[20];
extern u16 dFTKirbyAnimPose_joint21[12];
extern u16 dFTKirbyAnimPose_joint22[20];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimPose_joints[] = {
	(u32)dFTKirbyAnimPose_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimPose_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimPose_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimPose_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimPose_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimPose_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimPose_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimPose_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimPose_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimPose_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimPose_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimPose_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimPose_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimPose_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimPose_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTKirbyAnimPose_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimPose_joint1[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 373, -446, -170, 0, 480, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimPose_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, -312, 0,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimPose_joint3[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTKirbyAnimPose_joint5[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, -240, 0, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimPose_joint6[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 37, 0, -1224, 0, -157, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 37, 0, -1224, 0, -157, 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimPose_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTKirbyAnimPose_joint9[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 240, 0, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimPose_joint10[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 3, 0, -1963, 0, -70, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4, 0, -1963, 0, -70, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimPose_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimPose_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimPose_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 147, -399, -9, 4096, 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimPose_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 7,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTKirbyAnimPose_joint18[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 247, 2237, -382, 4096, 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimPose_joint19[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -126, 0, 413, 0, 23, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -126, 0, 413, 0, 23, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimPose_joint21[12] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTKirbyAnimPose_joint22[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 285, 0, 180, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -2643, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 285, 0, 180, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000,
};
