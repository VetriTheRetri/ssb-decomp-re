/* AnimJoint data for relocData file 1928 (FTYoshiAnimDTilt) */
/* 2848 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimDTilt_joint1[54];
extern u16 dFTYoshiAnimDTilt_joint2[88];
extern u16 dFTYoshiAnimDTilt_joint3[54];
extern u16 dFTYoshiAnimDTilt_joint6[64];
extern u16 dFTYoshiAnimDTilt_joint7[20];
extern u16 dFTYoshiAnimDTilt_joint8[14];
extern u16 dFTYoshiAnimDTilt_joint10[10];
extern u16 dFTYoshiAnimDTilt_joint11[24];
extern u16 dFTYoshiAnimDTilt_joint12[16];
extern u16 dFTYoshiAnimDTilt_joint13[10];
extern u16 dFTYoshiAnimDTilt_joint14[10];
extern u16 dFTYoshiAnimDTilt_joint15[96];
extern u16 dFTYoshiAnimDTilt_joint17[76];
extern u16 dFTYoshiAnimDTilt_joint18[176];
extern u16 dFTYoshiAnimDTilt_joint20[80];
extern u16 dFTYoshiAnimDTilt_joint22[172];
extern u16 dFTYoshiAnimDTilt_joint23[156];
extern u16 dFTYoshiAnimDTilt_joint25[252];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTYoshiAnimDTilt_joints[] = {
	(u32)dFTYoshiAnimDTilt_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimDTilt_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimDTilt_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimDTilt_joint6, /* [3] joint 6 */
	0x00000000, /* [4] NULL */
	0x00000000, /* [5] NULL */
	(u32)dFTYoshiAnimDTilt_joint7, /* [6] joint 7 */
	(u32)dFTYoshiAnimDTilt_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimDTilt_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTYoshiAnimDTilt_joint11, /* [10] joint 11 */
	(u32)dFTYoshiAnimDTilt_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimDTilt_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimDTilt_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimDTilt_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimDTilt_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTYoshiAnimDTilt_joint18, /* [17] joint 18 */
	(u32)dFTYoshiAnimDTilt_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTYoshiAnimDTilt_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTYoshiAnimDTilt_joint23, /* [22] joint 23 */
	(u32)dFTYoshiAnimDTilt_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	0xFFFF0270, /* [25] END */
};

