/* AnimJoint data for relocData file 1338 (FTKirbyAnimTaunt) */
/* 3008 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimTaunt_joint1[60];
extern u16 dFTKirbyAnimTaunt_joint2[26];
extern u16 dFTKirbyAnimTaunt_joint3[74];
extern u16 dFTKirbyAnimTaunt_joint5[66];
extern u16 dFTKirbyAnimTaunt_joint6[294];
extern u16 dFTKirbyAnimTaunt_joint7[22];
extern u16 dFTKirbyAnimTaunt_joint9[66];
extern u16 dFTKirbyAnimTaunt_joint10[302];
extern u16 dFTKirbyAnimTaunt_joint11[24];
extern u16 dFTKirbyAnimTaunt_joint13[10];
extern u16 dFTKirbyAnimTaunt_joint14[80];
extern u16 dFTKirbyAnimTaunt_joint16[22];
extern u16 dFTKirbyAnimTaunt_joint18[176];
extern u16 dFTKirbyAnimTaunt_joint19[64];
extern u16 dFTKirbyAnimTaunt_joint21[174];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimTaunt_joints[] = {
	(u32)dFTKirbyAnimTaunt_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimTaunt_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimTaunt_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimTaunt_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimTaunt_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimTaunt_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimTaunt_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimTaunt_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimTaunt_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimTaunt_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimTaunt_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimTaunt_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimTaunt_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimTaunt_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimTaunt_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	0xFFFF02A3, /* [21] END */
};

