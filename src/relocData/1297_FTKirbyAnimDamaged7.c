/* AnimJoint data for relocData file 1297 (FTKirbyAnimDamaged7) */
/* 2304 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimDamaged7_joint1[106];
extern u16 dFTKirbyAnimDamaged7_joint2[10];
extern u16 dFTKirbyAnimDamaged7_joint3[36];
extern u16 dFTKirbyAnimDamaged7_joint5[34];
extern u16 dFTKirbyAnimDamaged7_joint6[138];
extern u16 dFTKirbyAnimDamaged7_joint7[14];
extern u16 dFTKirbyAnimDamaged7_joint9[34];
extern u16 dFTKirbyAnimDamaged7_joint10[154];
extern u16 dFTKirbyAnimDamaged7_joint11[16];
extern u16 dFTKirbyAnimDamaged7_joint13[10];
extern u16 dFTKirbyAnimDamaged7_joint14[86];
extern u16 dFTKirbyAnimDamaged7_joint16[16];
extern u16 dFTKirbyAnimDamaged7_joint18[170];
extern u16 dFTKirbyAnimDamaged7_joint19[98];
extern u16 dFTKirbyAnimDamaged7_joint21[14];
extern u16 dFTKirbyAnimDamaged7_joint22[172];

/* Joint pointer table (22 entries, 88 bytes) */
AObjEvent32 * dFTKirbyAnimDamaged7_joints[] = {
	(AObjEvent32 *)dFTKirbyAnimDamaged7_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTKirbyAnimDamaged7_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTKirbyAnimDamaged7_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTKirbyAnimDamaged7_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTKirbyAnimDamaged7_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTKirbyAnimDamaged7_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTKirbyAnimDamaged7_joint9, /* [7] joint 9 */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTKirbyAnimDamaged7_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTKirbyAnimDamaged7_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTKirbyAnimDamaged7_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTKirbyAnimDamaged7_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTKirbyAnimDamaged7_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTKirbyAnimDamaged7_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTKirbyAnimDamaged7_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTKirbyAnimDamaged7_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTKirbyAnimDamaged7_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimDamaged7_joint1[106] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -268, 0, 0, 600, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), -178, -482,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 2), 2867, 2867,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -4825, -215,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAZ, 1), 2867,
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 3), 5324,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 3), 5324, 5324,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 3), 3481,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 3), 3481, 3481,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 3), 4710,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 3), 4710, 4710,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 20), -6433,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 3), 3891,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 3), 3891, 3891,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 3), 4300,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 3), 4300, 4300,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 8), 4096,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY, 7), 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimDamaged7_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, -312, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimDamaged7_joint3[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 268, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), 0, 89,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 536,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 268, -14, 357, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 357, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 16), 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 268, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTKirbyAnimDamaged7_joint5[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, -120, -120, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -178, -22, 89, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -89, 4, 357, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -89, 3, 357, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 178,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimDamaged7_joint6[138] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1036, 1408, -999, -106, -283, 1219,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 3072, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2445, 857, -1105, 24, 936, 338,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2751, 384, -949, -61, 392, -420,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 21, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3213, 345, -1227, -191,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 2457, 3276, 3276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3442, 108, -1333, -63,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1338, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 3444, 11,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 3072, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3454, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 3544, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 12, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), -238, -38,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 2867, 3686, 3686,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1361, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1345, 25,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 3072, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 15), 3072, 4096, 4096,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3631, 99, -1313, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 4235, 40, -1005, 20,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -274, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4257, 21, -995, 9, -287, -13,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimDamaged7_joint7[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTKirbyAnimDamaged7_joint9[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 120, -120, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 178, -44, -89, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -178, -18, 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -178, 6, 0, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, -178,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimDamaged7_joint10[154] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1036, 1607, 999, 210, -282, 1029,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 3072, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 571, 217, 1209, 86, 746, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -600, -818, 1172, -66, -445, -607,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1251, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1076, -26, -469, -48,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 2457, 3276, 3276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1119, 21, -542, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -395, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1096, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1258, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1117, -15,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 3072, 4096, 4096,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1165, -38, -418, -19,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 2867, 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1205, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -535, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1098, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 1014, -12,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 3072, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 15), 3072, 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1217, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1043, 11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -529, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -293, 16,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1003, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1039, 3, 996, -7, -287, 6,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimDamaged7_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimDamaged7_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimDamaged7_joint14[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 295, 509, -302, 111, 237, -237,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -222, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 804, 312, 0, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 920, 20, -23, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 804, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 0, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -289, -51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -342, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 805, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 766, -48,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -339, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -303, 3,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 15, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 232, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 707, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 303, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 297, -6, -300, 3, 233, 1,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimDamaged7_joint16[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTKirbyAnimDamaged7_joint18[170] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1930, -432, 1766, 62, -1255, 371,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 3686,
	ftAnimSetVal0RateT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4505, 4505,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1898, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2363, -278, -884, 202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2487, -10, -850, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), -2385, 53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1072, 37,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 4505,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), -2380, 3,
	ftAnimSetVal0RateT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 2867, 2867,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 3686,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 2867,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2420, 35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1953, 16,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1899, 29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2376, 14, -1027, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -2423, 11, -1004, 14,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 3276, 3276,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 3686,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 3276,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1926, 8,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 3686, 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1898, -3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2417, 1, -996, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -2141, 67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -1252, -7,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 15), 3686, 3686, 3686,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1893, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1769, -5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2077, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1936, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1930, 6, 1766, -2, -1259, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTKirbyAnimDamaged7_joint19[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -297, -507, 300, -105, 233, -233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -804, -12, 194, -18, 0, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -322, 378, 264, 59, 177, 268,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 79, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 274, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 537, 264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 707, 98,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 779, 8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 90, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -174, -49,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 786, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 443, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 273, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 302, -3,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 372, -62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 243, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -219, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -287, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -295, -7, 302, 0, 237, -6,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimDamaged7_joint21[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 29), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimDamaged7_joint22[172] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1286, 432, -1766, -62, -1259, 378,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 3686,
	ftAnimSetVal0RateT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4505, 4505,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -853, -32, -1829, 86, -881, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1351, -350, -1594, 149, -971, -71,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1528, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1481, 62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1072, 54,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 4505,
	ftAnimSetVal0RateT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 2867, 2867,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 3686,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 2867,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1570, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1660, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1418, 26,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1466, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1022, 34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1020, 13,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 3276, 3276,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 3481,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 3276,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1442, 11,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 3686, 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1469, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1009, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -1223, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1656, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1391, 38,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 15), 3686, 3686, 3686,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1486, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1759, -13,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1357, 30, -1253, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1292, 10, -1261, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1286, 5, -1766, -7, -1255, 5,
	ftAnimEnd(),
	0x0000,
};
