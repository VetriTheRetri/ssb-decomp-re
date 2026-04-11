/* AnimJoint data for relocData file 1861 (FTYoshiAnimStunStartU) */
/* 2160 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimStunStartU_joint1[36];
extern u16 dFTYoshiAnimStunStartU_joint2[60];
extern u16 dFTYoshiAnimStunStartU_joint3[22];
extern u16 dFTYoshiAnimStunStartU_joint6[26];
extern u16 dFTYoshiAnimStunStartU_joint7[144];
extern u16 dFTYoshiAnimStunStartU_joint8[56];
extern u16 dFTYoshiAnimStunStartU_joint10[10];
extern u16 dFTYoshiAnimStunStartU_joint11[146];
extern u16 dFTYoshiAnimStunStartU_joint12[40];
extern u16 dFTYoshiAnimStunStartU_joint13[74];
extern u16 dFTYoshiAnimStunStartU_joint14[10];
extern u16 dFTYoshiAnimStunStartU_joint15[24];
extern u16 dFTYoshiAnimStunStartU_joint17[28];
extern u16 dFTYoshiAnimStunStartU_joint18[70];
extern u16 dFTYoshiAnimStunStartU_joint20[40];
extern u16 dFTYoshiAnimStunStartU_joint22[68];
extern u16 dFTYoshiAnimStunStartU_joint23[70];
extern u16 dFTYoshiAnimStunStartU_joint25[104];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTYoshiAnimStunStartU_joints[] = {
	(u32)dFTYoshiAnimStunStartU_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimStunStartU_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimStunStartU_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimStunStartU_joint6, /* [3] joint 6 */
	0x00000000, /* [4] NULL */
	0x00000000, /* [5] NULL */
	(u32)dFTYoshiAnimStunStartU_joint7, /* [6] joint 7 */
	(u32)dFTYoshiAnimStunStartU_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimStunStartU_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTYoshiAnimStunStartU_joint11, /* [10] joint 11 */
	(u32)dFTYoshiAnimStunStartU_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimStunStartU_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimStunStartU_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimStunStartU_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimStunStartU_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTYoshiAnimStunStartU_joint18, /* [17] joint 18 */
	(u32)dFTYoshiAnimStunStartU_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTYoshiAnimStunStartU_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTYoshiAnimStunStartU_joint23, /* [22] joint 23 */
	(u32)dFTYoshiAnimStunStartU_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	0xFFFF01FC, /* [25] END */
};

