/* AnimJoint data for relocData file 1429 (FTKirbyAnimInhaleTurn) */
/* 1328 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimInhaleTurn_joint1[26];
extern u16 dFTKirbyAnimInhaleTurn_joint2[24];
extern u16 dFTKirbyAnimInhaleTurn_joint3[56];
extern u16 dFTKirbyAnimInhaleTurn_joint5[34];
extern u16 dFTKirbyAnimInhaleTurn_joint6[94];
extern u16 dFTKirbyAnimInhaleTurn_joint7[16];
extern u16 dFTKirbyAnimInhaleTurn_joint9[34];
extern u16 dFTKirbyAnimInhaleTurn_joint10[74];
extern u16 dFTKirbyAnimInhaleTurn_joint11[14];
extern u16 dFTKirbyAnimInhaleTurn_joint13[10];
extern u16 dFTKirbyAnimInhaleTurn_joint14[48];
extern u16 dFTKirbyAnimInhaleTurn_joint16[14];
extern u16 dFTKirbyAnimInhaleTurn_joint18[70];
extern u16 dFTKirbyAnimInhaleTurn_joint19[42];
extern u16 dFTKirbyAnimInhaleTurn_joint21[14];
extern u16 dFTKirbyAnimInhaleTurn_joint22[50];

/* Joint pointer table (22 entries, 88 bytes) */
AObjEvent32 * dFTKirbyAnimInhaleTurn_joints[] = {
	(AObjEvent32 *)dFTKirbyAnimInhaleTurn_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTKirbyAnimInhaleTurn_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTKirbyAnimInhaleTurn_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTKirbyAnimInhaleTurn_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTKirbyAnimInhaleTurn_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTKirbyAnimInhaleTurn_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTKirbyAnimInhaleTurn_joint9, /* [7] joint 9 */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTKirbyAnimInhaleTurn_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTKirbyAnimInhaleTurn_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTKirbyAnimInhaleTurn_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTKirbyAnimInhaleTurn_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTKirbyAnimInhaleTurn_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTKirbyAnimInhaleTurn_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTKirbyAnimInhaleTurn_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTKirbyAnimInhaleTurn_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTKirbyAnimInhaleTurn_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimInhaleTurn_joint1[26] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 600,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 1), 600,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 2), 600,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 1280,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), 960,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 600,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimInhaleTurn_joint2[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -268, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -982, -148,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), -1608,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimInhaleTurn_joint3[56] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 600, 6144, 6144, 6144,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 0, 59, 360, -640, 6963, 546, 4096, -1365, 6963, 546,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 178, 14, 360, 480, 6963, -682, 4096, 1092, 6963, -682,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 89, -19, 720, 213, 4915, -182, 7372, 455, 4915, -182,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 0, 600, 6144, 6144, 6144,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTKirbyAnimInhaleTurn_joint5[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 89, -120, -60,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 268, -60, -120,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 7), -60,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAY, 2), 268, -120,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 9), 89,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 4), -120, -60,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimInhaleTurn_joint6[94] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2163, -107, -1142, 79, 2892, 47,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 2457, 3276, 3276,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -2485, -467, 3319, 642,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1063, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -898, 70,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1104, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3204, -420, 4225, 529,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3327, -90, 4378, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3386, -56, 4423, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -3376, 145, 4314, -190,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1105, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -928, -54,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3170, 458, 4052, -522,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2459, 488, 3269, -553,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2192, 147, -1074, -108, 2944, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2165, 27, -1144, -70, 2894, -50,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimInhaleTurn_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTKirbyAnimInhaleTurn_joint9[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), -89, 120, -60,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 1), -268, 60, -120,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 7), 60,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAY, 2), -268, -120,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 9), -89,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 4), 120, -60,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimInhaleTurn_joint10[74] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1051, 105, 1145, -82, -322, 44,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 2457, 3276, 3276,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1023, -130,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -523, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1063, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1280, 173,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1474, -3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1191, -160,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1248, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -662, -106,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -413, 116,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1468, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1177, -70,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1126, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1051, 74, 1145, -32, -322, 91,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimInhaleTurn_joint11[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTKirbyAnimInhaleTurn_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimInhaleTurn_joint14[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -23, -302, 237,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -90, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -27, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 308, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 297, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 247, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -102, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -281, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -23, 3, -302, -21, 237, -10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTKirbyAnimInhaleTurn_joint16[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTKirbyAnimInhaleTurn_joint18[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1918, 1785, -1704,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1972, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1888, 110, -1718, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2006, 51, -1736, 82,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1412, 108,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1834, -29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2037, -47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1917, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1336, 47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1666, -65,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1814, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1783, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1918, 0, 1785, 2, -1704, -38,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTKirbyAnimInhaleTurn_joint19[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 21, 302, 233,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -112, 4, 327, -33, 11, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -102, 10, 307, -14, 18, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 14, 15, 301, 1, 221, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, 6, 302, 1, 233, 12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTKirbyAnimInhaleTurn_joint21[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimInhaleTurn_joint22[50] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 309, 176, -99,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 244, 28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -62, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -27, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -6, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 174, 8,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 274, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 298, 17, -84, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 309, 10, 176, 2, -99, -15,
	ftAnimEnd(),
	0x0000,
};
