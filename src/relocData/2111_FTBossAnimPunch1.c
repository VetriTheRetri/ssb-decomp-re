/* AnimJoint data for relocData file 2111 (FTBossAnimPunch1) */
/* 496 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTBossAnimPunch1_joint1[8];
extern u16 dFTBossAnimPunch1_joint3[14];
extern u16 dFTBossAnimPunch1_joint4[14];
extern u16 dFTBossAnimPunch1_joint5[14];
extern u16 dFTBossAnimPunch1_joint7[14];
extern u16 dFTBossAnimPunch1_joint8[8];
extern u16 dFTBossAnimPunch1_joint10[8];
extern u16 dFTBossAnimPunch1_joint11[8];
extern u16 dFTBossAnimPunch1_joint12[8];
extern u16 dFTBossAnimPunch1_joint14[8];
extern u16 dFTBossAnimPunch1_joint15[8];
extern u16 dFTBossAnimPunch1_joint16[8];
extern u16 dFTBossAnimPunch1_joint17[8];
extern u16 dFTBossAnimPunch1_joint19[14];
extern u16 dFTBossAnimPunch1_joint20[8];
extern u16 dFTBossAnimPunch1_joint21[8];
extern u16 dFTBossAnimPunch1_joint23[8];
extern u16 dFTBossAnimPunch1_joint24[8];
extern u16 dFTBossAnimPunch1_joint25[8];
extern u16 dFTBossAnimPunch1_joint26[14];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTBossAnimPunch1_joints[] = {
	(u32)dFTBossAnimPunch1_joint1, /* [0] joint 1 */
	(u32)dFTBossAnimPunch1_joint3, /* [1] joint 3 */
	0x00000000, /* [2] NULL */
	(u32)dFTBossAnimPunch1_joint4, /* [3] joint 4 */
	(u32)dFTBossAnimPunch1_joint5, /* [4] joint 5 */
	(u32)dFTBossAnimPunch1_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTBossAnimPunch1_joint8, /* [7] joint 8 */
	(u32)dFTBossAnimPunch1_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTBossAnimPunch1_joint11, /* [10] joint 11 */
	(u32)dFTBossAnimPunch1_joint12, /* [11] joint 12 */
	(u32)dFTBossAnimPunch1_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTBossAnimPunch1_joint15, /* [14] joint 15 */
	(u32)dFTBossAnimPunch1_joint16, /* [15] joint 16 */
	(u32)dFTBossAnimPunch1_joint17, /* [16] joint 17 */
	(u32)dFTBossAnimPunch1_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTBossAnimPunch1_joint20, /* [19] joint 20 */
	(u32)dFTBossAnimPunch1_joint21, /* [20] joint 21 */
	(u32)dFTBossAnimPunch1_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTBossAnimPunch1_joint24, /* [23] joint 24 */
	(u32)dFTBossAnimPunch1_joint25, /* [24] joint 25 */
	(u32)dFTBossAnimPunch1_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTBossAnimPunch1_joint1[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -14),
};

/* Joint 3 */
u16 dFTBossAnimPunch1_joint3[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, -600, 3960, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -26),
};

/* Joint 4 */
u16 dFTBossAnimPunch1_joint4[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 804, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -26),
};

/* Joint 5 */
u16 dFTBossAnimPunch1_joint5[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -178, 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -26),
};

/* Joint 7 */
u16 dFTBossAnimPunch1_joint7[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 178, 178, 178, 683, -1280, 155, 4096, 4096, 4096,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -26),
};

/* Joint 8 */
u16 dFTBossAnimPunch1_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -653, -1589, -1045,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -14),
};

/* Joint 10 */
u16 dFTBossAnimPunch1_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -536,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -14),
};

/* Joint 11 */
u16 dFTBossAnimPunch1_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1519, 0, 804,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -14),
};

/* Joint 12 */
u16 dFTBossAnimPunch1_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -577,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -14),
};

/* Joint 14 */
u16 dFTBossAnimPunch1_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -840,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -14),
};

/* Joint 15 */
u16 dFTBossAnimPunch1_joint15[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -26, -1605, -867,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -14),
};

/* Joint 16 */
u16 dFTBossAnimPunch1_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -676,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -14),
};

/* Joint 17 */
u16 dFTBossAnimPunch1_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -753,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -14),
};

/* Joint 19 */
u16 dFTBossAnimPunch1_joint19[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, -178, 0, -99, -2025, 512, 4096, 4096, 4096,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -26),
};

/* Joint 20 */
u16 dFTBossAnimPunch1_joint20[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, -1789, 2353,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -14),
};

/* Joint 21 */
u16 dFTBossAnimPunch1_joint21[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -678,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -14),
};

/* Joint 23 */
u16 dFTBossAnimPunch1_joint23[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -751,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -14),
};

/* Joint 24 */
u16 dFTBossAnimPunch1_joint24[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 106, -1777, 2479,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -14),
};

/* Joint 25 */
u16 dFTBossAnimPunch1_joint25[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -529,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -14),
};

/* Joint 26 */
u16 dFTBossAnimPunch1_joint26[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -866,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -14),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
