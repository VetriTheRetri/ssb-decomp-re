/* AnimJoint data for relocData file 1073 (FTSamusAnimFSmashHigh) */
/* 3024 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimFSmashHigh_joint1[36];
extern u16 dFTSamusAnimFSmashHigh_joint2[30];
extern u16 dFTSamusAnimFSmashHigh_joint4[84];
extern u16 dFTSamusAnimFSmashHigh_joint5[166];
extern u16 dFTSamusAnimFSmashHigh_joint6[64];
extern u16 dFTSamusAnimFSmashHigh_joint7[40];
extern u16 dFTSamusAnimFSmashHigh_joint8[10];
extern u16 dFTSamusAnimFSmashHigh_joint11[36];
extern u16 dFTSamusAnimFSmashHigh_joint12[220];
extern u16 dFTSamusAnimFSmashHigh_joint13[72];
extern u16 dFTSamusAnimFSmashHigh_joint14[26];
extern u16 dFTSamusAnimFSmashHigh_joint16[26];
extern u16 dFTSamusAnimFSmashHigh_joint17[126];
extern u16 dFTSamusAnimFSmashHigh_joint19[64];
extern u16 dFTSamusAnimFSmashHigh_joint21[120];
extern u16 dFTSamusAnimFSmashHigh_joint22[134];
extern u16 dFTSamusAnimFSmashHigh_joint24[208];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTSamusAnimFSmashHigh_joints[] = {
	(u32)dFTSamusAnimFSmashHigh_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimFSmashHigh_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimFSmashHigh_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimFSmashHigh_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimFSmashHigh_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimFSmashHigh_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimFSmashHigh_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimFSmashHigh_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimFSmashHigh_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimFSmashHigh_joint13, /* [12] joint 13 */
	(u32)dFTSamusAnimFSmashHigh_joint14, /* [13] joint 14 */
	(u32)dFTSamusAnimFSmashHigh_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTSamusAnimFSmashHigh_joint17, /* [16] joint 17 */
	(u32)dFTSamusAnimFSmashHigh_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimFSmashHigh_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTSamusAnimFSmashHigh_joint22, /* [21] joint 22 */
	(u32)dFTSamusAnimFSmashHigh_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF02AC, /* [24] END */
};

