/* AnimJoint data for relocData file 1376 (FTKirbyAnimJabLoop) */
/* 1984 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimJabLoop_joint1[44];
extern u16 dFTKirbyAnimJabLoop_joint2[12];
extern u16 dFTKirbyAnimJabLoop_joint3[114];
extern u16 dFTKirbyAnimJabLoop_joint5[20];
extern u16 dFTKirbyAnimJabLoop_joint6[178];
extern u16 dFTKirbyAnimJabLoop_joint7[16];
extern u16 dFTKirbyAnimJabLoop_joint9[14];
extern u16 dFTKirbyAnimJabLoop_joint10[222];
extern u16 dFTKirbyAnimJabLoop_joint11[16];
extern u16 dFTKirbyAnimJabLoop_joint13[12];
extern u16 dFTKirbyAnimJabLoop_joint14[80];
extern u16 dFTKirbyAnimJabLoop_joint16[16];
extern u16 dFTKirbyAnimJabLoop_joint18[64];
extern u16 dFTKirbyAnimJabLoop_joint19[82];
extern u16 dFTKirbyAnimJabLoop_joint21[16];
extern u16 dFTKirbyAnimJabLoop_joint22[42];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimJabLoop_joints[] = {
	(u32)dFTKirbyAnimJabLoop_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimJabLoop_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimJabLoop_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimJabLoop_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimJabLoop_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimJabLoop_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimJabLoop_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimJabLoop_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimJabLoop_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimJabLoop_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimJabLoop_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimJabLoop_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimJabLoop_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimJabLoop_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimJabLoop_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTKirbyAnimJabLoop_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimJabLoop_joint1[44] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 360,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 660, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), 420,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 3), 360,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), 420,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 3), 360,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), 420,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 3), 360,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), 420,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 3), 360,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), 420,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 3), 360,
	ftAnimLoop(0x6800, -84),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimJabLoop_joint2[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -268, 0, 0, -312, 0,
	ftAnimBlock(0, 25),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimJabLoop_joint3[114] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 89, 4505, 3276,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX), 536, 0, 0, 312, 0, 4505,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 4), 89,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 3276, 4505,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 3276, 4505,
	ftAnimSetVal0RateT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4505, 3276,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -178,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 4), -178,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 3276, 4505,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 3276, 4505,
	ftAnimSetVal0RateT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4505, 3276,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 223,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 4), 223,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 3276, 4505,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 3276, 4505,
	ftAnimSetVal0RateT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4505, 3276,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -44,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 4), -44,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 3276, 4505,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 3276, 4505,
	ftAnimSetVal0RateT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4505, 3276,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 357,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 4), 357,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 3276, 4505,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 3276, 4505,
	ftAnimSetVal0RateT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4505, 3276,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 89,
	ftAnimLoop(0x6800, -224),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTKirbyAnimJabLoop_joint5[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -51,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 357, -180, -60, 120, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 20), 0,
	ftAnimLoop(0x6800, -38),
};

/* Joint 6 */
u16 dFTKirbyAnimJabLoop_joint6[178] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 151, -39, -1085, -91, -50, 28,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1150, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 33, 14, 20, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 76, -339, 5, 257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -646, -319, -969, 71, 535, 234,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1056, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -561, 72, 474, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -513, -37, 435, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -576, 437, -1014, -63, 488, -361,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 361, 414, -1183, -99, -287, -351,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 251, -103, -1214, -32, -214, 67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1220, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 154, 46, -146, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 247, -178, -204, 194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -201, -233, -1016, 77, 241, 225,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1114, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -218, -14, 245, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -234, 2, 248, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1121, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -225, 358, -1073, -88, 258, -358,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 481, 301, -1299, -120, -468, -331,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1332, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 376, -105, -405, 64,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 265, 50, -330, -29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1340, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 372, -57, -1320, 127, -398, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 151, -221, -1085, 235, -50, 348,
	ftAnimLoop(0x6800, -352),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimJabLoop_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 9 */
u16 dFTKirbyAnimJabLoop_joint9[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 536, 268, 60, 0, -180, 4096, 4096, 4096,
	ftAnimBlock(0, 25),
	ftAnimLoop(0x6800, -26),
};

/* Joint 10 */
u16 dFTKirbyAnimJabLoop_joint10[222] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3072,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1570, -15, 626, -15, -1374, -14,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1647, -17, -1454, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 536, -16,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX, 1), 5324, 3072,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX, 1), 6144, 819,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX, 1), 6144, -2048,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_SCAX, 1), -1682, 149, -1487, 162, 4096, -3072,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1348, 144, -1129, 161,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_SCAX, 1), -1393, -51, -1163, -43, 5324, 3072,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1221, -59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1526, -53,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX, 1), 6144, 819,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_SCAX, 1), 541, 26, 6144, -2047,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 627, -16,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX, 1), 4096, -3072,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), -1336, -69,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 3072,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1416, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAX, 1), -1553, -38, 5324, 3072,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1635, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_SCAX, 1), 605, -11, 6144, 819,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 554, -17,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX, 1), 6144, -2048,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_SCAX, 1), -1445, 63, 4096, -3072,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1498, 49, -1289, 62,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 3072,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1605, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_SCAX, 1), -1321, -44, 5324, 3072,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1379, -7,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX, 1), 6144, 819,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_SCAX, 1), 556, 22, 6144, -2047,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 623, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_SCAX, 1), -1393, 89, 4096, -3072,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1398, 92, -1199, 87,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 3072,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1468, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_SCAX, 1), -1218, -32, 5324, 3072,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1298, -51,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX, 1), 6144, 819,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAX, 1), -1479, -18, 6144, -2047,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAX, 1), -1504, -45, 4096, -3071,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1570, -65, 626, 3, -1374, -75,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 3072,
	ftAnimLoop(0x6800, -440),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimJabLoop_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 13 */
u16 dFTKirbyAnimJabLoop_joint13[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 25),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimJabLoop_joint14[80] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -348, -6, -205, 14, 186, 36,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -176, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), -351, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 202, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 183, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 240, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 202, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 240, -27,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -183, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -200, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 202, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 240, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 202, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 240, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 202, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -347, 3, -207, -7, 183, -19,
	ftAnimLoop(0x6800, -156),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimJabLoop_joint16[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTKirbyAnimJabLoop_joint18[64] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -263, 1, -86, 1, -3113, -31,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 24), -262, -1, -85, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -3145, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3173, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -3145, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3173, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -3145, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3173, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -3145, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3173, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -3134, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -263, 0, -86, 0, -3117, 16,
	ftAnimLoop(0x6800, -124),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimJabLoop_joint19[82] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -255, 28, 442, 0, 335, 26,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), 441, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -207, 5, 377, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -215, -17, 372, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 335, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -238, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -255, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -238, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 357, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 377, 5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -255, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -242, -18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 367, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 346, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -255, -13, 442, 0, 335, -11,
	ftAnimLoop(0x6800, -160),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimJabLoop_joint21[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 22 */
u16 dFTKirbyAnimJabLoop_joint22[42] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1541, -10, -1572, -3, -945, 2,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), -1574, 2, -946, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 22), -1559, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1555, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1546, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1541, 5, -1572, 1, -945, 0,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
	0x0000, 0x0000,
};
