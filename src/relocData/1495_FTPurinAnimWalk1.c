/* AnimJoint data for relocData file 1495 (FTPurinAnimWalk1) */
/* 1952 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPurinAnimWalk1_joint1[26];
extern u16 dFTPurinAnimWalk1_joint2[12];
extern u16 dFTPurinAnimWalk1_joint3[66];
extern u16 dFTPurinAnimWalk1_joint5[12];
extern u16 dFTPurinAnimWalk1_joint6[118];
extern u16 dFTPurinAnimWalk1_joint7[46];
extern u16 dFTPurinAnimWalk1_joint9[12];
extern u16 dFTPurinAnimWalk1_joint10[110];
extern u16 dFTPurinAnimWalk1_joint11[46];
extern u16 dFTPurinAnimWalk1_joint13[12];
extern u16 dFTPurinAnimWalk1_joint14[136];
extern u16 dFTPurinAnimWalk1_joint16[68];
extern u16 dFTPurinAnimWalk1_joint18[98];
extern u16 dFTPurinAnimWalk1_joint19[66];
extern u16 dFTPurinAnimWalk1_joint21[104];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTPurinAnimWalk1_joints[] = {
	(u32)dFTPurinAnimWalk1_joint1, /* [0] joint 1 */
	(u32)dFTPurinAnimWalk1_joint2, /* [1] joint 2 */
	(u32)dFTPurinAnimWalk1_joint3, /* [2] joint 3 */
	(u32)dFTPurinAnimWalk1_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPurinAnimWalk1_joint6, /* [5] joint 6 */
	(u32)dFTPurinAnimWalk1_joint7, /* [6] joint 7 */
	(u32)dFTPurinAnimWalk1_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTPurinAnimWalk1_joint10, /* [9] joint 10 */
	(u32)dFTPurinAnimWalk1_joint11, /* [10] joint 11 */
	(u32)dFTPurinAnimWalk1_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPurinAnimWalk1_joint14, /* [13] joint 14 */
	(u32)dFTPurinAnimWalk1_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPurinAnimWalk1_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTPurinAnimWalk1_joint19, /* [18] joint 19 */
	(u32)dFTPurinAnimWalk1_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	0xFFFF01C4, /* [21] END */
};

/* Joint 1 */
u16 dFTPurinAnimWalk1_joint1[26] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 600, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 45), 120,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 25), 660, -21,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 20), 480, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 45), 600, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPurinAnimWalk1_joint2[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, -312, 0,
	ftAnimBlock(0, 90),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPurinAnimWalk1_joint3[66] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, -268, 0, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 312, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), -357, -1,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 30), 4096, 40, 4096, -41, 4096, 40,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 25), -89, 89,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 0, 4, -357, 2, 0, -4,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 15), 4259, 3276, 4259,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), -268, 1, 4096, -39, 4096, 54, 4096, -39,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 20), 89, -89,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 25), 0, -268, 0, 4096, 4096, 4096,
	ftAnimLoop(0x6800, -130),
};

/* Joint 5 */
u16 dFTPurinAnimWalk1_joint5[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -310, -380, 237,
	ftAnimBlock(0, 90),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPurinAnimWalk1_joint6[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1184, -16, -975, 1, 2047, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), -987, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 18), 1446, 48, 1775, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1597, 47, 1619, -49,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), 1854, -23, 1212, -6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1044, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1531, -22,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1767, -27, 1200, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 24), 1741, 16, 1210, 1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1580, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 30), -1157, 26,
	ftAnimBlock(0, 18),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1790, 9, 1216, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 1526, -43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 1839, 41,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1084, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -987, 3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1393, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1214, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1949, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 2019, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1184, -9, -975, 4, 2047, 9,
	ftAnimLoop(0x6800, -232),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPurinAnimWalk1_joint7[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), -83, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -76, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 27), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -168, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -182, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -26, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 8,
	ftAnimLoop(0x6800, -90),
};

/* Joint 9 */
u16 dFTPurinAnimWalk1_joint9[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 284, -420, 282,
	ftAnimBlock(0, 90),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPurinAnimWalk1_joint10[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1191, 1, 974, 0, -1176, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 1004, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), -1489, -69, -1486, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1724, -66, -1727, -68,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -2050, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), -1741, 27,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1062, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1554, 18,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -2041, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 27), -2016, 6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1668, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 36), -1600, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1596, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), 1291, -28,
	ftAnimBlock(0, 18),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1992, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), -1189, 14,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1206, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 985, -4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1495, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -1206, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1184, 7, 977, -2, -1170, 6,
	ftAnimLoop(0x6800, -216),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPurinAnimWalk1_joint11[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), -81, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -76, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 27), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -185, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -206, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -26, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -6, 6,
	ftAnimLoop(0x6800, -90),
};

/* Joint 13 */
u16 dFTPurinAnimWalk1_joint13[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -50, -61, -1676, 106, -21, 16,
	ftAnimBlock(0, 90),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPurinAnimWalk1_joint14[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 79, 2, -177, -2, 295, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -240, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), 417, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 269, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 134, -38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -36, -22,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -283, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), -340, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -130, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 30), -280, 9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 470, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), 526, -9,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -349, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -366, 12,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 493, -4, -246, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -309, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 391, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -280, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), -169, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -291, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), 153, 31,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 345, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 93, -8,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -168, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -176, -1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 255, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 79, -4, -177, 0, 295, 13,
	ftAnimLoop(0x6800, -268),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPurinAnimWalk1_joint16[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 23, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 190, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 114, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 7, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 24), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 228, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 422, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 575, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 528, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 245, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 75, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 7, -22,
	ftAnimLoop(0x6800, -132),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTPurinAnimWalk1_joint18[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1754, -1, 1946, 0, -1814, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 27), -2056, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 33), 2019, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -1831, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1716, 41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 36), -1326, -10,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -2090, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 48), -1828, 11,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1988, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 45), 1943, 0,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1356, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1620, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1703, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), -1935, 5,
	ftAnimBlock(0, 18),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1798, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1760, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1944, 0, -1908, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1945, 0, -1844, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1754, 1, 1946, 0, -1814, 9,
	ftAnimLoop(0x6800, -192),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPurinAnimWalk1_joint19[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 111, 12, 237, -6, 122, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 39), 330, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 81), 197, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 351, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 384, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 63), 386, -15,
	ftAnimBlock(0, 24),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 340, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 45), 134, -12,
	ftAnimBlock(0, 36),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 338, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 202, 5, 294, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 228, 5, 176, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 111, -7, 237, 2, 122, -18,
	ftAnimLoop(0x6800, -128),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTPurinAnimWalk1_joint21[104] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 246, -45,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 7, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 72), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 7, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 170, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 246, 25,
	ftAnimLoop(0x6800, -62),
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1332, 0, -1717, 1, 1376, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 42), -1309, 1, -1597, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1474, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1471, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 45), 1323, 0,
	ftAnimBlock(0, 30),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -1306, 0, -1598, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 42), -1330, -1, -1711, -3,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1327, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 1435, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1457, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1399, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1332, 0, -1717, -1, 1376, -7,
	ftAnimLoop(0x6800, -132),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
