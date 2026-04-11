/* AnimJoint data for relocData file 589 (FTMarioAnimItemThrowSmashB) */
/* 2608 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimItemThrowSmashB_joint1[60];
extern u16 dFTMarioAnimItemThrowSmashB_joint2[66];
extern u16 dFTMarioAnimItemThrowSmashB_joint4[100];
extern u16 dFTMarioAnimItemThrowSmashB_joint5[80];
extern u16 dFTMarioAnimItemThrowSmashB_joint6[46];
extern u16 dFTMarioAnimItemThrowSmashB_joint7[12];
extern u16 dFTMarioAnimItemThrowSmashB_joint8[68];
extern u16 dFTMarioAnimItemThrowSmashB_joint10[20];
extern u16 dFTMarioAnimItemThrowSmashB_joint11[148];
extern u16 dFTMarioAnimItemThrowSmashB_joint12[46];
extern u16 dFTMarioAnimItemThrowSmashB_joint13[26];
extern u16 dFTMarioAnimItemThrowSmashB_joint15[10];
extern u16 dFTMarioAnimItemThrowSmashB_joint16[114];
extern u16 dFTMarioAnimItemThrowSmashB_joint18[56];
extern u16 dFTMarioAnimItemThrowSmashB_joint20[108];
extern u16 dFTMarioAnimItemThrowSmashB_joint21[126];
extern u16 dFTMarioAnimItemThrowSmashB_joint23[170];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimItemThrowSmashB_joints[] = {
	(u32)dFTMarioAnimItemThrowSmashB_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimItemThrowSmashB_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimItemThrowSmashB_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimItemThrowSmashB_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimItemThrowSmashB_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimItemThrowSmashB_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimItemThrowSmashB_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimItemThrowSmashB_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimItemThrowSmashB_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimItemThrowSmashB_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimItemThrowSmashB_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimItemThrowSmashB_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimItemThrowSmashB_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimItemThrowSmashB_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimItemThrowSmashB_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimItemThrowSmashB_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimItemThrowSmashB_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	0xFFFF0251, /* [23] END */
};

