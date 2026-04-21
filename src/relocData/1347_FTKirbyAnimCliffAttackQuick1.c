/* AnimJoint data for relocData file 1347 (FTKirbyAnimCliffAttackQuick1) */
/* 912 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimCliffAttackQuick1_joint1[16];
extern u16 dFTKirbyAnimCliffAttackQuick1_joint2[42];
extern u16 dFTKirbyAnimCliffAttackQuick1_joint3[10];
extern u16 dFTKirbyAnimCliffAttackQuick1_joint4[20];
extern u16 dFTKirbyAnimCliffAttackQuick1_joint6[36];
extern u16 dFTKirbyAnimCliffAttackQuick1_joint7[28];
extern u16 dFTKirbyAnimCliffAttackQuick1_joint8[16];
extern u16 dFTKirbyAnimCliffAttackQuick1_joint10[36];
extern u16 dFTKirbyAnimCliffAttackQuick1_joint11[28];
extern u16 dFTKirbyAnimCliffAttackQuick1_joint12[16];
extern u16 dFTKirbyAnimCliffAttackQuick1_joint14[10];
extern u16 dFTKirbyAnimCliffAttackQuick1_joint15[28];
extern u16 dFTKirbyAnimCliffAttackQuick1_joint17[14];
extern u16 dFTKirbyAnimCliffAttackQuick1_joint19[36];
extern u16 dFTKirbyAnimCliffAttackQuick1_joint20[28];
extern u16 dFTKirbyAnimCliffAttackQuick1_joint22[8];
extern u16 dFTKirbyAnimCliffAttackQuick1_joint23[38];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTKirbyAnimCliffAttackQuick1_joints[] = {
	(u32)dFTKirbyAnimCliffAttackQuick1_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimCliffAttackQuick1_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimCliffAttackQuick1_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimCliffAttackQuick1_joint4, /* [3] joint 4 */
	(u32)dFTKirbyAnimCliffAttackQuick1_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTKirbyAnimCliffAttackQuick1_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimCliffAttackQuick1_joint8, /* [7] joint 8 */
	(u32)dFTKirbyAnimCliffAttackQuick1_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTKirbyAnimCliffAttackQuick1_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimCliffAttackQuick1_joint12, /* [11] joint 12 */
	(u32)dFTKirbyAnimCliffAttackQuick1_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTKirbyAnimCliffAttackQuick1_joint15, /* [14] joint 15 */
	(u32)dFTKirbyAnimCliffAttackQuick1_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTKirbyAnimCliffAttackQuick1_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTKirbyAnimCliffAttackQuick1_joint20, /* [19] joint 20 */
	(u32)dFTKirbyAnimCliffAttackQuick1_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTKirbyAnimCliffAttackQuick1_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTKirbyAnimCliffAttackQuick1_joint1[16] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 840, 384, -480, 528,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 3), 0, 1152,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimCliffAttackQuick1_joint2[42] = {
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAY), 1608, 189, 600, 480,
	ftAnimSetValBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValT(FT_ANIM_TRAZ, 2), -67,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 9), 3216,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 816, 2393,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 1198, 2122,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 2122,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -183,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 2), -31, 293,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 1346, 129,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimCliffAttackQuick1_joint3[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, -312, 0,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTKirbyAnimCliffAttackQuick1_joint4[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAZ), -268, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 312, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 9), 0, 29, 0, 68,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimCliffAttackQuick1_joint6[36] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -26, -357, 36, 178, 31, 0, -56, -120, -56, -120, 84,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 9), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 178, 12, 178, -12, -120, -34, -120, 68, 0, 68,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTKirbyAnimCliffAttackQuick1_joint7[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 994, -10, -1301, 3, 193, -38,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 964, -23, -1305, -4, 118, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 937, -26, -1306, -1, 73, -45,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTKirbyAnimCliffAttackQuick1_joint8[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimCliffAttackQuick1_joint10[36] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -26, 357, -36, -178, -31, 0, 56, -120, -56, -120, 90,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 9), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), -178, -12, -178, 12, 120, 34, -120, 68, 0, 68,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimCliffAttackQuick1_joint11[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2602, 10, 306, 3, -1414, -39,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -2573, 23, 302, -4, -1490, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2546, 27, 301, -1, -1535, -45,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTKirbyAnimCliffAttackQuick1_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTKirbyAnimCliffAttackQuick1_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTKirbyAnimCliffAttackQuick1_joint15[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 60, -145, -329, 136, -4, 194,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -111, -4, -76, 60, 296, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -92, 19, -72, 4, 291, -5,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTKirbyAnimCliffAttackQuick1_joint17[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimCliffAttackQuick1_joint19[36] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1728, 90, -1806, 69, -945, -147,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1563, 25, -1699, 25, -1135, -47,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 2), 6144,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 7), 6144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1587, -23, -1686, 12, -1187, -51,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTKirbyAnimCliffAttackQuick1_joint20[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1550, -19, 1279, 8, 1608, -49,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1499, -19, 1305, 32, 1461, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1492, -7, 1352, 47, 1348, -112,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimCliffAttackQuick1_joint22[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTKirbyAnimCliffAttackQuick1_joint23[38] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 120, 49, -197, 39, 666, -93,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 6144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 232, 35, -64, 82, 392, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 240, 8, 6, 71, 285, -106,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