/* Joint 1 */
u16 dFTSamusAnimFSmashHigh_joint1[36] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1600, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 1189, -203, -642, 517,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1294, 208, 776, 2837,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 1294, 776,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), -40, -346,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 1202, 90, -2, -230,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 1600, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTSamusAnimFSmashHigh_joint2[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 11), -402,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), 0, 100,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 27), 0, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTSamusAnimFSmashHigh_joint4[84] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 0, 37, -214, 46, 89, 25, -53, 50, -12, -18, -6, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 446, 111, 562, 194, 303, 53, 75, 259, -27, -29, 25, 64,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 446, 562, 303, 75, -27, 25,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -49, 16, 39,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -62, -66, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 2, -16, -361, -20, 16, -11,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 26, -85, -11, 28, 65, -15,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -42, -9, 12, 4, 3, -23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 0, 0, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimFSmashHigh_joint5[166] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1132, 4, -1722, 4, 1377, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1473, 34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 976, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -862, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -811, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -706, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1444, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1438, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1463, 90, 943, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -756, -25, -1256, 103, 1118, 87,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -992, -211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1257, 0, 1118, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1218, -13, 1255, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1243, -215, -1263, -80, 1455, 171,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1567, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1210, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1457, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1412, 44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1161, 175,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1534, 67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1370, 35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -962, 144, 1044, -117,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -849, -5, 940, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1360, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1688, -21,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -858, -14, 935, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1145, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 1344, 37,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1706, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1721, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1139, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1132, 7, -1722, -1, 1377, 32,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimFSmashHigh_joint6[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -739, 3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -720, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -771, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -949, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -948, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -948, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -878, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1059, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -972, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -535, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -476, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -585, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -629, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -706, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, -32,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimFSmashHigh_joint7[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 701, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 11), 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -312, 0, 0, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -312, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 18,
	ftAnimSetValT(FT_ANIM_ROTZ, 27), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -49, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 16), 701, 114,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimFSmashHigh_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 42),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimFSmashHigh_joint11[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 0, -32, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -384, -96, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -384, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 23, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -57, 14, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTSamusAnimFSmashHigh_joint12[220] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 58, 2, -128, -20, -215, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -231, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -17, -43, 60, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -57, -23, 174, 101,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 64, -10, 354, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -188, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -72, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 26, -372, -127, 204, 397, 681,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -680, -352, 337, 234, 1717, 660,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -679, 0, 340, 1, 1718, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 340, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -679, 0, 1718, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -679, -259, 1718, -142,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1079, -279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1199, -451, 541, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 147, -201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1582, -248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1696, -125, 873, -214,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 552, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1833, -164, -28, -119,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2283, -99,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 186, 100,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 527, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 500, 35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2369, -88,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2627, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 277, 87,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 640, 58,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 539, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 195, -330,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2675, -75,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -3065, -352,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 691, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 94, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3483, -287, -200, -264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -3604, 62, -268, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3528, 79, -204, 54,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -3167, 17, -209, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -127, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3158, 8, -128, -1, -215, -6,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTSamusAnimFSmashHigh_joint13[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -595, -11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -981, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1027, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1095, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1183, 547,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 589,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -342,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -690, -522,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1050, -278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1094, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1027, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -1154, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1099, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -610, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, 15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTSamusAnimFSmashHigh_joint14[26] = {
	ftAnimSetVal(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 425, -203, -64,
	ftAnimSetFlags(FT_ANIM_ROTY),
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 425, -203, -64,
	ftAnimSetFlags(0),
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 426, -23, -14,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 45), 425, -203, -64,
	ftAnimBlock(0, 1),
	ftAnimSetFlagsT(FT_ANIM_ROTY, 26),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTSamusAnimFSmashHigh_joint16[26] = {
	ftAnimSetVal(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 423, 203, 64,
	ftAnimSetFlags(FT_ANIM_ROTY),
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 423, 203, 64,
	ftAnimSetFlags(0),
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 430, 15, 12,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 45), 423, 203, 64,
	ftAnimBlock(0, 1),
	ftAnimSetFlagsT(FT_ANIM_ROTY, 26),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimFSmashHigh_joint17[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 87, -4, -27, -4, -389, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -568, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -284, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 134, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 167, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 182, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -586, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -676, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 168, -95, -304, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -8, -88, -112, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -8, 0, -112, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -54, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 71, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -676, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -682, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -672, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -624, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -60, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -36, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 67, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 86, 2,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -589, 36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -396, 12,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -31, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -27, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 87, 1, -27, 0, -389, 6,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTSamusAnimFSmashHigh_joint19[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 478, 3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 451, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 440, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 567, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 721, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 720, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 720, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 636, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 597, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 755, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 842, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 906, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 900, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 488, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, -9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTSamusAnimFSmashHigh_joint21[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -75, 1, -28, 3, -41, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 123, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 121, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -184, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -230, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -258, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -232, 142, 96, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 27, 127, -4, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 22, -1, -4, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 94, 43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -57, 6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 100, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 32, -16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 141, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -19, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -122, -85,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -178, 9,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -50, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -75, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -160, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -45, 5,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 16, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -26, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -75, 0, -28, -2, -41, 3,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimFSmashHigh_joint22[134] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 226, -5, 160, 6, -49, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 380, 35, -397, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 240, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 280, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 169, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 405, 10, -440, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 371, -44, -557, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 62, 34, 313, -166, -596, 558,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 238, 87, 38, -137, 559, 577,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 238, 0, 38, 0, 559, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 94, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), 79, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 487, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 349, -109,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -74, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 111, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 133, 11,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -118, -41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -164, 32,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 145, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 161, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 112, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 221, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -131, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -54, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 226, 5, 160, 0, -49, 5,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTSamusAnimFSmashHigh_joint24[208] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 442, 16,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 906, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 942, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 968, -471,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -484,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 4, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 28, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 243, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 341, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 739, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 687, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 450, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 442, -7,
	ftAnimEnd(),
	0x0000, 0x200E, 0x008E, 0x0000, 0x00C1, 0xFFFA, 0xFF2B, 0xFFFB, 0x2803, 0x0007, 0xFFE3, 0xFFCB, 0x2809, 0x0008, 0xFEFA, 0x0000, 0x2005, 0x0006, 0xFFA0, 0xFFA7, 0x2005, 0x0001, 0xFF4D, 0xFFC3, 0x2805, 0x0003, 0xFF70, 0x0054, 0x2003, 0x0001, 0xFFB3, 0xFFE1, 0x2803, 0x0002, 0xFFC0, 0x0032, 0x2009, 0x0001, 0xFEF6, 0xFFF9, 0x2009, 0x0001, 0xFEEA, 0xFFF6, 0x200F, 0x0001, 0x0009, 0xFFF7, 0xFFDA, 0x002B, 0xFEE1, 0x0195, 0x2805, 0x0002, 0xFFC8, 0x0000, 0x200B, 0x0001, 0xFFAC, 0xFFD2, 0x0214, 0x019A, 0x200B, 0x0001, 0xFFAD, 0x0000, 0x0214, 0xFFFF, 0x280B, 0x0003, 0xFFE9, 0x004C, 0x0159, 0xFEF1, 0x2005, 0x0001, 0xFFC8, 0x0000, 0x2805, 0x0019, 0x00CF, 0xFFF9, 0x0801, 0x0002, 0x200B, 0x0001, 0x0043, 0x0044, 0xFFF4, 0xFEA9, 0x2803, 0x0006, 0x0075, 0xFFFE, 0x2009, 0x0001, 0xFEAC, 0xFF12, 0x2009, 0x0001, 0xFE17, 0xFF93, 0x2809, 0x0005, 0xFD94, 0xFFFF, 0x0801, 0x0004, 0x2003, 0x0001, 0x0072, 0xFFFF, 0x2803, 0x0011, 0x008E, 0x0000, 0x2009, 0x0001, 0xFD95, 0x0004, 0x2809, 0x000F, 0xFF13, 0x0015, 0x0801, 0x000E, 0x2005, 0x0001, 0x00C8, 0xFFFA, 0x200D, 0x0001, 0x00C3, 0xFFFD, 0xFF25, 0x000B, 0x200F, 0x0001, 0x008E, 0x0000, 0x00C1, 0xFFFF, 0xFF2B, 0x0006, 0x0000,
};
