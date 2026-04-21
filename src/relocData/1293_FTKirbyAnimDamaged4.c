/* AnimJoint data for relocData file 1293 (FTKirbyAnimDamaged4) */
/* 2560 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimDamaged4_joint1[146];
extern u16 dFTKirbyAnimDamaged4_joint2[10];
extern u16 dFTKirbyAnimDamaged4_joint3[48];
extern u16 dFTKirbyAnimDamaged4_joint5[80];
extern u16 dFTKirbyAnimDamaged4_joint6[154];
extern u16 dFTKirbyAnimDamaged4_joint7[14];
extern u16 dFTKirbyAnimDamaged4_joint9[80];
extern u16 dFTKirbyAnimDamaged4_joint10[164];
extern u16 dFTKirbyAnimDamaged4_joint11[16];
extern u16 dFTKirbyAnimDamaged4_joint13[10];
extern u16 dFTKirbyAnimDamaged4_joint14[106];
extern u16 dFTKirbyAnimDamaged4_joint16[14];
extern u16 dFTKirbyAnimDamaged4_joint18[150];
extern u16 dFTKirbyAnimDamaged4_joint19[96];
extern u16 dFTKirbyAnimDamaged4_joint21[16];
extern u16 dFTKirbyAnimDamaged4_joint22[132];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimDamaged4_joints[] = {
	(u32)dFTKirbyAnimDamaged4_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimDamaged4_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimDamaged4_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimDamaged4_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimDamaged4_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimDamaged4_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimDamaged4_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimDamaged4_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimDamaged4_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimDamaged4_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimDamaged4_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimDamaged4_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimDamaged4_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimDamaged4_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimDamaged4_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTKirbyAnimDamaged4_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimDamaged4_joint1[146] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 600, 0, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 720, 359, 240, 479,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 2), 4915, 4915,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 780, 240,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAZ, 1), 2048,
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 3), 6144,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 3), 3276, 3276,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 720, -300,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 8), 240,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 3), 3276,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 3), 4505, 4505,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 3), 4915,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 3), 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), 480, -274,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_SCAZ, 3), 4915, -234,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 3), 3686, 136, 3686, 136,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 480, 239, 240, -160,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_SCAZ, 4), 4096, -409,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 3), 4096,
	ftAnimSetValRateT(FT_ANIM_SCAY, 3), 4096, 655,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAY, 4), 720, 120,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 8), 0,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 3686, 5324, 3686,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 4), 600,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4300, 204, 3686, -614, 4300, 204,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimDamaged4_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -268, 0, 0, -312, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimDamaged4_joint3[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -89, -22, 89, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -89, 24, 89, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 178, 22, 44, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 44, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 178, -22, 18, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTKirbyAnimDamaged4_joint5[80] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -268, -67, -357, -89, -90, -119, 30, 59, -150, -239,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -357, -16, 30, 43, -120, 21,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX, 3), -268, -60,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -536, -14, -90, -39, 90, -19, -120, 19,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 8), -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -268, 22, -536, 44, -120, -59, 0, -89, -90, 59,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 4), -150, 120, -60, 90,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimDamaged4_joint6[154] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, 704, -1391, 338, 1608, -1146,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -99, 327, -1052, 127, 461, -518,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 3072,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 19), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -148, -35, -1135, -78, 571, 81,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 2, 120, -1367, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 562, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 413, -84,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 531, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 132, 60, -1305, 51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 155, 70,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1398, 87,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 533, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 394, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 257, 118,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 488, -26,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 401, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 62, -135,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 450, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 485, 155,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1280, 143,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -432, 213,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 686, 112, -67, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 790, 45,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -26, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 802, 6, -271, 107, -10, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, 2, -217, 53, 0, 10,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimDamaged4_joint7[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 23), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTKirbyAnimDamaged4_joint9[80] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 178, 44, 90, 239, -60, -119, -60, -239,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 3), 0, 16, 120, 65, -60, 43,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAZ, 3), 178, -120,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 178, 14, 180, 39, 0, -19, -60, 79,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 8), 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 178, -14, 178, -14, 180, -59, -90, -59, 0, 59,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 4), 120, -180, -60, 90,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 4), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimDamaged4_joint10[164] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 965, 1391, -970, 1608, 293,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1770, 477, 420, -496, 1901, 130,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 3072,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 19), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1759, -23, 397, 0, 1870, -51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1536, -108,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 508, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1548, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1390, -213,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1022, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1424, -75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1494, 12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1114, 74,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1153, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 502, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 789, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1506, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1506, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1145, -577, 1485, -579,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1, -733, 347, -702,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -321, 318, 81, 380,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 635, 543, 783, -8, 1107, 609,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 939, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 765, 53, 1300, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 742, 18, 1325, 76,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 802, 28, 1454, 100,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 801, 2, 1582, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1160, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1333, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, 2, 1391, 57, 1608, 25,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimDamaged4_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimDamaged4_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimDamaged4_joint14[106] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1584, -89, -1305, -174, -1371, 336,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1511, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1495, 77, -1034, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1739, 80, -999, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -907, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1344, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1345, 60,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1554, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1507, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1339, 32,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1447, -113,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1293, 43,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -884, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1113, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1356, 61,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1555, 41,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1095, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1240, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1313, 16, -1333, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1587, 31, -1305, 7, -1375, -41,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimDamaged4_joint16[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 23), 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTKirbyAnimDamaged4_joint18[150] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -309, -20, -176, 72, -96, 54,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -268, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -104, -28, -41, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -233, 22, 152, 138,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 153, 161,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 390, 69,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -154, 103,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -86, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 262, 57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 171, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 441, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 752, 101,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -157, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 179, 31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 252, 80,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 258, -59,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 199, 10, 864, 107,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 861, -108,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -17, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 206, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 314, -1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 746, -99,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 344, -248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -76, -139, 285, -240,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -467, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -296, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -338, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -304, 14, -367, 145, 49, -222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -309, -4, -176, 190, -99, -149,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimDamaged4_joint19[96] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 23, 486, 302, 10, 237, 579,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 347, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 509, 250, 816, 310,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 524, 9, 859, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 767, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 431, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 469, 62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 529, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 823, 39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 568, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 405, -113,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 178, -44,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 583, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 490, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 121, -62, 335, -17, 362, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 54, -49, 313, -16, 272, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, -33, 302, -10, 233, -39,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimDamaged4_joint21[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTKirbyAnimDamaged4_joint22[132] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 309, -528, 176, -635, -96, 567,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -218, -295, -458, -308, 470, 346,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -281, -61, -440, 26, 596, 105,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 960, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -197, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -438, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -416, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -517, 80,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 969, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 856, 66,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -413, 99,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -303, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -217, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -185, 32,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 940, 74,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1045, -154,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -285, 196, -136, 182,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 431, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 179, 220, 698, -394,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 304, 42, 257, -327,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 340, -60, 265, -63, 42, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 309, -30, 176, -88, -99, -142,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
