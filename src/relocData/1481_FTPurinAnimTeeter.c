/* AnimJoint data for relocData file 1481 (FTPurinAnimTeeter) */
/* 2352 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPurinAnimTeeter_joint1[34];
extern u16 dFTPurinAnimTeeter_joint2[12];
extern u16 dFTPurinAnimTeeter_joint3[30];
extern u16 dFTPurinAnimTeeter_joint5[24];
extern u16 dFTPurinAnimTeeter_joint6[162];
extern u16 dFTPurinAnimTeeter_joint7[42];
extern u16 dFTPurinAnimTeeter_joint9[48];
extern u16 dFTPurinAnimTeeter_joint10[196];
extern u16 dFTPurinAnimTeeter_joint11[36];
extern u16 dFTPurinAnimTeeter_joint13[24];
extern u16 dFTPurinAnimTeeter_joint14[134];
extern u16 dFTPurinAnimTeeter_joint16[34];
extern u16 dFTPurinAnimTeeter_joint18[122];
extern u16 dFTPurinAnimTeeter_joint19[100];
extern u16 dFTPurinAnimTeeter_joint21[32];
extern u16 dFTPurinAnimTeeter_joint22[102];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTPurinAnimTeeter_joints[] = {
	(u32)dFTPurinAnimTeeter_joint1, /* [0] joint 1 */
	(u32)dFTPurinAnimTeeter_joint2, /* [1] joint 2 */
	(u32)dFTPurinAnimTeeter_joint3, /* [2] joint 3 */
	(u32)dFTPurinAnimTeeter_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPurinAnimTeeter_joint6, /* [5] joint 6 */
	(u32)dFTPurinAnimTeeter_joint7, /* [6] joint 7 */
	(u32)dFTPurinAnimTeeter_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTPurinAnimTeeter_joint10, /* [9] joint 10 */
	(u32)dFTPurinAnimTeeter_joint11, /* [10] joint 11 */
	(u32)dFTPurinAnimTeeter_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPurinAnimTeeter_joint14, /* [13] joint 14 */
	(u32)dFTPurinAnimTeeter_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPurinAnimTeeter_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTPurinAnimTeeter_joint19, /* [18] joint 19 */
	(u32)dFTPurinAnimTeeter_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPurinAnimTeeter_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTPurinAnimTeeter_joint1[34] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 600,
	ftAnimSetValRate(FT_ANIM_TRAY), 600, 3,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 8), 660, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 8), 660,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 360, -150, 600, -99,
	ftAnimSetValRateT(FT_ANIM_TRAY, 8), 360, 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 8), 480,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 600, 600,
	ftAnimLoop(0x6800, -64),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPurinAnimTeeter_joint2[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, -312, 0,
	ftAnimBlock(0, 32),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPurinAnimTeeter_joint3[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 268, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 16), 536, 27, 178, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 714, 0, 178, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 268, 0,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPurinAnimTeeter_joint5[24] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 123, -479, -123,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 268, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 128, -771, 129,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 123, -479, -123,
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPurinAnimTeeter_joint6[162] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 587, -68, -937, 31, 312, 69,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -862, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 294, -379, 616, 394,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -240, -409, 1170, 432,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -525, -167, -922, -67, 1481, 196,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1325, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -576, -18, 1564, 53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -395, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1591, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1581, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1396, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -327, 65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -172, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1361, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1200, 46,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -208, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -461, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1373, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1390, 46,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1152, 46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -927, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -534, -84,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -726, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1449, 62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1563, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -786, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -707, 528, -859, 43, 1498, -503,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, 607, -841, -17, 557, -565,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 507, 158, -895, -48, 367, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 587, 79, -937, -42, 312, -55,
	ftAnimLoop(0x6800, -320),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPurinAnimTeeter_joint7[42] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimLoop(0x6800, -82),
};

/* Joint 9 */
u16 dFTPurinAnimTeeter_joint9[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -268, -193, -481, -146,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 0, -268, -142, -340, -204,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 268, 0, -268, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -212, -420, -204,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 178, -37,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -8, 127, -362, -38,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 0, -268, -193, -481, -146,
	ftAnimLoop(0x6800, -94),
};

/* Joint 10 */
u16 dFTPurinAnimTeeter_joint10[196] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX), 931, -7, 572, -3, 1827, 0, 3072, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 529, -14, 1749, -32,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 16), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 792, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 748, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 753, 14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 513, -12, 1714, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1596, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 576, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 768, 23, 633, 59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 908, 194,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 759, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1622, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1735, 207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1189, 229, 2037, 248,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 16), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1366, 44, 754, -3, 2231, 53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 720, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1278, -127, 2144, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 938, -136, 1796, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 837, -64, 1698, -58,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 855, 105, 1740, 126,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 716, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 738, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1020, 184, 1931, 204,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1696, 747,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2149, 333,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 780, 11, 2598, 705,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 744, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2719, 584, 3560, 531,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2866, 221, 3661, 203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3162, 614, 778, -15, 3966, 639,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 615, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4095, 491, 4940, 530,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4144, 25, 5026, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4146, 2, 569, -46, 5042, 15,
	ftAnimLoop(0x6800, -390),
};

/* Joint 11 */
u16 dFTPurinAnimTeeter_joint11[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPurinAnimTeeter_joint13[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, -3, 0, 3, -1072, 0, 73, -3, -60, -4, -40, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 32), -804, 0, -1072, 73, -60, -40,
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPurinAnimTeeter_joint14[134] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 36, 0, -199, 1, 657, -2,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 31, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -204, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 618, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 635, 28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 967, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 23, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -182, -21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -214, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -164, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1082, 103,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1364, 7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -199, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -230, 12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -163, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -214, -17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1369, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1111, -123,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -212, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 16, 25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -231, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -204, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 974, -135,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 678, -38,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 32, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 35, 2, -200, 4, 661, -16,
	ftAnimLoop(0x6800, -264),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPurinAnimTeeter_joint16[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 8), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimLoop(0x6800, -66),
};

/* Joint 18 */
u16 dFTPurinAnimTeeter_joint18[122] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1761, 3, 1629, -4, -957, 2,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1665, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1568, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -932, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -928, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1018, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1649, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1538, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1543, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1478, -2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1024, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1055, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1535, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1663, -37,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1476, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1538, 34,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1047, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -958, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1701, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1762, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1576, 34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1624, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -956, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1761, 0, 1629, 5, -954, 2,
	ftAnimLoop(0x6800, -240),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPurinAnimTeeter_joint19[100] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -75, 0, 181, 0, 534, -1,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 190, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 1, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 523, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 538, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 836, 31,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 196, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 233, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 17, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 53, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 864, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 925, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 37, -20, 888, -49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 577, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -73, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 231, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 184, -5,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 544, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -75, -1, 181, -2, 534, -10,
	ftAnimLoop(0x6800, -196),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTPurinAnimTeeter_joint21[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 7, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPurinAnimTeeter_joint22[102] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 156, -1, 15, -3, 679, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 10, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), 154, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 581, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 559, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 319, -33,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 9, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 16, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 286, -33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 141, 3,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 158, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 155, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 152, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 356, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 461, 97,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 664, 27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 15, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 15, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 156, 0, 15, 0, 679, 15,
	ftAnimLoop(0x6800, -192),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
