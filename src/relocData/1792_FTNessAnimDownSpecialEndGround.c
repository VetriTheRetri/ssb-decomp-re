/* AnimJoint data for relocData file 1792 (FTNessAnimDownSpecialEndGround) */
/* 1696 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimDownSpecialEndGround_joint1[32];
extern u16 dFTNessAnimDownSpecialEndGround_joint2[10];
extern u16 dFTNessAnimDownSpecialEndGround_joint4[14];
extern u16 dFTNessAnimDownSpecialEndGround_joint5[74];
extern u16 dFTNessAnimDownSpecialEndGround_joint6[32];
extern u16 dFTNessAnimDownSpecialEndGround_joint7[12];
extern u16 dFTNessAnimDownSpecialEndGround_joint8[24];
extern u16 dFTNessAnimDownSpecialEndGround_joint10[12];
extern u16 dFTNessAnimDownSpecialEndGround_joint11[88];
extern u16 dFTNessAnimDownSpecialEndGround_joint12[40];
extern u16 dFTNessAnimDownSpecialEndGround_joint13[24];
extern u16 dFTNessAnimDownSpecialEndGround_joint15[12];
extern u16 dFTNessAnimDownSpecialEndGround_joint16[80];
extern u16 dFTNessAnimDownSpecialEndGround_joint18[40];
extern u16 dFTNessAnimDownSpecialEndGround_joint19[60];
extern u16 dFTNessAnimDownSpecialEndGround_joint21[36];
extern u16 dFTNessAnimDownSpecialEndGround_joint22[76];
extern u16 dFTNessAnimDownSpecialEndGround_joint24[32];
extern u16 dFTNessAnimDownSpecialEndGround_joint25[68];
extern u16 dFTNessAnimDownSpecialEndGround_joint26[30];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTNessAnimDownSpecialEndGround_joints[] = {
	(AObjEvent32 *)dFTNessAnimDownSpecialEndGround_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTNessAnimDownSpecialEndGround_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTNessAnimDownSpecialEndGround_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTNessAnimDownSpecialEndGround_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTNessAnimDownSpecialEndGround_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTNessAnimDownSpecialEndGround_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTNessAnimDownSpecialEndGround_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTNessAnimDownSpecialEndGround_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTNessAnimDownSpecialEndGround_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTNessAnimDownSpecialEndGround_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTNessAnimDownSpecialEndGround_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTNessAnimDownSpecialEndGround_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTNessAnimDownSpecialEndGround_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTNessAnimDownSpecialEndGround_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTNessAnimDownSpecialEndGround_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTNessAnimDownSpecialEndGround_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTNessAnimDownSpecialEndGround_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTNessAnimDownSpecialEndGround_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTNessAnimDownSpecialEndGround_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTNessAnimDownSpecialEndGround_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTNessAnimDownSpecialEndGround_joint1[32] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRate(FT_ANIM_TRAX), -23, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 400, -124,
	ftAnimSetValRateT(FT_ANIM_TRAX, 2), -23, 2,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 3), -124,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 2), 277,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 1), -22, 6, 401, -26,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -16, 537, -28,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNessAnimDownSpecialEndGround_joint2[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 28, -360, 8,
	_FT_ANIM_CMD(11, 0, 1), 27,
	ftAnimBlock(0, 11),
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTNessAnimDownSpecialEndGround_joint4[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 12,
	ftAnimBlock(0, 11),
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTNessAnimDownSpecialEndGround_joint5[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1058, 33, -1332, 0, 744, -42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1189, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -990, -17, 660, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1058, -35, 745, 45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1116, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 775, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 835, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1195, -272, 949, 345,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1661, -339, -1084, 7, 1527, 442,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1931, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1874, -119, -1174, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1900, -7, -1234, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1890, 9, -1249, -15, 1950, 18,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimDownSpecialEndGround_joint6[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -448, -270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -550, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -513, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, 39,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTNessAnimDownSpecialEndGround_joint7[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 27,
	ftAnimBlock(0, 11),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimDownSpecialEndGround_joint8[24] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -27, 0, 370, 0, -39, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -10, 0, 364, -3, -32, 1,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4,
	ftAnimBlock(0, 11),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTNessAnimDownSpecialEndGround_joint10[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 27,
	ftAnimBlock(0, 11),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimDownSpecialEndGround_joint11[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1412, 148, 445, 2, 822, 164,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 420, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1560, 148, 986, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1709, -75, 1165, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1409, -175, 446, 14, 821, -192,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 404, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1359, -104, 780, -76,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 734, -251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 588, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 418, 66, 615, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 627, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 474, -332, 590, -156,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -308, -242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 302, -308,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 602, -28, -26, -211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -415, -107, 569, -32, -119, -93,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimDownSpecialEndGround_joint12[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -717, 122,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -421, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -716, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -759, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -993, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -919, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -629, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 70,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTNessAnimDownSpecialEndGround_joint13[24] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -424, 38, 60,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -424, 38, 60,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 12,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 90, 54, 126,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTNessAnimDownSpecialEndGround_joint15[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	_FT_ANIM_CMD(11, 0, 1), 27,
	ftAnimBlock(0, 11),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimDownSpecialEndGround_joint16[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -239, 156, -407, -53, -590, -241,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -492, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -82, 124, -831, -224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 10, -79, -1040, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -242, -117, -406, 39, -589, 215,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -418, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -224, 18, -609, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -281, -43, -457, 78,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -413, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -295, 24,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -324, -36, -378, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -354, -20, -320, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -365, -10, -279, 15, -297, 22,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimDownSpecialEndGround_joint18[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 248, 199,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 447, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 555, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 246, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 298, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 482, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 453, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 415, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 396, -19,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTNessAnimDownSpecialEndGround_joint19[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 57, 25, -8, 0, 476, -34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 457, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 11, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 83, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 160, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 60, -51, 476, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 104, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 57, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 6, -2,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 56, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 32, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5, -1, 12, 0, 26, -6,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimDownSpecialEndGround_joint21[36] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -215, -98, 355,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -236, -10, 545,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -215, 21, -98, 0, 355, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -130, 18, -11, 12, 261, -44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -66, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTNessAnimDownSpecialEndGround_joint22[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1480, -265, 1064, 9, -2164, -256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1746, -246, 1073, 54, -2420, -220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1973, 133, 1173, -4, -2606, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1480, 224, 1064, -28, -2164, 216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1523, -54, 1115, 85, -2173, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1717, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1840, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1423, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1459, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1473, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1730, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1735, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1735, 0, 1472, 0, -1819, 20,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimDownSpecialEndGround_joint24[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 942, 146,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1089, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1215, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 940, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 928, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 443, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 407, -36,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTNessAnimDownSpecialEndGround_joint25[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1705, 41, -1599, -8, -1795, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1623, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1811, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1747, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1829, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1704, -57, -1599, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1697, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1714, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1682, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1834, -21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1821, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1690, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1638, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1684, 2, -1633, 4, -1810, 11,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimDownSpecialEndGround_joint26[30] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -126, -82, -12,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -72, 11, -388,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -72, -14, -575,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -72, 14, 11, 1, -388, 63,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 56, 0, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000,
};
