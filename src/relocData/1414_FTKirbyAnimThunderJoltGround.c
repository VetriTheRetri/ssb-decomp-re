/* AnimJoint data for relocData file 1414 (FTKirbyAnimThunderJoltGround) */
/* 3856 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimThunderJoltGround_joint1[68];
extern u16 dFTKirbyAnimThunderJoltGround_joint2[62];
extern u16 dFTKirbyAnimThunderJoltGround_joint3[34];
extern u16 dFTKirbyAnimThunderJoltGround_joint5[112];
extern u16 dFTKirbyAnimThunderJoltGround_joint6[314];
extern u16 dFTKirbyAnimThunderJoltGround_joint7[14];
extern u16 dFTKirbyAnimThunderJoltGround_joint9[112];
extern u16 dFTKirbyAnimThunderJoltGround_joint10[326];
extern u16 dFTKirbyAnimThunderJoltGround_joint11[22];
extern u16 dFTKirbyAnimThunderJoltGround_joint13[10];
extern u16 dFTKirbyAnimThunderJoltGround_joint14[220];
extern u16 dFTKirbyAnimThunderJoltGround_joint16[14];
extern u16 dFTKirbyAnimThunderJoltGround_joint18[238];
extern u16 dFTKirbyAnimThunderJoltGround_joint19[136];
extern u16 dFTKirbyAnimThunderJoltGround_joint21[202];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimThunderJoltGround_joints[] = {
	(u32)dFTKirbyAnimThunderJoltGround_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimThunderJoltGround_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimThunderJoltGround_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimThunderJoltGround_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimThunderJoltGround_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimThunderJoltGround_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimThunderJoltGround_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimThunderJoltGround_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimThunderJoltGround_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimThunderJoltGround_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimThunderJoltGround_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimThunderJoltGround_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimThunderJoltGround_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimThunderJoltGround_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimThunderJoltGround_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	0xFFFF0366, /* [21] END */
};

