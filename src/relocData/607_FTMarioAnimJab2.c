/* AnimJoint data for relocData file 607 (FTMarioAnimJab2) */
/* 2432 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimJab2_joint1[28];
extern u16 dFTMarioAnimJab2_joint2[8];
extern u16 dFTMarioAnimJab2_joint4[46];
extern u16 dFTMarioAnimJab2_joint5[150];
extern u16 dFTMarioAnimJab2_joint6[58];
extern u16 dFTMarioAnimJab2_joint7[26];
extern u16 dFTMarioAnimJab2_joint8[46];
extern u16 dFTMarioAnimJab2_joint10[8];
extern u16 dFTMarioAnimJab2_joint11[162];
extern u16 dFTMarioAnimJab2_joint12[114];
extern u16 dFTMarioAnimJab2_joint13[78];
extern u16 dFTMarioAnimJab2_joint15[12];
extern u16 dFTMarioAnimJab2_joint16[78];
extern u16 dFTMarioAnimJab2_joint18[40];
extern u16 dFTMarioAnimJab2_joint20[82];
extern u16 dFTMarioAnimJab2_joint21[92];
extern u16 dFTMarioAnimJab2_joint23[46];
extern u16 dFTMarioAnimJab2_joint24[94];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimJab2_joints[] = {
	(u32)dFTMarioAnimJab2_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimJab2_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimJab2_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimJab2_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimJab2_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimJab2_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimJab2_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimJab2_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimJab2_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimJab2_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimJab2_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimJab2_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimJab2_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimJab2_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimJab2_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimJab2_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimJab2_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTMarioAnimJab2_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTMarioAnimJab2_joint1[28] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 537,
	ftAnimSetValRate(FT_ANIM_TRAZ), 22, -319,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 223, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), 464, 1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), -96, 1262,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), 496, -226,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 17), 540, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTMarioAnimJab2_joint2[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -71, -790, -95,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTMarioAnimJab2_joint4[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 217, -26, 235, -2, 72, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 73, 207, -136, 40, 51, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 840, 271, 358, 109, 335, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1429, -33, 408, 6, 945, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 449, -87, 438, -10, 186, -59,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 208, 258, 110,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTMarioAnimJab2_joint5[150] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -5, -291, -252, -211, -79, 437,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -296, -157, -463, -21, 358, 270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -319, 12, -296, 92, 462, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -271, 73, -278, 23, 419, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -173, 70, -248, 13, 288, -105,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -119, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 178, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -250, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -309, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -266, 22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -114, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -106, 6, -246, 13, 164, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -101, -42, -238, 26, 153, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -191, -67, -194, 17, 362, 136,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -396, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -235, -42, 426, 42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -284, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 447, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 380, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -167, 125, -445, -12, 219, -170,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -324, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -34, 107, 38, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 47, 67, -95, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 101, 43, -204, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 133, 32, -300, 23, -272, -67,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimJab2_joint6[58] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -574, 565,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 287,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -480, -336,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -682, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -858, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -888, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -529, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -320, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, 138,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimJab2_joint7[26] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -625, 0, 0, 143, 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 6062, 6062, 6062,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 17), 4096, 4096, 4096,
	_FT_ANIM_CMD(11, FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 14,
	ftAnimBlock(0, 3),
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 17), 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTMarioAnimJab2_joint8[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 190, 30, 11, 5, 179, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 477, -74, 363, 93, 163, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 41, -248, 199, -245, -85, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -19, -4, -127, -21, 50, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 16, 12, 91, 7, 32, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 201, -4, 176,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTMarioAnimJab2_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -221, 139, -209,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTMarioAnimJab2_joint11[162] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 585, -70, 509, 957, 218, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 514, 111, 1467, 475, 246, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 808, 171, 1460, 120, 396, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 858, -72, 1707, 74, 412, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 662, -76, 1608, -264, 329, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 704, 230, 1178, -79, 290, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1123, 325, 1449, 242, 657, 216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1354, 115, 1663, 76, 723, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1353, -41, 1601, -125, 806, 49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1201, -45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 709, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1411, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1293, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1180, 4, 1344, 80,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1334, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1455, 48, 657, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1440, -18, 724, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1418, -18, 795, 65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1404, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 927, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1380, 42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1448, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1412, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1444, 113, 1374, -118, 933, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1676, 304, 1176, -158, 1313, 370,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2052, 375, 1056, -119, 1674, 360,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimJab2_joint12[114] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRate(FT_ANIM_ROTZ), -938, 938,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, 10922, 4096, 1228, 4096, 1228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 464,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 0, 0, 20480, 614, 5939, 558, 5939, 558,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 5324, -4681, 5213, -526, 5213, -526,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -280,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -560, -264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -537, 82,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -395, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -567, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -698, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -614, 174,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -349, 302,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -313,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -636, -405,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, -175,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTMarioAnimJab2_joint13[78] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 625, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), -154, -32, 0, 4, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 16,
	ftAnimSetVal(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 0, -31,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 81, 15, 1773, 8192, 7372,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -312, -64, 0, -12, 0, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -384, 9, 6, 0, 486, 57,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 11), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -238, 91, 6, 0, 459, -44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 625, 0, 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTMarioAnimJab2_joint15[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	_FT_ANIM_CMD(11, 0, 1), 16,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimJab2_joint16[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -155, 173, -223, -54, 44, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 18, 34, -277, -14, -2, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -85, -113, -252, 34, -66, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -184, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -208, -78, 15, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -242, -26, 50, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), -224, 7, 65, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -166, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), -188, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -214, 13, -194, -7, 62, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -140, 10, -228, -3, 44, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -135, 5, -230, -2, 45, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimJab2_joint18[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 439, -93,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 345, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 664, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 727, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 710, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 466, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 437, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 411, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, -10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTMarioAnimJab2_joint20[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -195, -118, 3, -106, -194, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -314, -6, -102, -6, -43, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -208, 87, -10, 75, -311, -203,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -107, 3, 70, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -449, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -469, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -320, 23,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -106, 0, 71, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 11), -195, -13, 3, -11,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -295, 28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -166, 18,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -207, -8, -7, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -212, -4, -11, -4, -156, 10,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimJab2_joint21[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 168, 155, 197, -19, 48, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 324, -44, 177, 63, -44, 177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 80, -123, 324, 131, 404, 283,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 77, -1, 440, 53, 523, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 78, -3, 430, -10, 516, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 288, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 79, 11, 393, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 94, -2, 374, -57,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 60, 0, 172, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 269, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 188, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 75, 20, 116, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 195, 9, 36, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 200, 5, 187, -1, 35, 0,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimJab2_joint23[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 424, 165,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 590, -212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -291,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 276, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 349, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 438, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, 0,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTMarioAnimJab2_joint24[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 116, -147, -66, -134, -211, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -31, 109, -201, 114, -264, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 334, 272, 162, 226, -22, 244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 513, 78, 251, 43, 225, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 491, -23, 249, -3, 194, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 27, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 175, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -15, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -33, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -166, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -193, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -213, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -5, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -89, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 147, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 93, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 89, -4, -93, -4, -212, 0,
	ftAnimEnd(),
	0x0000, 0x0000,
};
