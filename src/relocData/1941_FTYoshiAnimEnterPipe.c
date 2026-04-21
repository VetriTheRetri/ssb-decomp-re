/* AnimJoint data for relocData file 1941 (FTYoshiAnimEnterPipe) */
/* 1584 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimEnterPipe_joint1[16];
extern u16 dFTYoshiAnimEnterPipe_joint2[30];
extern u16 dFTYoshiAnimEnterPipe_joint3[18];
extern u16 dFTYoshiAnimEnterPipe_joint4[32];
extern u16 dFTYoshiAnimEnterPipe_joint6[14];
extern u16 dFTYoshiAnimEnterPipe_joint7[62];
extern u16 dFTYoshiAnimEnterPipe_joint8[32];
extern u16 dFTYoshiAnimEnterPipe_joint10[14];
extern u16 dFTYoshiAnimEnterPipe_joint11[74];
extern u16 dFTYoshiAnimEnterPipe_joint12[30];
extern u16 dFTYoshiAnimEnterPipe_joint13[14];
extern u16 dFTYoshiAnimEnterPipe_joint14[10];
extern u16 dFTYoshiAnimEnterPipe_joint15[12];
extern u16 dFTYoshiAnimEnterPipe_joint17[14];
extern u16 dFTYoshiAnimEnterPipe_joint18[58];
extern u16 dFTYoshiAnimEnterPipe_joint20[54];
extern u16 dFTYoshiAnimEnterPipe_joint22[72];
extern u16 dFTYoshiAnimEnterPipe_joint23[58];
extern u16 dFTYoshiAnimEnterPipe_joint25[54];
extern u16 dFTYoshiAnimEnterPipe_joint26[72];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTYoshiAnimEnterPipe_joints[] = {
	(u32)dFTYoshiAnimEnterPipe_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimEnterPipe_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimEnterPipe_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimEnterPipe_joint4, /* [3] joint 4 */
	(u32)dFTYoshiAnimEnterPipe_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTYoshiAnimEnterPipe_joint7, /* [6] joint 7 */
	(u32)dFTYoshiAnimEnterPipe_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimEnterPipe_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTYoshiAnimEnterPipe_joint11, /* [10] joint 11 */
	(u32)dFTYoshiAnimEnterPipe_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimEnterPipe_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimEnterPipe_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimEnterPipe_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimEnterPipe_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTYoshiAnimEnterPipe_joint18, /* [17] joint 18 */
	(u32)dFTYoshiAnimEnterPipe_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTYoshiAnimEnterPipe_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTYoshiAnimEnterPipe_joint23, /* [22] joint 23 */
	(u32)dFTYoshiAnimEnterPipe_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTYoshiAnimEnterPipe_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTYoshiAnimEnterPipe_joint1[16] = {
	ftAnimSetVal(FT_ANIM_TRAY), 672,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 5), 672,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 27), -1730,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTYoshiAnimEnterPipe_joint2[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -7, -89, 0, 30, 5, 20, 3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 72), 30,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 72), 20, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), -357, -11, 36, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 22), -357, 36,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTYoshiAnimEnterPipe_joint3[18] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 16, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -229, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 22), -250,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTYoshiAnimEnterPipe_joint4[32] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 600, 329,
	ftAnimSetValRate(FT_ANIM_ROTX), 78, 21,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 532, 14, -14, -1, 415, -23, 413, 10,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 52), -14, 1, 415, 23, 413, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 22), 532,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTYoshiAnimEnterPipe_joint6[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 455, 14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 22), 455,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTYoshiAnimEnterPipe_joint7[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1717, 17, -1475, 18, 1256, -73,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1505, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 31), -1432, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1182, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 928, -238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 664, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 632, -26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), 568, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1495, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), -1486, 5,
	ftAnimBlock(0, 18),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 569, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 576, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1479, 7, -1421, 11, 576, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimEnterPipe_joint8[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -764, 90,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -674, 230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -303, 337,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), -8, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTYoshiAnimEnterPipe_joint10[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -625, -19,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 22), -625,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimEnterPipe_joint11[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1753, 47, -1505, -11, 1389, -71,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1659, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1777, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1130, -310,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 695, -241,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 622, -23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1685, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), -1729, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 599, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), 570, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1786, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), -1784, -10,
	ftAnimBlock(0, 20),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 571, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 576, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1736, -6, -1795, -11, 576, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimEnterPipe_joint12[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1002, 53,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -745, 470,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 372,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 26), -8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTYoshiAnimEnterPipe_joint13[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -625, -19,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 22), -625,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTYoshiAnimEnterPipe_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -536, -893, 0, 0, 156, 0,
	ftAnimBlock(0, 32),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimEnterPipe_joint15[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -190,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 60), 89,
	ftAnimBlock(0, 32),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTYoshiAnimEnterPipe_joint17[14] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -153, -2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 72), -153, -1,
	ftAnimBlock(0, 32),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimEnterPipe_joint18[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -5, 0, 5, 0, -3, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 31), 0, 0, -1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 270, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 316, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 147, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 133, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 337, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 519, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 507, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 501, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 467, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, -1, 0, 480, 13,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimEnterPipe_joint20[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 262, -32,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 165, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 463, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 554, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 453, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 311, -226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -152,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTYoshiAnimEnterPipe_joint22[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 6, -2, 1692, -2, -1871, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 1558, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 31), 27, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1755, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1728, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1955, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1991, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1873, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1735, 87,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1501, 31,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1558, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1570, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1472, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -1589, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 26, -1, 1571, 0, -1675, -86,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimEnterPipe_joint23[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0, 0, -154, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 31), 0, 0, -2, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 201, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 290, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 139, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 147, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 423, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 559, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 528, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 519, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 503, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, -2, 0, 518, 14,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimEnterPipe_joint25[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 378, -22,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 231, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 53, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 319, 241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 609, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 573, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 244, -201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 6,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTYoshiAnimEnterPipe_joint26[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -2, 1697, -2, -1836, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 1558, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 31), 31, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1741, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1709, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1962, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2007, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1856, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1735, 81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1454, 13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1558, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1571, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1447, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1617, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 32, 0, 1571, 0, -1709, -91,
	ftAnimEnd(),
};
