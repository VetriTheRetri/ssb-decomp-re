/* AnimJoint data for relocData file 467 (FTLuigiAnimPosePlayer) */
/* 480 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLuigiAnimPosePlayer_joint1[10];
extern u16 dFTLuigiAnimPosePlayer_joint2[10];
extern u16 dFTLuigiAnimPosePlayer_joint4[10];
extern u16 dFTLuigiAnimPosePlayer_joint5[14];
extern u16 dFTLuigiAnimPosePlayer_joint6[12];
extern u16 dFTLuigiAnimPosePlayer_joint7[8];
extern u16 dFTLuigiAnimPosePlayer_joint8[10];
extern u16 dFTLuigiAnimPosePlayer_joint10[10];
extern u16 dFTLuigiAnimPosePlayer_joint11[8];
extern u16 dFTLuigiAnimPosePlayer_joint12[12];
extern u16 dFTLuigiAnimPosePlayer_joint13[8];
extern u16 dFTLuigiAnimPosePlayer_joint15[8];
extern u16 dFTLuigiAnimPosePlayer_joint16[16];
extern u16 dFTLuigiAnimPosePlayer_joint18[8];
extern u16 dFTLuigiAnimPosePlayer_joint20[16];
extern u16 dFTLuigiAnimPosePlayer_joint21[8];
extern u16 dFTLuigiAnimPosePlayer_joint23[8];
extern u16 dFTLuigiAnimPosePlayer_joint24[14];

/* Joint pointer table (24 entries, 96 bytes) */
AObjEvent32 * dFTLuigiAnimPosePlayer_joints[] = {
	(AObjEvent32 *)dFTLuigiAnimPosePlayer_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTLuigiAnimPosePlayer_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLuigiAnimPosePlayer_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTLuigiAnimPosePlayer_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTLuigiAnimPosePlayer_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLuigiAnimPosePlayer_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTLuigiAnimPosePlayer_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTLuigiAnimPosePlayer_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTLuigiAnimPosePlayer_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLuigiAnimPosePlayer_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLuigiAnimPosePlayer_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLuigiAnimPosePlayer_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTLuigiAnimPosePlayer_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTLuigiAnimPosePlayer_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTLuigiAnimPosePlayer_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTLuigiAnimPosePlayer_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTLuigiAnimPosePlayer_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTLuigiAnimPosePlayer_joint24, /* [23] joint 24 */
};

/* 4-byte alignment padding */
static u32 dFTLuigiAnimPosePlayer_pad[1] = { 0 };

/* Joint 1 */
u16 dFTLuigiAnimPosePlayer_joint1[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 0, 0, 600, 0,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLuigiAnimPosePlayer_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLuigiAnimPosePlayer_joint4[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLuigiAnimPosePlayer_joint5[14] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 1982, 0, -1289, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), -770,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1982, 0, -1289, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLuigiAnimPosePlayer_joint6[12] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -459, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -459, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTLuigiAnimPosePlayer_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -55, -19, -95,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTLuigiAnimPosePlayer_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 360, 0,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTLuigiAnimPosePlayer_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 156, -18,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLuigiAnimPosePlayer_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -505, 847, -3036,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLuigiAnimPosePlayer_joint12[12] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -536, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -536, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLuigiAnimPosePlayer_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -93, 115, 189,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTLuigiAnimPosePlayer_joint15[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTLuigiAnimPosePlayer_joint16[16] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2241, 0, -928, 0, 1432, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2241, 0, -928, 0, 1432, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLuigiAnimPosePlayer_joint18[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 650,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTLuigiAnimPosePlayer_joint20[16] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -79, 0, 295, 0, 65, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -79, 0, 295, 0, 65, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLuigiAnimPosePlayer_joint21[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 612, 677, -189,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTLuigiAnimPosePlayer_joint23[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 629,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTLuigiAnimPosePlayer_joint24[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1645, 1925, -1489,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
