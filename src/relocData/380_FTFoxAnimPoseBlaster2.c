/* AnimJoint data for relocData file 380 (FTFoxAnimPoseBlaster2) */
/* 448 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimPoseBlaster2_joint1[10];
extern u16 dFTFoxAnimPoseBlaster2_joint2[8];
extern u16 dFTFoxAnimPoseBlaster2_joint4[8];
extern u16 dFTFoxAnimPoseBlaster2_joint5[8];
extern u16 dFTFoxAnimPoseBlaster2_joint6[8];
extern u16 dFTFoxAnimPoseBlaster2_joint7[8];
extern u16 dFTFoxAnimPoseBlaster2_joint10[8];
extern u16 dFTFoxAnimPoseBlaster2_joint11[12];
extern u16 dFTFoxAnimPoseBlaster2_joint12[12];
extern u16 dFTFoxAnimPoseBlaster2_joint13[8];
extern u16 dFTFoxAnimPoseBlaster2_joint15[10];
extern u16 dFTFoxAnimPoseBlaster2_joint16[8];
extern u16 dFTFoxAnimPoseBlaster2_joint18[8];
extern u16 dFTFoxAnimPoseBlaster2_joint20[8];
extern u16 dFTFoxAnimPoseBlaster2_joint21[8];
extern u16 dFTFoxAnimPoseBlaster2_joint23[8];
extern u16 dFTFoxAnimPoseBlaster2_joint24[8];
extern u16 dFTFoxAnimPoseBlaster2_joint25[24];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimPoseBlaster2_joints[] = {
	(u32)dFTFoxAnimPoseBlaster2_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimPoseBlaster2_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimPoseBlaster2_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimPoseBlaster2_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimPoseBlaster2_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimPoseBlaster2_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimPoseBlaster2_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimPoseBlaster2_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimPoseBlaster2_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimPoseBlaster2_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimPoseBlaster2_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimPoseBlaster2_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimPoseBlaster2_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimPoseBlaster2_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimPoseBlaster2_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimPoseBlaster2_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimPoseBlaster2_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimPoseBlaster2_joint25, /* [24] joint 25 */
	0xFFFF0069, /* [25] END */
};

/* Joint 1 */
u16 dFTFoxAnimPoseBlaster2_joint1[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 1229, 0, 0, 1140, 0,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimPoseBlaster2_joint2[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTFoxAnimPoseBlaster2_joint4[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTFoxAnimPoseBlaster2_joint5[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 458, 184, -599,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTFoxAnimPoseBlaster2_joint6[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -381,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTFoxAnimPoseBlaster2_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -231, 0, 0,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTFoxAnimPoseBlaster2_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 58, -804, 38,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTFoxAnimPoseBlaster2_joint11[12] = {
	ftAnimSetValRate(FT_ANIM_ROTY), -107, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), -426, -616,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -107, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTFoxAnimPoseBlaster2_joint12[12] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -504, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -504, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimPoseBlaster2_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 532, -45, -235,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTFoxAnimPoseBlaster2_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 192, -84, 12,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimPoseBlaster2_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1266, -1355, -1584,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTFoxAnimPoseBlaster2_joint18[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 5,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimPoseBlaster2_joint20[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -203, 86, 150,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTFoxAnimPoseBlaster2_joint21[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1766, 1404, -1646,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTFoxAnimPoseBlaster2_joint23[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 150,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimPoseBlaster2_joint24[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1749, -1622, -1651,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTFoxAnimPoseBlaster2_joint25[24] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 189, -35, -792, 0, -126, -96,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x500E, 0xFFB6, 0x0165, 0x0000, 0x0801, 0x0001, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
