/* AnimJoint data for relocData file 2096 (FTPikachuAnimDamage) */
/* 496 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimDamage_joint1[14];
extern u16 dFTPikachuAnimDamage_joint2[10];
extern u16 dFTPikachuAnimDamage_joint3[10];
extern u16 dFTPikachuAnimDamage_joint5[8];
extern u16 dFTPikachuAnimDamage_joint6[16];
extern u16 dFTPikachuAnimDamage_joint7[16];
extern u16 dFTPikachuAnimDamage_joint8[10];
extern u16 dFTPikachuAnimDamage_joint9[10];
extern u16 dFTPikachuAnimDamage_joint10[10];
extern u16 dFTPikachuAnimDamage_joint11[10];
extern u16 dFTPikachuAnimDamage_joint13[8];
extern u16 dFTPikachuAnimDamage_joint14[8];
extern u16 dFTPikachuAnimDamage_joint16[8];
extern u16 dFTPikachuAnimDamage_joint17[8];
extern u16 dFTPikachuAnimDamage_joint19[8];
extern u16 dFTPikachuAnimDamage_joint21[8];
extern u16 dFTPikachuAnimDamage_joint22[8];
extern u16 dFTPikachuAnimDamage_joint24[8];
extern u16 dFTPikachuAnimDamage_joint25[8];
extern u16 dFTPikachuAnimDamage_joint26[10];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTPikachuAnimDamage_joints[] = {
	(u32)dFTPikachuAnimDamage_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimDamage_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimDamage_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimDamage_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPikachuAnimDamage_joint6, /* [5] joint 6 */
	(u32)dFTPikachuAnimDamage_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimDamage_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimDamage_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimDamage_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimDamage_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimDamage_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPikachuAnimDamage_joint14, /* [13] joint 14 */
	(u32)dFTPikachuAnimDamage_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPikachuAnimDamage_joint17, /* [16] joint 17 */
	(u32)dFTPikachuAnimDamage_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPikachuAnimDamage_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPikachuAnimDamage_joint22, /* [21] joint 22 */
	(u32)dFTPikachuAnimDamage_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTPikachuAnimDamage_joint25, /* [24] joint 25 */
	(u32)dFTPikachuAnimDamage_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTPikachuAnimDamage_joint1[14] = {
	ftAnimSetVal(FT_ANIM_TRAY | FT_ANIM_TRAZ), 840, 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 840, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTPikachuAnimDamage_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 107, 0, 0, -215, -117,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimDamage_joint3[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 298, 24,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPikachuAnimDamage_joint5[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 324, 0, 313,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTPikachuAnimDamage_joint6[16] = {
	ftAnimSetValRate(FT_ANIM_ROTY), -258, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 804, -847,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -258, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -258, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTPikachuAnimDamage_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTPikachuAnimDamage_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -134, 0, 0, 0, 181, 136,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimDamage_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -107, -804, -570, 72, 540,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimDamage_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 402, 0, 0, 255, 354, 43,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimDamage_joint11[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 402, 0, 0, -255, 354, 43,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPikachuAnimDamage_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -324, -90, 313,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTPikachuAnimDamage_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -1857, 960,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTPikachuAnimDamage_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -10,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTPikachuAnimDamage_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1516, -1596, 1293,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTPikachuAnimDamage_joint19[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 837,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTPikachuAnimDamage_joint21[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1924, -1438, 1715,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTPikachuAnimDamage_joint22[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 212, 139, -631,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTPikachuAnimDamage_joint24[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 780,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTPikachuAnimDamage_joint25[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1614, -1781, 2052,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTPikachuAnimDamage_joint26[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -214, 0, 0, 0, -180, -360,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};
