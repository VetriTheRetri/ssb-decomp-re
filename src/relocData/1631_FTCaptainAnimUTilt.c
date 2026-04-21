/* AnimJoint data for relocData file 1631 (FTCaptainAnimUTilt) */
/* 4448 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimUTilt_joint1[78];
extern u16 dFTCaptainAnimUTilt_joint2[54];
extern u16 dFTCaptainAnimUTilt_joint4[76];
extern u16 dFTCaptainAnimUTilt_joint5[234];
extern u16 dFTCaptainAnimUTilt_joint6[104];
extern u16 dFTCaptainAnimUTilt_joint7[8];
extern u16 dFTCaptainAnimUTilt_joint8[52];
extern u16 dFTCaptainAnimUTilt_joint10[50];
extern u16 dFTCaptainAnimUTilt_joint11[210];
extern u16 dFTCaptainAnimUTilt_joint12[104];
extern u16 dFTCaptainAnimUTilt_joint13[8];
extern u16 dFTCaptainAnimUTilt_joint14[10];
extern u16 dFTCaptainAnimUTilt_joint16[38];
extern u16 dFTCaptainAnimUTilt_joint17[216];
extern u16 dFTCaptainAnimUTilt_joint19[72];
extern u16 dFTCaptainAnimUTilt_joint21[242];
extern u16 dFTCaptainAnimUTilt_joint22[268];
extern u16 dFTCaptainAnimUTilt_joint24[88];
extern u16 dFTCaptainAnimUTilt_joint25[262];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTCaptainAnimUTilt_joints[] = {
	(u32)dFTCaptainAnimUTilt_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimUTilt_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimUTilt_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTCaptainAnimUTilt_joint5, /* [4] joint 5 */
	(u32)dFTCaptainAnimUTilt_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimUTilt_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimUTilt_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimUTilt_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTCaptainAnimUTilt_joint11, /* [10] joint 11 */
	(u32)dFTCaptainAnimUTilt_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimUTilt_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimUTilt_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimUTilt_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTCaptainAnimUTilt_joint17, /* [16] joint 17 */
	(u32)dFTCaptainAnimUTilt_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTCaptainAnimUTilt_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTCaptainAnimUTilt_joint22, /* [21] joint 22 */
	(u32)dFTCaptainAnimUTilt_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTCaptainAnimUTilt_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTCaptainAnimUTilt_joint1[78] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1600, 0,
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 1380, -29, -3, -8,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 3), -8,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), -18,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -18, -8, 1571, 141, -8, 3,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 10), -24, -1, 1646, 55,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 9), -11, -8,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), 180, 2157,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 1654, 31,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), -19, 34, 528, 1882,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), -15, 19, 650, 398,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -10, 6, 1477, 3, 727, -71,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 17), 1600, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 6), -8, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 11), 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimUTilt_joint2[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 107, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, -76, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 78, -804, -248, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 473, 167, -1385, -63, 0, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1002, 26, -1401, 1, 393, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 793, 39, -1362, -35, 767, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1555, 13, -1901, -5, 1546, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 1608, -1716, 1608,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTCaptainAnimUTilt_joint4[76] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 189, 0, 0, 0, -31, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 122, -3, 0, -13, 0, -18, 0, 0, 0, 5, 45, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 17), 0, 0, -19, -6, 47, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 166, 0, -375, -34, -113, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -267, 39, -374, 12, -113, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 68, 26, -223, 21, -67, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 161, 6, -89, 15, -15, 3,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 0, -31, 47,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 189, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimUTilt_joint5[234] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 239, 0, 5, -89, -524, 116,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 267, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -83, -14, -407, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -23, 41, -239, 123,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -193, -222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -161, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 305, 18, -23, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 303, 97, -119, -211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 500, 259, -488, -39, -446, -218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 822, 316, -271, 250, -556, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1133, 185, 13, 194, -772, -148,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 92, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1194, 31, -854, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1197, -8, -789, 72,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1023, -115, -500, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 43, -54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -93, -8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 892, -130, -381, 107,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 581, -66, -216, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -86, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -50, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 524, -76, -51, -87, -235, 71,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -348, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 429, -119, -73, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 285, -34, 90, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 360, 46, -207, 155, -149, -229,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 82, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 378, -10, -369, -158,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 297, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -326, 80,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 128, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 37, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 277, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 284, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -243, 75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -158, -37,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 274, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 234, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 52, 12, -213, -53,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 9, -6, -518, -11,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 238, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 239, 1, 5, -3, -524, -6,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimUTilt_joint6[104] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -797, -213,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1010, -205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1209, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1224, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1183, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1098, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1159, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -973, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1001, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -575, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -520, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -510, -199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -920, -238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -987, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -810, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -771, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -741, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -729, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -790, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1016, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1031, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -912, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -881, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -798, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -797, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimUTilt_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2435, -89, -388,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTCaptainAnimUTilt_joint8[52] = {
	ftAnimSetValRate(FT_ANIM_ROTY), 0, -1,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -72, 0, -65, -6, 9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -9, 10, -75, 2, 9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 25, 5, -35, 8, 8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 30, 1, -12, 19, 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 28, 0, 3, 2, 6, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTCaptainAnimUTilt_joint10[50] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 286, 33, -158, 0, -96, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 331, 0, -95, 32, -60, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 286, -11, 35, 22, 6, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 252, -37, 62, 16, 25, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 211, -15, 68, 0, 31, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTCaptainAnimUTilt_joint11[210] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -129, 93, 144, 10, 592, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -35, 134, 154, 45, 651, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 140, 15, 235, 24, 329, -432,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5, -3, 203, -47, -213, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 133, 37, 139, -81, 202, 324,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 68, 94, 41, -116, 435, 223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 321, 221, -94, -110, 649, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 511, 36, -179, -26, 636, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 394, -153, -147, 86, 665, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 204, -112, -6, 89, 570, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 170, -26, 30, 32, 504, -59,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 122, 3, 346, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 90, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 79, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 81, 32, 126, -85, 368, 269,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 145, -18, -48, -38, 885, 187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 43, 23, 50, 28, 743, -59,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -32, 49, 832, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 192, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 192, -213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -234, -197, 107, 71, 761, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -202, 5, 109, 0, 771, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -223, -27, 108, -6, 746, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -281, 22, 66, 15, 642, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -246, 40, 93, 25, 674, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 145, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -118, 4, 683, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -116, 0, 659, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -126, -3, 600, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -129, -2, 144, -1, 592, -8,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimUTilt_joint12[104] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1024, -162,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1187, -198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1422, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1358, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1333, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1467, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1196, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1306, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1093, 206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -892, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -841, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -857, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -889, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1000, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1094, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -948, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -901, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -446, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -529, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -451, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -580, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -822, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -899, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1034, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1024, 9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimUTilt_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, 275, 62,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTCaptainAnimUTilt_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimUTilt_joint16[38] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 18, 0, -3,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 102, 170, 0, -7, -13, -212,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1196, -2, -1489, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), -49,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 33), 0, 18, 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 28), 0, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimUTilt_joint17[216] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 191, 13, 70, -3, -472, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 48, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 204, -8, -487, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 173, -36, -474, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 91, -64, -568, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4, -75, 26, -36, -691, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -58, 138, -24, -25, -804, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 281, 551, -23, -97, -868, -104,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1166, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1044, 392, -219, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1066, 45, -303, -63,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -408, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1135, 53, -1208, -35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1306, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1172, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1280, 28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -430, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -479, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1313, 67, -504, 0, -1337, -60,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -461, -29, -1659, -361,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1414, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1613, 338,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2090, 16, -537, -301, -2151, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1646, -164, -1064, -425, -1642, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1761, 53, -1389, -217, -1861, -151,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1522, -23, -1962, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1752, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1735, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1546, -23, -1982, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -2110, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1678, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1732, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1792, 8,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2105, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2084, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1677, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1677, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1799, 7, -1678, -1, -2081, 3,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimUTilt_joint19[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 445, 169,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 614, 187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 820, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 762, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 580, -254,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 552, 362,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 729, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 784, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 785, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 614, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 575, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 452, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 445, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTCaptainAnimUTilt_joint21[242] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -126, -19, -42, -44, 80, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -146, 4, -86, -11, -31, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -118, 36, -65, 5, -217, -139,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -118, 11, -276, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -73, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -66, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -8, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 16, 43, -90, -138, -187, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 79, 195, -395, -546, 9, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 407, 204, -1183, -384, -318, -225,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 505, 57, -500, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1165, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1168, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1160, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 602, 129, -618, -145,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1098, 132, -1105, -116,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1215, -60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1386, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1209, 156, -1197, -76,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1282, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1410, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1396, -55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1184, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1422, -57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1497, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1229, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1136, 47, -1378, -208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1279, 230, -1303, 133, -1645, -175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1597, 217, -1230, 25, -1730, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1714, 44, -1251, -15, -1770, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1761, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1379, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1686, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1615, -18,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1750, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1589, 24,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1429, -49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1576, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1594, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1494, -14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1565, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1533, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1574, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1571, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1481, -12, -1566, 4, -1528, 4,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimUTilt_joint22[268] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1448, -63, 1498, -42, -1685, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1511, -83, 1456, -17, -1778, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1615, -67, 1463, 18, -1944, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1647, 2, 1492, -39, -2057, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1610, -267, 1384, 61, -2175, -344,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2183, -375, 1616, 21, -2745, -388,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2361, -325, 1428, -76, -2952, -248,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -3490, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2833, -515, 1462, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3393, -325, 1364, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3484, -53, 1268, -75, -3616, -73,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -3618, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3499, 3, 1214, -50,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -3273, 87,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 986, -63,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3580, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -3502, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3182, 41, -3504, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3190, -210, 913, -54, -3661, -369,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3603, -606, 876, 44, -4244, -547,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4404, -519, 1002, 307, -4755, -379,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4642, -65, 1491, 350, -5003, -194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4535, 44, 1703, 121, -5145, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4554, -44, 1734, -83, -5042, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -4709, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1535, -144, -5112, -52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1438, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5148, -21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -5128, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4729, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -4729, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1439, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1463, -13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4708, -27, -5102, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4785, -49, 1425, -21, -5355, -165,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1422, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4807, -8, -5433, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -4698, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -5396, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5352, 51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -4916, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1428, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1494, 5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4684, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -4667, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4665, 2, 1498, 3, -4902, 14,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimUTilt_joint24[88] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 541, 115,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 656, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 812, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 876, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 825, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 826, -410,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -410,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 260,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 521, 379,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 763, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 865, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 865, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 659, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 602, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 558, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 541, -17,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTCaptainAnimUTilt_joint25[262] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 161, 15, 365, -74, -279, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 139, -64, -330, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 290, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 151, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 47, -83, 20, -123, -368, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -27, 209, -95, -37, -317, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 466, 72, -54, -95, -152, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 116, -285, -285, 93, -19, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -105, 260, 133, 368, 75, 366,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 638, 391, 451, 250, 713, 309,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 703, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 677, -9, 693, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 620, -134, 632, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 407, -276, 736, 8, 423, -273,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 416, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 66, -251, 86, -250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -94, -103, -76, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -136, 22, -158, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -94, 68, 230, -251, -182, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 132, -85, -82, -66, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 171, 98, 66, 181, 40, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 196, -106, 278, 9, 114, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -41, -108, 85, -111, 154, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -20, 33, 56, -7, 282, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 24, 32, 70, 47, 154, -96,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 74, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 150, 39, 90, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 149, 0, 182, 53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 30, -161,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 139, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 80, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 52, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 111, 43, -178, -118,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 177, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 128, -3, -206, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 257, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -211, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -237, -20,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 183, 4, 299, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 167, -5, 364, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -258, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -281, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 161, -5, 365, 0, -279, 1,
	ftAnimEnd(),
};
