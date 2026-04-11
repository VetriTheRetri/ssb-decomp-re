/* AnimJoint data for relocData file 2114 (FTBossAnimPoint) */
/* 496 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTBossAnimPoint_joint1[8];
extern u16 dFTBossAnimPoint_joint3[14];
extern u16 dFTBossAnimPoint_joint4[14];
extern u16 dFTBossAnimPoint_joint5[14];
extern u16 dFTBossAnimPoint_joint7[14];
extern u16 dFTBossAnimPoint_joint8[8];
extern u16 dFTBossAnimPoint_joint10[8];
extern u16 dFTBossAnimPoint_joint11[8];
extern u16 dFTBossAnimPoint_joint12[8];
extern u16 dFTBossAnimPoint_joint14[8];
extern u16 dFTBossAnimPoint_joint15[8];
extern u16 dFTBossAnimPoint_joint16[8];
extern u16 dFTBossAnimPoint_joint17[8];
extern u16 dFTBossAnimPoint_joint19[14];
extern u16 dFTBossAnimPoint_joint20[8];
extern u16 dFTBossAnimPoint_joint21[8];
extern u16 dFTBossAnimPoint_joint23[8];
extern u16 dFTBossAnimPoint_joint24[8];
extern u16 dFTBossAnimPoint_joint25[22];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTBossAnimPoint_joints[] = {
	(u32)dFTBossAnimPoint_joint1, /* [0] joint 1 */
	(u32)dFTBossAnimPoint_joint3, /* [1] joint 3 */
	0x00000000, /* [2] NULL */
	(u32)dFTBossAnimPoint_joint4, /* [3] joint 4 */
	(u32)dFTBossAnimPoint_joint5, /* [4] joint 5 */
	(u32)dFTBossAnimPoint_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTBossAnimPoint_joint8, /* [7] joint 8 */
	(u32)dFTBossAnimPoint_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTBossAnimPoint_joint11, /* [10] joint 11 */
	(u32)dFTBossAnimPoint_joint12, /* [11] joint 12 */
	(u32)dFTBossAnimPoint_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTBossAnimPoint_joint15, /* [14] joint 15 */
	(u32)dFTBossAnimPoint_joint16, /* [15] joint 16 */
	(u32)dFTBossAnimPoint_joint17, /* [16] joint 17 */
	(u32)dFTBossAnimPoint_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTBossAnimPoint_joint20, /* [19] joint 20 */
	(u32)dFTBossAnimPoint_joint21, /* [20] joint 21 */
	(u32)dFTBossAnimPoint_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTBossAnimPoint_joint24, /* [23] joint 24 */
	(u32)dFTBossAnimPoint_joint25, /* [24] joint 25 */
	0xFFFF0075, /* [25] END */
};

/* Joint 1 */
u16 dFTBossAnimPoint_joint1[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimBlock(0, 2),
	ftAnimLoop(0x6800, -14),
};

/* Joint 3 */
u16 dFTBossAnimPoint_joint3[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, -600, 3960, -1200, 4096, 4096, 4096,
	ftAnimBlock(0, 2),
	ftAnimLoop(0x6800, -26),
};

/* Joint 4 */
u16 dFTBossAnimPoint_joint4[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -402, 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 2),
	ftAnimLoop(0x6800, -26),
};

/* Joint 5 */
u16 dFTBossAnimPoint_joint5[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 2),
	ftAnimLoop(0x6800, -26),
};

/* Joint 7 */
u16 dFTBossAnimPoint_joint7[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 178, 0, 683, -1280, 155, 4096, 4096, 4096,
	ftAnimBlock(0, 2),
	ftAnimLoop(0x6800, -26),
};

/* Joint 8 */
u16 dFTBossAnimPoint_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -625, -1175, -1244,
	ftAnimBlock(0, 2),
	ftAnimLoop(0x6800, -14),
};

/* Joint 10 */
u16 dFTBossAnimPoint_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 2),
	ftAnimLoop(0x6800, -14),
};

/* Joint 11 */
u16 dFTBossAnimPoint_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, 0, 0,
	ftAnimBlock(0, 2),
	ftAnimLoop(0x6800, -14),
};

/* Joint 12 */
u16 dFTBossAnimPoint_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 2),
	ftAnimLoop(0x6800, -14),
};

/* Joint 14 */
u16 dFTBossAnimPoint_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 2),
	ftAnimLoop(0x6800, -14),
};

/* Joint 15 */
u16 dFTBossAnimPoint_joint15[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -26, 1611, -868,
	ftAnimBlock(0, 2),
	ftAnimLoop(0x6800, -14),
};

/* Joint 16 */
u16 dFTBossAnimPoint_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -676,
	ftAnimBlock(0, 2),
	ftAnimLoop(0x6800, -14),
};

/* Joint 17 */
u16 dFTBossAnimPoint_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -753,
	ftAnimBlock(0, 2),
	ftAnimLoop(0x6800, -14),
};

/* Joint 19 */
u16 dFTBossAnimPoint_joint19[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, -178, 0, -99, -2025, 512, 4096, 4096, 4096,
	ftAnimBlock(0, 2),
	ftAnimLoop(0x6800, -26),
};

/* Joint 20 */
u16 dFTBossAnimPoint_joint20[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, 1427, -864,
	ftAnimBlock(0, 2),
	ftAnimLoop(0x6800, -14),
};

/* Joint 21 */
u16 dFTBossAnimPoint_joint21[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -678,
	ftAnimBlock(0, 2),
	ftAnimLoop(0x6800, -14),
};

/* Joint 23 */
u16 dFTBossAnimPoint_joint23[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -751,
	ftAnimBlock(0, 2),
	ftAnimLoop(0x6800, -14),
};

/* Joint 24 */
u16 dFTBossAnimPoint_joint24[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 106, -1778, -738,
	ftAnimBlock(0, 2),
	ftAnimLoop(0x6800, -14),
};

/* Joint 25 */
u16 dFTBossAnimPoint_joint25[22] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -529,
	ftAnimBlock(0, 2),
	ftAnimLoop(0x6800, -14),
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -866,
	ftAnimBlock(0, 2),
	ftAnimLoop(0x6800, -14),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
