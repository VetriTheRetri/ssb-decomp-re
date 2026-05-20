/* AnimJoint data for relocData file 1389 (FTKirbyAnimAttackAirB) */
/* 2304 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimAttackAirB_joint1[68];
extern u16 dFTKirbyAnimAttackAirB_joint2[18];
extern u16 dFTKirbyAnimAttackAirB_joint3[58];
extern u16 dFTKirbyAnimAttackAirB_joint5[14];
extern u16 dFTKirbyAnimAttackAirB_joint6[158];
extern u16 dFTKirbyAnimAttackAirB_joint7[16];
extern u16 dFTKirbyAnimAttackAirB_joint9[14];
extern u16 dFTKirbyAnimAttackAirB_joint10[132];
extern u16 dFTKirbyAnimAttackAirB_joint11[16];
extern u16 dFTKirbyAnimAttackAirB_joint13[10];
extern u16 dFTKirbyAnimAttackAirB_joint14[122];
extern u16 dFTKirbyAnimAttackAirB_joint16[22];
extern u16 dFTKirbyAnimAttackAirB_joint18[158];
extern u16 dFTKirbyAnimAttackAirB_joint19[118];
extern u16 dFTKirbyAnimAttackAirB_joint21[14];
extern u16 dFTKirbyAnimAttackAirB_joint22[170];

/* Joint pointer table (22 entries, 88 bytes) */
AObjEvent32 * dFTKirbyAnimAttackAirB_joints[] = {
	(AObjEvent32 *)dFTKirbyAnimAttackAirB_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTKirbyAnimAttackAirB_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTKirbyAnimAttackAirB_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTKirbyAnimAttackAirB_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTKirbyAnimAttackAirB_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTKirbyAnimAttackAirB_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTKirbyAnimAttackAirB_joint9, /* [7] joint 9 */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTKirbyAnimAttackAirB_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTKirbyAnimAttackAirB_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTKirbyAnimAttackAirB_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTKirbyAnimAttackAirB_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTKirbyAnimAttackAirB_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTKirbyAnimAttackAirB_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTKirbyAnimAttackAirB_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTKirbyAnimAttackAirB_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTKirbyAnimAttackAirB_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimAttackAirB_joint1[68] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 600, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 804, 201, 4505, 204, 3276, -409, 4505, 204,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4505, -4, 3276, 327, 4505, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 804,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 2), 4494, -1, 4494, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAY, 2), 804, 4096,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 19), 4494, -23, 4494, -23,
	ftAnimSetVal0RateT(FT_ANIM_SCAY, 34), 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 19), 804,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 223,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 15), 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 2144, 223,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 3216,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimAttackAirB_joint2[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 24), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 15), -268,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimAttackAirB_joint3[58] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 268, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 312, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), -357, -156,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), -357, -89, 4096, 163, 4096, -409, 4096, 327,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), -804, -7, 4505, 19, 3072, -39, 4915, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 19), -804, 7, 4300, -24, 3686, 60, 4300, -48,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 15), 268, 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTKirbyAnimAttackAirB_joint5[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 178, -120, -120, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimAttackAirB_joint6[158] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -571, -290, -609, 26, -1892, 198,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1673, -42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -586, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -861, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -890, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -805, 13, -1777, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1588, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -862, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -757, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -385, 166,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -218, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1608, -37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -1735, 26,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -739, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -832, -25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -212, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -244, 11,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1706, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1725, -91,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -854, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -567, 78,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -245, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -654, 5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1827, -102,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1968, 36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -501, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -575, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1915, 42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1887, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -641, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -613, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -568, 6, -612, 0, -1895, -8,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimAttackAirB_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTKirbyAnimAttackAirB_joint9[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, -178, 120, -120, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimAttackAirB_joint10[132] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 571, 290, 609, -26, -1892, 198,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1673, -42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 583, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 861, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 890, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 805, -14, -1777, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1588, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 861, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 739, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 385, -163,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 217, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1608, -37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -1735, 26,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 724, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 936, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 212, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 273, 11,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1706, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1458, 50,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 292, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 385, -40,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 969, 11, -1416, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), 581, -19, -1881, -21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 342, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 598, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 568, -13, 612, 14, -1895, -13,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimAttackAirB_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimAttackAirB_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimAttackAirB_joint14[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1311, -388, -1307, 1092, 1842, 333,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1699, -168, -215, 551, 2175, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1648, 17, -205, 2, 2035, -42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), -207, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1665, -25, 2090, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1699, -627, 2175, 309,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 3216, 258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2920, -778,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3256, -170,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -3261, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3225, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), 3301, 22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3264, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), -3299, -8,
	ftAnimBlock(0, 18),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -203, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -184, -35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3319, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 3445, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3304, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -2930, 20,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -220, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -295, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2921, 8, -302, -7, 3454, 9,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimAttackAirB_joint16[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 30), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTKirbyAnimAttackAirB_joint18[158] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3686,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -322, 94, -158, -1544, -2867, -384,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1702, -764, -3252, -206,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -162, -37,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 3686,
	ftAnimSetValRateT(FT_ANIM_SCAX, 3), 3686, 983,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1688, 9, -3281, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1785, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3234, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -227, 736, -3252, -404,
	ftAnimSetValRateT(FT_ANIM_SCAX, 2), 6144, 2252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1311, 948, -4042, -377,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1669, 180, -4006, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1674, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -3986, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 2), 8192,
	ftAnimSetValRateT(FT_ANIM_SCAX, 8), 6144, -361,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1676, 1, -1784, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), 1656, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), -1805, 5,
	ftAnimBlock(0, 7),
	ftAnimSetValRateT(FT_ANIM_SCAX, 9), 5120, -351,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3989, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -4370, -54,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_SCAX, 5), 3686, -191,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 3686,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1654, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1293, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1791, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1466, 31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4423, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -4475, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1286, -7, -1450, 16, -4472, 2,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimAttackAirB_joint19[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -297, 389, 300, 1093, 233, 336,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 92, 168, 1393, 551, 570, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 39, -18, 1402, 2, 427, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), 1412, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 55, 25, 477, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 91, 628, 566, 311,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1608, 258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1311, 778,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1648, 170,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1654, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1616, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), 1631, 19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1658, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 18), 1623, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1592, -41, 1396, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 1176, -31, 1235, 19,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1658, 31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1840, 6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1147, -26, 1257, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1095, -6, 1305, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1093, -2, 1305, 0, 1845, 4,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimAttackAirB_joint21[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimAttackAirB_joint22[170] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3686,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 322, -94, 158, 1544, -2867, -387,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1702, 764, -3255, -206,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 162, 37,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 3686,
	ftAnimSetValRateT(FT_ANIM_SCAX, 3), 3686, 983,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1688, -9, -3281, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1785, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3230, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 227, -736, -3252, -405,
	ftAnimSetValRateT(FT_ANIM_SCAX, 2), 6144, 2252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1311, -948, -4042, -377,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1669, -180, -4006, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1675, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -3983, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 2), 8192,
	ftAnimSetValRateT(FT_ANIM_SCAX, 8), 6144, -361,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1679, -3, 1784, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -1636, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 1806, -3,
	ftAnimBlock(0, 7),
	ftAnimSetValRateT(FT_ANIM_SCAX, 9), 5120, -351,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3981, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -4228, -64,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_SCAX, 5), 3686, -191,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1600, 49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1142, 19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1795, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1297, -15,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 3686,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4290, -54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -4397, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1128, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1116, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1116, 0, 1289, -8, -4394, 2,
	ftAnimEnd(),
	0x0000, 0x0000,
};
