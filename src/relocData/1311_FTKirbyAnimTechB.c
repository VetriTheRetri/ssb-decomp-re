/* AnimJoint data for relocData file 1311 (FTKirbyAnimTechB) */
/* 2368 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimTechB_joint1[26];
extern u16 dFTKirbyAnimTechB_joint2[80];
extern u16 dFTKirbyAnimTechB_joint3[18];
extern u16 dFTKirbyAnimTechB_joint4[32];
extern u16 dFTKirbyAnimTechB_joint6[66];
extern u16 dFTKirbyAnimTechB_joint7[180];
extern u16 dFTKirbyAnimTechB_joint8[14];
extern u16 dFTKirbyAnimTechB_joint10[94];
extern u16 dFTKirbyAnimTechB_joint11[242];
extern u16 dFTKirbyAnimTechB_joint12[24];
extern u16 dFTKirbyAnimTechB_joint14[8];
extern u16 dFTKirbyAnimTechB_joint15[18];
extern u16 dFTKirbyAnimTechB_joint17[14];
extern u16 dFTKirbyAnimTechB_joint19[144];
extern u16 dFTKirbyAnimTechB_joint20[22];
extern u16 dFTKirbyAnimTechB_joint22[14];
extern u16 dFTKirbyAnimTechB_joint23[142];

/* Joint pointer table (23 entries, 92 bytes) */
AObjEvent32 * dFTKirbyAnimTechB_joints[] = {
	(AObjEvent32 *)dFTKirbyAnimTechB_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTKirbyAnimTechB_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTKirbyAnimTechB_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTKirbyAnimTechB_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTKirbyAnimTechB_joint6, /* [4] joint 6 */
	NULL, /* [5] NULL */
	(AObjEvent32 *)dFTKirbyAnimTechB_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTKirbyAnimTechB_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTKirbyAnimTechB_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTKirbyAnimTechB_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTKirbyAnimTechB_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTKirbyAnimTechB_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTKirbyAnimTechB_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTKirbyAnimTechB_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTKirbyAnimTechB_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTKirbyAnimTechB_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTKirbyAnimTechB_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTKirbyAnimTechB_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTKirbyAnimTechB_joint1[26] = {
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 615,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 6), 0, -612,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 16), -4200,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 9), -4800,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 9), -4800,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimTechB_joint2[80] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 780,
	ftAnimSetValRate(FT_ANIM_ROTX), 1519, 37,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 6), 780,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 1608,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1519, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -591, -948,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 720, -831,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 627, 1075,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -8936, -255,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 538, 112,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 655, -704,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 580, -42,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 623, 413,
	ftAnimSetValRateT(FT_ANIM_TRAY, 6), 954, 145,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 10), -9650,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 600, -1289,
	ftAnimSetValT(FT_ANIM_TRAY, 9), 600,
	ftAnimBlock(0, 3),
	ftAnimSetValBlockT(FT_ANIM_ROTX, 6), -9650,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimTechB_joint3[18] = {
	ftAnimSetVal(FT_ANIM_ROTY), 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 22), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 9), -268,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 9), -268,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTKirbyAnimTechB_joint4[32] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 312, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), 0, 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -21, 1, 12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -154, 13, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 0, 23, 0, -1, 0, -12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimTechB_joint6[66] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY), -120, -120,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 31, -16, -8, 4, 126, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 22), -120,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 31), -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 11, 14, -7, -5, 128, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 287, 383, 77, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -49, -75,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -87, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 32), 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 434, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 31), 0, -5, 0, 1,
	ftAnimBlock(0, 13),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 9), -60,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 9), 0, 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimTechB_joint7[180] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3072,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2249, 2, -476, -16, -1629, -1,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4095, 4095,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -491, 44,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 22), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -2326, -34, -1574, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2350, 157, -1604, -156,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1828, 421,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2012, 143, -422, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2062, -206, -446, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2425, -303, -320, 53, -1044, 452,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -628, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2669, -213, -923, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2852, -292, -779, 306,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3254, -363, -310, 420,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -4284, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 61, 294,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 791, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -618, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -435, -7,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4372, -98, 852, 64,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -4848, -94,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1082, -56,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 18), 4095,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4880, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -5297, -502,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1008, -75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 162, -51,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -5936, -362, -439, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -233, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -6022, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -6013, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -5666, 36,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 110, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 56, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5629, 37, -217, 15, 0, -56,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTKirbyAnimTechB_joint8[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimTechB_joint10[94] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY), 120, -120,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 30, -13, 7, -3, -127, 1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 12, 15, 5, 4,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 22), 120,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 31), -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -129, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -111, 19,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 130, 211, 33, 49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -63, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 410, 59, 85, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 379, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 86, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 21, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 19, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -14, -9,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 20), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 0, 5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 0, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 9), 90,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 9), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimTechB_joint11[242] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3072,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -914, -12, 476, 11, -1625, -1,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 500, -45,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 7), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -909, 31, -1594, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -865, -44, -1571, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -997, -196, -1690, -175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1258, 258, 425, -3, -1922, 99,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_SCAX, 2), -964, 328, 3072, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -480, 314, 494, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -629, -1, 314, -73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 627, 70,
	ftAnimSetTargetRateBlock(FT_ANIM_SCAX), 0,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 6), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -483, 126, -834, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -377, 188, -699, 216,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 52, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -401, 221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 635, -10, -257, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 646, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -39, -94, -398, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -136, -101, -548, -113,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 7), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -242, -309, -625, -240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -755, -595, 751, 16, -1028, -476,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 509, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1434, -440, -1578, -299,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1747, -88, -1600, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1814, -39, 462, -31, -1561, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1621, 136,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1486, -49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 738, 69,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 18), 4096,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1489, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1515, -660, -1573, -680,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2811, -784, 774, -20, -2846, -718,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 524, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3083, -244, -3010, -95,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -3076, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3301, -218,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -4004, -16,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 483, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 258, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3090, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -3195, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4021, -16, 217, -40, -3216, -21,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTKirbyAnimTechB_joint12[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 32), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTKirbyAnimTechB_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, 0, -1072,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTKirbyAnimTechB_joint15[18] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -23, 2, -302, 0, 237, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 39), -21, -302, 233,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -21, -302, 233,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTKirbyAnimTechB_joint17[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 39), 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTKirbyAnimTechB_joint19[144] = {
	ftAnimSetValAfter(FT_ANIM_SCAX | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1840, -7, 1576, 39, -1350, -48,
	ftAnimSetValBlock(FT_ANIM_SCAY), 4096,
	ftAnimSetValT(FT_ANIM_SCAY, 9), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), -1887, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1626, -32, -1424, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1597, -18, -1392, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1818, 17, -1664, -43,
	ftAnimBlock(0, 3),
	ftAnimSetTargetRateBlock(FT_ANIM_SCAY), -731,
	ftAnimSetValRateT(FT_ANIM_SCAY, 6), 2927, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1831, 9, -1704, -34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1611, 67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1660, -39,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_SCAY, 7), 4096, 749,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1899, -8, -1544, 56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1490, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -1917, -2,
	ftAnimSetValT(FT_ANIM_SCAY, 18), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1629, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1688, 74,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1496, -43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1702, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1779, 48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1784, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1700, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1703, -1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1784, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1785, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1919, -2, 1785, 0, -1704, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTKirbyAnimTechB_joint20[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 21, 0, 302, 0, 233, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 39), 21, 302, 233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, 0, 302, 0, 233, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTKirbyAnimTechB_joint22[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 39), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTKirbyAnimTechB_joint23[142] = {
	ftAnimSetValAfter(FT_ANIM_SCAX | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1430, 12, -1572, -38, -1369, -37,
	ftAnimSetValBlock(FT_ANIM_SCAY), 4096,
	ftAnimSetValT(FT_ANIM_SCAY, 9), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), -1353, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1619, 31, -1429, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1590, 17, -1400, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1800, -15, -1675, -44,
	ftAnimBlock(0, 3),
	ftAnimSetTargetRateBlock(FT_ANIM_SCAY), -739,
	ftAnimSetVal0RateT(FT_ANIM_SCAY, 6), 2929,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1813, -8, -1716, -35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1618, 67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1660, 35,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_SCAY, 7), 4096, 757,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1341, 8, -1552, 54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1478, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -1301, 3,
	ftAnimSetValT(FT_ANIM_SCAY, 18), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1630, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1675, -91,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1483, -46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1714, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1776, -53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1783, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1708, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1707, -1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1784, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1785, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1298, 3, -1785, 0, -1708, 0,
	ftAnimEnd(),
};
