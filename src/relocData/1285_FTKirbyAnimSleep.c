/* AnimJoint data for relocData file 1285 (FTKirbyAnimSleep) */
/* 1952 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimSleep_joint1[54];
extern u16 dFTKirbyAnimSleep_joint2[12];
extern u16 dFTKirbyAnimSleep_joint3[106];
extern u16 dFTKirbyAnimSleep_joint5[12];
extern u16 dFTKirbyAnimSleep_joint6[96];
extern u16 dFTKirbyAnimSleep_joint7[24];
extern u16 dFTKirbyAnimSleep_joint9[12];
extern u16 dFTKirbyAnimSleep_joint10[120];
extern u16 dFTKirbyAnimSleep_joint11[24];
extern u16 dFTKirbyAnimSleep_joint13[12];
extern u16 dFTKirbyAnimSleep_joint14[100];
extern u16 dFTKirbyAnimSleep_joint16[24];
extern u16 dFTKirbyAnimSleep_joint18[82];
extern u16 dFTKirbyAnimSleep_joint19[114];
extern u16 dFTKirbyAnimSleep_joint21[140];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimSleep_joints[] = {
	(u32)dFTKirbyAnimSleep_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimSleep_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimSleep_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimSleep_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimSleep_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimSleep_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimSleep_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimSleep_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimSleep_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimSleep_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimSleep_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimSleep_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimSleep_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimSleep_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimSleep_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	0xFFFF01BA, /* [21] END */
};

/* Joint 1 */
u16 dFTKirbyAnimSleep_joint1[54] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY), 240, 660,
	ftAnimSetValRate(FT_ANIM_TRAZ), -60, 127,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -536, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 20), 0, -96, 240, 79,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 20), 600,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 20), -240, 660,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 10), 240, -72,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 10), 60, -128,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 20), 0, 96, -240, -79,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 20), 600,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 20), 240, 660,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 10), -240, 71,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 10), -60, 127,
	ftAnimLoop(0x6800, -106),
};

/* Joint 2 */
u16 dFTKirbyAnimSleep_joint2[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, -312, 0,
	ftAnimBlock(0, 80),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimSleep_joint3[106] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -178,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -89, 11, 360, 22, 3891, -27, 4505, 54, 3891, -27,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 40), 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 89, 17, 360, -33, 3891, 40, 4505, -81, 3891, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 268, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 276, 4300, 3686, 4300,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 360, 22, 3891, -27, 4505, 54, 3891, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 134, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 89, -11,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 40), -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), -89, -17, 360, -33, 3891, 40, 4505, -81, 3891, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -268, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 276, 4300, 3686, 4300,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 360, 22, 3891, -27, 4505, 54, 3891, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -134, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -89, 11,
	ftAnimLoop(0x6800, -208),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTKirbyAnimSleep_joint5[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 80),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimSleep_joint6[96] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1005, 5, -288, 6, -418, -7,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), -226, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 37), 988, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), -420, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -409, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), -179, 36,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -219, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 36), -451, 1,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 990, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 27), 824, 21,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -141, 37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -46, -47,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -448, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -289, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 846, 21, -95, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 13), 998, 5, -408, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1005, 6, -288, 1, -418, -10,
	ftAnimLoop(0x6800, -188),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimSleep_joint7[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 40), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 38), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTKirbyAnimSleep_joint9[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 80),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimSleep_joint10[120] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 640, 12, 1153, 2, -1909, 24,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), 1082, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 31), 861, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), -1831, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1811, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), -1414, -51,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1074, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 963, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 880, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 697, -67,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1476, -71,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -2135, -16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 965, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1268, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 635, -54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 617, -2,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2147, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), -1935, 26,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 614, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 628, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1262, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 14), 1155, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 640, 11, 1153, -2, -1909, 25,
	ftAnimLoop(0x6800, -236),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimSleep_joint11[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 32), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 46), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimLoop(0x6800, -46),
};

/* Joint 13 */
u16 dFTKirbyAnimSleep_joint13[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 80),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimSleep_joint14[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -67, 0, -196, 11, 369, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 37), -271, -21, 294, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 34), -81, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -73, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 27), 263, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -291, -18, 260, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), -463, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -80, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -99, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 171, 41,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 257, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -67, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -458, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -209, 15,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 216, 36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 365, 9,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -68, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -70, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -67, 2, -196, 13, 369, 4,
	ftAnimLoop(0x6800, -196),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimSleep_joint16[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 75), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTKirbyAnimSleep_joint18[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1826, 8, 1771, -1, -1772, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 33), 1768, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 38), -1920, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 26), -1802, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1790, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -1611, 29,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1762, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 45), 1772, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1936, -13, -1585, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 35), -1917, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), -1323, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1322, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -1757, -12,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1897, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1836, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1826, 10, 1771, -1, -1772, -15,
	ftAnimLoop(0x6800, -160),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimSleep_joint19[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 9, 1, 320, 7, 211, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), 476, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 16), -189, -30, -52, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -215, -25, -81, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -3, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), -116, 1,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 472, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), 204, -9,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 29, 7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -113, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 28, 25,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 28, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 146, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 192, -11, 270, 70,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 334, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), 312, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 32, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), 10, 2,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 333, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 213, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 12, 1, 320, 8, 215, 2,
	ftAnimLoop(0x6800, -224),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimSleep_joint21[140] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 42), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 263, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 292, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 202, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
	0x200E, 0xFB03, 0x0006, 0xF910, 0xFFFE, 0xF9C2, 0x0006, 0x2803, 0x0024, 0xFB09, 0xFFF2, 0x2805, 0x004D, 0xF91A, 0xFFFD, 0x2009, 0x0011, 0xFAAA, 0x0015, 0x2009, 0x0001, 0xFABA, 0x000D, 0x2809, 0x0016, 0xFA16, 0xFFFB, 0x0801, 0x0012, 0x2003, 0x0001, 0xFAFA, 0xFFF2, 0x2803, 0x0028, 0xFAE8, 0x000B, 0x0801, 0x0003, 0x2009, 0x0001, 0xFA0E, 0xFFF6, 0x2009, 0x000A, 0xF8B0, 0x0028, 0x2009, 0x0001, 0xF8F8, 0x001A, 0x2009, 0x0006, 0xF8AA, 0xFFFA, 0x2009, 0x0001, 0xF8A7, 0x0000, 0x2809, 0x0014, 0xF9BD, 0x000B, 0x0801, 0x0012, 0x2007, 0x0001, 0xFAF3, 0x0009, 0xF916, 0xFFFD, 0x2007, 0x0001, 0xFAFC, 0x0008, 0xF913, 0xFFFD, 0x200F, 0x0001, 0xFB03, 0x0007, 0xF910, 0xFFFE, 0xF9C6, 0x0008, 0x6800, 0xFF54, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
