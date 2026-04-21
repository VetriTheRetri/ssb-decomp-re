/* AnimJoint data for relocData file 1400 (FTKirbyAnimChargePunchGround) */
/* 1136 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimChargePunchGround_joint1[22];
extern u16 dFTKirbyAnimChargePunchGround_joint2[14];
extern u16 dFTKirbyAnimChargePunchGround_joint3[28];
extern u16 dFTKirbyAnimChargePunchGround_joint5[32];
extern u16 dFTKirbyAnimChargePunchGround_joint6[56];
extern u16 dFTKirbyAnimChargePunchGround_joint7[16];
extern u16 dFTKirbyAnimChargePunchGround_joint9[84];
extern u16 dFTKirbyAnimChargePunchGround_joint10[92];
extern u16 dFTKirbyAnimChargePunchGround_joint11[16];
extern u16 dFTKirbyAnimChargePunchGround_joint13[12];
extern u16 dFTKirbyAnimChargePunchGround_joint14[30];
extern u16 dFTKirbyAnimChargePunchGround_joint16[16];
extern u16 dFTKirbyAnimChargePunchGround_joint18[30];
extern u16 dFTKirbyAnimChargePunchGround_joint19[30];
extern u16 dFTKirbyAnimChargePunchGround_joint21[16];
extern u16 dFTKirbyAnimChargePunchGround_joint22[30];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimChargePunchGround_joints[] = {
	(u32)dFTKirbyAnimChargePunchGround_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimChargePunchGround_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimChargePunchGround_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimChargePunchGround_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimChargePunchGround_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimChargePunchGround_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimChargePunchGround_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimChargePunchGround_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimChargePunchGround_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimChargePunchGround_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimChargePunchGround_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimChargePunchGround_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimChargePunchGround_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimChargePunchGround_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimChargePunchGround_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTKirbyAnimChargePunchGround_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimChargePunchGround_joint1[22] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 600, -119, -240, -59,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 12), -240, 274,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 12), 600,
	ftAnimLoop(0x6800, -42),
};

/* Joint 2 */
u16 dFTKirbyAnimChargePunchGround_joint2[14] = {
	ftAnimSetValRate(FT_ANIM_ROTY), 0, 13,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 12), 0,
	ftAnimLoop(0x6800, -26),
};

/* Joint 3 */
u16 dFTKirbyAnimChargePunchGround_joint3[28] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), -178, -8, -178, -8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 312, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 12), -178, 31, -178, 38, 4096, 117, 4096, -58, 4096, -58,
	ftAnimLoop(0x6800, -54),
};

/* Joint 5 */
u16 dFTKirbyAnimChargePunchGround_joint5[32] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -357, -17, 223, 11, -30, 74, -90, -14, -150, -44,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 12), -357, 51, 223, -15, -30, -34, -150, 188,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 12), -90,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimChargePunchGround_joint6[56] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -329, -53, 2176, 0, 73, 24,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 2270, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -106, 155, -228, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 47, 114, -379, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 48, -149, -353, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -156, -171, -137, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -293, -89, 13, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -334, -40, 2174, -95, 79, 65,
	ftAnimLoop(0x6800, -108),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimChargePunchGround_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 11), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTKirbyAnimChargePunchGround_joint9[84] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 114, -268, -19, -268, -19, 60, 160, -120, -120, 150, 160,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -268, -268,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1608, 268,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 120, 180, -90, 120, 120, -180,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 150, 120, -60, 240,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), 60,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 180, -59, 30, 119, 120, 299,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 3216, 201, -268, 67, -268, 67,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 120, -299, 0, -179, 210, 119,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 30, -120, -60, -240, 180, -120,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 60, 400, -120, -80, 150, -320,
	ftAnimLoop(0x6800, -166),
};

/* Joint 10 */
u16 dFTKirbyAnimChargePunchGround_joint10[92] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2640, -87, 1109, -95, -198, -241,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 903, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2552, -238, -439, -452,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2163, -405, -1103, -705,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1742, -202, -1850, -511,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1759, 24, 935, 40, -2127, -317,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1148, 56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 2009, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -2798, -234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2953, -148,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -3471, -67,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1185, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1064, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2059, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2356, 290, -3445, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2640, 284, 1108, 44, -3415, 30,
	ftAnimLoop(0x6800, -180),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimChargePunchGround_joint11[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTKirbyAnimChargePunchGround_joint13[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 12),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimChargePunchGround_joint14[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 927, 57, -244, 11, -666, -25,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 967, -35, -240, -5, -693, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 927, -40, -244, -4, -666, 26,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimChargePunchGround_joint16[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimLoop(0x6800, -30),
};

/* Joint 18 */
u16 dFTKirbyAnimChargePunchGround_joint18[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2971, -38, 2121, -46, -343, 41,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -2997, 20, 2089, 28, -310, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2971, 25, 2121, 31, -343, -32,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimChargePunchGround_joint19[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -3, 0, -7, 368, 12,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -8, 7, -8, 7, 359, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 8, 0, 8, 372, 12,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimChargePunchGround_joint21[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimLoop(0x6800, -30),
};

/* Joint 22 */
u16 dFTKirbyAnimChargePunchGround_joint22[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1524, -28, -2128, -2, -1920, -41,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -1533, 9, -2108, -15, -1936, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1524, 9, -2128, -19, -1916, 20,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
};
