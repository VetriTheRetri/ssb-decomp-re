/* AnimJoint data for relocData file 1259 (FTKirbyAnimEggLay) */
/* 1072 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimEggLay_joint1[30];
extern u16 dFTKirbyAnimEggLay_joint2[12];
extern u16 dFTKirbyAnimEggLay_joint3[50];
extern u16 dFTKirbyAnimEggLay_joint5[14];
extern u16 dFTKirbyAnimEggLay_joint6[52];
extern u16 dFTKirbyAnimEggLay_joint7[24];
extern u16 dFTKirbyAnimEggLay_joint9[14];
extern u16 dFTKirbyAnimEggLay_joint10[52];
extern u16 dFTKirbyAnimEggLay_joint11[16];
extern u16 dFTKirbyAnimEggLay_joint13[12];
extern u16 dFTKirbyAnimEggLay_joint14[40];
extern u16 dFTKirbyAnimEggLay_joint16[20];
extern u16 dFTKirbyAnimEggLay_joint18[40];
extern u16 dFTKirbyAnimEggLay_joint19[52];
extern u16 dFTKirbyAnimEggLay_joint21[64];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimEggLay_joints[] = {
	(u32)dFTKirbyAnimEggLay_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimEggLay_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimEggLay_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimEggLay_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimEggLay_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimEggLay_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimEggLay_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimEggLay_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimEggLay_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimEggLay_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimEggLay_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimEggLay_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimEggLay_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimEggLay_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimEggLay_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	0xFFFF00F8, /* [21] END */
};

/* Joint 1 */
u16 dFTKirbyAnimEggLay_joint1[30] = {
	ftAnimSetValRate(FT_ANIM_TRAY), 600, 23,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 20), 720, 23,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 20), 720, -24,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 20), 600, -23,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 20), 600, 24,
	ftAnimLoop(0x6800, -58),
};

/* Joint 2 */
u16 dFTKirbyAnimEggLay_joint2[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -268, 0, 0, -312, 0,
	ftAnimBlock(0, 80),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimEggLay_joint3[50] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY), 0, -3, 4096, -8, 4096, 8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAZ), 0, 0, 0, 312, 0, 4096,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 40), 4096, 5, 4096, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 20), -89, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 40), 44, 1,
	ftAnimBlock(0, 20),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 30), 4300, 3891,
	ftAnimBlock(0, 20),
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 0, -3,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY, 10), 4096, -8, 4096, 8,
	ftAnimLoop(0x6800, -98),
};

/* Joint 5 */
u16 dFTKirbyAnimEggLay_joint5[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 80),
	ftAnimLoop(0x6800, -26),
};

/* Joint 6 */
u16 dFTKirbyAnimEggLay_joint6[52] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 0, -217, 0, 0, 1,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 64), -20, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 79), 805, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 38), -247, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -252, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 40), -219, 0,
	ftAnimBlock(0, 25),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -19, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -1, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, 0, -220, 0, 0, 1,
	ftAnimLoop(0x6800, -100),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimEggLay_joint7[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 43), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 35), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTKirbyAnimEggLay_joint9[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 80),
	ftAnimLoop(0x6800, -26),
};

/* Joint 10 */
u16 dFTKirbyAnimEggLay_joint10[52] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 0, 1391, 2, -1608, 1,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 64), -1628, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 79), 803, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 40), 1348, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1345, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 38), 1385, 4,
	ftAnimBlock(0, 23),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1628, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -1610, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, 0, 1391, 5, -1608, 1,
	ftAnimLoop(0x6800, -100),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimEggLay_joint11[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 79), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTKirbyAnimEggLay_joint13[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 80),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimEggLay_joint14[40] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -23, 0, -302, 1, 237, -1,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 79), -24, 0, -303, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 63), 240, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 241, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 238, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -23, 0, -302, 1, 237, -1,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimEggLay_joint16[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 73), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimLoop(0x6800, -38),
};

/* Joint 18 */
u16 dFTKirbyAnimEggLay_joint18[40] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1918, 1, 1785, -1, -1704, 3,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 79), -1919, 0, 1786, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 51), -1649, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1658, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), -1708, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1918, 0, 1785, 0, -1704, 3,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimEggLay_joint19[52] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 21, 1, 302, -1, 233, 2,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 65), 26, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 79), 303, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 47), 206, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 209, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 31), 238, -3,
	ftAnimBlock(0, 17),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 24, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), 24, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, -3, 302, 0, 233, -5,
	ftAnimLoop(0x6800, -100),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimEggLay_joint21[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 36), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 42), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimLoop(0x6800, -46),
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1298, -1, -1785, 1, -1708, 7,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 79), -1297, 0, -1786, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 57), -1694, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1699, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), -1708, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1298, 0, -1785, 0, -1708, 0,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};
