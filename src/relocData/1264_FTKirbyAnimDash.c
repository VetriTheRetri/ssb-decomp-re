/* AnimJoint data for relocData file 1264 (FTKirbyAnimDash) */
/* 1840 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimDash_joint1[24];
extern u16 dFTKirbyAnimDash_joint2[18];
extern u16 dFTKirbyAnimDash_joint3[44];
extern u16 dFTKirbyAnimDash_joint5[60];
extern u16 dFTKirbyAnimDash_joint6[126];
extern u16 dFTKirbyAnimDash_joint7[14];
extern u16 dFTKirbyAnimDash_joint9[60];
extern u16 dFTKirbyAnimDash_joint10[134];
extern u16 dFTKirbyAnimDash_joint11[16];
extern u16 dFTKirbyAnimDash_joint13[10];
extern u16 dFTKirbyAnimDash_joint14[60];
extern u16 dFTKirbyAnimDash_joint16[16];
extern u16 dFTKirbyAnimDash_joint18[106];
extern u16 dFTKirbyAnimDash_joint19[84];
extern u16 dFTKirbyAnimDash_joint21[16];
extern u16 dFTKirbyAnimDash_joint22[88];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimDash_joints[] = {
	(u32)dFTKirbyAnimDash_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimDash_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimDash_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimDash_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimDash_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimDash_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimDash_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimDash_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimDash_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimDash_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimDash_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimDash_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimDash_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimDash_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimDash_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTKirbyAnimDash_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimDash_joint1[24] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 600,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 720, 73,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 10), 720, -45,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 11), 600,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimDash_joint2[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 11), -268,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimDash_joint3[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 312, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 89, 6, 89, 6, 4300, 31, 3686, -63, 4300, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 89, -4, 89, -4, 4300, -19, 3686, 39, 4300, -19,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 11), 0, 0, 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTKirbyAnimDash_joint5[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -89, -6, -134, -10, 178, 13,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 1), -120, -480, -120, -480,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), -180, -40, -180, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 10), -89, 4, -134, 6, 178, -8, -180, 32, -180, 32,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 5), -120, 130, -120, 130,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 6), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimDash_joint6[126] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 1103, -217, -373, 0, -1344,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1907, 754, -591, -139, -1344, -790,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 3072,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 17), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2312, 262, -495, 77, -1581, -194,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1791, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -407, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 2453, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2458, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 2408, -40,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1791, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1192, 218,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -413, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -675, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2350, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1901, -243,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 6), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1596, -398, -909, 395,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1103, -358, -640, 94, -402, 385,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -250, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 880, -139, -138, 177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 808, -10, -10, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, -3, -217, 33, 0, 10,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimDash_joint7[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 23), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTKirbyAnimDash_joint9[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -89, -6, -134, -10, -178, -13,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 120, 480, -120, -480,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 180, 40, -180, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 10), -89, 4, -134, 6, -178, 8, 180, -32, -180, 32,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 5), 120, -130, -120, 130,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 6), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimDash_joint10[134] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, -1293, 217, 395, 0, -1453,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2097, -787, 613, 154, -1453, -832,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 3072,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 17), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2378, -152, 526, -69, -1665, -135,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1716, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 457, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -2396, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2392, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -2401, 14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1714, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1662, 66,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 461, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 713, 41,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2375, 50,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2157, 320,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1572, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1426, 323,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 6), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1658, 610, 757, -21, -925, 618,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 250, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -936, 411, -190, 429,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -835, 61, -66, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -805, 4, -6, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -804, 1, 220, -29, 0, 6,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimDash_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimDash_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimDash_joint14[60] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -23, 8, -302, -1, 237, 96,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -288, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), -23, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 627, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 636, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 343, -45,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -295, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -302, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 296, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 245, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -21, 2, -302, 0, 233, -12,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimDash_joint16[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTKirbyAnimDash_joint18[106] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1918, -7, 1785, 10, -1704, 35,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1794, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1795, -133, -1669, 267,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1518, -183, -1170, 317,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1419, -2, -1018, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1720, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1714, -5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1417, 0, -1016, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 1455, 30, -1077, -46,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1720, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1921, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1498, 63, -1140, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1794, 12, -1658, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1796, -1, -1696, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1787, -3, -1705, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1919, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1918, 0, 1785, -1, -1708, -3,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimDash_joint19[84] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 21, 0, 302, 41, 233, -191,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -11, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 222, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 41, -305,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -377, -284,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -571, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 17, 14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 217, -3, -576, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 350, 1, -90, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 345, -8, 23, 102,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 306, -7, 219, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 27, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 23, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, -1, 302, -4, 233, 13,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimDash_joint21[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTKirbyAnimDash_joint22[88] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1298, 45, -1785, 49, -1708, 68,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1423, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -1700, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1639, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1442, 143,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1329, 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1434, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -1269, 24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1327, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -1590, -51,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1707, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1780, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1252, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1293, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1637, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1704, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1298, -5, -1785, -4, -1708, -3,
	ftAnimEnd(),
	0x0000, 0x0000,
};
