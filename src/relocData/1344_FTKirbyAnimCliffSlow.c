/* AnimJoint data for relocData file 1344 (FTKirbyAnimCliffSlow) */
/* 3328 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimCliffSlow_joint1[58];
extern u16 dFTKirbyAnimCliffSlow_joint2[46];
extern u16 dFTKirbyAnimCliffSlow_joint3[18];
extern u16 dFTKirbyAnimCliffSlow_joint4[108];
extern u16 dFTKirbyAnimCliffSlow_joint6[132];
extern u16 dFTKirbyAnimCliffSlow_joint7[160];
extern u16 dFTKirbyAnimCliffSlow_joint8[14];
extern u16 dFTKirbyAnimCliffSlow_joint10[122];
extern u16 dFTKirbyAnimCliffSlow_joint11[166];
extern u16 dFTKirbyAnimCliffSlow_joint12[16];
extern u16 dFTKirbyAnimCliffSlow_joint14[102];
extern u16 dFTKirbyAnimCliffSlow_joint15[170];
extern u16 dFTKirbyAnimCliffSlow_joint17[20];
extern u16 dFTKirbyAnimCliffSlow_joint19[150];
extern u16 dFTKirbyAnimCliffSlow_joint20[150];
extern u16 dFTKirbyAnimCliffSlow_joint22[22];
extern u16 dFTKirbyAnimCliffSlow_joint23[164];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTKirbyAnimCliffSlow_joints[] = {
	(u32)dFTKirbyAnimCliffSlow_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimCliffSlow_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimCliffSlow_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimCliffSlow_joint4, /* [3] joint 4 */
	(u32)dFTKirbyAnimCliffSlow_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTKirbyAnimCliffSlow_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimCliffSlow_joint8, /* [7] joint 8 */
	(u32)dFTKirbyAnimCliffSlow_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTKirbyAnimCliffSlow_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimCliffSlow_joint12, /* [11] joint 12 */
	(u32)dFTKirbyAnimCliffSlow_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTKirbyAnimCliffSlow_joint15, /* [14] joint 15 */
	(u32)dFTKirbyAnimCliffSlow_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTKirbyAnimCliffSlow_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTKirbyAnimCliffSlow_joint20, /* [19] joint 20 */
	(u32)dFTKirbyAnimCliffSlow_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTKirbyAnimCliffSlow_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTKirbyAnimCliffSlow_joint1[58] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), -1320, -600,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -1260, -24, -540, 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -1350, -450,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -1260, 72, -540, -72,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), -1260, 240,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 5), -540,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), -960, 576,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 5), -540,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -540, 672, -540, 240,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -120, 431, -240, 431,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 5), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 5), 0, 151,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimCliffSlow_joint2[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -67, -120, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 600, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX, 5), 0, 96,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 35), 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 35), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 5), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 30), 0,
	ftAnimBlock(0, 25),
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 21, 4096, -86, 4096, 21,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimCliffSlow_joint3[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -804,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 35), 0,
	ftAnimBlock(0, 34),
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTKirbyAnimCliffSlow_joint4[108] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -357, 268, 432, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), -536, -22, 0, -26, 312, -96, 4096, 40, 4096, -163, 4096, 40,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), -580, 0, 312, 4300, 3276, 4300,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 30), 312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), -536, 4, 0, -11, 4096, -40, 4096, 163, 4096, -40,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), -536, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 0, 35,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 5), -536,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 0, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -536, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 0, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -446, 71,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 0, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 178, 54, 0, 34,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimCliffSlow_joint6[132] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 357, -285, 0, -120, -60, -180,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 5), 0, 96, 0, 48,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 15), -180,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 446, -446, -357,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 446, -446, -357,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 5), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 20), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 5), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 5), 0, -144, -180, 96,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 5), -180, -144, -60, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 268, -71, -268, 53, -491, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 89, -98, -178, -8, -536, -8,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 5), -180, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -223, -125, -312, -35, -536, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -357, 53, -402, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), -536,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 5), -180,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 0, 47,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 10), -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -223, 125, -44, 98, -491, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 89, 57, 134, -31, -536, -6,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 5), 60,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX, 5), 178, 20, -268, -37, -536, 13, -180, 25,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTKirbyAnimCliffSlow_joint7[160] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2477, -16, -1210, -28, 15, 22,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 343, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -2760, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -1273, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1179, 57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1215, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 336, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 343, -13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2741, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -2738, 14,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1204, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1176, -49,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 316, -33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 666, 100,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2727, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -2672, 6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1267, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -1665, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1592, 99, 784, 125,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1302, 5, 1304, 187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2674, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -2767, 44,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1331, -44, 1453, 95,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1490, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1168, -196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2700, 34, 986, -85,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1039, 57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2754, -82,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1447, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1407, 38, 1112, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2882, -127, -1370, 37, 1369, 257,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTKirbyAnimCliffSlow_joint8[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 38), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimCliffSlow_joint10[122] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 357, 120, 120, 60,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 20), 357,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 446, 446, 0, 0, -180,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ, 15), 446, 446, -180,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 25), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 10), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 5), 0, 144,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 5), 180, 144, -60, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 268, -71, 268, -53, 491, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 89, -98, 178, 8, 536, 8,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 5), 180, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -223, -125, 312, 35, 536, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 357, -53, 402, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), -536,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 5), 180, -60,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 0, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -223, 125, 44, -98, 491, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 89, 57, -134, 31, 536, 6,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 5), 60,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 5), 178, 20, 268, 37, 536, -13, 180, -25, -60, -50,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimCliffSlow_joint11[166] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 3198, 160, 455, -13, 806, 139,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 335, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3359, 261, 946, 267,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3721, 274, 1341, 234,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 4084, 233, 1499, 269,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 465, 47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 337, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4376, 146, 1954, 268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 4365, -13, 2035, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4350, -14, 354, 22, 1994, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 387, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 4334, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 2028, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2046, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2020, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 403, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 353, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 4311, -10, 159, -174,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 114, 87,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 4331, 48,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2128, 127,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2892, 182,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 189, 64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 137, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3033, 85,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2685, -113,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4368, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 4384, 70,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 75, -18, 2593, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 156, 53, 2748, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4489, 104, 228, 72, 2978, 230,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTKirbyAnimCliffSlow_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 38), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTKirbyAnimCliffSlow_joint14[102] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, 0, -1072,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 204, -120, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1072, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -670, 134,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -626, 217, -1047,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -670, -6, 134, -11, -1072, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -670, 16, 134, 6, -1072, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -537, 188, -1056,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -670, 21, 134, -26, -1072, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -431, 58, 53, 2, -1131, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -379, 21, 144, 35, -1104, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -284, 10, 300, 28, -981, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -272, 37, 428, -1, -733, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 18, 72, 287, -94, -298, 141,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 88, 23, -42, -83, -27, 94,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTKirbyAnimCliffSlow_joint15[170] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -87, -2, -401, -4, 263, 5,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 91, 79,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -329, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 174, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 92, -113,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -80, 67,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 156, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 31, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 82, 113,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -329,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -329, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 32, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 4, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -83, -62, 227, 105,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -300, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 190, -103,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -318, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -296, 17,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -196, 150,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 275, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 58, -123,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -167, 105,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -283, -9, 296, -129,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -268, -137,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -329, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -45, 60,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 3, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -258, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -29, 23,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 8, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 37, -22,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -7, -44, -328, 0, 99, 94,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTKirbyAnimCliffSlow_joint17[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 36), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimCliffSlow_joint19[150] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -110, 4, 213, 0, -2661, 10,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3481, 3686, 3891,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -6, -64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -2562, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 205, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 35), 4096, 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -95, -79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -17, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2585, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -2562, -8,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 201, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 149, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 6, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 64, -51,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2566, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -2550, -19,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 6, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 19, -29,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 135, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 207, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 6, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 60, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2558, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -2550, -8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -10, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -91, -14,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 202, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -99, 10, 202, 4, -2552, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -71, 28, 212, 10, -2532, 20,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTKirbyAnimCliffSlow_joint20[150] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -61, 14, 192, 2, -224, 35,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 0, -75,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 328, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 119, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 178, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -138, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -99, -79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -34, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 329, 0, -75, 66,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -91, -118,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 329, 4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -32, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -223, -74,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -240, -104,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 292, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -267, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 97, 44,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 319, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 295, -17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 120, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -106, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 188, -148,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -315, 14,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -52, 47, 283, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), -37, 22, 329, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -272, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -29, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7, 44, 328, 0, 99, 94,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimCliffSlow_joint22[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 34), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTKirbyAnimCliffSlow_joint23[164] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1563, -11, -1488, 12, -810, -13,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3481, 3686, 3891,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -1508, 76, -1421, -21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -945, 13,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 35), 4096, 4096, 4096,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1442, 25, -1439, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1591, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1452, -26,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -934, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -890, -1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1615, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1612, 25,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1473, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1421, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -907, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -856, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1615, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1678, 52,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1429, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1409, 31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1615, 42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1598, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -829, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -903, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1387, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1406, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1598, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1509, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -914, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -944, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1537, -28, -1396, 10, -924, 20,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
