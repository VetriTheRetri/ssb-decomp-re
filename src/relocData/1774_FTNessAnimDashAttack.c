/* AnimJoint data for relocData file 1774 (FTNessAnimDashAttack) */
/* 3648 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimDashAttack_joint1[18];
extern u16 dFTNessAnimDashAttack_joint2[48];
extern u16 dFTNessAnimDashAttack_joint3[22];
extern u16 dFTNessAnimDashAttack_joint5[36];
extern u16 dFTNessAnimDashAttack_joint6[162];
extern u16 dFTNessAnimDashAttack_joint7[112];
extern u16 dFTNessAnimDashAttack_joint8[62];
extern u16 dFTNessAnimDashAttack_joint11[104];
extern u16 dFTNessAnimDashAttack_joint12[198];
extern u16 dFTNessAnimDashAttack_joint13[132];
extern u16 dFTNessAnimDashAttack_joint14[56];
extern u16 dFTNessAnimDashAttack_joint16[10];
extern u16 dFTNessAnimDashAttack_joint17[136];
extern u16 dFTNessAnimDashAttack_joint19[54];
extern u16 dFTNessAnimDashAttack_joint20[122];
extern u16 dFTNessAnimDashAttack_joint22[54];
extern u16 dFTNessAnimDashAttack_joint23[170];
extern u16 dFTNessAnimDashAttack_joint25[72];
extern u16 dFTNessAnimDashAttack_joint26[202];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTNessAnimDashAttack_joints[] = {
	(u32)dFTNessAnimDashAttack_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimDashAttack_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimDashAttack_joint3, /* [2] joint 3 */
	(u32)dFTNessAnimDashAttack_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTNessAnimDashAttack_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimDashAttack_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimDashAttack_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimDashAttack_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTNessAnimDashAttack_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimDashAttack_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimDashAttack_joint14, /* [13] joint 14 */
	(u32)dFTNessAnimDashAttack_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTNessAnimDashAttack_joint17, /* [16] joint 17 */
	(u32)dFTNessAnimDashAttack_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTNessAnimDashAttack_joint20, /* [19] joint 20 */
	(u32)dFTNessAnimDashAttack_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTNessAnimDashAttack_joint23, /* [22] joint 23 */
	(u32)dFTNessAnimDashAttack_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTNessAnimDashAttack_joint26, /* [25] joint 26 */
	0xFFFF036A, /* [26] END */
};