/* Joint 1 */
u16 dFTYoshiAnimStunStartU_joint1[36] = {
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRate(FT_ANIM_ROTX), 1422, 1,
	ftAnimSetValBlock(FT_ANIM_TRAY), 273,
	ftAnimSetValT(FT_ANIM_TRAY, 12), 273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 1475, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1588, 86,
	ftAnimBlock(0, 1),
	ftAnimSetValT(FT_ANIM_TRAY, 18), 672,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 17), 3216, 102,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTYoshiAnimStunStartU_joint2[60] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetValRate(FT_ANIM_TRAZ), -190, 206,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_TRAY), 0, 144,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 14), 183, 204,
	ftAnimSetValT(FT_ANIM_ROTY, 20), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 12), -61,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 291,
	ftAnimSetValRateT(FT_ANIM_TRAY, 7), 214, 345,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), 148, -451,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 4), -65, -272,
	ftAnimSetValRateT(FT_ANIM_TRAY, 6), 189, -505,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -89, -23,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 7), 20, 102,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 30, -21,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTYoshiAnimStunStartU_joint3[22] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 841, 63,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 1458, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1410, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 16), 16, -112,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTYoshiAnimStunStartU_joint6[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 249, 39,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -524, -379,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 457, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), 78, -30,
	ftAnimBlock(0, 5),
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTYoshiAnimStunStartU_joint7[144] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1737, -188, -233, -115, -2072, -113,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -472, -15, -2254, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -2223, -249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2423, -92,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2432, -43,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -492, -20, -2305, -37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2323, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -477, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2495, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -2880, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2932, -66,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -3109, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2336, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -2355, -212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2699, -317,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -3265, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3036, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2914, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2973, -32, -3253, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -3090, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -483, 9, -3353, -51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -150, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3357, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3471, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3461, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -3489, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3149, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -3317, -8,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3502, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3549, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3327, -9, -131, 18, -3569, -20,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimStunStartU_joint8[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -630, -26,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -862, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -888, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -895, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -673, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -611, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -517, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -721, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -637, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -652, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -691, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -757, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -764, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTYoshiAnimStunStartU_joint10[10] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -278, 124, -401,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTYoshiAnimStunStartU_joint11[146] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -66, 117, 1299, -43, -590, -75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -615, 48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1075, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 334, 322,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 696, 278,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 859, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -591, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -774, 72,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1049, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1028, 68,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 976, 184,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1705, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -650, 125,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -767, -138,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1115, 73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1253, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1776, 68,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1574, -87,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -930, -192,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1521, -124,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1506, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1618, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1618, -114,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1914, 62,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1320, 60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1655, 54,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1829, 72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1767, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1631, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1504, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1463, -40, 1711, 56, -1827, -59,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimStunStartU_joint12[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -436, 13,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -821, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -808, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -718, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -707, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -677, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -831, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1075, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1002, 73,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTYoshiAnimStunStartU_joint13[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 224, -30, -131, -214, -289, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -182, -432,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -420, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -139, 442,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1379, 171,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1097, 13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 503, 190,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -367, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 459, -30,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 1), -1393,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 530,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -833, 72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -305, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 0, 13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 0, -11,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 0, 12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTYoshiAnimStunStartU_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -536, -893, 0, 0, 156, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimStunStartU_joint15[24] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 141, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 221, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -133, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -471, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -190, 32,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTYoshiAnimStunStartU_joint17[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -56, -18,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), -248, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -88, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -254, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -539, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -153, 76,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimStunStartU_joint18[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1435, -5, -1484, -17, 2092, -58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1665, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1548, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 2324, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2425, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2365, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1665, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -1622, 6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1562, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1621, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2363, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1990, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1940, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1712, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1614, 8, -1613, 7, 1604, -107,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimStunStartU_joint20[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 416, 139,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 528, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 423, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 442, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 407, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 289, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 233, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 218, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 261, 43,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTYoshiAnimStunStartU_joint22[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1505, 16, -110, 34, 15, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 81, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 11), 1692, -9, 65, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1682, -8, 42, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 68, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 1608, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 74, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -52, -27,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 42, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -152, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -178, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -224, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1614, 6, -83, -31, -263, -38,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimStunStartU_joint23[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1791, 10, 1429, 10, -862, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -1586, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), 1594, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -826, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -796, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -855, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -893, -71,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1232, -57,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1589, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1618, 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1290, -62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1662, -91,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1599, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1608, 9, 1608, 9, -1762, -100,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimStunStartU_joint25[104] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 616, 47,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 858, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 823, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 376, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 426, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 433, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 430, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 385, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, -6,
	ftAnimEnd(),
	0x0000, 0x200E, 0x069F, 0xFFEF, 0xFFBB, 0xFFFD, 0x01BB, 0xFFDD, 0x2805, 0x001C, 0xFFD7, 0xFFF1, 0x2803, 0x001D, 0x0647, 0x0001, 0x2009, 0x000C, 0x0025, 0xFFF2, 0x2009, 0x0001, 0x002F, 0x000A, 0x2009, 0x0006, 0x0043, 0xFFE0, 0x2009, 0x0001, 0x0029, 0xFFEE, 0x2009, 0x0006, 0xFF57, 0xFFD8, 0x2009, 0x0001, 0xFF38, 0xFFE6, 0x2809, 0x0002, 0xFF17, 0xFFFD, 0x0801, 0x0001, 0x2005, 0x0001, 0xFFC5, 0xFFE8, 0x200F, 0x0001, 0x0649, 0x0001, 0xFFA7, 0xFFE3, 0xFF1C, 0x0004, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