/* Joint 1 */
u16 dFTKirbyAnimThunderJoltGround_joint1[68] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 600, 0, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 15), 720, -480, 3891, 4915, 3891,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 5), 240, 274,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 300, 4915, 2048, 4915,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 16), 240,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 720, 3891, 4915, 3891,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 15), 540, 4300, 3686, 4300,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 9), 240, -68,
	ftAnimSetValRateT(FT_ANIM_TRAY, 10), 660, 25,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 19), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 3891, 4505, 3891,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 9), 600, 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimThunderJoltGround_joint2[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ), -268, -312, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 35), 0,
	ftAnimBlock(0, 10),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -192, 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -192, 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -192, 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -192, 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -312, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 28), -312, 0,
	ftAnimBlock(0, 9),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 19), -268,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimThunderJoltGround_joint3[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -268, -23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 178, 25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 16), 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 178, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 19), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTKirbyAnimThunderJoltGround_joint5[112] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -357, -23, 89, 5,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 15), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 5), -150, -205, 0, -68,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), -180, 144, -60, -192,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 3), -60, 120, -120, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 5), -357, 31, 89, -25, -60, -137, -120, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -134, 125, -89, -53, -180, -191, -60, 143, 0, 191,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 268, 21, -178, -4, -30, 12, 120, 50,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 3), -180,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 25), -180,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 268, -178, -30, 120,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ, 9), 268, -9, -178, 6, 120, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 9), -30,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -180, 75, -30, 12, 90, -50,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimThunderJoltGround_joint6[314] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -21, -217, -54, 0, 32,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -534, 28,
	ftAnimSetValRateT(FT_ANIM_SCAX, 5), 3072, -204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 658, -280, 160, 223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 220, -474, 478, 323,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 942, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -289, -368,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -515, -192, -485, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1037, -507,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -263, 92,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1028, 115,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1764, 33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1689, -483,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2111, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -196, 40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -169, -14,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 35), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1745, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1690, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2119, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2117, 94,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -192, -188, 1755, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1936, 282, -546, -238, 1681, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1552, 287, -668, -9, 1401, -195,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -312, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1360, 136, 1289, -143,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -933, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1114, -113,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 998, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -263, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -376, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -380, -34, 1040, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 816, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -482, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -819, 63,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -727, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 869, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 934, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -506, -12, 820, -105,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -395, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -658, 3, 723, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -784, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 814, 89,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 820, -76,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -740, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -869, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 750, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 922, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 929, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1069, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -888, -18, -379, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -520, -86,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -991, -13,
	ftAnimBlock(0, 6),
	ftAnimSetValRateT(FT_ANIM_SCAX, 5), 3072, 107,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -607, -73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -224, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -994, 45, 1102, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 117, 193, 265, -94,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 14), 4096,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 295, 165, 193, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 801, 6, 2, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, 3, -217, 7, 0, -2,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimThunderJoltGround_joint7[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 63), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTKirbyAnimThunderJoltGround_joint9[112] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 357, 23, -89, -5,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 15), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 5), 150, 205, 0, -68,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 180, -144, -60, -192,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 3), 60, -120, -120, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 5), 357, -31, -89, 25, 60, 137, -120, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 134, -125, 89, 53, 180, 191, -60, 143, 0, 191,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -268, -21, 178, 4, -30, 12, 120, 50,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 3), 180,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 25), 180,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), -268, 178, -30, 120,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ, 9), -268, 9, 178, -6, 120, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 9), -30,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 180, -75, -30, 12, 90, -50,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimThunderJoltGround_joint10[326] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, 21, 217, 54, 0, 32,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 522, -29,
	ftAnimSetValRateT(FT_ANIM_SCAX, 5), 3072, -204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -658, 280, 160, 221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -221, 477, 476, 325,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 296, 371, 811, 237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 522, 193, 473, -39, 951, 114,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1439, 242,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 259, -85,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1062, 511,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1705, 472,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2113, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1680, 162,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1692, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 196, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 166, 17,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 35), 3072,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2127, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 2136, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2117, -162, 195, 190, 1753, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1428, -273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 547, 236, 1674, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 669, 9, 1413, -189,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 312, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1262, -110, 1295, -149,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1190, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1114, -116,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 996, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 263, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 373, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1140, -46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 953, -114,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 380, 34, 1039, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 816, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 481, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 826, -71,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 821, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 869, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 934, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 727, -82, 503, 11, 821, -104,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 721, 65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 394, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 724, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 815, 88,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 821, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 786, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 769, 65,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 749, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 922, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 834, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 996, 19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 929, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1076, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 379, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 523, 88,
	ftAnimBlock(0, 6),
	ftAnimSetValRateT(FT_ANIM_SCAX, 5), 3072, 107,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 608, 73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 225, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1007, -34, 1118, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -131, -196, 251, -100,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 14), 4096,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -298, -161, 188, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), -801, -6, 2, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -804, -3, 217, -8, 0, -2,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimThunderJoltGround_joint11[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 32), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 30), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimThunderJoltGround_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 64),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimThunderJoltGround_joint14[220] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -23, 2, -302, -3, 237, -4,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -390, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 100, 82, 58, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 215, 155, -79, -172,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 735, 83, -539, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -387, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -253, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 786, 51, -563, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 702, -177,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -361, 84,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -246, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -274, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 494, -182,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 130, -56,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -283, 62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -108, -55,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 83, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 147, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -295, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -313, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -171, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -33, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 114, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 265, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -97, -72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -112, 57,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 212, -47, -295, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 307, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -302, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -64, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -214, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 237, -62, -151, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 299, -7, -240, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 291, -7, -238, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -8, 42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 81, -25,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -302, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -302, 0,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 37, 43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 233, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 56, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -21, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -23, -2, -302, 0, 237, 3,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimThunderJoltGround_joint16[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 63), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTKirbyAnimThunderJoltGround_joint18[238] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -309, -2, 3040, 0, -96, 4,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 79, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -471, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 3029, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2974, -113,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 2530, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 121, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -566, -228, 301, 314,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -928, -261, 750, 323,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1053, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1089, -120, 2563, 38,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -1121, 140, 2637, -68,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1036, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 974, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -906, 485, 2516, -31, 788, -491,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 3113, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -150, 292, -8, -330,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -321, -118, 126, 128,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 220, -54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -346, -40,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 3114, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 3025, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 179, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 182, -25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -391, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -356, -48,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 166, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 211, -22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -412, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -375, -50,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 191, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 249, -31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -433, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -380, -47,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3042, 3, 221, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 296, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), 3039, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -432, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -414, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 292, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 102, -38,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -413, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -309, 0,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 62, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -94, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -309, 0, 3040, 0, -96, -2,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimThunderJoltGround_joint19[136] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 21, 18, 302, -10, 233, 36,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 246, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 8, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 438, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 411, -26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 237, 27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 263, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 209, -35,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 0, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 187, -22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 293, 79,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 557, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 180, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 144, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 165, -8, 554, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 26), 540, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 37), 51, -9,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 155, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 258, 10,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 532, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 236, -6,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 267, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 302, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 44, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 22, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, -1, 302, 0, 233, -3,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimThunderJoltGround_joint21[202] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 63), 7, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
	0x0000, 0x280E, 0xFAEE, 0xFFF6, 0xF907, 0x0000, 0xF954, 0xFFE9, 0x4F00, 0x1000, 0x1000, 0x1000, 0x2809, 0x000E, 0xF94F, 0x0007, 0x2805, 0x0015, 0xF90A, 0x0003, 0x2003, 0x000D, 0xFAE3, 0x0004, 0x2003, 0x0001, 0xFAE6, 0x0002, 0x2803, 0x0007, 0xFA8A, 0x001C, 0x2009, 0x0001, 0xF956, 0xFFF3, 0x2009, 0x0005, 0xF95B, 0x0054, 0x2009, 0x0001, 0xF9D2, 0x0077, 0x200F, 0x0001, 0xFAAE, 0x0011, 0xF910, 0xFFF6, 0xFA49, 0x0011, 0x2803, 0x0003, 0xFAD2, 0x002E, 0x2805, 0x0008, 0xF8CE, 0x0000, 0x2009, 0x0001, 0xF9F4, 0xFFA7, 0x2009, 0x0001, 0xF996, 0x0006, 0x2009, 0x0001, 0xFA02, 0x0066, 0x200B, 0x0001, 0xFB03, 0x000C, 0xFA64, 0xFFFF, 0x2803, 0x0003, 0xFAF1, 0x0025, 0x2009, 0x0001, 0xF9FF, 0xFF95, 0x2009, 0x0001, 0xF98D, 0xFFF9, 0x2009, 0x0001, 0xF9F0, 0x005E, 0x200B, 0x0001, 0xFB14, 0xFFFB, 0xFA4A, 0xFFF6, 0x2803, 0x0003, 0xFAD8, 0x001D, 0x200D, 0x0001, 0xF8B8, 0xFFEF, 0xF9DA, 0xFF8F, 0x2805, 0x0007, 0xF8C1, 0x0002, 0x2009, 0x0001, 0xF967, 0xFFF7, 0x2009, 0x0001, 0xF9C7, 0x0060, 0x200B, 0x0001, 0xFAF5, 0xFFFB, 0xFA27, 0xFFFB, 0x2803, 0x0005, 0xFAAC, 0x0000, 0x2009, 0x0001, 0xF9BB, 0xFF97, 0x2809, 0x0007, 0xF970, 0x0000, 0x0801, 0x0003, 0x2005, 0x0001, 0xF8C3, 0x0001, 0x2805, 0x0018, 0xF907, 0x0001, 0x2003, 0x0001, 0xFAAD, 0x0000, 0x2803, 0x0017, 0xFAED, 0x0001, 0x0801, 0x0002, 0x2009, 0x0001, 0xF96E, 0xFFFB, 0x2009, 0x0010, 0xF933, 0x000C, 0x2009, 0x0001, 0xF941, 0x000B, 0x2009, 0x0003, 0xF952, 0x0003, 0x200F, 0x0001, 0xFAEE, 0x0000, 0xF907, 0x0000, 0xF954, 0x0001, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