/* Joint 1 */
u16 dFTNessAnimDashAttack_joint1[18] = {
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 1129,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 7), 1331, 1636,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 13), 3261, 528,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 17), 3600,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNessAnimDashAttack_joint2[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), -357, 0, 439, 34,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAX), 0, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 0, 347, 114,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_TRAZ, 13), 0, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 7), 347,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 6), 348, 1,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ, 17), 0, 0, -28,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 12), 349,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 12,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 537, 121,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTNessAnimDashAttack_joint3[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 405, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 20), 444, -10, -1, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 17), 28,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 7), -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), -360,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTNessAnimDashAttack_joint5[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -101,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 14, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 15, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 17, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 31, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 53, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 121, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 7), 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimDashAttack_joint6[162] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -588, -4, -537, 7, 334, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -684, -36, 441, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -387, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -343, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -727, 51, -85, 929, 491, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -582, 73, 1515, 798, 345, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -580, 0, 1510, -2, 347, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), -581, -7, 348, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1510, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1526, 12,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -597, -30, 353, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 487, 97,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1015, -187,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1542, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1569, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1630, 182, 611, 263,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1235, -174, 1935, 165, 1015, 316,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1392, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1961, 6, 1245, 146,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1914, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1325, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1377, -36, 1306, 62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1556, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1959, 35, 1451, 138,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1972, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1583, 126,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1933, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1651, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1869, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1889, -19, 1967, -4, 1949, 16,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimDashAttack_joint7[112] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 9,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -518,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 10146, 478, 8205, 273, 8205, 273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1046, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 523,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 16), 8402, -526, 6553, -358, 6553, -358,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 0, 0,
	ftAnimBlock(0, 14),
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 7), 4090, -550, 4080, -513, 4080, -535,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -505, -263,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -536, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -283, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -74, 50,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 7), 4090, 4080, 4080,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -183, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -265, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -461, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -472, -10,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimDashAttack_joint8[62] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAY), 143, 0, 0, 4096,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -694, -34, -463, -23, 754, 37,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 5), 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 2), 8192, -7, 2040, -475,
	ftAnimSetValRateT(FT_ANIM_SCAZ, 16), 1511, 469,
	ftAnimSetValRateT(FT_ANIM_SCAX, 20), 4054, -576,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -694, 23, -463, 15, 754, -25,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 0, 0, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_SCAZ, 4), 4112, 776,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 10), 4054, 4112,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimDashAttack_joint11[104] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -102, 347, -175, 0, 300, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 0, 300, -61, 0, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 103, 59, 326, -55, -164, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 194, -81, 68, -54, -38, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -385, -6, 0, -4, 0, 2, 0, 0, 246, 0, -107, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), -385, 4, 0, -2, 0, 0, 0, 0, 246, 0, -107, 1,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 17), 0, 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1, 82, -42, -7, 2, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 194, 24, -55, 18, 1, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 199, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 68, 42, -11, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 364, -3, -32, 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -10, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTNessAnimDashAttack_joint12[198] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 482, -11, 1117, -23, 381, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1006, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 471, -43, 375, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 396, -271, 321, -216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -71, 34, 872, -225, -58, 242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 465, 90, 554, -194, 806, 444,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 110, 234, 483, -87, 831, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 935, 193, 379, 560, 867, -250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 496, -219, 1604, 612, 330, -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 496, 0, 1605, 0, 330, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 335, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 505, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1602, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 12), 1596, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1588, -16, 356, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1528, -51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 576, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 518, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 685, 127,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1459, -191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1146, -177, 715, 210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 861, 119, 1104, 47, 996, 195,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 959, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1241, 103, 1107, 87,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1283, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1311, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1297, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 989, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1095, 52,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1253, -77, 1312, 53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1441, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1141, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1142, 40, 1085, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1177, 24, 1051, -22, 1475, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1191, 14, 1039, -12, 1488, 12,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimDashAttack_joint13[132] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 9,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -230, -195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -401, -395,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 10146, 493, 8205, 273, 8205, 273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1021, 200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 510,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 16), 8537, -507, 6553, -358, 6553, -358,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 0, 0,
	ftAnimBlock(0, 14),
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 7), 4090, -550, 4080, -513, 4080, -535,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -400, -199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -408, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -153, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 76,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -9, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 7), 4090, 4080, 4080,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -93, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -340, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -532, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -557, -24,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTNessAnimDashAttack_joint14[56] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAY), 143, 0, 0, 4096,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 557, 66, 217,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 679, 540, 707,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 5), 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 2), 8192, -7, 2040, -258,
	ftAnimSetValRateT(FT_ANIM_SCAZ, 16), 1767, 317,
	ftAnimSetValRateT(FT_ANIM_SCAX, 20), 4054, -576,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 679, 540, 707,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 68, 53, 123,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_SCAZ, 4), 4112, 776,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 10), 4054, 4112,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimDashAttack_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 37),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTNessAnimDashAttack_joint17[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 295, -2, -174, -2, -1059, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 281, -3, -175, 0, -1043, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 279, -39, -175, 66, -1042, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 202, -109, -42, 96, -1166, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 60, -74, 16, 26, -1238, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -3, -7, -1239, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 47, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 39, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -11, -8, -1239, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -1127, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -211, -14,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -91, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 112, -5,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1102, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -666, 165,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -226, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -332, -18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 99, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -206, -126,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -335, 13, -492, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -320, -79, -304, 27, -354, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -365, -45, -279, 24, -297, 56,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTNessAnimDashAttack_joint19[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 412, 373,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 747, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 747, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 746, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 819, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 845, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 903, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 861, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 473, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 396, -76,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTNessAnimDashAttack_joint20[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -289, 105, -760, 35, 427, -111,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -147, -20, 226, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -632, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -523, 101,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -296, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -178, -34, 219, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), 161, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -216, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -320, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -167, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -147, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 13, 22,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -296, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -201, 17,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 32, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -78, 5,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 144, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -56, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -183, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 4, 12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -71, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 3, 4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -40, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5, 1, 12, 7, 26, 23,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimDashAttack_joint22[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -902, 85, -102,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -989, -8, 81, -22, -97, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -965, 7, -69, -10, -44, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -876, 7, -72, 1, -10, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -806, 14, -40, 16, -3, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -707, 74, 121, 4, 24, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -66, 0, 0,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTNessAnimDashAttack_joint23[170] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2051, -17, 1346, 14, -990, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1985, -77, 1390, 4, -1020, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1879, -92, 1370, 3, -1150, -111,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1756, -92, 1418, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1244, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1306, -209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1615, -102, 1420, 30, -1663, -314,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1547, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1479, 30, -1934, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1482, 2, -1934, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1524, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1934, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -1938, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1544, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1505, -3,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1517, -16, -1921, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1504, 61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1249, -14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1505, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1618, -42,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1468, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1883, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1235, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1256, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1556, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1329, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1336, 17, -1903, -31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1953, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1451, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1380, 99,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1475, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1897, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1481, 29, 1472, -3, -1819, 77,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTNessAnimDashAttack_joint25[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 198, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 289, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 315, 214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 718, 303,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 923, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 923, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 927, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 937, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 879, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 829, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1017, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 963, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 592, -202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 407, -185,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTNessAnimDashAttack_joint26[202] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -89, -2, -164, 0, 64, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), 40, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), -203, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -135, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -141, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -39, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -35, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -27, -13,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 54, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 304, 10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -45, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -256, -59,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -222, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -452, -56,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -311, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -292, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 305, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -500, -13, 248, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -156, 135, -478, 112, -16, -277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -20, 54, -276, 189, -306, -186,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -10, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -47, 6, -390, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -7, 61, -293, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 76, 83, 25, 35, -202, 91,
	ftAnimEnd(),
	0x400E, 0x01D3, 0x008B, 0xFFE5, 0x48E0, 0xFF82, 0xFFAE, 0xFFF4, 0x200F, 0x0005, 0x01BE, 0xFFEF, 0x0084, 0x0000, 0xFFE7, 0x0000, 0x200F, 0x0002, 0x00DE, 0x0000, 0x0090, 0x0000, 0xFFBD, 0x0000, 0x200F, 0x000D, 0x00DE, 0x0000, 0x0090, 0x0000, 0xFFBD, 0x0000, 0x200F, 0x0007, 0x01A0, 0x0000, 0x004F, 0x0000, 0xFFDC, 0x0000, 0x200F, 0x0003, 0x017A, 0xFFEA, 0x00A4, 0x0025, 0xFF42, 0xFFBC, 0x200F, 0x0001, 0x015B, 0xFFDD, 0x00CD, 0x0027, 0xFEF2, 0xFFD8, 0x200F, 0x0001, 0x0130, 0xFFCE, 0x00C5, 0xFFDE, 0xFEEA, 0x0026, 0x380F, 0x0005, 0x0038, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
