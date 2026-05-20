/* AnimJoint data for relocData file 489 (FTNMarioAnimPose1P) */
/* 688 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNMarioAnimPose1P_joint1[28];
extern u16 dFTNMarioAnimPose1P_joint2[10];
extern u16 dFTNMarioAnimPose1P_joint4[10];
extern u16 dFTNMarioAnimPose1P_joint5[24];
extern u16 dFTNMarioAnimPose1P_joint6[8];
extern u16 dFTNMarioAnimPose1P_joint7[8];
extern u16 dFTNMarioAnimPose1P_joint8[18];
extern u16 dFTNMarioAnimPose1P_joint10[8];
extern u16 dFTNMarioAnimPose1P_joint11[24];
extern u16 dFTNMarioAnimPose1P_joint12[16];
extern u16 dFTNMarioAnimPose1P_joint13[8];
extern u16 dFTNMarioAnimPose1P_joint15[8];
extern u16 dFTNMarioAnimPose1P_joint16[24];
extern u16 dFTNMarioAnimPose1P_joint18[8];
extern u16 dFTNMarioAnimPose1P_joint20[24];
extern u16 dFTNMarioAnimPose1P_joint21[24];
extern u16 dFTNMarioAnimPose1P_joint23[14];
extern u16 dFTNMarioAnimPose1P_joint24[30];

/* Joint pointer table (24 entries, 96 bytes) */
AObjEvent32 * dFTNMarioAnimPose1P_joints[] = {
	(AObjEvent32 *)dFTNMarioAnimPose1P_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTNMarioAnimPose1P_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTNMarioAnimPose1P_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTNMarioAnimPose1P_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTNMarioAnimPose1P_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTNMarioAnimPose1P_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTNMarioAnimPose1P_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTNMarioAnimPose1P_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTNMarioAnimPose1P_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTNMarioAnimPose1P_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTNMarioAnimPose1P_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTNMarioAnimPose1P_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTNMarioAnimPose1P_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTNMarioAnimPose1P_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTNMarioAnimPose1P_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTNMarioAnimPose1P_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTNMarioAnimPose1P_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTNMarioAnimPose1P_joint24, /* [23] joint 24 */
};

/* 4-byte alignment padding */
static u32 dFTNMarioAnimPose1P_pad[1] = { 0 };

/* Joint 1 */
u16 dFTNMarioAnimPose1P_joint1[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 625, 0, -4032, 2326, -2049,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 23808, 849, -6904, 960, 9159,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 625, 0, 1920, 600, 240,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNMarioAnimPose1P_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTNMarioAnimPose1P_joint4[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNMarioAnimPose1P_joint5[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 220, -612, -1087, 1227, -775, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -392, 0, 139, 0, -809, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 220, 612, -1087, -1227, -775, 34,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNMarioAnimPose1P_joint6[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTNMarioAnimPose1P_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTNMarioAnimPose1P_joint8[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -268, -446, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 134, -446, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -446, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTNMarioAnimPose1P_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTNMarioAnimPose1P_joint11[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -663, 0, 179, 0, -670, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -663, 0, 179, 0, -670, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -663, 0, 179, 0, -670, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNMarioAnimPose1P_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -440, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -440, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -440, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTNMarioAnimPose1P_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTNMarioAnimPose1P_joint15[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTNMarioAnimPose1P_joint16[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 437, -181, -5, -46, -901,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 437, 648, -186, -637, -948, -449,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1297, 860, -1457, -1270, -945, 2,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNMarioAnimPose1P_joint18[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTNMarioAnimPose1P_joint20[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 7, -666, 263, -462, 243, 306,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -659, -189, -198, -166, 550, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -371, 287, -68, 129, 36, -513,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNMarioAnimPose1P_joint21[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 168, -343, 235, 36, 18, -695,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -174, -113, 271, -32, -676, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -59, 115, 169, -101, -77, 599,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTNMarioAnimPose1P_joint23[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNMarioAnimPose1P_joint24[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 171, 212, 285, 0, 59, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 384, -116, 285, 91, 59, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -61, -446, 468, 183, 16, -43,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
