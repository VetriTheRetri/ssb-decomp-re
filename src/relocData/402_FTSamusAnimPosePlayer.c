/* AnimJoint data for relocData file 402 (FTSamusAnimPosePlayer) */
/* 416 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimPosePlayer_joint1[10];
extern u16 dFTSamusAnimPosePlayer_joint2[10];
extern u16 dFTSamusAnimPosePlayer_joint4[10];
extern u16 dFTSamusAnimPosePlayer_joint5[12];
extern u16 dFTSamusAnimPosePlayer_joint6[8];
extern u16 dFTSamusAnimPosePlayer_joint7[8];
extern u16 dFTSamusAnimPosePlayer_joint8[10];
extern u16 dFTSamusAnimPosePlayer_joint11[8];
extern u16 dFTSamusAnimPosePlayer_joint12[8];
extern u16 dFTSamusAnimPosePlayer_joint14[8];
extern u16 dFTSamusAnimPosePlayer_joint15[8];
extern u16 dFTSamusAnimPosePlayer_joint17[8];
extern u16 dFTSamusAnimPosePlayer_joint19[8];
extern u16 dFTSamusAnimPosePlayer_joint20[16];
extern u16 dFTSamusAnimPosePlayer_joint22[30];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTSamusAnimPosePlayer_joints[] = {
	(u32)dFTSamusAnimPosePlayer_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimPosePlayer_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimPosePlayer_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimPosePlayer_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimPosePlayer_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimPosePlayer_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimPosePlayer_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimPosePlayer_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimPosePlayer_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimPosePlayer_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimPosePlayer_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimPosePlayer_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimPosePlayer_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimPosePlayer_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimPosePlayer_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	0xFFFF005F, /* [22] END */
};

/* Joint 1 */
u16 dFTSamusAnimPosePlayer_joint1[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 379, 0, 0, 0, 1600, 0,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimPosePlayer_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -548, -222, 336, -200, -83, 0,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTSamusAnimPosePlayer_joint4[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 121, 101, 57, 36, 6, 11,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimPosePlayer_joint5[12] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1638, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), -1819, -1629,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1638, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTSamusAnimPosePlayer_joint6[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -965,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimPosePlayer_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -788, 73, -155,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimPosePlayer_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimPosePlayer_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2, 14, -9,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTSamusAnimPosePlayer_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1806, -1973, 1242,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTSamusAnimPosePlayer_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -1185,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimPosePlayer_joint15[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -233, 0, 108,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTSamusAnimPosePlayer_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 69,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimPosePlayer_joint19[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1727, -1403, 1684,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTSamusAnimPosePlayer_joint20[16] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1758, 0, 1386, 0, 1808, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1759, 0, 1386, 0, 1810, 2,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimPosePlayer_joint22[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 4, -4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimEnd(),
	0x0000, 0x200E, 0xFA72, 0x0000, 0xF935, 0x0000, 0x0687, 0x0002, 0x200F, 0x0001, 0xFA72, 0x0000, 0xF935, 0x0000, 0x0689, 0x0002, 0x0000, 0x0000, 0x0000,
};
