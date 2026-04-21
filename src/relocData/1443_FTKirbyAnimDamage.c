/* AnimJoint data for relocData file 1443 (FTKirbyAnimDamage) */
/* 480 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimDamage_joint1[34];
extern u16 dFTKirbyAnimDamage_joint2[12];
extern u16 dFTKirbyAnimDamage_joint3[12];
extern u16 dFTKirbyAnimDamage_joint5[12];
extern u16 dFTKirbyAnimDamage_joint6[20];
extern u16 dFTKirbyAnimDamage_joint7[16];
extern u16 dFTKirbyAnimDamage_joint9[12];
extern u16 dFTKirbyAnimDamage_joint10[8];
extern u16 dFTKirbyAnimDamage_joint13[8];
extern u16 dFTKirbyAnimDamage_joint14[8];
extern u16 dFTKirbyAnimDamage_joint16[8];
extern u16 dFTKirbyAnimDamage_joint18[8];
extern u16 dFTKirbyAnimDamage_joint19[16];
extern u16 dFTKirbyAnimDamage_joint21[8];
extern u16 dFTKirbyAnimDamage_joint22[14];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimDamage_joints[] = {
	(u32)dFTKirbyAnimDamage_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimDamage_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimDamage_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimDamage_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimDamage_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimDamage_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimDamage_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimDamage_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimDamage_joint13, /* [10] joint 13 */
	0x00000000, /* [11] NULL */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimDamage_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimDamage_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimDamage_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimDamage_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimDamage_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTKirbyAnimDamage_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimDamage_joint1[34] = {
	ftAnimSetVal(FT_ANIM_TRAY | FT_ANIM_TRAZ), 600, 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 804, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 600, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 720, 120,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 720, 120,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 840, -120,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 840, -120,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 600, 0,
	ftAnimLoop(0x6800, -66),
};

/* Joint 2 */
u16 dFTKirbyAnimDamage_joint2[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, -312, 0,
	ftAnimBlock(0, 15),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimDamage_joint3[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 312, 0,
	ftAnimBlock(0, 15),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTKirbyAnimDamage_joint5[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -240, 0, 0,
	ftAnimBlock(0, 15),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimDamage_joint6[20] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -1150, 3, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 804,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -1150, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1147, 3, 0, 0,
	ftAnimLoop(0x6800, -36),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimDamage_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 14), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTKirbyAnimDamage_joint9[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 240, 0, 0,
	ftAnimBlock(0, 15),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimDamage_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 457, -1608,
	ftAnimBlock(0, 15),
	ftAnimLoop(0x6800, -14),
};

/* Joint 13 */
u16 dFTKirbyAnimDamage_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -6,
	ftAnimBlock(0, 15),
	ftAnimLoop(0x6800, -14),
};

/* Joint 14 */
u16 dFTKirbyAnimDamage_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 199, -424, -259,
	ftAnimBlock(0, 15),
	ftAnimLoop(0x6800, -14),
};

/* Joint 16 */
u16 dFTKirbyAnimDamage_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 15),
	ftAnimLoop(0x6800, -14),
};

/* Joint 18 */
u16 dFTKirbyAnimDamage_joint18[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1919, 2212, -1483,
	ftAnimBlock(0, 15),
	ftAnimLoop(0x6800, -14),
};

/* Joint 19 */
u16 dFTKirbyAnimDamage_joint19[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -199,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 424, -259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), -199, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -199, 0,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimDamage_joint21[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 15),
	ftAnimLoop(0x6800, -14),
};

/* Joint 22 */
u16 dFTKirbyAnimDamage_joint22[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1297, -2212, 1733,
	ftAnimBlock(0, 15),
	ftAnimLoop(0x6800, -14),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
