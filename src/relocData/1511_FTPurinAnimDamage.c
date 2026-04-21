/* AnimJoint data for relocData file 1511 (FTPurinAnimDamage) */
/* 368 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPurinAnimDamage_joint1[14];
extern u16 dFTPurinAnimDamage_joint2[10];
extern u16 dFTPurinAnimDamage_joint5[10];
extern u16 dFTPurinAnimDamage_joint6[16];
extern u16 dFTPurinAnimDamage_joint9[12];
extern u16 dFTPurinAnimDamage_joint10[16];
extern u16 dFTPurinAnimDamage_joint13[12];
extern u16 dFTPurinAnimDamage_joint14[8];
extern u16 dFTPurinAnimDamage_joint16[8];
extern u16 dFTPurinAnimDamage_joint18[8];
extern u16 dFTPurinAnimDamage_joint19[8];
extern u16 dFTPurinAnimDamage_joint21[8];
extern u16 dFTPurinAnimDamage_joint22[8];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTPurinAnimDamage_joints[] = {
	(u32)dFTPurinAnimDamage_joint1, /* [0] joint 1 */
	(u32)dFTPurinAnimDamage_joint2, /* [1] joint 2 */
	(u32)dFTPurinAnimDamage_joint5, /* [2] joint 5 */
	0x00000000, /* [3] NULL */
	0x00000000, /* [4] NULL */
	(u32)dFTPurinAnimDamage_joint6, /* [5] joint 6 */
	(u32)dFTPurinAnimDamage_joint9, /* [6] joint 9 */
	0x00000000, /* [7] NULL */
	0x00000000, /* [8] NULL */
	(u32)dFTPurinAnimDamage_joint10, /* [9] joint 10 */
	(u32)dFTPurinAnimDamage_joint13, /* [10] joint 13 */
	0x00000000, /* [11] NULL */
	0x00000000, /* [12] NULL */
	(u32)dFTPurinAnimDamage_joint14, /* [13] joint 14 */
	(u32)dFTPurinAnimDamage_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPurinAnimDamage_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTPurinAnimDamage_joint19, /* [18] joint 19 */
	(u32)dFTPurinAnimDamage_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPurinAnimDamage_joint22, /* [21] joint 22 */
};

/* 4-byte alignment padding */
static u32 dFTPurinAnimDamage_pad[1] = { 0 };

/* Joint 1 */
u16 dFTPurinAnimDamage_joint1[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -402, 580, -303, 0, 728, 0,
	ftAnimSetValAfterBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 728, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTPurinAnimDamage_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, -312, 0,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPurinAnimDamage_joint5[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 312, 0,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPurinAnimDamage_joint6[16] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 673, 0, -369, 0, -563, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 673, 0, -369, 0, -563, 0,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPurinAnimDamage_joint9[12] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTPurinAnimDamage_joint10[16] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -154, 0, 671, 0, -152, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -154, 0, 671, 0, -152, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPurinAnimDamage_joint13[12] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -83, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -83, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTPurinAnimDamage_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1055, -271, -473,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTPurinAnimDamage_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTPurinAnimDamage_joint18[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -572, 1181, -477,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTPurinAnimDamage_joint19[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1428, 360, -440,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTPurinAnimDamage_joint21[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 7,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTPurinAnimDamage_joint22[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1275, -205, 1212,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};
