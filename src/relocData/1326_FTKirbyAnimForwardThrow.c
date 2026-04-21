/* AnimJoint data for relocData file 1326 (FTKirbyAnimForwardThrow) */
/* 2064 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimForwardThrow_joint1[22];
extern u16 dFTKirbyAnimForwardThrow_joint2[60];
extern u16 dFTKirbyAnimForwardThrow_joint3[10];
extern u16 dFTKirbyAnimForwardThrow_joint4[30];
extern u16 dFTKirbyAnimForwardThrow_joint6[48];
extern u16 dFTKirbyAnimForwardThrow_joint7[120];
extern u16 dFTKirbyAnimForwardThrow_joint8[22];
extern u16 dFTKirbyAnimForwardThrow_joint10[48];
extern u16 dFTKirbyAnimForwardThrow_joint11[120];
extern u16 dFTKirbyAnimForwardThrow_joint12[16];
extern u16 dFTKirbyAnimForwardThrow_joint14[10];
extern u16 dFTKirbyAnimForwardThrow_joint15[64];
extern u16 dFTKirbyAnimForwardThrow_joint17[24];
extern u16 dFTKirbyAnimForwardThrow_joint19[98];
extern u16 dFTKirbyAnimForwardThrow_joint20[64];
extern u16 dFTKirbyAnimForwardThrow_joint22[22];
extern u16 dFTKirbyAnimForwardThrow_joint23[140];
extern u16 dFTKirbyAnimForwardThrow_joint24[66];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTKirbyAnimForwardThrow_joints[] = {
	(u32)dFTKirbyAnimForwardThrow_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimForwardThrow_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimForwardThrow_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimForwardThrow_joint4, /* [3] joint 4 */
	(u32)dFTKirbyAnimForwardThrow_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTKirbyAnimForwardThrow_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimForwardThrow_joint8, /* [7] joint 8 */
	(u32)dFTKirbyAnimForwardThrow_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTKirbyAnimForwardThrow_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimForwardThrow_joint12, /* [11] joint 12 */
	(u32)dFTKirbyAnimForwardThrow_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTKirbyAnimForwardThrow_joint15, /* [14] joint 15 */
	(u32)dFTKirbyAnimForwardThrow_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTKirbyAnimForwardThrow_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTKirbyAnimForwardThrow_joint20, /* [19] joint 20 */
	(u32)dFTKirbyAnimForwardThrow_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTKirbyAnimForwardThrow_joint23, /* [22] joint 23 */
	(u32)dFTKirbyAnimForwardThrow_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTKirbyAnimForwardThrow_joint1[22] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 10), 30000, 800,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 20), 30000, -6400,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 10), 0, -24000,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimForwardThrow_joint2[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 600, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 10), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 300, 4915, 2048, 4915,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 600, 3891, 4915, 3891,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 39), 600,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 3891, 4915, 3891,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1072, 111,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 25), 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 15), 1608,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), 1608,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimForwardThrow_joint3[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, -312, 0,
	ftAnimBlock(0, 45),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTKirbyAnimForwardThrow_joint4[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -402,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), -402,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -357,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), -536,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), -536,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimForwardThrow_joint6[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -357, 0, 0, -180,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, -357, 0, 0, -180,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -178, -178, -625, 120, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 39), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 9), -178, -178, -625, 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 20), 0, -357, -357, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 10), 0, -357, -357, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTKirbyAnimForwardThrow_joint7[120] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2374, 39, -482, 3, 2380, -55,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -2077, 29, -393, 32, 1909, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2080, 405, -371, -327, 1863, 219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1266, 404, -1048, -337, 2348, 245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1271, -2, -1046, 1, 2354, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 2141, -65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), -1123, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -1158, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1119, 43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -714, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2070, -81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 827, -3,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -686, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -437, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1136, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1163, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 827, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 827, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -437, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -435, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -432, 2, -1161, 2, 824, -3,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTKirbyAnimForwardThrow_joint8[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 38), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimForwardThrow_joint10[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 357, 0, 0, -180,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 357, 0, 0, -180,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -178, 178, 625, 120, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 39), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 9), -178, 178, 625, 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 20), 0, 357, 357, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 10), 0, 357, 357, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimForwardThrow_joint11[120] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 766, -40, 1125, 0, 772, -56,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 469, -29, 1215, 32, 301, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 470, -403, 1234, -326, 252, 222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -337, -404, 561, -336, 746, 246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -337, 0, 561, 0, 746, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 151, -112,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), 484, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -450, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -484, -46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -893, -23,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 38, -111,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -780, 1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -920, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1172, -1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 469, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 447, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -780, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -784, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1175, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -1175, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1175, 0, 447, 0, -784, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTKirbyAnimForwardThrow_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 44), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTKirbyAnimForwardThrow_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 45),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTKirbyAnimForwardThrow_joint15[64] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -23, -4, -302, 0, 237, -4,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 28), 71, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 44), -329, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -86, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -1, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -5, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 29), 123, -1,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 50, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 0, 0,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 120, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 123, 2, -328, 0, -4, -4,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTKirbyAnimForwardThrow_joint17[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 40), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTKirbyAnimForwardThrow_joint19[98] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -309, -2, -176, 6, -96, -3,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -333, -5, -120, 10, -93, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -336, 99, -114, 143, -92, 325,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -133, 104, 165, 144, 557, 323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -128, 2, 175, 4, 554, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), 636, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 36), -166, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 12), 70, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 61, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 203, 0,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 643, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 654, 0,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 203, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 203, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -166, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -166, 0, 203, 0, 650, -3,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTKirbyAnimForwardThrow_joint20[64] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1632, 4, 1305, 0, -1371, -4,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 27), -1523, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 44), 1279, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 1693, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1604, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 1607, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1610, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 30), 1487, 1,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1536, -17,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 16), -1608,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1487, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), 1279, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1487, -1608,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTKirbyAnimForwardThrow_joint22[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 14), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTKirbyAnimForwardThrow_joint23[140] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1298, 2, -1785, 6, -1704, -3,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1275, 5, -1729, 10, -1705, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1271, -99, -1723, 143, -1705, 325,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1474, -104, -1442, 144, -1054, 323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1479, -2, -1433, 4, -1057, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1403, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -1234, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), -1447, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1479, -51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1756, -22,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1402, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -1396, 24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1779, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1813, 41,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1249, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -1308, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1756, 81, -1293, 50,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1405, 14, -957, 20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1392, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1442, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), -954, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -1405,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1405, 0, -954, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1442, 0, -1405, 0, -954, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTKirbyAnimForwardThrow_joint24[66] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 360,
	ftAnimSetValRate(FT_ANIM_TRAZ), 840, -640,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 5), 699, -277,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 10), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 35), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 1320,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -499, 631,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -499, 631,
	ftAnimSetValRateT(FT_ANIM_TRAX, 5), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -545, 615,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 20), 540,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 5), 0, 0, 0, 554,
	ftAnimSetValRateT(FT_ANIM_TRAX, 15), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 15), 840,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX, 10), 0, -33, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 840, 540,
	ftAnimEnd(),
};
