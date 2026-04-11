/* AnimJoint data for relocData file 1860 (FTYoshiAnimStunStartD) */
/* 1824 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimStunStartD_joint1[44];
extern u16 dFTYoshiAnimStunStartD_joint2[42];
extern u16 dFTYoshiAnimStunStartD_joint3[22];
extern u16 dFTYoshiAnimStunStartD_joint4[16];
extern u16 dFTYoshiAnimStunStartD_joint6[10];
extern u16 dFTYoshiAnimStunStartD_joint7[88];
extern u16 dFTYoshiAnimStunStartD_joint8[32];
extern u16 dFTYoshiAnimStunStartD_joint10[10];
extern u16 dFTYoshiAnimStunStartD_joint11[98];
extern u16 dFTYoshiAnimStunStartD_joint12[32];
extern u16 dFTYoshiAnimStunStartD_joint13[10];
extern u16 dFTYoshiAnimStunStartD_joint14[8];
extern u16 dFTYoshiAnimStunStartD_joint15[24];
extern u16 dFTYoshiAnimStunStartD_joint17[32];
extern u16 dFTYoshiAnimStunStartD_joint18[88];
extern u16 dFTYoshiAnimStunStartD_joint20[32];
extern u16 dFTYoshiAnimStunStartD_joint22[90];
extern u16 dFTYoshiAnimStunStartD_joint23[78];
extern u16 dFTYoshiAnimStunStartD_joint25[104];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTYoshiAnimStunStartD_joints[] = {
	(u32)dFTYoshiAnimStunStartD_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimStunStartD_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimStunStartD_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimStunStartD_joint4, /* [3] joint 4 */
	(u32)dFTYoshiAnimStunStartD_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTYoshiAnimStunStartD_joint7, /* [6] joint 7 */
	(u32)dFTYoshiAnimStunStartD_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimStunStartD_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTYoshiAnimStunStartD_joint11, /* [10] joint 11 */
	(u32)dFTYoshiAnimStunStartD_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimStunStartD_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimStunStartD_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimStunStartD_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimStunStartD_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTYoshiAnimStunStartD_joint18, /* [17] joint 18 */
	(u32)dFTYoshiAnimStunStartD_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTYoshiAnimStunStartD_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTYoshiAnimStunStartD_joint23, /* [22] joint 23 */
	(u32)dFTYoshiAnimStunStartD_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	0xFFFF01A4, /* [25] END */
};

/* Joint 1 */
u16 dFTYoshiAnimStunStartD_joint1[44] = {
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRate(FT_ANIM_ROTX), -242, -17,
	ftAnimSetValBlock(FT_ANIM_TRAY), 265,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -380, -8,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 3), 306,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 3), 418,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 4), 552,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -362, 20,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 2), 579,
	ftAnimSetValT(FT_ANIM_TRAY, 18), 672,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 16), 0, 25,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTYoshiAnimStunStartD_joint2[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 144, -33, -190, -40,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 13), -236,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 25), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 12), 105, 19,
	ftAnimSetValRateT(FT_ANIM_TRAY, 18), 30, -41,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), -218, 117,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 14), 20, 160,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -89, -25,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTYoshiAnimStunStartD_joint3[22] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 934, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 1028, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 979, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 17), 16, -63,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTYoshiAnimStunStartD_joint4[16] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -607, 53,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), -99, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 78, -16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTYoshiAnimStunStartD_joint6[10] = {
	ftAnimSetVal(FT_ANIM_ROTX), 0,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 30), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTYoshiAnimStunStartD_joint7[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1557, -6, -1051, -1, 685, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1664, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1164, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 871, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 907, 52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1281, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1717, -56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1956, -82,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1188, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1165, -105,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2034, -19, 1343, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1699, 65, 978, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1641, 40, 923, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -1687, -28, 1180, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1283, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -1479, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1718, -31, -1476, 2, 1256, 75,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimStunStartD_joint8[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -595, -8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -978, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1034, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -993, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1006, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -861, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -764, 96,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTYoshiAnimStunStartD_joint10[10] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -263, -454, -220,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTYoshiAnimStunStartD_joint11[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -9, 5, 567, -6, 2338, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 20, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 370, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 2485, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2503, 44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 2847, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 67, 56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 301, 70,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 354, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 530, -54,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 371, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 52, -34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2698, -128,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 2658, 86,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 32, -17, 460, -79,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -85, -56, -89, -30,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2759, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2879, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -145, -59, -103, -13, 2997, 117,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimStunStartD_joint12[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -710, -18,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -955, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -995, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1087, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1034, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -1050, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1002, 48,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTYoshiAnimStunStartD_joint13[10] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 284, 225, 28,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTYoshiAnimStunStartD_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -536, -893, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTYoshiAnimStunStartD_joint15[24] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 39, -91,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -212, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), -332, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -381, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -190, 31,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTYoshiAnimStunStartD_joint17[32] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 107, -65,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -38, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 41, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 104, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -24, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -327, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -153, 56,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimStunStartD_joint18[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -348, 77, -313, -135, 1068, -205,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -609, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 59, 204, 302, -350,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 257, 72, -69, -246,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -273, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 205, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 188, -45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -401, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -597, 12, -293, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -308, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -77, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -64, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -13, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -385, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -27, 22,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -276, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 13), -3, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5, 22, 5, 9, -3, 9,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimStunStartD_joint20[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 382, 276,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 859, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 771, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 478, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 444, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 272, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 261, -10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTYoshiAnimStunStartD_joint22[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2108, -69, -16, -69, 446, -195,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -249, -45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 465, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1859, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1896, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1768, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -297, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -161, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1817, 15, 502, 7, -45, 55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1618, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 202, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -87, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -101, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -238, -23,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1609, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1604, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 170, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -35, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1614, 10, -83, -48, -263, -25,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimStunStartD_joint23[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 174, -101, 435, 16, 468, -138,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -246, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 148, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -108, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -62, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 0, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -238, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -99, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 67, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), -1, 1, 1, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -84, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -124, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 1, 0, -1, -154, -29,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimStunStartD_joint25[104] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 675, 122,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 971, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 891, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 386, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 363, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 362, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, 16,
	ftAnimEnd(),
	0x0000, 0x200E, 0xFDA1, 0x0036, 0x0681, 0xFFB2, 0xFC1C, 0xFF91, 0x2805, 0x0006, 0x0546, 0x0041, 0x2809, 0x0009, 0xF882, 0x0019, 0x2003, 0x0005, 0xFEE4, 0xFFDE, 0x2003, 0x0001, 0xFEAD, 0xFFE6, 0x2803, 0x0006, 0x0000, 0x000D, 0x2005, 0x0001, 0x0598, 0x0055, 0x4005, 0x000C, 0x0648, 0x0801, 0x0002, 0x2009, 0x0001, 0xF8AB, 0x002D, 0x2809, 0x0013, 0xF8DF, 0xFFF5, 0x0801, 0x0002, 0x3803, 0x0001, 0x0000, 0x2803, 0x0010, 0xFFFF, 0x0001, 0x0801, 0x0006, 0x3805, 0x0001, 0x0648, 0x2005, 0x0009, 0x0686, 0x0019, 0x200F, 0x0001, 0x0000, 0x0001, 0x06A1, 0x001B, 0xF8D3, 0xFFF5, 0x0000, 0x0000,
};
