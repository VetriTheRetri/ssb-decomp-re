/* AnimJoint data for relocData file 2112 (FTBossAnimPointStart) */
/* 1648 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTBossAnimPointStart_joint1[24];
extern u16 dFTBossAnimPointStart_joint3[38];
extern u16 dFTBossAnimPointStart_joint4[28];
extern u16 dFTBossAnimPointStart_joint5[32];
extern u16 dFTBossAnimPointStart_joint7[44];
extern u16 dFTBossAnimPointStart_joint8[100];
extern u16 dFTBossAnimPointStart_joint10[38];
extern u16 dFTBossAnimPointStart_joint11[80];
extern u16 dFTBossAnimPointStart_joint12[38];
extern u16 dFTBossAnimPointStart_joint14[38];
extern u16 dFTBossAnimPointStart_joint15[34];
extern u16 dFTBossAnimPointStart_joint16[24];
extern u16 dFTBossAnimPointStart_joint17[24];
extern u16 dFTBossAnimPointStart_joint19[18];
extern u16 dFTBossAnimPointStart_joint20[56];
extern u16 dFTBossAnimPointStart_joint21[24];
extern u16 dFTBossAnimPointStart_joint23[24];
extern u16 dFTBossAnimPointStart_joint24[58];
extern u16 dFTBossAnimPointStart_joint25[24];
extern u16 dFTBossAnimPointStart_joint26[26];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTBossAnimPointStart_joints[] = {
	(AObjEvent32 *)dFTBossAnimPointStart_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTBossAnimPointStart_joint3, /* [1] joint 3 */
	NULL, /* [2] NULL */
	(AObjEvent32 *)dFTBossAnimPointStart_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTBossAnimPointStart_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTBossAnimPointStart_joint7, /* [5] joint 7 */
	NULL, /* [6] NULL */
	(AObjEvent32 *)dFTBossAnimPointStart_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTBossAnimPointStart_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTBossAnimPointStart_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTBossAnimPointStart_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTBossAnimPointStart_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTBossAnimPointStart_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTBossAnimPointStart_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTBossAnimPointStart_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTBossAnimPointStart_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTBossAnimPointStart_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTBossAnimPointStart_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTBossAnimPointStart_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTBossAnimPointStart_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTBossAnimPointStart_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTBossAnimPointStart_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTBossAnimPointStart_joint1[24] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 3000, 2080,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 10), 3900,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 3000, -3120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTBossAnimPointStart_joint3[38] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 600, -1200,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 25), -600,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 1200, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 15), 1200,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 10), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 10), -1200,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 3960,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -600, 3960, -1200,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTBossAnimPointStart_joint4[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -982,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -1251, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -1251, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -402, 56,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -402,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTBossAnimPointStart_joint5[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -536, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -536, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -446, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 0, 44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTBossAnimPointStart_joint7[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 683, -1280, 155, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 178, 178, 178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 178, 178, 178,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 0, -17, 0, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 178, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 178, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTBossAnimPointStart_joint8[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -696, -10, -1177, -35, -1273, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1045, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -653, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -1589, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1589, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1589, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1045, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1153, -65,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -653, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -710, -4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1563, 52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1096, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1213, -46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1245, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -701, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -397, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -516, -102, -1125, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -625, 0, -1175, -1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1244, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -625, 0, -1175, 0, -1244, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTBossAnimPointStart_joint10[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -178, -27,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -536, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -536, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -536, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -489, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -10, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -33, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 0, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTBossAnimPointStart_joint11[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1549, -4, -67, 4, 370, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 1523, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -50, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 804, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 804, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 804, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 804, -55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -113, -51,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1546, 29,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 12), 1608,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -64, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 0, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -112, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -89, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -89, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 89, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 0, -89,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 1608,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTBossAnimPointStart_joint12[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -187, -43,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -577, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -577, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -577, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -525, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -30, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -30, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 8), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTBossAnimPointStart_joint14[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -214, -63,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -840, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -840, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -840, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -840, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -9, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 8), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTBossAnimPointStart_joint15[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -9, -2, 1633, -1, -1426, 56,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 29), -26, 0, 1611, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -867, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -867, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), -868, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -26, 0, 1611, 0, -868, 0,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTBossAnimPointStart_joint16[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -390, -31,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -676, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -676, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), -676, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -676, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTBossAnimPointStart_joint17[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -348, -40,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -753, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -753, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), -753, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -753, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTBossAnimPointStart_joint19[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -44,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, -99, -2025, 512, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), -178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 25), -178,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTBossAnimPointStart_joint20[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -14, 1581, -2, -1600, 74,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1427, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -863, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -863, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), -864, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1427, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 1427, 0,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4, 0, 1427, 0, -864, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTBossAnimPointStart_joint21[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -421, -28,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -678, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -678, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), -678, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -678, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTBossAnimPointStart_joint23[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -384, -36,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -751, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -751, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), -751, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -751, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTBossAnimPointStart_joint24[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 33, -6, -1691, -4, -1408, 60,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), 106, 0, -1777, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -827, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -737, 44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -737, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 106, 0, -1777, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 19), 106, 0, -1778, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -737, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -738, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 106, 0, -1778, 0, -738, 0,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTBossAnimPointStart_joint25[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -196, -39,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -529, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -529, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), -529, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -529, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTBossAnimPointStart_joint26[26] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -227, -63,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -866, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -866, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), -866, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -866, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000,
};
