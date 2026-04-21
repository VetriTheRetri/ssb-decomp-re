/* AnimJoint data for relocData file 1375 (FTKirbyAnimJabLoopStart) */
/* 1184 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimJabLoopStart_joint1[20];
extern u16 dFTKirbyAnimJabLoopStart_joint2[10];
extern u16 dFTKirbyAnimJabLoopStart_joint3[32];
extern u16 dFTKirbyAnimJabLoopStart_joint5[46];
extern u16 dFTKirbyAnimJabLoopStart_joint6[82];
extern u16 dFTKirbyAnimJabLoopStart_joint7[14];
extern u16 dFTKirbyAnimJabLoopStart_joint9[42];
extern u16 dFTKirbyAnimJabLoopStart_joint10[74];
extern u16 dFTKirbyAnimJabLoopStart_joint11[16];
extern u16 dFTKirbyAnimJabLoopStart_joint13[10];
extern u16 dFTKirbyAnimJabLoopStart_joint14[60];
extern u16 dFTKirbyAnimJabLoopStart_joint16[8];
extern u16 dFTKirbyAnimJabLoopStart_joint18[48];
extern u16 dFTKirbyAnimJabLoopStart_joint19[34];
extern u16 dFTKirbyAnimJabLoopStart_joint21[16];
extern u16 dFTKirbyAnimJabLoopStart_joint22[36];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimJabLoopStart_joints[] = {
	(u32)dFTKirbyAnimJabLoopStart_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimJabLoopStart_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimJabLoopStart_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimJabLoopStart_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimJabLoopStart_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimJabLoopStart_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimJabLoopStart_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimJabLoopStart_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimJabLoopStart_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimJabLoopStart_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimJabLoopStart_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimJabLoopStart_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimJabLoopStart_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimJabLoopStart_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimJabLoopStart_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTKirbyAnimJabLoopStart_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimJabLoopStart_joint1[20] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 600, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 600, -240,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 660, 360,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimJabLoopStart_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -268, 0, 0, -312, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimJabLoopStart_joint3[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 312, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), -178, 11, -89, 67, 3891, 102, 4505, 102, 3891, -204,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 89, 536, 4505, 4505, 3276,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTKirbyAnimJabLoopStart_joint5[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -120, -160, 0, -80,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 6), 357,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -178, 44,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 3), -120,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, -95, -120, 95, -60, 191,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 0, -51,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 357, -180, -60, 120,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimJabLoopStart_joint6[82] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -27, -217, -127, 0, -8,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 3), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 776, -426, -344, -329, -8, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -48, -552, -876, -336, 274, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -334, -43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1038, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 57, -112,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 50, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 124, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -415, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -357, 293, -1174, -197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 171, 251, -1434, 44, -251, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 145, -26, -1084, 349, -43, 207,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTKirbyAnimJabLoopStart_joint7[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTKirbyAnimJabLoopStart_joint9[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -178, 67, 0, 33,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 60, 240, -60, -80, 60, 80,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -60, 95, 60, -383,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 3), 180,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 536, 268, 60, 0, -180,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimJabLoopStart_joint10[74] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2412, 20, 1391, -88, -1608, 4,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 3), 3072,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2273, 88,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 930, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1664, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1879, -180,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2159, -668, -2024, -787,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3610, -847, 858, 69, -3454, -829,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3855, -222, 1070, 440, -3683, 577,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4055, 342, 1740, -44, -2300, 355,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3170, 885, 982, -758, -2973, -672,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimJabLoopStart_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimJabLoopStart_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimJabLoopStart_joint14[60] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -23, -25, -302, -28, 237, -29,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -511, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -117, 34, -137, -277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -42, 36, -451, -243,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -95, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -469, 35, -623, -109,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -411, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -670, 243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -378, -126, -136, 428,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -348, 29, -205, 206, 186, 322,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimJabLoopStart_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTKirbyAnimJabLoopStart_joint18[48] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -309, -13, -176, 21, -96, -13,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -86, 52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -55, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -253, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -190, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -164, -59, -39, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -308, -49, 1, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -263, 45, -86, -30, 103, 101,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimJabLoopStart_joint19[34] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 21, 4, 302, -1, 233, 5,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 386, 67, 262, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 7, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -82, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -255, -173, 442, 56, 335, 72,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimJabLoopStart_joint21[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTKirbyAnimJabLoopStart_joint22[36] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1298, -3, -1785, 5, -1708, -1,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -1330, 13, -1710, -43, -1743, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1307, -105, -1803, 68, -1644, 398,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1541, -233, -1572, 230, -945, 698,
	ftAnimEnd(),
};
