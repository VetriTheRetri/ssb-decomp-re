/* AnimJoint data for relocData file 423 (FTKirbyAnimUnknown) */
/* 1248 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimUnknown_joint1[14];
extern u16 dFTKirbyAnimUnknown_joint2[14];
extern u16 dFTKirbyAnimUnknown_joint3[20];
extern u16 dFTKirbyAnimUnknown_joint5[32];
extern u16 dFTKirbyAnimUnknown_joint6[128];
extern u16 dFTKirbyAnimUnknown_joint7[16];
extern u16 dFTKirbyAnimUnknown_joint9[32];
extern u16 dFTKirbyAnimUnknown_joint10[128];
extern u16 dFTKirbyAnimUnknown_joint11[16];
extern u16 dFTKirbyAnimUnknown_joint13[12];
extern u16 dFTKirbyAnimUnknown_joint14[26];
extern u16 dFTKirbyAnimUnknown_joint16[16];
extern u16 dFTKirbyAnimUnknown_joint18[40];
extern u16 dFTKirbyAnimUnknown_joint19[26];
extern u16 dFTKirbyAnimUnknown_joint21[16];
extern u16 dFTKirbyAnimUnknown_joint22[44];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimUnknown_joints[] = {
	(u32)dFTKirbyAnimUnknown_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimUnknown_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimUnknown_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimUnknown_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimUnknown_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimUnknown_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimUnknown_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimUnknown_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimUnknown_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimUnknown_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimUnknown_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimUnknown_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimUnknown_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimUnknown_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimUnknown_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTKirbyAnimUnknown_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimUnknown_joint1[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 600, 0, 6144, 6144, 6144,
	ftAnimBlock(0, 30),
	ftAnimLoop(0x6800, -26),
};

/* Joint 2 */
u16 dFTKirbyAnimUnknown_joint2[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, -268, 0, 0, -312, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 30),
	ftAnimLoop(0x6800, -26),
};

/* Joint 3 */
u16 dFTKirbyAnimUnknown_joint3[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -89, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 27), 0,
	ftAnimLoop(0x6800, -38),
};

/* Joint 5 */
u16 dFTKirbyAnimUnknown_joint5[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX), 89, -180,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -178, -26,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 3), -180,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -178, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 7), -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX, 20), 89, -180,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimUnknown_joint6[128] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2412, -38, -446, 0, -1608, 41,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 2304, 3072, 3072,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 2390, 20, -1584, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -525, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -591, -65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -743, 30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2416, 83, -1613, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2557, 714, -1755, -716,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3846, 693, -3046, -694,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3944, 62, -3145, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3971, 23, -718, 24, -3172, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -734, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 4068, 55, -3258, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4148, 390, -3336, -388,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 5477, 355, -4665, -356,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -782, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -407, 35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 5559, 53, -4749, -56,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 5628, 1, -4824, -1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -386, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -403, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5629, 0, -443, -39, -4825, 0,
	ftAnimLoop(0x6800, -252),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimUnknown_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimLoop(0x6800, -30),
};

/* Joint 9 */
u16 dFTKirbyAnimUnknown_joint9[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX), -89, 180,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 178, 26,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 3), 180,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 178, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 7), 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX, 20), -89, 180,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimUnknown_joint10[128] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -808, 38, 1165, -3, 0, 41,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 2304, 3072, 3072,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -786, -20, 24, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 1086, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1020, -69,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 862, 30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -812, -73, -4, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -932, -714, -126, -716,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2241, -702, -1436, -703,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2337, -63, -1533, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2368, -25, 890, 25, -1564, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 873, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -2466, -55, -1651, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2545, -353, -1728, -351,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -3879, -390, -3062, -392,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 825, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1201, 35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3954, -51, -3139, -53,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), -4024, -1, -3216, -1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1224, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 1207, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4025, 0, 1165, -42, -3216, 0,
	ftAnimLoop(0x6800, -252),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimUnknown_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 13 */
u16 dFTKirbyAnimUnknown_joint13[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 30),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimUnknown_joint14[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 33, 8, -208, 2, 651, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), 33, -1, -208, 0, 650, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 32, -1, -208, 0, 655, 4,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimUnknown_joint16[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTKirbyAnimUnknown_joint18[40] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1820, 1, 1735, -12, -1579, 52,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 2457, 2457, 2457,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 29), -1821, 0, 1734, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1329, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1318, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), -1577, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1820, 0, 1735, 0, -1576, 1,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimUnknown_joint19[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -33, -8, 208, -2, 651, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), -33, 1, 208, 0, 650, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -32, 1, 208, 0, 655, 4,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimUnknown_joint21[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimUnknown_joint22[44] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1820, -1, -1735, 12, -1579, 52,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 2457, 2457, 2457,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 29), 1821, 0, -1734, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1325, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1315, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), -1571, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1577, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1820, 0, -1735, 0, -1576, 1,
	ftAnimLoop(0x6800, -84),
	ftAnimEnd(),
};
