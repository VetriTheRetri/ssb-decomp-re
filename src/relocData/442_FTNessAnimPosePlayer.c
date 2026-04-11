/* AnimJoint data for relocData file 442 (FTNessAnimPosePlayer) */
/* 544 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimPosePlayer_joint1[18];
extern u16 dFTNessAnimPosePlayer_joint2[8];
extern u16 dFTNessAnimPosePlayer_joint4[10];
extern u16 dFTNessAnimPosePlayer_joint5[16];
extern u16 dFTNessAnimPosePlayer_joint6[12];
extern u16 dFTNessAnimPosePlayer_joint7[18];
extern u16 dFTNessAnimPosePlayer_joint8[10];
extern u16 dFTNessAnimPosePlayer_joint10[10];
extern u16 dFTNessAnimPosePlayer_joint11[8];
extern u16 dFTNessAnimPosePlayer_joint12[8];
extern u16 dFTNessAnimPosePlayer_joint13[18];
extern u16 dFTNessAnimPosePlayer_joint15[10];
extern u16 dFTNessAnimPosePlayer_joint16[8];
extern u16 dFTNessAnimPosePlayer_joint18[8];
extern u16 dFTNessAnimPosePlayer_joint19[8];
extern u16 dFTNessAnimPosePlayer_joint21[10];
extern u16 dFTNessAnimPosePlayer_joint22[8];
extern u16 dFTNessAnimPosePlayer_joint24[8];
extern u16 dFTNessAnimPosePlayer_joint25[24];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTNessAnimPosePlayer_joints[] = {
	(u32)dFTNessAnimPosePlayer_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimPosePlayer_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimPosePlayer_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTNessAnimPosePlayer_joint5, /* [4] joint 5 */
	(u32)dFTNessAnimPosePlayer_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimPosePlayer_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimPosePlayer_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimPosePlayer_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTNessAnimPosePlayer_joint11, /* [10] joint 11 */
	(u32)dFTNessAnimPosePlayer_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimPosePlayer_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimPosePlayer_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTNessAnimPosePlayer_joint16, /* [15] joint 16 */
	(u32)dFTNessAnimPosePlayer_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTNessAnimPosePlayer_joint19, /* [18] joint 19 */
	(u32)dFTNessAnimPosePlayer_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTNessAnimPosePlayer_joint22, /* [21] joint 22 */
	(u32)dFTNessAnimPosePlayer_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTNessAnimPosePlayer_joint25, /* [24] joint 25 */
	0xFFFF0080, /* [25] END */
};

/* Joint 1 */
u16 dFTNessAnimPosePlayer_joint1[18] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 420, -43, 174, 13,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 218, 135, 60, -18,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 420, -43, 174, 13,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTNessAnimPosePlayer_joint2[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 181, -360, 8,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTNessAnimPosePlayer_joint4[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 48, 0, 0, 0, 0,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimPosePlayer_joint5[16] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -580, 0, -1250, 0, 285, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -580, 0, -1250, 0, 285, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimPosePlayer_joint6[12] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -347, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -347, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTNessAnimPosePlayer_joint7[18] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 49, 0, 128, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -285, 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 49, 0, 128, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTNessAnimPosePlayer_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -461, -366, 119, 0, 300, 0,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTNessAnimPosePlayer_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 97, 191, 248, 0, 0, 0,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimPosePlayer_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2313, 540, 16,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTNessAnimPosePlayer_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -1163,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTNessAnimPosePlayer_joint13[18] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 915, 4, -104, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 6, 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 915, 4, -104, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTNessAnimPosePlayer_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 938, -935, 681, 75, 64, 48,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimPosePlayer_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1750, -1262, -2697,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTNessAnimPosePlayer_joint18[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 652,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTNessAnimPosePlayer_joint19[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1699, 1769, -1453,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTNessAnimPosePlayer_joint21[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -536, 163, 206, 126, -82, -12,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimPosePlayer_joint22[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -36, 227, -84,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTNessAnimPosePlayer_joint24[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 7,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTNessAnimPosePlayer_joint25[24] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 238, 94, -130,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000, 0x50EE, 0xFF40, 0x0000, 0x0000, 0xFF82, 0xFFAE, 0xFFF4, 0x0801, 0x0001, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
