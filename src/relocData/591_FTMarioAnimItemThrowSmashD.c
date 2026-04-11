/* AnimJoint data for relocData file 591 (FTMarioAnimItemThrowSmashD) */
/* 2480 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimItemThrowSmashD_joint1[68];
extern u16 dFTMarioAnimItemThrowSmashD_joint2[42];
extern u16 dFTMarioAnimItemThrowSmashD_joint4[44];
extern u16 dFTMarioAnimItemThrowSmashD_joint5[82];
extern u16 dFTMarioAnimItemThrowSmashD_joint6[34];
extern u16 dFTMarioAnimItemThrowSmashD_joint7[14];
extern u16 dFTMarioAnimItemThrowSmashD_joint8[52];
extern u16 dFTMarioAnimItemThrowSmashD_joint10[52];
extern u16 dFTMarioAnimItemThrowSmashD_joint11[142];
extern u16 dFTMarioAnimItemThrowSmashD_joint12[64];
extern u16 dFTMarioAnimItemThrowSmashD_joint13[34];
extern u16 dFTMarioAnimItemThrowSmashD_joint15[10];
extern u16 dFTMarioAnimItemThrowSmashD_joint16[114];
extern u16 dFTMarioAnimItemThrowSmashD_joint18[54];
extern u16 dFTMarioAnimItemThrowSmashD_joint20[106];
extern u16 dFTMarioAnimItemThrowSmashD_joint21[112];
extern u16 dFTMarioAnimItemThrowSmashD_joint23[168];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimItemThrowSmashD_joints[] = {
	(u32)dFTMarioAnimItemThrowSmashD_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimItemThrowSmashD_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimItemThrowSmashD_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimItemThrowSmashD_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimItemThrowSmashD_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimItemThrowSmashD_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimItemThrowSmashD_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimItemThrowSmashD_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimItemThrowSmashD_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimItemThrowSmashD_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimItemThrowSmashD_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimItemThrowSmashD_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimItemThrowSmashD_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimItemThrowSmashD_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimItemThrowSmashD_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimItemThrowSmashD_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimItemThrowSmashD_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	0xFFFF0234, /* [23] END */
};

