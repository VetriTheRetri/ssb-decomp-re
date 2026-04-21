/* AnimJoint data for relocData file 1569 (FTCaptainAnimClangRecoil) */
/* 1360 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimClangRecoil_joint1[30];
extern u16 dFTCaptainAnimClangRecoil_joint2[16];
extern u16 dFTCaptainAnimClangRecoil_joint4[46];
extern u16 dFTCaptainAnimClangRecoil_joint5[54];
extern u16 dFTCaptainAnimClangRecoil_joint6[32];
extern u16 dFTCaptainAnimClangRecoil_joint7[14];
extern u16 dFTCaptainAnimClangRecoil_joint10[34];
extern u16 dFTCaptainAnimClangRecoil_joint11[52];
extern u16 dFTCaptainAnimClangRecoil_joint12[28];
extern u16 dFTCaptainAnimClangRecoil_joint13[18];
extern u16 dFTCaptainAnimClangRecoil_joint16[10];
extern u16 dFTCaptainAnimClangRecoil_joint17[66];
extern u16 dFTCaptainAnimClangRecoil_joint19[30];
extern u16 dFTCaptainAnimClangRecoil_joint21[64];
extern u16 dFTCaptainAnimClangRecoil_joint22[56];
extern u16 dFTCaptainAnimClangRecoil_joint24[24];
extern u16 dFTCaptainAnimClangRecoil_joint25[56];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTCaptainAnimClangRecoil_joints[] = {
	(u32)dFTCaptainAnimClangRecoil_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimClangRecoil_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimClangRecoil_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTCaptainAnimClangRecoil_joint5, /* [4] joint 5 */
	(u32)dFTCaptainAnimClangRecoil_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimClangRecoil_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimClangRecoil_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTCaptainAnimClangRecoil_joint11, /* [10] joint 11 */
	(u32)dFTCaptainAnimClangRecoil_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimClangRecoil_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimClangRecoil_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTCaptainAnimClangRecoil_joint17, /* [16] joint 17 */
	(u32)dFTCaptainAnimClangRecoil_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTCaptainAnimClangRecoil_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTCaptainAnimClangRecoil_joint22, /* [21] joint 22 */
	(u32)dFTCaptainAnimClangRecoil_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTCaptainAnimClangRecoil_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTCaptainAnimClangRecoil_joint1[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ), -402, 1560, -660,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -321, 7, 1320, -174, -600, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -321, 26, 1320, 186, -480, 399,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 1600, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimClangRecoil_joint2[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 107, 0, 4, -76, 9,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTCaptainAnimClangRecoil_joint4[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 187, -187, -70, 0, 35,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 321, 7, -134, 4, -34, 37, -49, -58, 86, 55,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 268, -11, -134, 11,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -32, 22, -58, 11, 90, -25,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 0, -31, 47,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 189, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimClangRecoil_joint5[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2068, -155, 245, -82, 2482, 114,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 2852, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -2641, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2652, -50,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -2975, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2827, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 2694, -4,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2982, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -2978, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2977, 1, 5, -1, 2692, -1,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimClangRecoil_joint6[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -694, -10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -873, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -974, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -838, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -819, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -799, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -797, 2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimClangRecoil_joint7[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -781, -89, -388,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTCaptainAnimClangRecoil_joint10[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -26, 411, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -107, -8, 268, -20, 0, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -80, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 285, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -73, 8, 268, -28, 0, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTCaptainAnimClangRecoil_joint11[52] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1580, -4, 1246, 12, -1795, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), 1524, 19, -1704, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 1669, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1683, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1472, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1541, 10, -1677, 50,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1489, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1059, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1020, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1479, -9, 1464, -7, -1016, 3,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimClangRecoil_joint12[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1296, -10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -1388, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1361, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1186, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1074, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1024, 50,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimClangRecoil_joint13[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 607, 99, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -208, -21, 462, 10, 500, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 270, 275, 62,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimClangRecoil_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	ftAnimBlock(0, 16),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimClangRecoil_joint17[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -217, 115, -272, -1, -224, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -98, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -102, 211, -227, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 204, 243, -375, -101,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 465, -5, -361, 5,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -102, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 66, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 460, -6, -361, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -484, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 304, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 225, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 191, -34, 70, 3, -472, 11,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimClangRecoil_joint19[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 257, 222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 656, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 667, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 477, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 445, -31,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTCaptainAnimClangRecoil_joint21[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -134, -56, -52, -27, 437, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -386, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -149, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 240, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 75, -151,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -23, 90,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -383, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -250, 75,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -145, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -22, -22,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -167, 61, 54, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -126, 40, -42, -19, 80, 25,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimClangRecoil_joint22[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 101, 6, 161, 19, -355, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -279, 62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 292, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 141, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 131, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 166, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -220, 56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -82, 9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 200, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 134, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 160, -6, 110, -24, -76, 5,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimClangRecoil_joint24[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 578, 45,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 892, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 897, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 570, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 541, -28,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTCaptainAnimClangRecoil_joint25[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2, 3, -21, 11, -141, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 222, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 91, -38, -244, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 51, -33, -248, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 251, 89,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -287, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 260, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 175, -23,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 332, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 161, -13, 365, 33, -279, 7,
	ftAnimEnd(),
	0x0000, 0x0000,
};
