/* AnimJoint data for relocData file 378 (FTFoxAnimPose1Frame) */
/* 496 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimPose1Frame_joint1[10];
extern u16 dFTFoxAnimPose1Frame_joint2[10];
extern u16 dFTFoxAnimPose1Frame_joint4[10];
extern u16 dFTFoxAnimPose1Frame_joint5[16];
extern u16 dFTFoxAnimPose1Frame_joint6[12];
extern u16 dFTFoxAnimPose1Frame_joint7[10];
extern u16 dFTFoxAnimPose1Frame_joint8[10];
extern u16 dFTFoxAnimPose1Frame_joint10[10];
extern u16 dFTFoxAnimPose1Frame_joint11[8];
extern u16 dFTFoxAnimPose1Frame_joint12[8];
extern u16 dFTFoxAnimPose1Frame_joint15[10];
extern u16 dFTFoxAnimPose1Frame_joint16[16];
extern u16 dFTFoxAnimPose1Frame_joint18[12];
extern u16 dFTFoxAnimPose1Frame_joint20[14];
extern u16 dFTFoxAnimPose1Frame_joint21[8];
extern u16 dFTFoxAnimPose1Frame_joint23[8];
extern u16 dFTFoxAnimPose1Frame_joint24[8];
extern u16 dFTFoxAnimPose1Frame_joint25[16];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTFoxAnimPose1Frame_joints[] = {
	(AObjEvent32 *)dFTFoxAnimPose1Frame_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTFoxAnimPose1Frame_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTFoxAnimPose1Frame_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTFoxAnimPose1Frame_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTFoxAnimPose1Frame_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTFoxAnimPose1Frame_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTFoxAnimPose1Frame_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTFoxAnimPose1Frame_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTFoxAnimPose1Frame_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTFoxAnimPose1Frame_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTFoxAnimPose1Frame_joint15, /* [12] joint 15 */
	NULL, /* [13] NULL */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTFoxAnimPose1Frame_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTFoxAnimPose1Frame_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTFoxAnimPose1Frame_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTFoxAnimPose1Frame_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTFoxAnimPose1Frame_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTFoxAnimPose1Frame_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTFoxAnimPose1Frame_joint25, /* [24] joint 25 */
};

/* 4-byte alignment padding */
static u32 dFTFoxAnimPose1Frame_pad[1] = { 0 };

/* Joint 1 */
u16 dFTFoxAnimPose1Frame_joint1[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 996, 0,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimPose1Frame_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 46, 76, 16, 0, 0, 0,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTFoxAnimPose1Frame_joint4[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -136, -100, -5, 0, 0, 0,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimPose1Frame_joint5[16] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2783, 0, 415, 0, -475, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2783, 0, 415, 0, -475, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimPose1Frame_joint6[12] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -248, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -248, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTFoxAnimPose1Frame_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimPose1Frame_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 307, -322, -60, 0, 336, 0,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTFoxAnimPose1Frame_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimPose1Frame_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -749, -174, -440,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTFoxAnimPose1Frame_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -507,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTFoxAnimPose1Frame_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 272, 0, 0,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimPose1Frame_joint16[16] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 65, 0, 113, 0, 2, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 65, 0, 113, 0, 2, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimPose1Frame_joint18[12] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 5, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimPose1Frame_joint20[14] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 68, 0, 13, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), -602,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 68, 0, 13, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimPose1Frame_joint21[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -866, 362, -120,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTFoxAnimPose1Frame_joint23[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimPose1Frame_joint24[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1430, 425, 1109,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTFoxAnimPose1Frame_joint25[16] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 358, 300, 122, -7, -361, -75,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