/* Joint 1 */
u16 dFTKirbyAnimTaunt_joint1[60] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 600, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 0, 480, 4300, 3276, 4300,
	ftAnimSetValRateT(FT_ANIM_TRAX, 5), -480, -1600,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 840, 4096, 4096, 4096,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_SCAY), 0, 40,
	ftAnimSetValRateT(FT_ANIM_SCAY, 30), 4096, -68,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAZ, 30), -480, 840, 4096, 4096,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_SCAY), 1600, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 0, 300, 4915, 2048, 4915,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 0, 600, 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimTaunt_joint2[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), -268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), -804,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 30), -804,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), -804,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 119,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), -268,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimTaunt_joint3[74] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 312, 0,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 15), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 142, 17, 214, 26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 178, 268,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -178, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 30), -178, 10,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 45), 0,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4505, 40, 4505, 40, 4505, 40,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4505, -40, 4505, -40, 4505, -40,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 15), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 178, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTKirbyAnimTaunt_joint5[66] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -89, 0, -89,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -357, -44, -285, -35,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 10), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 5), -60,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX, 5), -446, -357, -60,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 12, 178, 15,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 5), -120, -120,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 30), 178, -5,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 35), -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY, 30), 0, -120,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 15), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAY, 5), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 10), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimTaunt_joint6[294] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -101, -217, -190, 0, 142,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -584, 49,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 702, -188, 142, 209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 428, -245, 419, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 211, -15, 524, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 396, 254, 148, -394,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 721, 208, -464, 89, -265, -254,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -244, 159,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 45), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 814, 63, -359, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 949, 125, -474, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1151, 339, -722, -385,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1627, 547, -39, 34, -1245, -417,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -387, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2247, 378, -1557, -195,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2412, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1582, 19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -486, -44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -154, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2407, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 2344, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1568, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1391, 59,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -303, -153,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -473, 131,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2319, -3, -1345, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1540, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 2398, -9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -313, 155,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -153, -99,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1534, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1530, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -297, -151,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -424, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2385, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 2412, -1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -251, 158, -1558, -21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1639, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -96, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -223, -132,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -491, -13,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2408, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2422, 87, -517, -53, -1712, -109,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -717, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2584, 596, -1858, -424,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3615, 853, -2562, -642,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4292, 374, -608, 94, -3143, -331,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -222, 11,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4363, 22, -3226, -58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -3219, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4337, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 4037, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4027, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4022, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4021, -1, -217, 5, -3216, 2,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimTaunt_joint7[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 35), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTKirbyAnimTaunt_joint9[66] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 89, 0, 89,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 357, 44, 285, 35,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 10), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 5), 60,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX, 5), 446, 357, 60,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -12, -178, -15,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 5), 120, -120,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 30), -178, 5,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 35), 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY, 30), 0, -120,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 15), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAY, 5), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 10), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimTaunt_joint10[302] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, 83, 217, 197, 0, 104,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 672, -47,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -720, 149, 104, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -504, 120, 250, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -479, -140, 94, -292,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -784, -178, 511, -167, -333, -249,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -854, -14, 328, 3, -406, 1,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 45), 3072,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -864, -10, 344, 15, -401, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 247, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -949, -125, -474, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1152, -339, -725, -385,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1627, -547, 39, -36, -1245, -416,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 383, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2247, -378, -1557, -195,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2412, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1582, 19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 486, 44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 154, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2407, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -2345, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1568, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1392, 60,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 299, 153,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 473, -130,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2318, 3, -1343, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1540, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -2398, 9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 313, -155,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 156, 97,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1534, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1530, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 297, 149,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 420, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2385, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -2412, 1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 251, -158, -1558, -21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1639, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 219, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 361, 119,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 601, 100,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2408, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2422, -89, -1712, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2587, -596, -1860, -425,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3616, -854, 717, 4, -2563, -643,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 531, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4296, -375, -3148, -333,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4367, -20, -3230, -56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -3219, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -4338, 56, 466, -59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 225, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -4037, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4027, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4022, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4021, 1, 217, -8, -3216, 2,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimTaunt_joint11[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 38), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimTaunt_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimTaunt_joint14[80] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -21, -3, -302, 0, 233, 4,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 44), -20, 0, 233, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 44), -302,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -23, -12, -302, 13, 237, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -52, -69, 369, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -9, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 13, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -61, 13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -116, -58, 356, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -300, -4, 235, -7,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -48, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -24, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -21, 3, -302, -1, 233, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTKirbyAnimTaunt_joint16[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 32), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 26), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTKirbyAnimTaunt_joint18[176] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1918, 0, 1785, 0, -1708, 3,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -1846, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 1761, -21, -1703, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1718, -62, -1663, 50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1584, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1601, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1582, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1805, 177, 1386, -151, -1300, 426,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1281, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1490, 157, -729, 287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1491, 0, -726, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 28), -1491, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -726, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 27), -729, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1281, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 24), 1282, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1490, -144, 1282, 68, -725, -288,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1731, 258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1779, -104, -1306, -429,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1700, 4, -1585, -148,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1888, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1936, 215, -1603, -71,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 2252, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1727, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1807, -26, -1924, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1941, -82, 2136, -108, -1791, 88,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1706, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1786, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1971, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1919, 1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1705, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1708, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1918, 0, 1785, -1, -1708, 0,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimTaunt_joint19[64] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 23, -1, 302, 0, 237, -4,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 49), 303, 0, 233, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 45), 21, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 28, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 33, -13,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 303, -6, 233, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 283, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 211, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 256, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 289, 23, 253, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, -12, 302, 13, 233, -20,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimTaunt_joint21[174] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 41), 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 17), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x280E, 0xFAEE, 0x0000, 0xF907, 0x0000, 0xF958, 0xFFFD, 0x4F00, 0x1000, 0x1000, 0x1000, 0x2803, 0x000D, 0xFAA6, 0xFFE0, 0x200D, 0x000A, 0xF91F, 0x0015, 0xF956, 0x0013, 0x200D, 0x0001, 0xF94A, 0x003E, 0xF97D, 0x0034, 0x2805, 0x0002, 0xF9D0, 0x007D, 0x2009, 0x0001, 0xF9BF, 0x0028, 0x2009, 0x0001, 0xF9CE, 0x0096, 0x200F, 0x0001, 0xFA7D, 0xFF4F, 0xFA96, 0x0097, 0xFAEC, 0x01AC, 0x2805, 0x0005, 0xFAFF, 0x0000, 0x200B, 0x0001, 0xF942, 0xFF63, 0xFD27, 0x011D, 0x200B, 0x0001, 0xF943, 0x0000, 0xFD27, 0x0000, 0x2803, 0x001C, 0xF943, 0xFFFF, 0x2009, 0x0001, 0xFD27, 0x0000, 0x2809, 0x001B, 0xFD27, 0x0000, 0x0801, 0x0002, 0x2005, 0x0001, 0xFAFF, 0x0000, 0x2005, 0x0018, 0xFAFE, 0x0000, 0x200F, 0x0001, 0xF942, 0x009C, 0xFAFE, 0xFFCE, 0xFD27, 0xFEE4, 0x2805, 0x0002, 0xF9DF, 0xFF8F, 0x200B, 0x0001, 0xFA7B, 0x00B2, 0xFAED, 0xFE54, 0x200B, 0x0001, 0xFAA6, 0x001E, 0xF9CE, 0xFF68, 0x2803, 0x000C, 0xFAF1, 0xFFFC, 0x200D, 0x0001, 0xF9B6, 0xFFC8, 0xF9BC, 0xFFD8, 0x2805, 0x0006, 0xF85D, 0xFFCE, 0x2009, 0x0001, 0xF97E, 0xFFCE, 0x2809, 0x000A, 0xF956, 0x0002, 0x0801, 0x0005, 0x2005, 0x0001, 0xF83D, 0xFFFA, 0x2005, 0x0004, 0xF8F4, 0x0021, 0x200F, 0x0001, 0xFAEE, 0xFFFE, 0xF907, 0x0013, 0xF954, 0xFFFE, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
