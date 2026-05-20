/* AnimJoint data for relocData file 497 (FTNPikachuAnimPose1P) */
/* 768 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNPikachuAnimPose1P_joint1[32];
extern u16 dFTNPikachuAnimPose1P_joint2[10];
extern u16 dFTNPikachuAnimPose1P_joint3[20];
extern u16 dFTNPikachuAnimPose1P_joint5[10];
extern u16 dFTNPikachuAnimPose1P_joint6[24];
extern u16 dFTNPikachuAnimPose1P_joint7[14];
extern u16 dFTNPikachuAnimPose1P_joint11[18];
extern u16 dFTNPikachuAnimPose1P_joint13[10];
extern u16 dFTNPikachuAnimPose1P_joint14[24];
extern u16 dFTNPikachuAnimPose1P_joint16[14];
extern u16 dFTNPikachuAnimPose1P_joint17[24];
extern u16 dFTNPikachuAnimPose1P_joint19[14];
extern u16 dFTNPikachuAnimPose1P_joint21[24];
extern u16 dFTNPikachuAnimPose1P_joint22[24];
extern u16 dFTNPikachuAnimPose1P_joint24[16];
extern u16 dFTNPikachuAnimPose1P_joint25[26];
extern u16 dFTNPikachuAnimPose1P_joint26[26];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTNPikachuAnimPose1P_joints[] = {
	(AObjEvent32 *)dFTNPikachuAnimPose1P_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTNPikachuAnimPose1P_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTNPikachuAnimPose1P_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTNPikachuAnimPose1P_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTNPikachuAnimPose1P_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTNPikachuAnimPose1P_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTNPikachuAnimPose1P_joint11, /* [7] joint 11 */
	NULL, /* [8] NULL */
	NULL, /* [9] NULL */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTNPikachuAnimPose1P_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTNPikachuAnimPose1P_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTNPikachuAnimPose1P_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTNPikachuAnimPose1P_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTNPikachuAnimPose1P_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTNPikachuAnimPose1P_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTNPikachuAnimPose1P_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTNPikachuAnimPose1P_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTNPikachuAnimPose1P_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTNPikachuAnimPose1P_joint26, /* [25] joint 26 */
};

/* 4-byte alignment padding */
static u32 dFTNPikachuAnimPose1P_pad[1] = { 0 };

/* Joint 1 */
u16 dFTNPikachuAnimPose1P_joint1[32] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 266, 0, 0, -2663, 866, 1812,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 210, -133, 376, -268, -5857, 18332, 2413, -1065, 232, -2448,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -83,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, -536, 0, 1920, 600, 1200,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTNPikachuAnimPose1P_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, -215, -117,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTNPikachuAnimPose1P_joint3[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 296, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 298, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 0, -148, 120, 60,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 0, 120,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTNPikachuAnimPose1P_joint5[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 328, 0, 202,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNPikachuAnimPose1P_joint6[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 238, 602, 124, -531, -40, -922,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 840, 286, -406, -93, -963, -444,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 810, -30, -62, 343, -929, 34,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNPikachuAnimPose1P_joint7[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 10,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNPikachuAnimPose1P_joint11[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -508, 393, -446,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 254, 178, -107, 0, 223,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 178, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNPikachuAnimPose1P_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -306, 104, 160,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTNPikachuAnimPose1P_joint14[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1346, -417, 1747, -609, 988, -496,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 929, -208, 1137, -304, 491, -248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 929, 0, 1137, 0, 491, 0,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNPikachuAnimPose1P_joint16[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTNPikachuAnimPose1P_joint17[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1483, -33, -954, -261, -1882, -766,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1450, 0, -1216, 0, -2649, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1483, 33, -954, 261, -1882, 766,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTNPikachuAnimPose1P_joint19[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1038, -363,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 674,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1038, 363,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNPikachuAnimPose1P_joint21[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1096, 258, -1876, -90, 1340, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1355, 0, -1967, 0, 1524, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1096, -258, -1876, 90, 1340, -183,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNPikachuAnimPose1P_joint22[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1637, 95, 1509, 143, -2058, -739,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1542, 0, 1652, 0, -2797, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1637, -95, 1509, -143, -2058, 739,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNPikachuAnimPose1P_joint24[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1174, -480,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 694, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1174, 480,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTNPikachuAnimPose1P_joint25[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2012, -548, -1776, -28, 1211, 254,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1804, 0, 1465, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 1463,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2012, 548, -1776, 28, 1211, -254,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTNPikachuAnimPose1P_joint26[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 167, 286, 2, -165, -107, -409,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 0, 9, -185, -380,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 167, 286, 2, -165, -107, -409,
	ftAnimEnd(),
	0x0000, 0x0000,
};
