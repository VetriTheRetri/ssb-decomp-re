/* AnimJoint data for relocData file 1826 (FTYoshiAnimJumpB) */
/* 3456 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimJumpB_joint1[18];
extern u16 dFTYoshiAnimJumpB_joint2[68];
extern u16 dFTYoshiAnimJumpB_joint3[84];
extern u16 dFTYoshiAnimJumpB_joint4[50];
extern u16 dFTYoshiAnimJumpB_joint6[8];
extern u16 dFTYoshiAnimJumpB_joint7[208];
extern u16 dFTYoshiAnimJumpB_joint10[74];
extern u16 dFTYoshiAnimJumpB_joint11[220];
extern u16 dFTYoshiAnimJumpB_joint12[68];
extern u16 dFTYoshiAnimJumpB_joint13[8];
extern u16 dFTYoshiAnimJumpB_joint14[16];
extern u16 dFTYoshiAnimJumpB_joint15[40];
extern u16 dFTYoshiAnimJumpB_joint17[56];
extern u16 dFTYoshiAnimJumpB_joint18[108];
extern u16 dFTYoshiAnimJumpB_joint20[60];
extern u16 dFTYoshiAnimJumpB_joint22[160];
extern u16 dFTYoshiAnimJumpB_joint23[148];
extern u16 dFTYoshiAnimJumpB_joint25[74];
extern u16 dFTYoshiAnimJumpB_joint26[208];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTYoshiAnimJumpB_joints[] = {
	(AObjEvent32 *)dFTYoshiAnimJumpB_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTYoshiAnimJumpB_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTYoshiAnimJumpB_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTYoshiAnimJumpB_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTYoshiAnimJumpB_joint6, /* [4] joint 6 */
	NULL, /* [5] NULL */
	(AObjEvent32 *)dFTYoshiAnimJumpB_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTYoshiAnimJumpB_joint10, /* [7] joint 10 */
	NULL, /* [8] NULL */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTYoshiAnimJumpB_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTYoshiAnimJumpB_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTYoshiAnimJumpB_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTYoshiAnimJumpB_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTYoshiAnimJumpB_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTYoshiAnimJumpB_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTYoshiAnimJumpB_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTYoshiAnimJumpB_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTYoshiAnimJumpB_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTYoshiAnimJumpB_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTYoshiAnimJumpB_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTYoshiAnimJumpB_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTYoshiAnimJumpB_joint1[18] = {
	ftAnimSetVal(FT_ANIM_ROTY), 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 4), 1340,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 11), 1340,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 5), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 20), 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTYoshiAnimJumpB_joint2[68] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), -12,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ), -268, -27, 0, -3, 364, -13,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -714, -29, 233, 130, -24, -207,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), -714, 0, 233, -24,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -11,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 48, 23,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 360, -74, 38, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -893, 17, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -268, 19,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAZ, 15), 0, 1, 63, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 15), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTYoshiAnimJumpB_joint3[84] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 625, 19, 0, 1, 0, -53,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 172,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -5, -2, -75, -40, 48, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 270, 19, 7, 3, -373, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 702, 0, 14, 0, -674, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 702, 1, 14, 0, -674, 4, -5, 2, -75, 118, 48, 27,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 1174, -4, 0, -1, 0, 67, 0, 1, 161, 24, 104, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 657, -60,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 0, 0, 172,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -44, 0, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTYoshiAnimJumpB_joint4[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 446, 22, 0, -50, 0, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 850, 26, -454, -30, -609, -40,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 850, -454, -609,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -17, 28, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 568, -99, 0, 45, 0, 60,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -141, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 446, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTYoshiAnimJumpB_joint6[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 255, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTYoshiAnimJumpB_joint7[208] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1633, 15, 3118, 126, 931, 379,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1619, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3245, 839, 1311, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4798, 738, 588, -293,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4722, -134, 724, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4529, -111, 578, -147,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 4504, -2, 342, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1766, -114,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1853, 10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4507, 4, 332, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 294, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 4562, -11,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1840, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1794, 100,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 293, 141,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1027, 496,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1619, 140, 4529, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1512, 123, 4367, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1372, -12, 4773, 153, 1570, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1537, -111, 4675, -49, 1147, -231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1594, -53, 4674, 1, 1107, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -1578, 60, 4921, 80, 858, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1486, 137, 4998, 74, 739, -122,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 401, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 5130, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -709, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -606, 95,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -322, 57,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 384, -73,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -265, -46, 5125, 52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 5386, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -415, -364, 249, 44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 723, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -993, -517,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1450, -274, 5290, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1541, -91, 5213, -77, 707, -15,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTYoshiAnimJumpB_joint10[74] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -8, 8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -344, -341,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -683, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -487, 249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 87,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -8, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1020, -299,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1086, 510,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 538,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -594, -201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -715, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -729, -13,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTYoshiAnimJumpB_joint11[220] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 24, 96, 1510, -155, -677, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 120, -163, 1354, -236, -535, -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -302, -498, 1037, -141, -1054, -492,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -875, -604, 1072, -129, -1519, -487,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1511, -337, 778, -210, -2029, -203,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 601, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1550, -6, -1926, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1525, 37, -1841, 82,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -1040, -1, -1453, -25,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 612, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 722, -23,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1093, -169, -1522, -172,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1669, -261, -2054, -262,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 663, -238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1902, 518, 246, -252, -2323, -294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -632, 971, 158, -288, -2643, -565,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 39, 387, -331, -189, -3454, -510,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 141, 52, -220, 90, -3664, -150,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 170, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 144, -16, -3755, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 63, 123, -3846, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 254, 90, -3962, -119,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -17, -100,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -4410, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 240, 57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 303, -8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -122, -106,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -534, -19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4415, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -4296, 150,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -539, 76, 292, 50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 423, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -55, 42,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4122, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 392, -17, -4073, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -66, -10, 387, -4, -4117, -43,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimJumpB_joint12[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -8, 8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -466, -366,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -591, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -522, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -620, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -736, -271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1164, -271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1280, 582,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 640,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -8, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -602, -195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -720, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -729, -8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTYoshiAnimJumpB_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTYoshiAnimJumpB_joint14[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), -536, -893,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), -268, -6, -865, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 30), -804, -714,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimJumpB_joint15[40] = {
	ftAnimSetValAfter(FT_ANIM_ROTZ), 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 357, 5,
	ftAnimSetValBlock(FT_ANIM_ROTY), 178,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 223, -8,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 4), 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 11), 223, -42, 178, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -536, -18,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 7), 0,
	ftAnimSetValT(FT_ANIM_ROTY, 18), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 39, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 357, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTYoshiAnimJumpB_joint17[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -278, 25, 0, 4, 0, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 315, 39, 38, 2, 219, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 315, -35, 38, -2, 219, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -252, -121, 0, -5, 0, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -536, 50,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 98, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 98, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -278, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTYoshiAnimJumpB_joint18[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0, 0, -248, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -94, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), 86, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -401, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -375, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -145, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -49, 86,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -45, -25,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -111, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -161, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 98, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 230, 49,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -61, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 129, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -216, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -234, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 40, -79,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -123, 29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 276, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 323, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 292, 2, -234, 51, -93, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 327, 34, -131, 103, -233, -140,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimJumpB_joint20[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 886, 36,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1187, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1167, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 914, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 849, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 791, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 841, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 358, -335,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 340, 333,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTYoshiAnimJumpB_joint22[160] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1608, 5, 0, -1, -325, -78,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -1608, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 27, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -272, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -186, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -253, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -244, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -223, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -186, 237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1611, 37, 251, 470,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1477, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 49, 44, 754, 184,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 140, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 620, -352,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1624, -88, 50, -410,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -421, -186,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1730, -20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 40, -94,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -229, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -572, -105,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -198, 207,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -350, -119,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -635, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1790, -94, -13, 192,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -2737, -193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 852, 222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1086, 209,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1370, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2906, -130,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -3025, 163,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -669, -62, 1379, -206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2672, 474, -759, 20, 958, -608,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2076, 595, -627, 131, 163, -795,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimJumpB_joint23[148] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1608, -39, 1608, -69, -1857, 384,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1386, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1648, 64, -1472, 500,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1479, 177, -855, 407,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1103, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -557, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -541, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -532, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1081, 17, 1385, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1353, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -1086, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1089, -42, -536, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1359, -240, -778, -360,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1651, -170, 1382, 66, -1306, -381,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1639, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -1710, -12, 1516, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1726, -18, 1500, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1829, -47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1381, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1654, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1474, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1563, -77,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1756, 34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1875, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1979, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1380, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 1352, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1929, 21, 1353, 61, -1711, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1936, -6, 1476, 123, -1842, -130,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimJumpB_joint25[74] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 886, -307,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 578, -443,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -289,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 124, 309,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 625, 308,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 795, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 841, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 661, -235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 333, -327,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 340, 340,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTYoshiAnimJumpB_joint26[208] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 85, -1608, -3, 1282, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1430, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 85, -38, 1260, 261,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -77, -206, 1804, 392,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2153, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -478, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -515, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -478, 37,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1439, -9, 2158, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 2126, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -1455, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1429, 149,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -896, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -416, 105, 2109, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -268, 464, 1978, -468,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 512, 365, -990, -154, 1173, -399,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1349, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 461, -98, 1180, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 315, -145, 1197, -47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1034, -48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 139, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1496, -153,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1680, 12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 986, -34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1182, 178,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1682, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -2177, -36,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 121, 19, 1409, 203,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 524, 135,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 2444, 219,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2211, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -2172, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 683, 183,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1316, 41,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2663, 188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 2904, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1326, -131, -2210, -79, 2893, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1053, -428, -2331, -13, 2551, -560,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 469, -583, -2236, 94, 1771, -780,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