/* Joint 1 */
u16 dFTYoshiAnimDTilt_joint1[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY), 0, 0, 672,
	ftAnimSetValRateT(FT_ANIM_TRAX, 5), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 7), -120, 213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -178, 177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 886, 177,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 886, 60,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 19), 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 2), 240, 56,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1251, 145,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 15), 0,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 13), 3216,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTYoshiAnimDTilt_joint2[88] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, -1, 0, 7, 0, 13, -311, -249, -146, -11,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, -374, -344, -34, -148, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -16, -13, -9, -1, 135, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -63, -21, -7, 54, -15, -27,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 4), -374,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -346, 13, -210, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 477, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -123, -56, 0, -55,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 4), -348,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -404, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 0, 96, -311, 73, -146, 24,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 4, 14, 0, -11, 0, 10,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTYoshiAnimDTilt_joint3[54] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 670, 73, 0, 17, -30, 80, -1, 0, -26, -76,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 10), 180, -2,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 10), 0, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 738, 12, 178, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), 804, -3, -357, -8,
	ftAnimBlock(0, 8),
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 14), -30, -1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), 0, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 13), 670, -11, 0, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 13), -26,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTYoshiAnimDTilt_joint6[64] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -565, -75,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -672, -41, 0, -46, 0, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -853, -29, -328, -45, 886, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -939, 9, -411, 13, 1049, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -806, 34, -259, 91, 711, -290,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -733, 25, 135, 59, -693, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -600, 23, 214, -19, -229, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -565, 38, 0, -4, 0, 16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTYoshiAnimDTilt_joint7[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 1509, 552,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 1531,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), 552, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 23), 1509,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1509, 0, 552, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTYoshiAnimDTilt_joint8[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -513,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), -513, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -513,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTYoshiAnimDTilt_joint10[10] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -634, -19,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 24), -634,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTYoshiAnimDTilt_joint11[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 219, 0, -256, 0, -1105, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), 219, 0, -256, 0, -1105, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 219, 0, -256, 0, -1105, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimDTilt_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -435, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), -435, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -435, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTYoshiAnimDTilt_joint13[10] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -634, -19,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 24), -634,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTYoshiAnimDTilt_joint14[10] = {
	ftAnimSetValRate(FT_ANIM_ROTY), -446, 13,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), -536, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 24), -446,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimDTilt_joint15[96] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 8, 0, -19, 0, -4, 0, -100, 216, 46, -120, -119,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 4), -51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -94, -23,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 8), -480, -395,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 11), -239, 326, 8192, 8192, 8192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -216, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -84, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -261, 4, 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -90, 65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 374, 90,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 16), -120, 385,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 13), 0, 0, 216,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 0, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 632, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 0, -16,
	ftAnimBlock(0, 2),
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 7), 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTYoshiAnimDTilt_joint17[76] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 196, 3, 0, 17, 0, -45, 13, 30, -179, -51,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 7), -360,
	ftAnimSetValRateT(FT_ANIM_TRAX, 7), -84, -79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -97, -36,
	ftAnimSetValRateT(FT_ANIM_TRAY, 11), 120, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 178, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -364, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -277, 92,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAX, 4), 377, 115, -109, 39,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 17), -179, 366,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -210, 19,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 13,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 13), 0, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 196, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 643, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), 0, -13,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimDTilt_joint18[176] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1109, -22, -1352, 213, 533, 99,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1073, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1132, -140, 632, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1390, -141, 904, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1416, -137, -1480, -303, 626, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1664, -122, -1680, -212, 797, 206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1660, -69, -1905, -111, 1039, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1776, 209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1803, -153, 807, -264,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1817, 381,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 511, -370,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1485, -20, 65, -189,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 353, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1203, 385, -1817, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1439, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1554, 198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1421, 133, 493, 255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1287, 18, 865, 198,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1627, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1495, -56, 890, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1926, -480,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 919, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 581, -351,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1512, 114, 216, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2608, -707, -1399, 10, 432, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3341, -474, -1491, 39, -23, -189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3556, -219, -1320, 125, 53, 110,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -4276, -76, 508, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1240, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1337, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4326, -50, -1352, -14, 533, 24,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimDTilt_joint20[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1006, 35,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1024, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 951, -330,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 377, 429,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 858, 486,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1350, 230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 954, -359,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 599, -473,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -296,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 289,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 586, 581,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1528, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1198, -212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1017, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1004, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1000, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1006, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTYoshiAnimDTilt_joint22[172] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1042, 43, 433, -31, 2802, -140,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 371, 91,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1683, 321,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 2657, 204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3071, 517,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 4234, 235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 546, 105,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 495, -198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2068, 212,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2036, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4163, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3892, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2016, -137, 222, 30, 3870, -103,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1427, -161, 3421, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 556, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 504, 46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 740, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1436, 59, 3508, 202,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 4255, 298,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1546, 311,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2060, 347, 696, -56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2620, 599,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 628, -145, 4423, 201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 405, -589, 4658, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3439, 155, -550, -247, 4789, 326,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2930, 27, -90, 518, 5311, 305,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3495, 388, 485, 289, 5399, 133,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 3857, 143,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 5992, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 489, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 455, -19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3996, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 4207, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4259, 51, 433, -21, 6019, 27,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimDTilt_joint23[156] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1123, -18, 1382, 165, 524, -108,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1528, -202, 448, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1100, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 960, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1103, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1027, -98, 1241, -215, 576, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 957, 291, 1125, 91, 590, 223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1488, 503, 1281, 383, 988, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1964, 326, 1893, 329, 895, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2141, 104, 1939, -89, 759, -115,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1716, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1577, -54, 656, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1605, -18, 893, 248,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1420, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1154, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1613, -72, 1003, -90,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1379, 138,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1632, -135,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1446, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1535, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1428, -103,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1286, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1483, -110,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 688, -301,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1423, -248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1136, -157, 1438, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1107, -6, 1430, -28, 556, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1123, 16, 1382, -48, 524, -31,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimDTilt_joint25[252] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1053, -50,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1016, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1275, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1352, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1096, -216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 975, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1171, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 934, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 893, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 346, -297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 115, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 574, 386,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 887, 245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1211, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1324, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1355, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1185, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1053, -131,
	ftAnimEnd(),
	0x0000, 0x200E, 0x016F, 0x002F, 0x074F, 0x005B, 0x05AB, 0x0096, 0x2803, 0x0003, 0x01A4, 0xFFCE, 0x200D, 0x0002, 0x07C4, 0xFF98, 0x06A7, 0x000B, 0x200D, 0x0001, 0x06DA, 0xFF1C, 0x0658, 0xFFB7, 0x200F, 0x0001, 0x0141, 0x0070, 0x05FB, 0x0090, 0x0613, 0xFEBD, 0x200F, 0x0001, 0x0285, 0x00E9, 0x07FA, 0x00FE, 0x03D0, 0xFECA, 0x200F, 0x0001, 0x0314, 0x002C, 0x07F9, 0x000B, 0x03A7, 0xFFEE, 0x200F, 0x0001, 0x02DF, 0xFECE, 0x0812, 0xFFB2, 0x03AA, 0x005E, 0x200F, 0x0001, 0x00AE, 0xFDBD, 0x075C, 0xFE29, 0x0463, 0x0015, 0x200F, 0x0001, 0xFE59, 0xFDBA, 0x0462, 0xFE83, 0x03D5, 0xFEA1, 0x200F, 0x0001, 0xFC23, 0xFEE1, 0x0461, 0xFFFB, 0x01A4, 0xFF55, 0x2803, 0x0003, 0xFF3D, 0x0115, 0x200D, 0x0001, 0x0457, 0xFFB3, 0x027E, 0x01D1, 0x200D, 0x0001, 0x03C6, 0x00D6, 0x0547, 0x02E2, 0x200D, 0x0001, 0x0604, 0x0176, 0x0843, 0x0162, 0x2809, 0x0002, 0x06D6, 0xFEF5, 0x2805, 0x0003, 0x061F, 0xFF62, 0x2003, 0x0001, 0xFFC0, 0x0076, 0x2803, 0x0006, 0x0144, 0x0038, 0x0801, 0x0001, 0x2009, 0x0001, 0x05F6, 0xFF30, 0x2809, 0x0003, 0x03FE, 0xFF81, 0x2005, 0x0001, 0x0560, 0xFF3A, 0x2005, 0x0001, 0x0493, 0x001E, 0x2005, 0x0001, 0x059C, 0x00D3, 0x2805, 0x0003, 0x06E2, 0x005D, 0x2009, 0x0001, 0x037D, 0xFFE3, 0x2809, 0x0003, 0x056C, 0x0067, 0x2003, 0x0001, 0x016A, 0x0028, 0x2803, 0x0002, 0x017F, 0xFFEE, 0x0801, 0x0001, 0x2005, 0x0001, 0x072C, 0x0036, 0x200F, 0x0001, 0x016F, 0xFFF1, 0x074F, 0x0023, 0x05AB, 0x003F, 0x0000, 0x0000, 0x0000,
};
