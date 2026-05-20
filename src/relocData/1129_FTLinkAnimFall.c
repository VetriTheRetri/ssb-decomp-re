/* AnimJoint data for relocData file 1129 (FTLinkAnimFall) */
/* 768 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimFall_joint1[16];
extern u16 dFTLinkAnimFall_joint2[12];
extern u16 dFTLinkAnimFall_joint4[12];
extern u16 dFTLinkAnimFall_joint5[26];
extern u16 dFTLinkAnimFall_joint6[16];
extern u16 dFTLinkAnimFall_joint9[8];
extern u16 dFTLinkAnimFall_joint10[26];
extern u16 dFTLinkAnimFall_joint11[20];
extern u16 dFTLinkAnimFall_joint12[8];
extern u16 dFTLinkAnimFall_joint13[8];
extern u16 dFTLinkAnimFall_joint16[8];
extern u16 dFTLinkAnimFall_joint17[8];
extern u16 dFTLinkAnimFall_joint18[8];
extern u16 dFTLinkAnimFall_joint20[14];
extern u16 dFTLinkAnimFall_joint21[26];
extern u16 dFTLinkAnimFall_joint23[14];
extern u16 dFTLinkAnimFall_joint25[26];
extern u16 dFTLinkAnimFall_joint26[26];
extern u16 dFTLinkAnimFall_joint28[16];
extern u16 dFTLinkAnimFall_joint29[28];

/* Joint pointer table (29 entries, 116 bytes) */
AObjEvent32 * dFTLinkAnimFall_joints[] = {
	(AObjEvent32 *)dFTLinkAnimFall_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTLinkAnimFall_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLinkAnimFall_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTLinkAnimFall_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTLinkAnimFall_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLinkAnimFall_joint9, /* [6] joint 9 */
	NULL, /* [7] NULL */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTLinkAnimFall_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTLinkAnimFall_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLinkAnimFall_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLinkAnimFall_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLinkAnimFall_joint16, /* [13] joint 16 */
	NULL, /* [14] NULL */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTLinkAnimFall_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTLinkAnimFall_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTLinkAnimFall_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTLinkAnimFall_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTLinkAnimFall_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTLinkAnimFall_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTLinkAnimFall_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTLinkAnimFall_joint28, /* [26] joint 28 */
	NULL, /* [27] NULL */
	(AObjEvent32 *)dFTLinkAnimFall_joint29, /* [28] joint 29 */
};

/* Joint 1 */
u16 dFTLinkAnimFall_joint1[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 744, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), 61,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 2 */
u16 dFTLinkAnimFall_joint2[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 32, 274, 83, 0, 0, 0,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimFall_joint4[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 259, 166, 56, 0, 130, 0,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimFall_joint5[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1311, 8, -1228, 9, 1864, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1319, -13, -1219, -12, 1851, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1311, -8, -1228, -9, 1864, 13,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimFall_joint6[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -430, -11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -442, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -430, 11,
	ftAnimLoop(0x6800, -30),
};

/* Joint 9 */
u16 dFTLinkAnimFall_joint9[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, 7, 76,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -14),
};

/* Joint 10 */
u16 dFTLinkAnimFall_joint10[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -906, 8, 1143, 14, -1175, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -898, -9, 1158, -18, -1164, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -906, -8, 1143, -14, -1175, -10,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimFall_joint11[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -444, 18,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -382, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -425, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -444, -18,
	ftAnimLoop(0x6800, -38),
};

/* Joint 12 */
u16 dFTLinkAnimFall_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -14),
};

/* Joint 13 */
u16 dFTLinkAnimFall_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -14),
};

/* Joint 16 */
u16 dFTLinkAnimFall_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1508, 346, -843,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -14),
};

/* Joint 17 */
u16 dFTLinkAnimFall_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -163, 0,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -14),
};

/* Joint 18 */
u16 dFTLinkAnimFall_joint18[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -199, 0,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -14),
};

/* Joint 20 */
u16 dFTLinkAnimFall_joint20[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 97,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 199,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 97,
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLinkAnimFall_joint21[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), -1590, 0, -1771, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), 895,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1590, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1771, 895,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1590, 0, -1771, 0, 895, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimFall_joint23[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 1036,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 1036,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1036, 0,
	ftAnimLoop(0x6800, -26),
};

/* Joint 25 */
u16 dFTLinkAnimFall_joint25[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 456, 0, -183, 0, 70, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 456, 0, -183, 0, 70, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 456, 0, -183, 0, 70, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimFall_joint26[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 355, 0, 246, 0, -155, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 355, 0, 246, 0, -155, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 355, 0, -155, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 246,
	ftAnimLoop(0x6800, -50),
};

/* Joint 28 */
u16 dFTLinkAnimFall_joint28[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 551,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 551, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 551, 0,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 29 */
u16 dFTLinkAnimFall_joint29[28] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -415, 0, -89, 0, 252, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -415, 0, -89, 0, 252, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -415, 0, -89, 0, 252, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
	0x0000, 0x0000,
};