/* Joint 1 */
u16 dFTMarioAnimItemThrowSmashB_joint1[60] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 540, 105, 0, -40,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 223, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 0, 551, 14, -60, -80,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 551, 4, -60, 806,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 0, 553, -107, 242, 1022,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 0, 484, -137, 578, 673,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 484, 23, 578, -243,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 18), 0, 0, 540, 12, 0, -57,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimItemThrowSmashB_joint2[66] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), -71, 7, -790, -41, -95, 3, 0, 18, 0, -36,
	ftAnimSetValAfterBlock(FT_ANIM_TRAY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 5), 20, 15, -1323, -88, -44, 8, 29, 39, -60, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 20, 41, -1323, 502, -44, -60, 29, -9, -60, 19,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 24), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 103, -10, -319, 661, -165, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -7, 0, -20, 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), -71, -1, -790, -9, -95, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTMarioAnimItemThrowSmashB_joint4[100] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 208, -72, 258, 13, 110, -63,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 0, -26, 0, -1, 0, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 465, -50, 224, -20, 104, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -44, -127, 154, -17, 158, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -44, 35, 154, 53, 158, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 26, 131, 260, 42, 11, 74,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 480, 58, 323, 7, 454, 55,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -33, -2, 95,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 843, -13,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 312, -3, 403, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 298, -3, 322, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 258, -2, 110, -4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 208, -11,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimItemThrowSmashB_joint5[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 133, 66, -300, -11, -272, -76,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -568, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 442, 236, -447, -175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 744, 242, -698, -198,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 512, -30, -452, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -521, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -741, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -731, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -335, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 478, -37, -419, 37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 166, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -361, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -308, 14, -363, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -305, 4, -308, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 133, -33, -300, 5, -272, 36,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimItemThrowSmashB_joint6[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -182, 50,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -131, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -261, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -169, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 84,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 18), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -109, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, -73,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTMarioAnimItemThrowSmashB_joint7[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -625,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 143, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 30), 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTMarioAnimItemThrowSmashB_joint8[68] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 201, 54, -4, 76, 176, 32,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 595, 65, 567, 95, 359, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 595, -223, 567, -392, 359, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 149, -536, -216, -592, 232, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -476, -148, -617, -53, 648, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -591, 15, -484, 35, 560, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -240, 44, -83, 26, 147, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 201, 8, -4, 1, 176, -1,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTMarioAnimItemThrowSmashB_joint10[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -221, -6, 139, 3, -209, -5,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), -221, -1, 139, 1, -209, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimItemThrowSmashB_joint11[148] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 443, 17, 551, 31, 65, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 599, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 403, -172, 14, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 116, -171, -286, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 129, 39, -266, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 139, 41, 598, 395, -256, 98,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 348, 545,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 213, 311, 1390, 324,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 762, 639, 1246, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1433, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1492, 394, 1021, 394,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1148, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1551, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1535, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1446, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1503, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1151, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 975, -26,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1532, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1498, -27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1504, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1245, -128,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1463, 51, 947, 123,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1927, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1221, 218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1135, -88, 1384, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1068, -39, 1555, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2052, 124, 1056, -12, 1674, 118,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimItemThrowSmashB_joint12[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -811, 138,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -493, 270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -132, 246,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -536, -358,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -717, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -785, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, -26,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimItemThrowSmashB_joint13[26] = {
	ftAnimSetValAfter(FT_ANIM_ROTY), 0,
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), 625,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 7), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 7), 1340,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 23), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 893,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 4), 580,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 18), 625,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTMarioAnimItemThrowSmashB_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimItemThrowSmashB_joint16[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1745, -161, -1377, 76, 1643, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1194, -75,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -2661, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1969, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2135, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1297, -51, 2204, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2661, 353, -1297, 39, 2204, -608,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1953, 414, -1217, -189, 988, -438,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1832, 138, -1675, -188, 1327, 149,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1552, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1594, 53, 1286, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1548, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1312, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1514, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1561, -9, 1512, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 1602, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -1739, -8,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1534, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1378, 3,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1625, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1745, -5, -1377, 1, 1643, 18,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimItemThrowSmashB_joint18[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 409, 21,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 485, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 380, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 380, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 406, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 326, 284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 596, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 570, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 517, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 489, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 433, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 409, -23,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTMarioAnimItemThrowSmashB_joint20[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -206, -12, -47, 117, -197, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -140, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 477, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 80, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 200, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -140, 334, 200, 331,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 527, 235, 430, 64, 864, 246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 330, -364, 605, 55, 694, -467,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -200, -293, 541, -89, -71, -540,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -546, -78,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 86, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -256, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -100, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -544, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -213, 17,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -94, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -199, -8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 62, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -38, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -206, -6, -47, -9, -197, 15,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimItemThrowSmashB_joint21[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 197, -19, 189, -11, 28, -58,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 286, 28, -14, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -188, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -170, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 295, -54, 8, -78, -206, 190,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 125, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -172, -115, 209, 293,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 551, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -222, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 46, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 58, -70,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 255, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 750, 174,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 958, -20,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 90, 42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 314, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 937, -87,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 195, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 217, -74,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -124, 19,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 280, -32, 61, -115,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 219, -20, -45, 61,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -86, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 127, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 197, 69, 190, -29, 27, 73,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimItemThrowSmashB_joint23[170] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 440, -13,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 265, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 156, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 236, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -118,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 8), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 529, 228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 692, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 593, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 441, -151,
	ftAnimEnd(),
	0x200E, 0x06A1, 0xFFE1, 0xFA16, 0x0033, 0xF8E9, 0x001E, 0x200F, 0x0004, 0x059B, 0xFF32, 0xFBD4, 0x0087, 0xFA24, 0x00FE, 0x200F, 0x0001, 0x0475, 0xFF47, 0xFC43, 0x0035, 0xFB81, 0x00BF, 0x200F, 0x0001, 0x0428, 0x00E9, 0xFC40, 0xFE23, 0xFBA3, 0xFF01, 0x200F, 0x0001, 0x0648, 0x01D6, 0xF888, 0xFD71, 0xF982, 0xFF37, 0x2807, 0x0003, 0x08A2, 0xFF90, 0xF7EF, 0x0070, 0x2009, 0x0001, 0xFA11, 0x0091, 0x2009, 0x0001, 0xFAA6, 0x0042, 0x2809, 0x0003, 0xFA96, 0x000A, 0x0801, 0x0001, 0x2007, 0x0001, 0x07E7, 0xFF62, 0xF856, 0x0055, 0x2803, 0x000C, 0x0701, 0x0043, 0x2805, 0x000D, 0xF8D9, 0x0006, 0x0801, 0x0001, 0x2009, 0x0001, 0xFAB2, 0x0024, 0x2009, 0x0007, 0xFA5A, 0xFF79, 0x2009, 0x0001, 0xF9D1, 0xFF95, 0x2809, 0x0008, 0xF8C8, 0x0019, 0x0801, 0x0002, 0x2003, 0x0001, 0x073D, 0x0025, 0x2803, 0x0005, 0x06B0, 0xFFEA, 0x2005, 0x0001, 0xF8EC, 0x0022, 0x2005, 0x0004, 0xF9F2, 0x0031, 0x200F, 0x0001, 0x06A1, 0xFFF2, 0xFA16, 0x0024, 0xF8E9, 0x0021, 0x0000,
};
