/* AnimJoint data for relocData file 1279 (FTKirbyAnimCrouchIdle) */
/* 1088 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimCrouchIdle_joint1[12];
extern u16 dFTKirbyAnimCrouchIdle_joint2[30];
extern u16 dFTKirbyAnimCrouchIdle_joint3[12];
extern u16 dFTKirbyAnimCrouchIdle_joint4[50];
extern u16 dFTKirbyAnimCrouchIdle_joint6[14];
extern u16 dFTKirbyAnimCrouchIdle_joint7[40];
extern u16 dFTKirbyAnimCrouchIdle_joint8[30];
extern u16 dFTKirbyAnimCrouchIdle_joint10[14];
extern u16 dFTKirbyAnimCrouchIdle_joint11[40];
extern u16 dFTKirbyAnimCrouchIdle_joint12[32];
extern u16 dFTKirbyAnimCrouchIdle_joint14[12];
extern u16 dFTKirbyAnimCrouchIdle_joint15[38];
extern u16 dFTKirbyAnimCrouchIdle_joint17[14];
extern u16 dFTKirbyAnimCrouchIdle_joint19[50];
extern u16 dFTKirbyAnimCrouchIdle_joint20[40];
extern u16 dFTKirbyAnimCrouchIdle_joint22[16];
extern u16 dFTKirbyAnimCrouchIdle_joint23[54];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTKirbyAnimCrouchIdle_joints[] = {
	(u32)dFTKirbyAnimCrouchIdle_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimCrouchIdle_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimCrouchIdle_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimCrouchIdle_joint4, /* [3] joint 4 */
	(u32)dFTKirbyAnimCrouchIdle_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTKirbyAnimCrouchIdle_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimCrouchIdle_joint8, /* [7] joint 8 */
	(u32)dFTKirbyAnimCrouchIdle_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTKirbyAnimCrouchIdle_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimCrouchIdle_joint12, /* [11] joint 12 */
	(u32)dFTKirbyAnimCrouchIdle_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTKirbyAnimCrouchIdle_joint15, /* [14] joint 15 */
	(u32)dFTKirbyAnimCrouchIdle_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTKirbyAnimCrouchIdle_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTKirbyAnimCrouchIdle_joint20, /* [19] joint 20 */
	(u32)dFTKirbyAnimCrouchIdle_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTKirbyAnimCrouchIdle_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTKirbyAnimCrouchIdle_joint1[12] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4915, 2048, 4915,
	ftAnimBlock(0, 32),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimCrouchIdle_joint2[30] = {
	ftAnimSetValRate(FT_ANIM_TRAY), 600, 59,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 8), 720, 59,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 8), 720, -60,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 8), 600, -59,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 8), 600, 60,
	ftAnimLoop(0x6800, -58),
};

/* Joint 3 */
u16 dFTKirbyAnimCrouchIdle_joint3[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -268, 0, 0, -312, 0,
	ftAnimBlock(0, 32),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTKirbyAnimCrouchIdle_joint4[50] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY), 0, -8, 4096, -20, 4096, 20,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAZ), 0, 0, 0, 240, 0, 4096,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 16), 4096, 14, 4096, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -89, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 44, 3,
	ftAnimBlock(0, 8),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 12), 4300, 3891,
	ftAnimBlock(0, 8),
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 0, -8,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY, 4), 4096, -20, 4096, 20,
	ftAnimLoop(0x6800, -98),
};

/* Joint 6 */
u16 dFTKirbyAnimCrouchIdle_joint6[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 32),
	ftAnimLoop(0x6800, -26),
};

/* Joint 7 */
u16 dFTKirbyAnimCrouchIdle_joint7[40] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -4, -239, 5, 0, 5,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 31), 807, -3, -3, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 15), -272, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -289, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 15), -250, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, -3, -242, 7, 0, 3,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTKirbyAnimCrouchIdle_joint8[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -43, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 21,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -6,
	ftAnimLoop(0x6800, -58),
};

/* Joint 10 */
u16 dFTKirbyAnimCrouchIdle_joint10[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 32),
	ftAnimLoop(0x6800, -26),
};

/* Joint 11 */
u16 dFTKirbyAnimCrouchIdle_joint11[40] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 4, 1365, 9, -1608, 5,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 31), 800, 3, -1612, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 15), 1332, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1318, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 15), 1358, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, 3, 1365, 7, -1608, 3,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTKirbyAnimCrouchIdle_joint12[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimCrouchIdle_joint14[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 32),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTKirbyAnimCrouchIdle_joint15[38] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1695, 3, -1305, -3, 1845, -4,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 31), -1697, 0, -1303, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 28), 1852,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1847, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1848, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1695, 2, -1305, -2, 1845, -2,
	ftAnimLoop(0x6800, -74),
};

/* Joint 17 */
u16 dFTKirbyAnimCrouchIdle_joint17[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 31), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimLoop(0x6800, -26),
};

/* Joint 19 */
u16 dFTKirbyAnimCrouchIdle_joint19[50] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1945, 5, 1723, -2, -1701, 10,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 27), -1953, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 31), 1725, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), -1657, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1678, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1708, 7,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -1954,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1949, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1945, 3, 1723, -1, -1701, 6,
	ftAnimLoop(0x6800, -98),
};

/* Joint 20 */
u16 dFTKirbyAnimCrouchIdle_joint20[40] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1693, -1, 1305, 4, 1841, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 31), 1695, -2, 1302, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), 1845, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1848, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1844, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1693, -2, 1305, 2, 1841, -2,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimCrouchIdle_joint22[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 31), 7, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTKirbyAnimCrouchIdle_joint23[54] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1271, -5, -1723, 2, -1705, 14,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 27), -1263, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 31), -1725, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), -1660, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1679, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1711, 5,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -1262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1267, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1271, -3, -1723, 1, -1705, 6,
	ftAnimLoop(0x6800, -98),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000,
};