/* Joint 1 */
u16 dFTMarioAnimItemThrowSmashD_joint1[68] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 223, -50, 0, 0, 0, 0, 540, 600, 0, 3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, -74, 0, 0, 1006, 1242, 0, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 1), 1006, -2340,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 18), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 13, 0, 0, 421, -466, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 16), 223,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 0, 0, 540, 59, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 0, 0, 540, 5, 0, 10,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimItemThrowSmashD_joint2[42] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -71, 7, -790, -1, -95, 9,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 23, -804, -4, 0, 31,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -804, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -4, -804, 0, 0, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -71, -1, -790, 2, -95, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTMarioAnimItemThrowSmashD_joint4[44] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 208, -130, 258, -14, 110, -111,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, -69, 0, -86, -276, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 498, 0, 87, -276, 376,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 997, 12, 174, 15, 477, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 208, -12, 258, 0, 110, -6,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimItemThrowSmashD_joint5[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1741, 210, -1308, 180, -1880, -109,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1006, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1952, 139, -1990, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2020, 34, -2006, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 2021, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1989, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -1006,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1274, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2023, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 1851, -24,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1986, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1969, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1825, -22, -1298, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1807, -41, -1320, -4, -1975, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1741, -65, -1308, 12, -1880, 94,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTMarioAnimItemThrowSmashD_joint6[34] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -182, 173,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 12), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, -182,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTMarioAnimItemThrowSmashD_joint7[14] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -625, -22,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 143, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), -625,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimItemThrowSmashD_joint8[52] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 176,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 201, 50, -4, 33,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 402, 66, 0, 1, 0, -58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 402, -384,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -366, -5, 0, 0, 0, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 329, 35, -4, 0, 154, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 201, -1, -4, 0, 176, -1,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTMarioAnimItemThrowSmashD_joint10[52] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), -221, -209,
	ftAnimSetValRate(FT_ANIM_ROTY), 139, 20,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 73, 160, 7, 0, 69,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), 160, -160,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -14, -160, -24, 0, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -192, -13, -161, 18, -88, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -221, -2, 139, 7, -209, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTMarioAnimItemThrowSmashD_joint11[142] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 443, -380, 551, -288, 65, -291,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 63, -138, 263, 325, -226, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 165, 53, 1202, 470, -233, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 170, 110, 1203, 117, -227, 201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 387, 171, 1437, 122, 169, 241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 512, 175, 1448, 3, 254, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 739, 253, 1444, -6, 352, 108,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1421, 3, 842, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1020, 244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1228, 166,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1473, 11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1424, 2, 911, 49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 985, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1320, -59,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1482, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1465, -19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 994, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 991, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1441, 138, 1249, -93, 980, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1741, 259, 1133, -80, 1377, 307,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1959, 155, 1088, -38, 1595, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2052, 92, 1056, -32, 1674, 79,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimItemThrowSmashD_joint12[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -811, 811,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 401,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -282,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -565, -379,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -758, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, -52,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTMarioAnimItemThrowSmashD_joint13[34] = {
	ftAnimSetValAfter(FT_ANIM_ROTY), 0,
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), 625,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 4), 1429,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 5), 1340,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 3), 580,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 8), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 8), 625,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTMarioAnimItemThrowSmashD_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimItemThrowSmashD_joint16[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -135, -165, -230, 138, 45, 137,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -413, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -92, 89, 183, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -52, 16, 79, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -416, 217, -59, -107, 68, -198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, 276, -267, -84, -316, -240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 135, 74, -227, 30, -413, -69,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -55, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -206, 0, -456, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -290, -7, -324, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -145, -68, -282, 12, -229, 77,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -106, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -233, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -202, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -189, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -128, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -91, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 25, 30,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -130, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -135, -4, -230, 2, 45, 20,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimItemThrowSmashD_joint18[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 400, -400,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -200,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 414,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 829, 467,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 934, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 943, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 653, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 516, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 371, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 376, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 404, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, -3,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTMarioAnimItemThrowSmashD_joint20[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1397, 108, 1661, 3, 1411, 419,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1584, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1664, -14, 1830, 328,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1632, -31, 2069, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1616, -72, 1601, 77, 2069, -423,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1439, -112, 1788, 95, 1221, -434,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1390, -32, 1791, -16, 1200, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1451, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1755, -56, 1216, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1437, -49, 1416, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1456, 2, 1399, -28, 1459, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1411, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1415, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 1384, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1430, 62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1641, 37,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1401, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1397, -4, 1661, 19, 1411, -4,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimItemThrowSmashD_joint21[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 200, 154, 187, -120, 35, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 354, 165, 66, -70, 103, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 531, 79, 45, -10, -21, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 514, -207, 46, 159, -11, -227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 115, -256, 363, 126, -475, -243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1, -55, 299, -42, -498, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4, 27, 279, -11, -432, 79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 232, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 45, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 233, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 192, -37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 150, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 253, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 205, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 87, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 111, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 169, 15, 75, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 181, 8, 46, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 201, -3, 185, 4, 38, -8,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimItemThrowSmashD_joint23[168] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 438, -431,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 442,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 885, 491,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 982, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 981, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 653, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 501, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 302, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 305, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 426, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 433, 7,
	ftAnimEnd(),
	0x0000, 0x200E, 0x06A1, 0xFF31, 0xFA16, 0x00B3, 0xF8E3, 0x01E9, 0x200F, 0x0001, 0x05D1, 0xFED4, 0xFAC9, 0x0072, 0xFACC, 0x01B3, 0x200F, 0x0001, 0x0448, 0xFF5D, 0xFAFB, 0x000D, 0xFC4A, 0x00A9, 0x200F, 0x0001, 0x048A, 0x0117, 0xFAE5, 0xFFF6, 0xFC1F, 0xFE0C, 0x200F, 0x0001, 0x0676, 0x0109, 0xFAE6, 0xFFB0, 0xF861, 0xFDFA, 0x200F, 0x0001, 0x069D, 0x0018, 0xFA44, 0xFF87, 0xF813, 0xFFCB, 0x200F, 0x0001, 0x06A7, 0x0002, 0xF9F3, 0xFFC7, 0xF7F6, 0xFFF8, 0x280B, 0x0005, 0x0696, 0x0006, 0xF8D8, 0x001E, 0x2005, 0x0003, 0xF9B2, 0xFFEF, 0x2005, 0x0001, 0xF9A0, 0xFFED, 0x2805, 0x0007, 0xF99C, 0x0031, 0x0801, 0x0001, 0x200B, 0x0001, 0x069E, 0x0008, 0xF8E9, 0x000D, 0x2803, 0x0006, 0x06AD, 0xFFF8, 0x2809, 0x0007, 0xF8E3, 0x0001, 0x0801, 0x0005, 0x2005, 0x0001, 0xF9D3, 0x0033, 0x2007, 0x0001, 0x06A4, 0xFFFB, 0xFA03, 0x0021, 0x200F, 0x0001, 0x06A1, 0xFFFE, 0xFA16, 0x0012, 0xF8E4, 0x0001, 0x0000, 0x0000, 0x0000,
};
