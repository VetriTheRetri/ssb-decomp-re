/* AnimJoint data for relocData file 413 (FTLinkAnimPoseAlly) */
/* 560 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimPoseAlly_joint1[12];
extern u16 dFTLinkAnimPoseAlly_joint2[10];
extern u16 dFTLinkAnimPoseAlly_joint4[10];
extern u16 dFTLinkAnimPoseAlly_joint5[16];
extern u16 dFTLinkAnimPoseAlly_joint6[12];
extern u16 dFTLinkAnimPoseAlly_joint7[10];
extern u16 dFTLinkAnimPoseAlly_joint9[10];
extern u16 dFTLinkAnimPoseAlly_joint10[16];
extern u16 dFTLinkAnimPoseAlly_joint11[12];
extern u16 dFTLinkAnimPoseAlly_joint13[10];
extern u16 dFTLinkAnimPoseAlly_joint16[8];
extern u16 dFTLinkAnimPoseAlly_joint17[10];
extern u16 dFTLinkAnimPoseAlly_joint18[10];
extern u16 dFTLinkAnimPoseAlly_joint20[10];
extern u16 dFTLinkAnimPoseAlly_joint21[8];
extern u16 dFTLinkAnimPoseAlly_joint23[8];
extern u16 dFTLinkAnimPoseAlly_joint25[8];
extern u16 dFTLinkAnimPoseAlly_joint26[12];
extern u16 dFTLinkAnimPoseAlly_joint28[30];

/* Joint pointer table (29 entries, 116 bytes) */
u32 dFTLinkAnimPoseAlly_joints[] = {
	(u32)dFTLinkAnimPoseAlly_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimPoseAlly_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimPoseAlly_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTLinkAnimPoseAlly_joint5, /* [4] joint 5 */
	(u32)dFTLinkAnimPoseAlly_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimPoseAlly_joint7, /* [6] joint 7 */
	(u32)dFTLinkAnimPoseAlly_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTLinkAnimPoseAlly_joint10, /* [9] joint 10 */
	(u32)dFTLinkAnimPoseAlly_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimPoseAlly_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTLinkAnimPoseAlly_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTLinkAnimPoseAlly_joint17, /* [16] joint 17 */
	(u32)dFTLinkAnimPoseAlly_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimPoseAlly_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTLinkAnimPoseAlly_joint21, /* [20] joint 21 */
	(u32)dFTLinkAnimPoseAlly_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTLinkAnimPoseAlly_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTLinkAnimPoseAlly_joint26, /* [25] joint 26 */
	(u32)dFTLinkAnimPoseAlly_joint28, /* [26] joint 28 */
	0x00000000, /* [27] NULL */
	0xFFFF0083, /* [28] END */
};

/* Joint 1 */
u16 dFTLinkAnimPoseAlly_joint1[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -268, 0, 996, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimPoseAlly_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 83, 0, 0, 0, -457, 0,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimPoseAlly_joint4[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 562, 3, 8, 0, 130, 0,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimPoseAlly_joint5[16] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -663, 0, -555, 0, -82, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -663, 0, -555, 0, -82, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimPoseAlly_joint6[12] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTLinkAnimPoseAlly_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 100, -50, 479, 226, 0, 0,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTLinkAnimPoseAlly_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 805, -300, 192, 95, 0, 0,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTLinkAnimPoseAlly_joint10[16] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 229, 0, 694, 0, 2630, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 229, 0, 694, 0, 2630, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimPoseAlly_joint11[12] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -940, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -940, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimPoseAlly_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 224, 0, 0,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTLinkAnimPoseAlly_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2487, -409, -464,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimPoseAlly_joint17[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -772, -28, 160, 0, 362, -56,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimPoseAlly_joint18[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 78, 1,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTLinkAnimPoseAlly_joint20[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 347, 22,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLinkAnimPoseAlly_joint21[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1827, -1840, 603,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTLinkAnimPoseAlly_joint23[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 841,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimPoseAlly_joint25[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -678, 69, 77,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTLinkAnimPoseAlly_joint26[12] = {
	ftAnimSetValRate(FT_ANIM_ROTY), 6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 206, 309,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 28 */
u16 dFTLinkAnimPoseAlly_joint28[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 435, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 435, 0,
	ftAnimEnd(),
	0x0000, 0x280A, 0xFE3F, 0x0000, 0xFF96, 0x0000, 0x4804, 0x0217, 0x200B, 0x0001, 0xFE3F, 0x0000, 0xFF96, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
