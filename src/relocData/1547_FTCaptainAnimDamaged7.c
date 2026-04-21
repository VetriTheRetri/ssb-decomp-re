/* AnimJoint data for relocData file 1547 (FTCaptainAnimDamaged7) */
/* 3600 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimDamaged7_joint1[114];
extern u16 dFTCaptainAnimDamaged7_joint2[64];
extern u16 dFTCaptainAnimDamaged7_joint4[98];
extern u16 dFTCaptainAnimDamaged7_joint5[168];
extern u16 dFTCaptainAnimDamaged7_joint6[80];
extern u16 dFTCaptainAnimDamaged7_joint7[20];
extern u16 dFTCaptainAnimDamaged7_joint8[98];
extern u16 dFTCaptainAnimDamaged7_joint10[8];
extern u16 dFTCaptainAnimDamaged7_joint11[168];
extern u16 dFTCaptainAnimDamaged7_joint12[68];
extern u16 dFTCaptainAnimDamaged7_joint13[62];
extern u16 dFTCaptainAnimDamaged7_joint14[10];
extern u16 dFTCaptainAnimDamaged7_joint16[42];
extern u16 dFTCaptainAnimDamaged7_joint17[182];
extern u16 dFTCaptainAnimDamaged7_joint19[64];
extern u16 dFTCaptainAnimDamaged7_joint21[164];
extern u16 dFTCaptainAnimDamaged7_joint22[162];
extern u16 dFTCaptainAnimDamaged7_joint24[60];
extern u16 dFTCaptainAnimDamaged7_joint25[118];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTCaptainAnimDamaged7_joints[] = {
	(u32)dFTCaptainAnimDamaged7_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimDamaged7_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimDamaged7_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTCaptainAnimDamaged7_joint5, /* [4] joint 5 */
	(u32)dFTCaptainAnimDamaged7_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimDamaged7_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimDamaged7_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimDamaged7_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTCaptainAnimDamaged7_joint11, /* [10] joint 11 */
	(u32)dFTCaptainAnimDamaged7_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimDamaged7_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimDamaged7_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimDamaged7_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTCaptainAnimDamaged7_joint17, /* [16] joint 17 */
	(u32)dFTCaptainAnimDamaged7_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTCaptainAnimDamaged7_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTCaptainAnimDamaged7_joint22, /* [21] joint 22 */
	(u32)dFTCaptainAnimDamaged7_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTCaptainAnimDamaged7_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTCaptainAnimDamaged7_joint1[114] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 240, 0, 0, 1210, -1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 979, -1417, -1219, -79, -885, 1212, 1210, -23, -99, -411,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -1601, -860, -1340, -40, 1460, 782, 1204, -47, -104, -305,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1601, -1340, 1460,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1198, -23, -175, -384,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 1), -200, -19,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 1), 1198,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 1198, -21, -200, 72,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -1601, -1340, 1460,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 61, 51, -56,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -496, 96, -415, 78, 452, -85,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 9), -37,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 1166, -74,
	ftAnimSetValRateT(FT_ANIM_TRAY, 10), 1078, 24,
	ftAnimBlock(0, 6),
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 8), 240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ, 4), -171, 59, 186, -64, 128, 36,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 1210, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 42, 0, -46,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimDamaged7_joint2[64] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -15, 107, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, -76, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 91, 0, -53, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 167, 138, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 415, 24, 0, 0, 1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 415, -25, 0, 0, 1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, -12, 0, 3, 0, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 268, -1, 37, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), -103,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -15, 107, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTCaptainAnimDamaged7_joint4[98] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 242, -182, -12, 0, -31, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 184, 38, -166, -86, -174, -83, 0, -102, 0, 60, 0, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 395, 20, -528, -35, -346, -16, -51, -40, -1, -1, 23, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 395, -22, -528, 56, -346, 19, -51, 63, -1, 10, 23, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 30, -13, 375, 18, -37, 11, 75, 98, 20, -44, 12, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 311, -4,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 10), -182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -179, -8, 119, -46, -79, -83, 16, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -93, 33, 34, -190, -52, 75, 10, 49,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 242, -12, 0, -31, 47,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimDamaged7_joint5[168] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1332, -827, -1470, -195, 982, 1060,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2159, -332, -1666, 495, 2042, 299,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1996, -150, -478, 671, 1581, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2460, -162, -322, 206, 2109, 277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2320, -35, -66, 212, 2135, 186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2531, -91, 101, 79, 2481, 207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2504, 25, 93, -6, 2551, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -2361, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -54, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 2483, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2462, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 2488, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2388, -43, 2551, 75,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -2807, -337, 3098, 426,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -123, -73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -363, 33,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3238, -328, 3631, 342,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 3587, -166,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -3288, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -258, 45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -324, 44,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3390, -199,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 3053, -114,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3260, 60, -256, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -242, 48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2977, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2961, -117,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2663, -114,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -173, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2940, 36, -138, 35, 2590, -72,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimDamaged7_joint6[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1061, 8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1053, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -801, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1029, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -937, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -785, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -773, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -799, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -828, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -898, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1080, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1147, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1061, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -994, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -936, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -957, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1041, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1068, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1061, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimDamaged7_joint7[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 191, -97, -323,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -268, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), 191, -97, -323,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTCaptainAnimDamaged7_joint8[98] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -153, 113, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 401, 263, 550, 197, 514, 204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 374, -704, 508, 185, 371, -700,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1007, -999, 921, 274, -887, -957,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1624, -102, 1057, 17, -1544, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1625, 9, 1026, 9, -1548, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -1509, 26, 1169, -1, -1455, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1386, 572, 1012, -226, -1341, 560,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 208, 853, 489, -329, 225, 766,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 320, -14, 353, -119, 190, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 149, -71, 10, -60, 58, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -109, -43, -11, 14, -4, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -153, 113, -38,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTCaptainAnimDamaged7_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTCaptainAnimDamaged7_joint11[168] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 167, -883, 245, -120, 670, -1056,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -716, -380, 124, -165, -386, -716,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -594, 310, -86, 86, -763, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -95, 275, 298, 227, -241, 278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -42, -41, 369, 76, -205, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 432, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -177, -69, -292, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -182, -4, -281, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), -229, -24, -72, 65,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 432, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 467, -29,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -265, -46, -1, 59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -270, 115,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 158, -51,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 402, -109,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 177, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -90, 126,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -104, -25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 169, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 192, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 88, -86,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -199, -38,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -124, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -48, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -201, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, 39, 0, 321,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 228, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 163, 128, 440, 329,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 209, 1, 659, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 167, -42, 245, 17, 670, 11,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimDamaged7_joint12[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -703, -176,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -879, 349,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -989, -501,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1008, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -963, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -970, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -1021, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -996, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -759, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -791, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -824, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -994, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1071, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -869, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -703, 166,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimDamaged7_joint13[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -5, 167, 63,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 381, 167, 58, -27, 307, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 329, -193, 112, 54, 187, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5, 0, 167, 0, 63, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 75, 22, 167, 3, 65, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 381, 42, 226, -3, -32, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 331, -38, 144, -5, 120, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -5, 167, 63,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTCaptainAnimDamaged7_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 39,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimDamaged7_joint16[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 255, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -578, -64, 0, 9, 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -579, 14, 119, 12, 39, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -356, 53, 192, -13, 69, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -150, 47, 15, -14, -156, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 255, 0, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimDamaged7_joint17[182] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1540, -342, -1691, 289, 1074, 254,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1882, 50, -1402, 224, 1329, -239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1438, 367, -1243, -147, 595, -321,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1147, -276, -1696, -104, 685, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1992, -425, -1453, 130, 781, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 737, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1999, -5, -1436, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2002, -2, -1424, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -1997, 4, -1420, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 731, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 748, -39,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1992, 57, -1433, 37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1298, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1692, -236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 657, -85,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1010, 332,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1272, 47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1099, -33,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2018, -346, 1405, 386,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2385, -186, -1183, -99, 1783, 215,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1397, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2391, 76, 1836, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 952, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2231, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2110, 111,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1818, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1368, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1670, -27,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 884, -43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1015, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1790, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1585, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1540, 45, -1691, -21, 1074, 58,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimDamaged7_joint19[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 192, 790,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 982, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 659, 618,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1241, 288,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1236, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1232, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 1042, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 941, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 712, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 717, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 597, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 538, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 289, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 192, -97,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTCaptainAnimDamaged7_joint21[164] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -99, -3, -8, 549, -219,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -58, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -99, 41, 329, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 82, -47, 581, 79,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 353, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -193, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -98, 36, -113, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -119, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -113, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 353, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 345, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -108, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -62, 10,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -113, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -61, -29,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -41, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 80, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 100, -211, -114, -78, 323, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -352, 82,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 265, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -342, -290,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -481, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -107, 90,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -229, 148,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 84, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -73, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -149, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -157, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -172, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 65, -25, 379, 103,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 6, -18, 529, 38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -35, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 35, -3, -10, 549, 19,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimDamaged7_joint22[162] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -15, -300, 288, -303, -829, 457,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -316, -35, -14, -263, -372, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -87, 10, -237, 77, -976, -336,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -922, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -295, 74, 140, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 61, 182, -21, -80,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -17, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 69, 6, -913, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1004, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 75, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 92, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -14, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -150, -75,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 112, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -195, -195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -230, -81, -1022, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -341, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -694, 202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -402, -169, -485, 169,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -376, -100,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -512, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -210, 138,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 74, 10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -509, -120,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -755, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 60, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 226, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -480, 48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -165, 104,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -795, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -47, 74, -815, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -15, 31, 288, 62, -829, -13,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimDamaged7_joint24[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 868, -543,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 324, -239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 389, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 783, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 731, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 751, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 758, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 832, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 797, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 878, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 918, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 947, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 895, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 868, -27,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTCaptainAnimDamaged7_joint25[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -4, -94, -58, 39, -134, 437,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 29, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -98, 0, 302, 249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3, 136, 363, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 175, -90, 72, -39, 362, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -184, -176, -48, -60, 71, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -177, 5, -48, 0, 71, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 62, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -174, 1, 71, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), 48, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -176, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -218, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -22, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -37, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 86, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 83, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 96, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 25, -72, 64, -11, 40, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -74, 21, -20, -48, -83, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4, 70, -58, -37, -134, -50,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
